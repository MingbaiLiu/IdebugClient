// ----------------------------------------------------------------------------------------------
// Copyright (c) Mattias Högström.
// ----------------------------------------------------------------------------------------------
// This source code is subject to terms and conditions of the Microsoft Public License. A 
// copy of the license can be found in the License.html file at the root of this distribution. 
// If you cannot locate the Microsoft Public License, please send an email to 
// dlr@microsoft.com. By using this source code in any fashion, you are agreeing to be bound 
// by the terms of the Microsoft Public License.
// ----------------------------------------------------------------------------------------------
// You must not remove this notice, or any other, from this software.
// ----------------------------------------------------------------------------------------------


#include "stdafx.h"
#include <windows.h>

#include <dbghelp.h>
#include <dbgeng.h>

#include <mscoree.h>
#include <cor.h>
#include <cordebug.h>
#include <clrdata.h>
//#include <metahost.h>
//#include <mscoree.h>

#include "NativeDebugging.h"
#include "Stackwalker.h"
#include "DotNetHelper.h"
#include "DiagCLRDataTarget.h"


Stackwalker::Stackwalker()
{
	m_pId = 0;
	m_clrDataTarget = nullptr;
	m_isClr4 = false;
	m_isManaged = false;
	m_debugNative = new NativeDebugging();
	m_clrDataProcess = nullptr;
}

bool Stackwalker::Initialize(int pId)
{
	m_pId = pId;
	m_isClr4 = IsClr4Process(pId);
	m_isManaged = IsDotNetProcess(pId);
	bool result = m_debugNative->Initialize(pId);
	return result;
}

Stackwalker::~Stackwalker()
{
	if (m_debugNative != nullptr)
	{
		delete m_debugNative;
		m_debugNative = nullptr;
	}
	if (m_clrDataTarget != nullptr)
	{
		m_clrDataTarget->Release();
		m_clrDataTarget = nullptr;
	}
	if (m_clrDataProcess != nullptr)
	{
		m_clrDataProcess->Release();
		m_clrDataProcess = nullptr;
	}
	m_pId = 0;
	m_symbolPath = std::basic_string<TCHAR>();
	m_imagePath = std::basic_string<TCHAR>();
	m_sourcePath = std::basic_string<TCHAR>();
}

CHAR wide_to_narrow(TCHAR w)
{
	// simple typecast
	// works because UNICODE incorporates ASCII into itself
	return CHAR(w);
}

void Stackwalker::SetSymbolPath(std::basic_string<TCHAR> path)
{
	m_symbolPath = path;
	m_debugNative->m_ExtSymbols2->SetSymbolPath(path.c_str());
}

void Stackwalker::SetImagePath(std::basic_string<TCHAR> path)
{
	m_imagePath = path;
	m_debugNative->m_ExtSymbols2->SetImagePath(path.c_str());
}

bool Stackwalker::AttachProcess(int pId, bool invasive)
{
	m_pId = pId;
	m_isClr4 = IsClr4Process(pId);
	m_isManaged = IsDotNetProcess(pId);
	return m_debugNative->AttachProcess(pId, invasive);
}

bool Stackwalker::InitCLRDataTarget()
{
	if (m_isManaged == false)
		return false;

	m_clrDataTarget = CreateClrDataTarget(m_pId, m_debugNative);
	

	if (m_clrDataTarget != nullptr)
	{
		HMODULE accessDLL;
		void* iface = NULL;
		HRESULT hr = LoadDataAccessDLL(m_isClr4, m_clrDataTarget, &accessDLL, &iface);
		m_clrDataProcess = static_cast<IXCLRDataProcess*>(iface);
		if (m_clrDataProcess == NULL) {
			printf("m_clrDataProcess is NULL \n");
		}
		bool result = false;
		if (hr == S_OK)
			result = m_debugNative->SetClrResolver(m_clrDataProcess);
	}

	return (m_clrDataTarget != nullptr) && (m_clrDataProcess != nullptr);
}

void Stackwalker::Run(ULONG threadId)
{  
  // system to virtual thread
  ULONG systemThreadId;
  ULONG engineThreadId;
  // https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/controlling-threads-and-processes
  HRESULT hr = m_debugNative->m_ExtSystem->SetCurrentProcessId(m_pId);
  systemThreadId = threadId;// GetThreadId(threadHandle);

  m_debugNative->m_ExtSystem->GetThreadIdBySystemId(systemThreadId, &engineThreadId);
  hr = m_debugNative->m_ExtSystem->SetCurrentThreadId(engineThreadId);
  m_debugNative->DumpStack();
}

void Stackwalker::Run1()
{
	int noSamples = 1;
	ULONG threadIds[50];
	ULONG threadMax = 0;

	for (int outerLoop = 0; outerLoop < noSamples; outerLoop++)
	{
		HRESULT hr = m_debugNative->m_ExtSystem->SetCurrentProcessId(m_pId);
		hr = m_debugNative->m_ExtSystem->GetNumberThreads(&threadMax);
		m_debugNative->m_ExtSystem->GetThreadIdsByIndex(0, threadMax, threadIds, NULL);
		for (ULONG th = 0; th < threadMax; th++)
		{
			hr = m_debugNative->m_ExtSystem->SetCurrentThreadId(threadIds[th]);
			ULONG64 threadHandle = 0;
			hr = m_debugNative->m_ExtSystem->GetCurrentThreadHandle(&threadHandle);
			HANDLE tempHandle = (HANDLE)threadHandle;
			DWORD st = SuspendThread(tempHandle);

			m_debugNative->DumpStack();

			DWORD rt = ResumeThread(tempHandle);
		}
		Sleep(50);
	}
}
void Stackwalker::Run(HANDLE threadHandle)
{
	int noSamples = 1;
	ULONG threadIds[50];
	ULONG threadMax = 0;

	// system to virtual thread
	ULONG systemThreadId;
	ULONG engineThreadId;
	HRESULT hr = m_debugNative->m_ExtSystem->SetCurrentProcessId(m_pId);
	systemThreadId = GetThreadId(threadHandle);

	m_debugNative->m_ExtSystem->GetThreadIdBySystemId(systemThreadId, &engineThreadId);
	hr = m_debugNative->m_ExtSystem->SetCurrentThreadId(engineThreadId);
	m_debugNative->DumpStack();
}