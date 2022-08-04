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

using namespace System;
using namespace System::Diagnostics;

struct DotNetHelper
{
public:

static bool IsClr4Process(Process^ process)
{
	auto modules = process->Modules;
	for each(ProcessModule^ module in modules)
	{
		if (module->ModuleName->StartsWith("clr", StringComparison::InvariantCultureIgnoreCase))
		{
			return true;
		}
	}
	return false;
}

static bool IsDotNetProcess(Process^ process)
{
	auto modules = process->Modules;
	for each(ProcessModule^ module in modules)
	{
		if (module->ModuleName->StartsWith("mscor", StringComparison::InvariantCultureIgnoreCase))
		{
			return true;
		}
	}
	return false;
}	
};

bool IsClr4Process(int pId)
{
	Process^ process = Process::GetProcessById(pId);
	return DotNetHelper::IsClr4Process(process);
}

bool IsDotNetProcess(int pId)
{
	Process^ process = Process::GetProcessById(pId);
	return DotNetHelper::IsDotNetProcess(process);
}

//bool IsClr4Process(int pId)
//{
//	return true;
//}
//
//bool IsDotNetProcess(int pId)
//{
//	return true;
//}