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

#pragma once
//#include <msclr\auto_gcroot.h>


#include <clrdata.h>
#include "xclrdata\xclrdata.h"
#include <string>

class NativeDebugging;

class Stackwalker
{
public:
	Stackwalker();
	~Stackwalker();
	bool Initialize(int pId);

	bool AttachProcess(int pId, bool invasive);

	void SetSymbolPath(std::basic_string<TCHAR> path);
	void SetImagePath(std::basic_string<TCHAR> path);
	void SetSourcePath(std::basic_string<TCHAR> path) {}
	bool InitCLRDataTarget();
	void Run(ULONG threadId);
	void Run(HANDLE threadHandle);

	void Run1();

private:
	ICLRDataTarget* m_clrDataTarget;
	IXCLRDataProcess* m_clrDataProcess;

	NativeDebugging* m_debugNative;
	bool m_isManaged;
	bool m_isClr4;
	int m_pId;
	std::basic_string<TCHAR> m_symbolPath;
	std::basic_string<TCHAR> m_imagePath;
	std::basic_string<TCHAR> m_sourcePath;
};