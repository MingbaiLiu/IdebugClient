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

#include <string>

struct IDebugClient;
#include "xclrdata\xclrdata.h"

class NativeDebugging
{
public:
	NativeDebugging();
	~NativeDebugging();
	bool Initialize(int pId);
	bool SetClrResolver(IXCLRDataProcess* clrDataProcess);
	bool AttachProcess(int pId, bool invasive);
	HRESULT DumpStack();
private:
	void CleanUp();
	HRESULT CreateHelperInterfaces();
	HRESULT DumpStackEx(IDebugSymbols *symbols, IDebugAdvanced2 *advanced2, IDebugControl4 *control4);


private:
	std::basic_string<WCHAR> ResolveClrName(ULONG64 ip);

	IDebugClient* m_debugClient;
    PDEBUG_CONTROL m_debugControl;

public:
	PDEBUG_ADVANCED       m_ExtAdvanced;
	PDEBUG_ADVANCED2      m_ExtAdvanced2;
	PDEBUG_CLIENT         m_ExtClient;
	PDEBUG_CONTROL2       m_ExtControl;
	PDEBUG_CONTROL4       m_ExtControl4;
	PDEBUG_DATA_SPACES    m_ExtData;
	PDEBUG_DATA_SPACES2   m_ExtData2;
	PDEBUG_REGISTERS      m_ExtRegisters;
	PDEBUG_SYMBOLS        m_ExtSymbols;
	PDEBUG_SYMBOLS2       m_ExtSymbols2;
	PDEBUG_SYMBOLS3       m_ExtSymbols3;
	PDEBUG_SYSTEM_OBJECTS4 m_ExtSystem;

	IXCLRDataProcess* m_clrData;
};
