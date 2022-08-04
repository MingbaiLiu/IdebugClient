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

#pragma comment(lib, "dbgeng.lib")
#include <string>
#include <atlbase.h>                //CComPtr

#include <cor.h>
#include <clrdata.h>

#include "NativeDebugging.h"

// Safe release and NULL.
#define EXT_RELEASE(Unk) \
    ((Unk) != NULL ? ((Unk)->Release(), (Unk) = NULL) : NULL)

class DebugEventCallbacksImpl : public DebugBaseEventCallbacks
{
public:
    DebugEventCallbacksImpl()
    {
    }

    // IUnknown.
    HRESULT STDMETHODCALLTYPE QueryInterface(
        __in REFIID InterfaceId,
        __out PVOID* ppvObject
    )
    {
        if (
            IsEqualIID(InterfaceId, IID_IUnknown) ||
            IsEqualIID(InterfaceId, __uuidof(IDebugOutputCallbacks))
            )
        {
            this->AddRef();
            *ppvObject = this;
            return S_OK;
        }

        *ppvObject = NULL;
        return E_NOINTERFACE;
    }

    ULONG STDMETHODCALLTYPE AddRef()
    {
        return 1;
    }

    ULONG STDMETHODCALLTYPE Release()
    {
        return 0;
    }

    HRESULT STDMETHODCALLTYPE GetInterestMask(
        __out PULONG Mask)
    {
        *Mask = DEBUG_EVENT_CHANGE_DEBUGGEE_STATE;
        return S_OK;
    }

    HRESULT STDMETHODCALLTYPE ChangeDebuggeeState(
        __in ULONG Flags,
        __in ULONG64 Argument
    )
    {
        UNREFERENCED_PARAMETER(Flags);
        UNREFERENCED_PARAMETER(Argument);

        PDEBUG_CLIENT DebugClient;
        PDEBUG_CONTROL DebugControl;
        HRESULT Hr;

        if ((Hr = DebugCreate(__uuidof(IDebugClient),
            (void**)&DebugClient)) != S_OK)
        {
            return Hr;
        }

        if ((Hr = DebugClient->QueryInterface(__uuidof(IDebugControl),
            (void**)&DebugControl)) == S_OK)
        {
            DebugClient->Release();
            return Hr;
        }
        EXT_RELEASE(DebugControl);
        EXT_RELEASE(DebugClient);

        return S_OK;
    }
};

static DebugEventCallbacksImpl g_DebugEventCallbacks;

class DebugOutputCallbacksImpl : public IDebugOutputCallbacks
{
public:
    DebugOutputCallbacksImpl()
    {
    }

    // IUnknown.
    HRESULT STDMETHODCALLTYPE QueryInterface(
        __in REFIID InterfaceId,
        __out PVOID* ppvObject
    )
    {
        if (
            IsEqualIID(InterfaceId, IID_IUnknown) ||
            IsEqualIID(InterfaceId, __uuidof(IDebugOutputCallbacks))
            )
        {
            this->AddRef();
            *ppvObject = this;
            return S_OK;
        }

        *ppvObject = NULL;
        return E_NOINTERFACE;
    }

    ULONG STDMETHODCALLTYPE AddRef()
    {
        return 1;
    }

    ULONG STDMETHODCALLTYPE Release()
    {
        return 0;
    }

    HRESULT STDMETHODCALLTYPE Output(ULONG mask, PCSTR text)
    {
        return S_OK;
    }
};

static DebugOutputCallbacksImpl g_DebugOutputCallback;


enum
{
    DACPRIV_REQUEST_THREAD_STORE_DATA = 0xf0000000,
    DACPRIV_REQUEST_APPDOMAIN_STORE_DATA,
    DACPRIV_REQUEST_APPDOMAIN_LIST,
    DACPRIV_REQUEST_APPDOMAIN_DATA,
    DACPRIV_REQUEST_APPDOMAIN_NAME,
    DACPRIV_REQUEST_APPDOMAIN_APP_BASE,
    DACPRIV_REQUEST_APPDOMAIN_PRIVATE_BIN_PATHS,
    DACPRIV_REQUEST_APPDOMAIN_CONFIG_FILE,
    DACPRIV_REQUEST_ASSEMBLY_LIST,
    DACPRIV_REQUEST_FAILED_ASSEMBLY_LIST,
    DACPRIV_REQUEST_ASSEMBLY_DATA,
    DACPRIV_REQUEST_ASSEMBLY_NAME,
    DACPRIV_REQUEST_ASSEMBLY_DISPLAY_NAME,
    DACPRIV_REQUEST_ASSEMBLY_LOCATION,
    DACPRIV_REQUEST_FAILED_ASSEMBLY_DATA,
    DACPRIV_REQUEST_FAILED_ASSEMBLY_DISPLAY_NAME,
    DACPRIV_REQUEST_FAILED_ASSEMBLY_LOCATION,
    DACPRIV_REQUEST_THREAD_DATA,
    DACPRIV_REQUEST_THREAD_THINLOCK_DATA,
    DACPRIV_REQUEST_CONTEXT_DATA,
    DACPRIV_REQUEST_METHODDESC_DATA,
    DACPRIV_REQUEST_METHODDESC_IP_DATA,
    DACPRIV_REQUEST_METHODDESC_NAME,
    DACPRIV_REQUEST_METHODDESC_FRAME_DATA,
    DACPRIV_REQUEST_CODEHEADER_DATA,
    DACPRIV_REQUEST_THREADPOOL_DATA,
    DACPRIV_REQUEST_WORKREQUEST_DATA,
    DACPRIV_REQUEST_OBJECT_DATA,
    DACPRIV_REQUEST_FRAME_NAME,
    DACPRIV_REQUEST_OBJECT_STRING_DATA,
    DACPRIV_REQUEST_OBJECT_CLASS_NAME,
    DACPRIV_REQUEST_METHODTABLE_NAME,
    DACPRIV_REQUEST_METHODTABLE_DATA,
    DACPRIV_REQUEST_EECLASS_DATA,
    DACPRIV_REQUEST_FIELDDESC_DATA,
    DACPRIV_REQUEST_MANAGEDSTATICADDR,
    DACPRIV_REQUEST_MODULE_DATA,
    DACPRIV_REQUEST_MODULEMAP_TRAVERSE,
    DACPRIV_REQUEST_MODULETOKEN_DATA,
#ifdef _DEBUG
    DACPRIV_REQUEST_MDA,
#endif
    DACPRIV_REQUEST_PEFILE_DATA,
    DACPRIV_REQUEST_PEFILE_NAME,
    DACPRIV_REQUEST_ASSEMBLYMODULE_LIST,
    DACPRIV_REQUEST_GCHEAP_DATA,
    DACPRIV_REQUEST_GCHEAP_LIST,
    DACPRIV_REQUEST_GCHEAPDETAILS_DATA,
    DACPRIV_REQUEST_GCHEAPDETAILS_STATIC_DATA,
    DACPRIV_REQUEST_HEAPSEGMENT_DATA,
    DACPRIV_REQUEST_UNITTEST_DATA,
    DACPRIV_REQUEST_ISSTUB,
    DACPRIV_REQUEST_DOMAINLOCALMODULE_DATA,
    DACPRIV_REQUEST_DOMAINLOCALMODULEFROMAPPDOMAIN_DATA,
    DACPRIV_REQUEST_DOMAINLOCALMODULE_DATA_FROM_MODULE,
    DACPRIV_REQUEST_SYNCBLOCK_DATA,
    DACPRIV_REQUEST_SYNCBLOCK_CLEANUP_DATA,
    DACPRIV_REQUEST_HANDLETABLE_TRAVERSE,
    DACPRIV_REQUEST_RCWCLEANUP_TRAVERSE,
    DACPRIV_REQUEST_EHINFO_TRAVERSE,
    DACPRIV_REQUEST_STRESSLOG_DATA,
    DACPRIV_REQUEST_JITLIST,
    DACPRIV_REQUEST_JIT_HELPER_FUNCTION_NAME,
    DACPRIV_REQUEST_JUMP_THUNK_TARGET,
    DACPRIV_REQUEST_LOADERHEAP_TRAVERSE,
    DACPRIV_REQUEST_MANAGER_LIST,
    DACPRIV_REQUEST_JITHEAPLIST,
    DACPRIV_REQUEST_CODEHEAP_LIST,
    DACPRIV_REQUEST_METHODTABLE_SLOT,
    DACPRIV_REQUEST_VIRTCALLSTUBHEAP_TRAVERSE,
    DACPRIV_REQUEST_NESTEDEXCEPTION_DATA,
    DACPRIV_REQUEST_USEFULGLOBALS,
    DACPRIV_REQUEST_CLRTLSDATA_INDEX,
    DACPRIV_REQUEST_MODULE_FINDIL
};

struct DacpMethodDescData
{
    BOOL            bHasNativeCode;
    BOOL            bIsDynamic;
    WORD            wSlotNumber;
    CLRDATA_ADDRESS NativeCodeAddr;

    CLRDATA_ADDRESS AddressOfNativeCodeSlot;

    CLRDATA_ADDRESS MethodDescPtr;
    CLRDATA_ADDRESS MethodTablePtr;
    CLRDATA_ADDRESS EEClassPtr;
    CLRDATA_ADDRESS ModulePtr;

    CLRDATA_ADDRESS PreStubAddr;
    mdToken                  MDToken;
    CLRDATA_ADDRESS GCInfo;
    WORD                      JITType;
    CLRDATA_ADDRESS GCStressCodeCopy;

    HRESULT Request(IXCLRDataProcess* dac, CLRDATA_ADDRESS addr)
    {
        return dac->Request(DACPRIV_REQUEST_METHODDESC_DATA,
            sizeof(addr), (PBYTE)&addr,
            sizeof(*this), (PBYTE)this);
    }

    HRESULT RequestFromIP(IXCLRDataProcess* dac, CLRDATA_ADDRESS IPaddr)
    {
        return dac->Request(DACPRIV_REQUEST_METHODDESC_IP_DATA,
            sizeof(IPaddr), (PBYTE)&IPaddr,
            sizeof(*this), (PBYTE)this);
    }

    HRESULT RequestFromFrame(IXCLRDataProcess* dac, CLRDATA_ADDRESS FrameAddr)
    {
        return dac->Request(DACPRIV_REQUEST_METHODDESC_FRAME_DATA,
            sizeof(FrameAddr), (PBYTE)&FrameAddr,
            sizeof(*this), (PBYTE)this);
    }


    static HRESULT GetMethodName(IXCLRDataProcess* dac,
        CLRDATA_ADDRESS addrMethodDesc,
        ULONG32 iNameChars,
        __out_ecount(iNameChars) LPWSTR pwszName)
    {
        return dac->Request(DACPRIV_REQUEST_METHODDESC_NAME,
            sizeof(addrMethodDesc), (PBYTE)&addrMethodDesc,
            sizeof(WCHAR) * iNameChars, (PBYTE)pwszName);
    }
};


// Safe release and NULL.
#define EXT_RELEASE(Unk) \
    ((Unk) != NULL ? ((Unk)->Release(), (Unk) = NULL) : NULL)

void NativeDebugging::CleanUp()
{
    m_ExtClient = nullptr;
    EXT_RELEASE(m_ExtAdvanced);
    EXT_RELEASE(m_ExtAdvanced2);
    EXT_RELEASE(m_ExtControl);
    EXT_RELEASE(m_ExtControl4);
    EXT_RELEASE(m_ExtData);
    EXT_RELEASE(m_ExtData2);
    EXT_RELEASE(m_ExtRegisters);
    EXT_RELEASE(m_ExtSymbols);
    EXT_RELEASE(m_ExtSymbols2);
    EXT_RELEASE(m_ExtSymbols3);
    EXT_RELEASE(m_ExtSystem);
    //EXT_RELEASE(m_clrData);
    m_clrData = nullptr;
}

NativeDebugging::NativeDebugging()
{
    m_ExtClient = nullptr;
    m_ExtAdvanced = nullptr;
    m_ExtAdvanced2 = nullptr;
    m_ExtControl = nullptr;
    m_ExtControl4 = nullptr;
    m_ExtData = nullptr;
    m_ExtData2 = nullptr;
    m_ExtRegisters = nullptr;
    m_ExtSymbols = nullptr;
    m_ExtSymbols2 = nullptr;
    m_ExtSymbols3 = nullptr;
    m_ExtSystem = nullptr;
    m_clrData = nullptr;
}

NativeDebugging::~NativeDebugging()
{
    CleanUp();
}


HRESULT NativeDebugging::CreateHelperInterfaces()
{
    HRESULT hr = S_OK;

    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugAdvanced), (void**)&m_ExtAdvanced)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugAdvanced2), (void**)&m_ExtAdvanced2)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugControl2), (void**)&m_ExtControl)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugControl4), (void**)&m_ExtControl4)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugDataSpaces), (void**)&m_ExtData)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugDataSpaces2), (void**)&m_ExtData2)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugRegisters), (void**)&m_ExtRegisters)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugSymbols), (void**)&m_ExtSymbols)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugSymbols2), (void**)&m_ExtSymbols2)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugSymbols3), (void**)&m_ExtSymbols3)) != S_OK)
    {
        return hr;
    }
    if ((hr = m_debugClient->QueryInterface(__uuidof(IDebugSystemObjects), (void**)&m_ExtSystem)) != S_OK)
    {
        return hr;
    }

    return hr;
}

bool NativeDebugging::SetClrResolver(IXCLRDataProcess* clrDataProcess)
{
    m_clrData = clrDataProcess;
    return clrDataProcess != nullptr;
}

bool NativeDebugging::Initialize(int pId)
{
    HRESULT hr = S_OK;
    IDebugClient* debugClient = nullptr;
    PDEBUG_CONTROL debugControl = nullptr;
    if ((hr = DebugCreate(__uuidof(IDebugClient), (void**)&debugClient)) != S_OK)
    {
        return false;
    }
    m_debugClient = debugClient;

    const ULONG64 LOCAL_SERVER = 0;
    int flags = DEBUG_ATTACH_NONINVASIVE | DEBUG_ATTACH_NONINVASIVE_NO_SUSPEND;
    hr = debugClient->AttachProcess(LOCAL_SERVER, pId, flags);
    if (hr != S_OK)
        return false;

    if ((hr = debugClient->QueryInterface(__uuidof(IDebugControl), (void**)&debugControl)) != S_OK)
    {
        debugClient->Release();
        return false;
    }
    m_debugControl = debugControl;


    // It takes some time to attach to the process
    // The Com object, isn't really ready when it returns
    // 
    // What we can do is, to set the execution status to "go"
    // The process is actually not suspended, so the call will return immediately
    // But here is the smart thing. It returns when the debugger is properly attached.

    hr = m_debugControl->SetExecutionStatus(DEBUG_STATUS_GO);

    if ((hr = m_debugControl->WaitForEvent(DEBUG_WAIT_DEFAULT, INFINITE)) != S_OK)
    {
        return false;
    }

    ULONG execStatus = 0;
    if ((hr = m_debugControl->GetExecutionStatus(&execStatus)) == S_OK) {

        // #define DEBUG_STATUS_NO_CHANGE         0
        // #define DEBUG_STATUS_GO                1
        // #define DEBUG_STATUS_GO_HANDLED        2
        // #define DEBUG_STATUS_GO_NOT_HANDLED    3
        // #define DEBUG_STATUS_STEP_OVER         4
        // #define DEBUG_STATUS_STEP_INTO         5
        // #define DEBUG_STATUS_BREAK             6
        // #define DEBUG_STATUS_NO_DEBUGGEE       7
        // #define DEBUG_STATUS_STEP_BRANCH       8
        // #define DEBUG_STATUS_IGNORE_EVENT      9
        // #define DEBUG_STATUS_RESTART_REQUESTED 10

    }

    hr = CreateHelperInterfaces();
    if (hr != S_OK)
    {
        CleanUp();
    }

    HRESULT hr1 = m_debugClient->SetOutputCallbacks(&g_DebugOutputCallback);
    HRESULT hr2 = m_debugClient->SetEventCallbacks(&g_DebugEventCallbacks);

    return hr == S_OK;
}

bool NativeDebugging::AttachProcess(int pId, bool nonInvasive)
{
    const ULONG64 LOCAL_SERVER = 0;
    int flags = DEBUG_ATTACH_DEFAULT;
    if (nonInvasive)
        flags = DEBUG_ATTACH_NONINVASIVE | DEBUG_ATTACH_NONINVASIVE_NO_SUSPEND;
    HRESULT hr = m_debugClient->AttachProcess(LOCAL_SERVER, pId, flags);
    if (hr != S_OK)
        return false;
    ULONG execStatus = 0;
    if ((hr = m_debugControl->GetExecutionStatus(&execStatus)) == S_OK) {

        // #define DEBUG_STATUS_NO_CHANGE         0
        // #define DEBUG_STATUS_GO                1
        // #define DEBUG_STATUS_GO_HANDLED        2
        // #define DEBUG_STATUS_GO_NOT_HANDLED    3
        // #define DEBUG_STATUS_STEP_OVER         4
        // #define DEBUG_STATUS_STEP_INTO         5
        // #define DEBUG_STATUS_BREAK             6
        // #define DEBUG_STATUS_NO_DEBUGGEE       7
        // #define DEBUG_STATUS_STEP_BRANCH       8
        // #define DEBUG_STATUS_IGNORE_EVENT      9
        // #define DEBUG_STATUS_RESTART_REQUESTED 10

    }
    hr = m_ExtSystem->SetCurrentProcessId(pId);
    return hr == S_OK;
}




std::basic_string<WCHAR> NativeDebugging::ResolveClrName(ULONG64 ip)
{
    CLRDATA_ADDRESS clrAddr = ip;
    CLRDATA_ADDRESS displacement = 0;
    WCHAR buffer[1000];
    buffer[0] = 0;
    ULONG32 nameLen = 0;
    int maxSize = sizeof(buffer) / sizeof(WCHAR);
    HRESULT hr;
    std::basic_string<WCHAR> result;
    if (m_clrData == NULL) {
        return L"";
    }

    hr = m_clrData->GetRuntimeNameByAddress(clrAddr, 0, maxSize - 1, &nameLen, buffer, &displacement);
    result = std::basic_string<WCHAR>(buffer);
    if (SUCCEEDED(hr))
        return result;

    // Another Method
    // That gives the same result

    struct DacpMethodDescData DacpData;
    ZeroMemory(&DacpData, sizeof(DacpData));
    CLRDATA_ADDRESS managedIP = static_cast<CLRDATA_ADDRESS>(ip);
    HRESULT hr1 = DacpData.RequestFromIP(m_clrData, managedIP);
    ULONG32 nameChars = sizeof(buffer) / sizeof(wchar_t) - 1;
    if (SUCCEEDED(hr))
    {
        buffer[0] = 0;
        HRESULT hr2 = DacpData.GetMethodName(m_clrData /* IXCLRDataProcess */,
            DacpData.MethodDescPtr /* CLRDATA_ADDRESS */,
            nameChars /* Max chars of buffer */,
            buffer);
        if (SUCCEEDED(hr2))
            result = std::basic_string<WCHAR>(buffer);
    }


    return result;
}




HRESULT NativeDebugging::DumpStack()
{
    HRESULT hr = this->DumpStackEx(m_ExtSymbols, m_ExtAdvanced2, m_ExtControl4);
    return hr;
}

HRESULT NativeDebugging::DumpStackEx(IDebugSymbols* symbols, IDebugAdvanced2* advanced2, IDebugControl4* control4)
{
    HRESULT hr = S_OK;
    CONTEXT _context = { 0 };
    ULONG _uOutSize = 0;
    DEBUG_STACK_FRAME _stackFrames[256] = { 0 };
    CONTEXT _frameContexts[256] = { 0 };
    ULONG _uFramesFilled = 0;

    hr = control4->GetStackTrace(0, 0, 0, _stackFrames, ARRAYSIZE((_stackFrames)), &_uFramesFilled);

    if (FAILED(hr))
    {
        goto cleanup;
    }
    printf("Stack Trace:\n");

    for (ULONG _uFrame = 0; _uFrame < _uFramesFilled; _uFrame++)
    {
        HRESULT symhr;
        char _name[512];
        unsigned __int64 offset = 0;
        unsigned __int64 instructionOffset = _stackFrames[_uFrame].InstructionOffset;

        std::basic_string<WCHAR> clrName = ResolveClrName(instructionOffset);

        if (clrName.length() != 0)
        {
            wprintf(clrName.c_str());
            wprintf(L"\n");
        }
        else
        {
            ULONG _uLineNo = 0;
            ZeroMemory(_name, ARRAYSIZE(_name));
            symhr = symbols->GetNameByOffset(instructionOffset, _name, ARRAYSIZE((_name)) - 1, NULL, &offset);

            if (SUCCEEDED(symhr))
            {
                printf("%s+0x%08I64X", _name, offset);
            }
            else
            {

                printf("0x%08I64X", _stackFrames[_uFrame].InstructionOffset);
            }
            ZeroMemory(_name, ARRAYSIZE(_name));
            symhr = symbols->GetLineByOffset(_stackFrames[_uFrame].InstructionOffset, &_uLineNo, _name, ARRAYSIZE((_name)) - 1, NULL, NULL);

            if (SUCCEEDED(symhr))
            {
                printf(" [%s(%u)]", _name, _uLineNo);
            }
            printf("\n");
        }
    }
cleanup:
    return hr;
}