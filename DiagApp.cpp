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

// DiagApp.cpp : main project file.

#include "stdafx.h"
#include <Windows.h>
#include <mscoree.h>
#include <cor.h>
#include <cordebug.h>
#include <dbghelp.h>
#include "DotNetHelper.h"
#include "Stackwalker.h"

//#include <metahost.h>
//#include <mscoree.h>
#include <iostream>
#include "xclrdata\xclrdata.h"
#include "xclrdata\xclrdata_i.c"

#include <list>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>
#include "litelog.h"
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "dbghelp.lib")

#define BUF_SIZE 256
#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "CorGuids.lib")
#pragma comment(lib, "mscoree.lib")
//#pragma comment(lib, "nativeDll.lib")

using namespace System;
using namespace System::Threading;
using namespace System::Diagnostics;
using namespace System::Collections::Generic;
litelog::FileLogger myLogger("log1.log");

//extern "C" __declspec(dllimport) void ret();
DWORD WINAPI retCallstack(LPVOID lpParam);
HANDLE threadHandle;
HANDLE reloveCallstackThreadHandle;
#pragma unmanaged
void baseNativeFunction() {
	while(1){};
}

#pragma managed
void managedFunction() {
	baseNativeFunction();
	//ret();
}


#pragma unmanaged
DWORD WINAPI nativateFunction(LPVOID lpParam) {
	managedFunction();
	return 0;
}
#pragma managed
int main(array<System::String^>^ args)
{
	int pId;

	HANDLE threadHandle = CreateThread(NULL, 0, nativateFunction, NULL, 0, NULL);

	pId = GetCurrentProcessId();
	
	Process^ process = Process::GetProcessById(pId);
	if (process == nullptr)
	{
		Console::WriteLine(L"Process Id was not found");
		return 0;
	}

	bool isManaged = IsDotNetProcess(pId);
	if (isManaged)
		Console::WriteLine("Process is managed");
	else
		Console::WriteLine("Process is native");

	bool isClr4 = IsClr4Process(pId);
	if (isClr4)
		Console::WriteLine("Process is Clr 4");
	else
		Console::WriteLine("Process is Clr 2");


	Stackwalker stackwalker;
	bool result = stackwalker.Initialize(pId);
	bool result2 = stackwalker.InitCLRDataTarget();
	stackwalker.Run(threadHandle);
	WaitForSingleObject(threadHandle, INFINITE);
	std::cin.get();

	return 0;
}