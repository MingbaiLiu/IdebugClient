// ----------------------------------------------------------------------------------------------
// Copyright (c) Mattias H?gstr?m.
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

#include <clrdata.h>

ICLRDataTarget* CreateClrDataTarget(DWORD ProcessId, NativeDebugging* debugNative);
HRESULT LoadDataAccessDLL(bool IsClrV4, ICLRDataTarget* target, HMODULE* dllHandle, void** iface);

