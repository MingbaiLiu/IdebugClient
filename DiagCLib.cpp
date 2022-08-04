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
#include <iostream>
//#define CINTERFACE

#include <cor.h>
#include <clrdata.h>
//#include "xclrdata\xclrdata.h"

#include <string>
#include "NativeDebugging.h"

const TCHAR NOT_IMPLEMENTED[] = "Not Implemented";

public class DiagCLRDataTarget : public ICLRDataTarget 
{
private:


public:
	DiagCLRDataTarget(
		DWORD pId,
		HANDLE processHandle,
		BOOLEAN isWow64,
		NativeDebugging* debugNative)
	{
		this->ProcessId = pId;
		this->ProcessHandle = processHandle;
		this->IsWow64 = isWow64;
		this->m_debugNative = debugNative;
	}

	~DiagCLRDataTarget()
	{
		this->ProcessId = 0;
		this->ProcessHandle = 0;
		this->IsWow64 = 0;
		this->m_debugNative = 0;
	}

public:

	        HRESULT STDMETHODCALLTYPE QueryInterface( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ PVOID* ppvObject)
			{
				if (
					IsEqualIID(riid, IID_IUnknown) ||
					IsEqualIID(riid, IID_ICLRDataTarget)
					)
				{
					this->AddRef();
					*ppvObject = this;
					return S_OK;
				}
				else
				{
					*ppvObject = NULL;
					return E_NOINTERFACE;
				}
			}

            ULONG STDMETHODCALLTYPE AddRef( void)
			{
				return 1;
			}

            ULONG STDMETHODCALLTYPE Release( void)
			{
				return 0;
			}

	public:
        virtual HRESULT STDMETHODCALLTYPE GetMachineType( 
            /* [out] */ ULONG32 *machineType)
		{
			*machineType = IMAGE_FILE_MACHINE_I386; // IMAGE_FILE_MACHINE_I386;// IMAGE_FILE_MACHINE_IA64; // IMAGE_FILE_MACHINE_I386;
			return S_OK;
		}
        
        virtual HRESULT STDMETHODCALLTYPE GetPointerSize( 
            /* [out] */ ULONG32 *pointerSize)
		{
				*pointerSize = sizeof(PVOID);
				return S_OK;
		}
        
        virtual HRESULT STDMETHODCALLTYPE GetImageBase( 
            /* [string][in] */ LPCWSTR imagePath,
            /* [out] */ CLRDATA_ADDRESS *baseAddress)
		{ 
			ULONG index = 0;
			ULONG64 baseAddr = 0;
			std::basic_string<WCHAR> img = std::basic_string<WCHAR>(imagePath);
			std::basic_string<WCHAR> moduleName;
			if (img == L"mscorwks.dll")
				moduleName = L"mscorwks";
			else if (img == L"clr.dll")
				moduleName = L"clr";
			else
				moduleName = img;
			
			HRESULT hr = this->m_debugNative->m_ExtSymbols3->GetModuleByModuleNameWide(moduleName.c_str(), 0, &index, &baseAddr);
			*baseAddress = baseAddr;
			return hr;
		}
        
        virtual HRESULT STDMETHODCALLTYPE ReadVirtual( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesRead)
		{
			PULONG bRead = reinterpret_cast<PULONG>(bytesRead);
			return this->m_debugNative->m_ExtData2->ReadVirtual(address, buffer, bytesRequested, bRead);
		}

        virtual HRESULT STDMETHODCALLTYPE WriteVirtual( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [size_is][in] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesWritten)
		{
			throw NOT_IMPLEMENTED;
		}
        
        virtual HRESULT STDMETHODCALLTYPE GetTLSValue( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [out] */ CLRDATA_ADDRESS *value)
		{
			throw NOT_IMPLEMENTED;
		}
        
        virtual HRESULT STDMETHODCALLTYPE SetTLSValue( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [in] */ CLRDATA_ADDRESS value)
		{
			throw NOT_IMPLEMENTED;
		}
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentThreadID( 
            /* [out] */ ULONG32 *threadID)
		{
			throw NOT_IMPLEMENTED;
		}
        
        virtual HRESULT STDMETHODCALLTYPE GetThreadContext( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][out] */ BYTE *context)
		{
			throw NOT_IMPLEMENTED;
		}
        
        virtual HRESULT STDMETHODCALLTYPE SetThreadContext( 
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE *context)
		{
			throw NOT_IMPLEMENTED;
		}
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer)
		{
			throw NOT_IMPLEMENTED;
		}
	DWORD ProcessId;
    HANDLE ProcessHandle;
    BOOLEAN IsWow64;
	NativeDebugging* m_debugNative;
};


ICLRDataTarget* CreateClrDataTarget(DWORD ProcessId, NativeDebugging* debugNative)
{
    HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS,FALSE, ProcessId);
	//	PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, ProcessId);
	if (processHandle == NULL)
        return NULL;
	BOOL isWow64 = FALSE;
    BOOLEAN result = IsWow64Process(processHandle, &isWow64);
    DiagCLRDataTarget* dataTarget = new DiagCLRDataTarget(ProcessId, processHandle, isWow64, debugNative); //new DnCLRDataTarget;
    return static_cast<ICLRDataTarget *>(dataTarget);
}




HRESULT LoadDataAccessDLL(bool IsClrV4, ICLRDataTarget* target, HMODULE* dllHandle, void** iface)
{

    std::basic_string<TCHAR> systemRootString;
    std::basic_string<TCHAR> mscordacwksPathString;
    std::basic_string<TCHAR> mscordacwksFileName;
	const int size = 500;
	TCHAR windir[size];
	HRESULT hr = GetWindowsDirectory(windir, size);

	systemRootString = std::basic_string<TCHAR>(windir);

  //  if (IsClrV4)
  //  {
		//mscordacwksPathString = std::basic_string<TCHAR>("\\Microsoft.NET\\Framework64\\v4.0.30319\\mscordacwks.dll");
  //  }
  //  else
  //  {
		//mscordacwksPathString = std::basic_string<TCHAR>("\\Microsoft.NET\\Framework64\\v2.0.50727\\mscordacwks.dll");
  //  }

	#ifdef _WIN64
	//LPWSTR mscordacwksPathString = L"C:\\Windows\\Microsoft.NET\\Framework64\\v4.0.30319\\mscordacwks.dll";
	HMODULE accessDll = LoadLibraryW(L"C:\\Windows\\Microsoft.NET\\Framework64\\v4.0.30319\\mscordacwks.dll");

		//mscordacwksPathString = std::basic_string<TCHAR>("\\Microsoft.NET\\Framework64\\v4.0.30319\\mscordacwks.dll");
	#else
	//LPWSTR mscordacwksPathString = L"C:\\Windows\\Microsoft.NET\\Framework\\v4.0.30319\\mscordacwks.dll";
	HMODULE accessDll = LoadLibraryW(L"C:\\Windows\\Microsoft.NET\\Framework\\v4.0.30319\\mscordacwks.dll");

		//mscordacwksPathString = std::basic_string<TCHAR>("\\Microsoft.NET\\Framework\\v4.0.30319\\mscordacwks.dll");
	#endif

	//HMODULE accessDll = LoadLibrary(mscordacwksFileName.c_str());
	if (accessDll != NULL) {
		printf("library ooooooook! \n");
	}
	else {
		printf("%library is  null null null! \n");
	}

	PFN_CLRDataCreateInstance entry = (PFN_CLRDataCreateInstance)GetProcAddress(accessDll, "CLRDataCreateInstance");
	

	if (entry != NULL) { // entry不是null
		printf("entry ooooooook! \n");
	}
	else {
		printf("%entry is  null null null! \n");
	}

	HRESULT status;
	void* ifacePtr = NULL;
    if (!entry)
    {
        status = GetLastError();
        FreeLibrary(accessDll);
    }

	hr = entry(__uuidof(IXCLRDataProcess), target, (void**)&ifacePtr); // target: ICLRDataTarget // 创建一个ifacePtr与target交互. 将接口与target绑定在一起
	if (FAILED(hr))
	{
		wprintf(L"Failed to initialize mscordacwks.dll for symbol resolving (%08X)\n", hr);
		std::cout << "error: " << GetLastError() << std::endl;
		}


 //   else if ((status = entry(__uuidof(IXCLRDataProcess), target, &ifacePtr)) != S_OK)
 //   {
	//	if (FAILED(status))
	//	{
	//		//   lastError.Format(L"Failed to initialize mscordacwks.dll for symbol resolving (%08X)", hr);
	//		printf("Failed to initialize mscordacwks.dll for symbol resolving (%lX) errorcode: 0x%lX\n", hr, HRESULT_FROM_WIN32(GetLastError()));
	//	}

 //       FreeLibrary(accessDll);
	//	//printf("(status = entry(__uuidof(IXCLRDataProcess), target, &ifacePtr))\n");
 //   }
 //   else
 //   {
 //       *dllHandle = accessDll;
 //       *iface = ifacePtr;
 //   }


	*iface = ifacePtr;

	if (ifacePtr == NULL) {
		std::cout << "ifacePtr is null! satus: " << status << std::endl;
	}
	else {
		printf("ifacePtr is not null!\n");
	}

    return status;
}

