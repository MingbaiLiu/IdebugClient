

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Fri Jan 06 11:05:40 2012
 */
/* Compiler settings for xclrdata.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __xclrdata_h__
#define __xclrdata_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IXCLRDataTarget3_FWD_DEFINED__
#define __IXCLRDataTarget3_FWD_DEFINED__
typedef interface IXCLRDataTarget3 IXCLRDataTarget3;
#endif 	/* __IXCLRDataTarget3_FWD_DEFINED__ */


#ifndef __IXCLRDataProcess_FWD_DEFINED__
#define __IXCLRDataProcess_FWD_DEFINED__
typedef interface IXCLRDataProcess IXCLRDataProcess;
#endif 	/* __IXCLRDataProcess_FWD_DEFINED__ */


#ifndef __IXCLRDataAppDomain_FWD_DEFINED__
#define __IXCLRDataAppDomain_FWD_DEFINED__
typedef interface IXCLRDataAppDomain IXCLRDataAppDomain;
#endif 	/* __IXCLRDataAppDomain_FWD_DEFINED__ */


#ifndef __IXCLRDataAssembly_FWD_DEFINED__
#define __IXCLRDataAssembly_FWD_DEFINED__
typedef interface IXCLRDataAssembly IXCLRDataAssembly;
#endif 	/* __IXCLRDataAssembly_FWD_DEFINED__ */


#ifndef __IXCLRDataModule_FWD_DEFINED__
#define __IXCLRDataModule_FWD_DEFINED__
typedef interface IXCLRDataModule IXCLRDataModule;
#endif 	/* __IXCLRDataModule_FWD_DEFINED__ */


#ifndef __IXCLRDataTypeDefinition_FWD_DEFINED__
#define __IXCLRDataTypeDefinition_FWD_DEFINED__
typedef interface IXCLRDataTypeDefinition IXCLRDataTypeDefinition;
#endif 	/* __IXCLRDataTypeDefinition_FWD_DEFINED__ */


#ifndef __IXCLRDataTypeInstance_FWD_DEFINED__
#define __IXCLRDataTypeInstance_FWD_DEFINED__
typedef interface IXCLRDataTypeInstance IXCLRDataTypeInstance;
#endif 	/* __IXCLRDataTypeInstance_FWD_DEFINED__ */


#ifndef __IXCLRDataMethodDefinition_FWD_DEFINED__
#define __IXCLRDataMethodDefinition_FWD_DEFINED__
typedef interface IXCLRDataMethodDefinition IXCLRDataMethodDefinition;
#endif 	/* __IXCLRDataMethodDefinition_FWD_DEFINED__ */


#ifndef __IXCLRDataMethodInstance_FWD_DEFINED__
#define __IXCLRDataMethodInstance_FWD_DEFINED__
typedef interface IXCLRDataMethodInstance IXCLRDataMethodInstance;
#endif 	/* __IXCLRDataMethodInstance_FWD_DEFINED__ */


#ifndef __IXCLRDataTask_FWD_DEFINED__
#define __IXCLRDataTask_FWD_DEFINED__
typedef interface IXCLRDataTask IXCLRDataTask;
#endif 	/* __IXCLRDataTask_FWD_DEFINED__ */


#ifndef __IXCLRDataStackWalk_FWD_DEFINED__
#define __IXCLRDataStackWalk_FWD_DEFINED__
typedef interface IXCLRDataStackWalk IXCLRDataStackWalk;
#endif 	/* __IXCLRDataStackWalk_FWD_DEFINED__ */


#ifndef __IXCLRDataFrame_FWD_DEFINED__
#define __IXCLRDataFrame_FWD_DEFINED__
typedef interface IXCLRDataFrame IXCLRDataFrame;
#endif 	/* __IXCLRDataFrame_FWD_DEFINED__ */


#ifndef __IXCLRDataExceptionState_FWD_DEFINED__
#define __IXCLRDataExceptionState_FWD_DEFINED__
typedef interface IXCLRDataExceptionState IXCLRDataExceptionState;
#endif 	/* __IXCLRDataExceptionState_FWD_DEFINED__ */


#ifndef __IXCLRDataValue_FWD_DEFINED__
#define __IXCLRDataValue_FWD_DEFINED__
typedef interface IXCLRDataValue IXCLRDataValue;
#endif 	/* __IXCLRDataValue_FWD_DEFINED__ */


#ifndef __IXCLRDataExceptionNotification_FWD_DEFINED__
#define __IXCLRDataExceptionNotification_FWD_DEFINED__
typedef interface IXCLRDataExceptionNotification IXCLRDataExceptionNotification;
#endif 	/* __IXCLRDataExceptionNotification_FWD_DEFINED__ */


#ifndef __IXCLRDataExceptionNotification2_FWD_DEFINED__
#define __IXCLRDataExceptionNotification2_FWD_DEFINED__
typedef interface IXCLRDataExceptionNotification2 IXCLRDataExceptionNotification2;
#endif 	/* __IXCLRDataExceptionNotification2_FWD_DEFINED__ */


/* header files for imported files */
#include "clrdata.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_xclrdata_0000_0000 */
/* [local] */ 

#if 0
typedef UINT32 mdToken;

typedef mdToken mdTypeDef;

typedef mdToken mdMethodDef;

typedef mdToken mdFieldDef;

typedef ULONG CorElementType;

typedef struct _EXCEPTION_RECORD64
    {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    DWORD64 ExceptionRecord;
    DWORD64 ExceptionAddress;
    DWORD NumberParameters;
    DWORD __unusedAlignment;
    DWORD64 ExceptionInformation[ 15 ];
    } 	EXCEPTION_RECORD64;

typedef struct _EXCEPTION_RECORD64 *PEXCEPTION_RECORD64;

#endif















typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_xclrdata_0000_0000_0001
    {
    CLRDATA_ADDRESS startAddress;
    CLRDATA_ADDRESS endAddress;
    } 	CLRDATA_ADDRESS_RANGE;

typedef ULONG64 CLRDATA_ENUM;

#define CLRDATA_NOTIFY_EXCEPTION 0xe0444143
typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0000_0002
    {	CLRDATA_REQUEST_REVISION	= 0xe0000000
    } 	CLRDataGeneralRequest;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0000_0003
    {	CLRDATA_TYPE_DEFAULT	= 0,
	CLRDATA_TYPE_IS_PRIMITIVE	= 0x1,
	CLRDATA_TYPE_IS_VALUE_TYPE	= 0x2,
	CLRDATA_TYPE_IS_STRING	= 0x4,
	CLRDATA_TYPE_IS_ARRAY	= 0x8,
	CLRDATA_TYPE_IS_REFERENCE	= 0x10,
	CLRDATA_TYPE_IS_POINTER	= 0x20,
	CLRDATA_TYPE_IS_ENUM	= 0x40,
	CLRDATA_TYPE_ALL_KINDS	= 0x7f
    } 	CLRDataTypeFlag;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0000_0004
    {	CLRDATA_FIELD_DEFAULT	= 0,
	CLRDATA_FIELD_IS_PRIMITIVE	= CLRDATA_TYPE_IS_PRIMITIVE,
	CLRDATA_FIELD_IS_VALUE_TYPE	= CLRDATA_TYPE_IS_VALUE_TYPE,
	CLRDATA_FIELD_IS_STRING	= CLRDATA_TYPE_IS_STRING,
	CLRDATA_FIELD_IS_ARRAY	= CLRDATA_TYPE_IS_ARRAY,
	CLRDATA_FIELD_IS_REFERENCE	= CLRDATA_TYPE_IS_REFERENCE,
	CLRDATA_FIELD_IS_POINTER	= CLRDATA_TYPE_IS_POINTER,
	CLRDATA_FIELD_IS_ENUM	= CLRDATA_TYPE_IS_ENUM,
	CLRDATA_FIELD_ALL_KINDS	= CLRDATA_TYPE_ALL_KINDS,
	CLRDATA_FIELD_IS_INHERITED	= 0x80,
	CLRDATA_FIELD_IS_LITERAL	= 0x100,
	CLRDATA_FIELD_FROM_INSTANCE	= 0x200,
	CLRDATA_FIELD_FROM_TASK_LOCAL	= 0x400,
	CLRDATA_FIELD_FROM_STATIC	= 0x800,
	CLRDATA_FIELD_ALL_LOCATIONS	= 0xe00,
	CLRDATA_FIELD_ALL_FIELDS	= 0xeff
    } 	CLRDataFieldFlag;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0000_0005
    {	CLRDATA_VALUE_DEFAULT	= 0,
	CLRDATA_VALUE_IS_PRIMITIVE	= CLRDATA_TYPE_IS_PRIMITIVE,
	CLRDATA_VALUE_IS_VALUE_TYPE	= CLRDATA_TYPE_IS_VALUE_TYPE,
	CLRDATA_VALUE_IS_STRING	= CLRDATA_TYPE_IS_STRING,
	CLRDATA_VALUE_IS_ARRAY	= CLRDATA_TYPE_IS_ARRAY,
	CLRDATA_VALUE_IS_REFERENCE	= CLRDATA_TYPE_IS_REFERENCE,
	CLRDATA_VALUE_IS_POINTER	= CLRDATA_TYPE_IS_POINTER,
	CLRDATA_VALUE_IS_ENUM	= CLRDATA_TYPE_IS_ENUM,
	CLRDATA_VALUE_ALL_KINDS	= CLRDATA_TYPE_ALL_KINDS,
	CLRDATA_VALUE_IS_INHERITED	= CLRDATA_FIELD_IS_INHERITED,
	CLRDATA_VALUE_IS_LITERAL	= CLRDATA_FIELD_IS_LITERAL,
	CLRDATA_VALUE_FROM_INSTANCE	= CLRDATA_FIELD_FROM_INSTANCE,
	CLRDATA_VALUE_FROM_TASK_LOCAL	= CLRDATA_FIELD_FROM_TASK_LOCAL,
	CLRDATA_VALUE_FROM_STATIC	= CLRDATA_FIELD_FROM_STATIC,
	CLRDATA_VALUE_ALL_LOCATIONS	= CLRDATA_FIELD_ALL_LOCATIONS,
	CLRDATA_VALUE_ALL_FIELDS	= CLRDATA_FIELD_ALL_FIELDS,
	CLRDATA_VALUE_IS_BOXED	= 0x1000
    } 	CLRDataValueFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0000_v0_0_s_ifspec;

#ifndef __IXCLRDataTarget3_INTERFACE_DEFINED__
#define __IXCLRDataTarget3_INTERFACE_DEFINED__

/* interface IXCLRDataTarget3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataTarget3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59d9b5e1-4a6f-4531-84c3-51d12da22fd4")
    IXCLRDataTarget3 : public ICLRDataTarget2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMetaData( 
            /* [in] */ LPCWSTR imagePath,
            /* [in] */ ULONG32 imageTimestamp,
            /* [in] */ ULONG32 imageSize,
            /* [in] */ GUID *mvid,
            /* [in] */ ULONG32 mdRva,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufferSize,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [out] */ ULONG32 *dataSize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataTarget3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataTarget3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataTarget3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataTarget3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMachineType )( 
            IXCLRDataTarget3 * This,
            /* [out] */ ULONG32 *machineType);
        
        HRESULT ( STDMETHODCALLTYPE *GetPointerSize )( 
            IXCLRDataTarget3 * This,
            /* [out] */ ULONG32 *pointerSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetImageBase )( 
            IXCLRDataTarget3 * This,
            /* [string][in] */ LPCWSTR imagePath,
            /* [out] */ CLRDATA_ADDRESS *baseAddress);
        
        HRESULT ( STDMETHODCALLTYPE *ReadVirtual )( 
            IXCLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesRead);
        
        HRESULT ( STDMETHODCALLTYPE *WriteVirtual )( 
            IXCLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [size_is][in] */ BYTE *buffer,
            /* [in] */ ULONG32 bytesRequested,
            /* [out] */ ULONG32 *bytesWritten);
        
        HRESULT ( STDMETHODCALLTYPE *GetTLSValue )( 
            IXCLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [out] */ CLRDATA_ADDRESS *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetTLSValue )( 
            IXCLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 index,
            /* [in] */ CLRDATA_ADDRESS value);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadID )( 
            IXCLRDataTarget3 * This,
            /* [out] */ ULONG32 *threadID);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )( 
            IXCLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][out] */ BYTE *context);
        
        HRESULT ( STDMETHODCALLTYPE *SetThreadContext )( 
            IXCLRDataTarget3 * This,
            /* [in] */ ULONG32 threadID,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE *context);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataTarget3 * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *AllocVirtual )( 
            IXCLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags,
            /* [in] */ ULONG32 protectFlags,
            /* [out] */ CLRDATA_ADDRESS *virt);
        
        HRESULT ( STDMETHODCALLTYPE *FreeVirtual )( 
            IXCLRDataTarget3 * This,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [in] */ ULONG32 size,
            /* [in] */ ULONG32 typeFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetMetaData )( 
            IXCLRDataTarget3 * This,
            /* [in] */ LPCWSTR imagePath,
            /* [in] */ ULONG32 imageTimestamp,
            /* [in] */ ULONG32 imageSize,
            /* [in] */ GUID *mvid,
            /* [in] */ ULONG32 mdRva,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufferSize,
            /* [length_is][size_is][out] */ BYTE *buffer,
            /* [out] */ ULONG32 *dataSize);
        
        END_INTERFACE
    } IXCLRDataTarget3Vtbl;

    interface IXCLRDataTarget3
    {
        CONST_VTBL struct IXCLRDataTarget3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataTarget3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataTarget3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataTarget3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataTarget3_GetMachineType(This,machineType)	\
    ( (This)->lpVtbl -> GetMachineType(This,machineType) ) 

#define IXCLRDataTarget3_GetPointerSize(This,pointerSize)	\
    ( (This)->lpVtbl -> GetPointerSize(This,pointerSize) ) 

#define IXCLRDataTarget3_GetImageBase(This,imagePath,baseAddress)	\
    ( (This)->lpVtbl -> GetImageBase(This,imagePath,baseAddress) ) 

#define IXCLRDataTarget3_ReadVirtual(This,address,buffer,bytesRequested,bytesRead)	\
    ( (This)->lpVtbl -> ReadVirtual(This,address,buffer,bytesRequested,bytesRead) ) 

#define IXCLRDataTarget3_WriteVirtual(This,address,buffer,bytesRequested,bytesWritten)	\
    ( (This)->lpVtbl -> WriteVirtual(This,address,buffer,bytesRequested,bytesWritten) ) 

#define IXCLRDataTarget3_GetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> GetTLSValue(This,threadID,index,value) ) 

#define IXCLRDataTarget3_SetTLSValue(This,threadID,index,value)	\
    ( (This)->lpVtbl -> SetTLSValue(This,threadID,index,value) ) 

#define IXCLRDataTarget3_GetCurrentThreadID(This,threadID)	\
    ( (This)->lpVtbl -> GetCurrentThreadID(This,threadID) ) 

#define IXCLRDataTarget3_GetThreadContext(This,threadID,contextFlags,contextSize,context)	\
    ( (This)->lpVtbl -> GetThreadContext(This,threadID,contextFlags,contextSize,context) ) 

#define IXCLRDataTarget3_SetThreadContext(This,threadID,contextSize,context)	\
    ( (This)->lpVtbl -> SetThreadContext(This,threadID,contextSize,context) ) 

#define IXCLRDataTarget3_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 


#define IXCLRDataTarget3_AllocVirtual(This,addr,size,typeFlags,protectFlags,virt)	\
    ( (This)->lpVtbl -> AllocVirtual(This,addr,size,typeFlags,protectFlags,virt) ) 

#define IXCLRDataTarget3_FreeVirtual(This,addr,size,typeFlags)	\
    ( (This)->lpVtbl -> FreeVirtual(This,addr,size,typeFlags) ) 


#define IXCLRDataTarget3_GetMetaData(This,imagePath,imageTimestamp,imageSize,mvid,mdRva,flags,bufferSize,buffer,dataSize)	\
    ( (This)->lpVtbl -> GetMetaData(This,imagePath,imageTimestamp,imageSize,mvid,mdRva,flags,bufferSize,buffer,dataSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataTarget3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0001 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0001
    {	CLRDATA_BYNAME_CASE_SENSITIVE	= 0,
	CLRDATA_BYNAME_CASE_INSENSITIVE	= 0x1
    } 	CLRDataByNameFlag;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0002
    {	CLRDATA_GETNAME_DEFAULT	= 0,
	CLRDATA_GETNAME_NO_NAMESPACES	= 0x1,
	CLRDATA_GETNAME_NO_PARAMETERS	= 0x2
    } 	CLRDataGetNameFlag;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0003
    {	CLRDATA_PROCESS_DEFAULT	= 0,
	CLRDATA_PROCESS_IN_GC	= 0x1
    } 	CLRDataProcessFlag;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0004
    {	CLRDATA_ADDRESS_UNRECOGNIZED	= 0,
	CLRDATA_ADDRESS_MANAGED_METHOD	= ( CLRDATA_ADDRESS_UNRECOGNIZED + 1 ) ,
	CLRDATA_ADDRESS_RUNTIME_MANAGED_CODE	= ( CLRDATA_ADDRESS_MANAGED_METHOD + 1 ) ,
	CLRDATA_ADDRESS_RUNTIME_UNMANAGED_CODE	= ( CLRDATA_ADDRESS_RUNTIME_MANAGED_CODE + 1 ) ,
	CLRDATA_ADDRESS_GC_DATA	= ( CLRDATA_ADDRESS_RUNTIME_UNMANAGED_CODE + 1 ) ,
	CLRDATA_ADDRESS_RUNTIME_MANAGED_STUB	= ( CLRDATA_ADDRESS_GC_DATA + 1 ) ,
	CLRDATA_ADDRESS_RUNTIME_UNMANAGED_STUB	= ( CLRDATA_ADDRESS_RUNTIME_MANAGED_STUB + 1 ) 
    } 	CLRDataAddressType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0005
    {	CLRDATA_NOTIFY_ON_MODULE_LOAD	= 0x1,
	CLRDATA_NOTIFY_ON_MODULE_UNLOAD	= 0x2,
	CLRDATA_NOTIFY_ON_EXCEPTION	= 0x4
    } 	CLRDataOtherNotifyFlag;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_xclrdata_0000_0001_0006
    {
    ULONG64 Data[ 8 ];
    } 	CLRDATA_FOLLOW_STUB_BUFFER;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0007
    {	CLRDATA_FOLLOW_STUB_DEFAULT	= 0
    } 	CLRDataFollowStubInFlag;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0001_0008
    {	CLRDATA_FOLLOW_STUB_INTERMEDIATE	= 0,
	CLRDATA_FOLLOW_STUB_EXIT	= 0x1
    } 	CLRDataFollowStubOutFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0001_v0_0_s_ifspec;

#ifndef __IXCLRDataProcess_INTERFACE_DEFINED__
#define __IXCLRDataProcess_INTERFACE_DEFINED__

/* interface IXCLRDataProcess */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataProcess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5c552ab6-fc09-4cb3-8e36-22fa03c798b7")
    IXCLRDataProcess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumTasks( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTask( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTask **task) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumTasks( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTaskByOSThreadID( 
            /* [in] */ ULONG32 osThreadID,
            /* [out] */ IXCLRDataTask **task) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTaskByUniqueID( 
            /* [in] */ ULONG64 taskID,
            /* [out] */ IXCLRDataTask **task) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataProcess *process) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManagedObject( 
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDesiredExecutionState( 
            /* [out] */ ULONG32 *state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDesiredExecutionState( 
            /* [in] */ ULONG32 state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAddressType( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [out] */ CLRDataAddressType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRuntimeNameByAddress( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ CLRDATA_ADDRESS *displacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumAppDomains( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAppDomain( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAppDomain **appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumAppDomains( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppDomainByUniqueID( 
            /* [in] */ ULONG64 id,
            /* [out] */ IXCLRDataAppDomain **appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumAssemblies( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAssembly( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAssembly **assembly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumAssemblies( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumModules( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumModule( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumModules( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetModuleByAddress( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodInstancesByAddress( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodInstanceByAddress( 
            /* [in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodInstancesByAddress( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataByAddress( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataValue **value,
            /* [out] */ CLRDATA_ADDRESS *displacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExceptionStateByExceptionRecord( 
            /* [in] */ EXCEPTION_RECORD64 *record,
            /* [out] */ IXCLRDataExceptionState **exState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateExceptionRecordToNotification( 
            /* [in] */ EXCEPTION_RECORD64 *record,
            /* [in] */ IXCLRDataExceptionNotification *notify) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateMemoryValue( 
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [in] */ IXCLRDataTypeInstance *type,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllTypeNotifications( 
            IXCLRDataModule *mod,
            ULONG32 flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllCodeNotifications( 
            IXCLRDataModule *mod,
            ULONG32 flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeNotifications( 
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdTypeDef tokens[  ],
            /* [size_is][out] */ ULONG32 flags[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTypeNotifications( 
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdTypeDef tokens[  ],
            /* [size_is][in] */ ULONG32 flags[  ],
            /* [in] */ ULONG32 singleFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodeNotifications( 
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdMethodDef tokens[  ],
            /* [size_is][out] */ ULONG32 flags[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCodeNotifications( 
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdMethodDef tokens[  ],
            /* [size_is][in] */ ULONG32 flags[  ],
            /* [in] */ ULONG32 singleFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOtherNotificationFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOtherNotificationFlags( 
            /* [in] */ ULONG32 flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodDefinitionsByAddress( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodDefinitionByAddress( 
            /* [in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodDefinitionsByAddress( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FollowStub( 
            /* [in] */ ULONG32 inFlags,
            /* [in] */ CLRDATA_ADDRESS inAddr,
            /* [in] */ CLRDATA_FOLLOW_STUB_BUFFER *inBuffer,
            /* [out] */ CLRDATA_ADDRESS *outAddr,
            /* [out] */ CLRDATA_FOLLOW_STUB_BUFFER *outBuffer,
            /* [out] */ ULONG32 *outFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FollowStub2( 
            /* [in] */ IXCLRDataTask *task,
            /* [in] */ ULONG32 inFlags,
            /* [in] */ CLRDATA_ADDRESS inAddr,
            /* [in] */ CLRDATA_FOLLOW_STUB_BUFFER *inBuffer,
            /* [out] */ CLRDATA_ADDRESS *outAddr,
            /* [out] */ CLRDATA_FOLLOW_STUB_BUFFER *outBuffer,
            /* [out] */ ULONG32 *outFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataProcessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataProcess * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataProcess * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataProcess * This);
        
        HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IXCLRDataProcess * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumTasks )( 
            IXCLRDataProcess * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumTask )( 
            IXCLRDataProcess * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTask **task);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumTasks )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetTaskByOSThreadID )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 osThreadID,
            /* [out] */ IXCLRDataTask **task);
        
        HRESULT ( STDMETHODCALLTYPE *GetTaskByUniqueID )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG64 taskID,
            /* [out] */ IXCLRDataTask **task);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataProcess * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataProcess * This,
            /* [in] */ IXCLRDataProcess *process);
        
        HRESULT ( STDMETHODCALLTYPE *GetManagedObject )( 
            IXCLRDataProcess * This,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetDesiredExecutionState )( 
            IXCLRDataProcess * This,
            /* [out] */ ULONG32 *state);
        
        HRESULT ( STDMETHODCALLTYPE *SetDesiredExecutionState )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 state);
        
        HRESULT ( STDMETHODCALLTYPE *GetAddressType )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [out] */ CLRDataAddressType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeNameByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ CLRDATA_ADDRESS *displacement);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumAppDomains )( 
            IXCLRDataProcess * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAppDomain )( 
            IXCLRDataProcess * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAppDomain **appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumAppDomains )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppDomainByUniqueID )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG64 id,
            /* [out] */ IXCLRDataAppDomain **appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumAssemblies )( 
            IXCLRDataProcess * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAssembly )( 
            IXCLRDataProcess * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAssembly **assembly);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumAssemblies )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumModules )( 
            IXCLRDataProcess * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumModule )( 
            IXCLRDataProcess * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumModules )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodInstancesByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodInstanceByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **method);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodInstancesByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetDataByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataValue **value,
            /* [out] */ CLRDATA_ADDRESS *displacement);
        
        HRESULT ( STDMETHODCALLTYPE *GetExceptionStateByExceptionRecord )( 
            IXCLRDataProcess * This,
            /* [in] */ EXCEPTION_RECORD64 *record,
            /* [out] */ IXCLRDataExceptionState **exState);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateExceptionRecordToNotification )( 
            IXCLRDataProcess * This,
            /* [in] */ EXCEPTION_RECORD64 *record,
            /* [in] */ IXCLRDataExceptionNotification *notify);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMemoryValue )( 
            IXCLRDataProcess * This,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [in] */ IXCLRDataTypeInstance *type,
            /* [in] */ CLRDATA_ADDRESS addr,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllTypeNotifications )( 
            IXCLRDataProcess * This,
            IXCLRDataModule *mod,
            ULONG32 flags);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllCodeNotifications )( 
            IXCLRDataProcess * This,
            IXCLRDataModule *mod,
            ULONG32 flags);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeNotifications )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdTypeDef tokens[  ],
            /* [size_is][out] */ ULONG32 flags[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetTypeNotifications )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdTypeDef tokens[  ],
            /* [size_is][in] */ ULONG32 flags[  ],
            /* [in] */ ULONG32 singleFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeNotifications )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdMethodDef tokens[  ],
            /* [size_is][out] */ ULONG32 flags[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetCodeNotifications )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 numTokens,
            /* [size_is][in] */ IXCLRDataModule *mods[  ],
            /* [in] */ IXCLRDataModule *singleMod,
            /* [size_is][in] */ mdMethodDef tokens[  ],
            /* [size_is][in] */ ULONG32 flags[  ],
            /* [in] */ ULONG32 singleFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetOtherNotificationFlags )( 
            IXCLRDataProcess * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *SetOtherNotificationFlags )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 flags);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodDefinitionsByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodDefinitionByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **method);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodDefinitionsByAddress )( 
            IXCLRDataProcess * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *FollowStub )( 
            IXCLRDataProcess * This,
            /* [in] */ ULONG32 inFlags,
            /* [in] */ CLRDATA_ADDRESS inAddr,
            /* [in] */ CLRDATA_FOLLOW_STUB_BUFFER *inBuffer,
            /* [out] */ CLRDATA_ADDRESS *outAddr,
            /* [out] */ CLRDATA_FOLLOW_STUB_BUFFER *outBuffer,
            /* [out] */ ULONG32 *outFlags);
        
        HRESULT ( STDMETHODCALLTYPE *FollowStub2 )( 
            IXCLRDataProcess * This,
            /* [in] */ IXCLRDataTask *task,
            /* [in] */ ULONG32 inFlags,
            /* [in] */ CLRDATA_ADDRESS inAddr,
            /* [in] */ CLRDATA_FOLLOW_STUB_BUFFER *inBuffer,
            /* [out] */ CLRDATA_ADDRESS *outAddr,
            /* [out] */ CLRDATA_FOLLOW_STUB_BUFFER *outBuffer,
            /* [out] */ ULONG32 *outFlags);
        
        END_INTERFACE
    } IXCLRDataProcessVtbl;

    interface IXCLRDataProcess
    {
        CONST_VTBL struct IXCLRDataProcessVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataProcess_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataProcess_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataProcess_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataProcess_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IXCLRDataProcess_StartEnumTasks(This,handle)	\
    ( (This)->lpVtbl -> StartEnumTasks(This,handle) ) 

#define IXCLRDataProcess_EnumTask(This,handle,task)	\
    ( (This)->lpVtbl -> EnumTask(This,handle,task) ) 

#define IXCLRDataProcess_EndEnumTasks(This,handle)	\
    ( (This)->lpVtbl -> EndEnumTasks(This,handle) ) 

#define IXCLRDataProcess_GetTaskByOSThreadID(This,osThreadID,task)	\
    ( (This)->lpVtbl -> GetTaskByOSThreadID(This,osThreadID,task) ) 

#define IXCLRDataProcess_GetTaskByUniqueID(This,taskID,task)	\
    ( (This)->lpVtbl -> GetTaskByUniqueID(This,taskID,task) ) 

#define IXCLRDataProcess_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataProcess_IsSameObject(This,process)	\
    ( (This)->lpVtbl -> IsSameObject(This,process) ) 

#define IXCLRDataProcess_GetManagedObject(This,value)	\
    ( (This)->lpVtbl -> GetManagedObject(This,value) ) 

#define IXCLRDataProcess_GetDesiredExecutionState(This,state)	\
    ( (This)->lpVtbl -> GetDesiredExecutionState(This,state) ) 

#define IXCLRDataProcess_SetDesiredExecutionState(This,state)	\
    ( (This)->lpVtbl -> SetDesiredExecutionState(This,state) ) 

#define IXCLRDataProcess_GetAddressType(This,address,type)	\
    ( (This)->lpVtbl -> GetAddressType(This,address,type) ) 

#define IXCLRDataProcess_GetRuntimeNameByAddress(This,address,flags,bufLen,nameLen,nameBuf,displacement)	\
    ( (This)->lpVtbl -> GetRuntimeNameByAddress(This,address,flags,bufLen,nameLen,nameBuf,displacement) ) 

#define IXCLRDataProcess_StartEnumAppDomains(This,handle)	\
    ( (This)->lpVtbl -> StartEnumAppDomains(This,handle) ) 

#define IXCLRDataProcess_EnumAppDomain(This,handle,appDomain)	\
    ( (This)->lpVtbl -> EnumAppDomain(This,handle,appDomain) ) 

#define IXCLRDataProcess_EndEnumAppDomains(This,handle)	\
    ( (This)->lpVtbl -> EndEnumAppDomains(This,handle) ) 

#define IXCLRDataProcess_GetAppDomainByUniqueID(This,id,appDomain)	\
    ( (This)->lpVtbl -> GetAppDomainByUniqueID(This,id,appDomain) ) 

#define IXCLRDataProcess_StartEnumAssemblies(This,handle)	\
    ( (This)->lpVtbl -> StartEnumAssemblies(This,handle) ) 

#define IXCLRDataProcess_EnumAssembly(This,handle,assembly)	\
    ( (This)->lpVtbl -> EnumAssembly(This,handle,assembly) ) 

#define IXCLRDataProcess_EndEnumAssemblies(This,handle)	\
    ( (This)->lpVtbl -> EndEnumAssemblies(This,handle) ) 

#define IXCLRDataProcess_StartEnumModules(This,handle)	\
    ( (This)->lpVtbl -> StartEnumModules(This,handle) ) 

#define IXCLRDataProcess_EnumModule(This,handle,mod)	\
    ( (This)->lpVtbl -> EnumModule(This,handle,mod) ) 

#define IXCLRDataProcess_EndEnumModules(This,handle)	\
    ( (This)->lpVtbl -> EndEnumModules(This,handle) ) 

#define IXCLRDataProcess_GetModuleByAddress(This,address,mod)	\
    ( (This)->lpVtbl -> GetModuleByAddress(This,address,mod) ) 

#define IXCLRDataProcess_StartEnumMethodInstancesByAddress(This,address,appDomain,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodInstancesByAddress(This,address,appDomain,handle) ) 

#define IXCLRDataProcess_EnumMethodInstanceByAddress(This,handle,method)	\
    ( (This)->lpVtbl -> EnumMethodInstanceByAddress(This,handle,method) ) 

#define IXCLRDataProcess_EndEnumMethodInstancesByAddress(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodInstancesByAddress(This,handle) ) 

#define IXCLRDataProcess_GetDataByAddress(This,address,flags,appDomain,tlsTask,bufLen,nameLen,nameBuf,value,displacement)	\
    ( (This)->lpVtbl -> GetDataByAddress(This,address,flags,appDomain,tlsTask,bufLen,nameLen,nameBuf,value,displacement) ) 

#define IXCLRDataProcess_GetExceptionStateByExceptionRecord(This,record,exState)	\
    ( (This)->lpVtbl -> GetExceptionStateByExceptionRecord(This,record,exState) ) 

#define IXCLRDataProcess_TranslateExceptionRecordToNotification(This,record,notify)	\
    ( (This)->lpVtbl -> TranslateExceptionRecordToNotification(This,record,notify) ) 

#define IXCLRDataProcess_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataProcess_CreateMemoryValue(This,appDomain,tlsTask,type,addr,value)	\
    ( (This)->lpVtbl -> CreateMemoryValue(This,appDomain,tlsTask,type,addr,value) ) 

#define IXCLRDataProcess_SetAllTypeNotifications(This,mod,flags)	\
    ( (This)->lpVtbl -> SetAllTypeNotifications(This,mod,flags) ) 

#define IXCLRDataProcess_SetAllCodeNotifications(This,mod,flags)	\
    ( (This)->lpVtbl -> SetAllCodeNotifications(This,mod,flags) ) 

#define IXCLRDataProcess_GetTypeNotifications(This,numTokens,mods,singleMod,tokens,flags)	\
    ( (This)->lpVtbl -> GetTypeNotifications(This,numTokens,mods,singleMod,tokens,flags) ) 

#define IXCLRDataProcess_SetTypeNotifications(This,numTokens,mods,singleMod,tokens,flags,singleFlags)	\
    ( (This)->lpVtbl -> SetTypeNotifications(This,numTokens,mods,singleMod,tokens,flags,singleFlags) ) 

#define IXCLRDataProcess_GetCodeNotifications(This,numTokens,mods,singleMod,tokens,flags)	\
    ( (This)->lpVtbl -> GetCodeNotifications(This,numTokens,mods,singleMod,tokens,flags) ) 

#define IXCLRDataProcess_SetCodeNotifications(This,numTokens,mods,singleMod,tokens,flags,singleFlags)	\
    ( (This)->lpVtbl -> SetCodeNotifications(This,numTokens,mods,singleMod,tokens,flags,singleFlags) ) 

#define IXCLRDataProcess_GetOtherNotificationFlags(This,flags)	\
    ( (This)->lpVtbl -> GetOtherNotificationFlags(This,flags) ) 

#define IXCLRDataProcess_SetOtherNotificationFlags(This,flags)	\
    ( (This)->lpVtbl -> SetOtherNotificationFlags(This,flags) ) 

#define IXCLRDataProcess_StartEnumMethodDefinitionsByAddress(This,address,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodDefinitionsByAddress(This,address,handle) ) 

#define IXCLRDataProcess_EnumMethodDefinitionByAddress(This,handle,method)	\
    ( (This)->lpVtbl -> EnumMethodDefinitionByAddress(This,handle,method) ) 

#define IXCLRDataProcess_EndEnumMethodDefinitionsByAddress(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodDefinitionsByAddress(This,handle) ) 

#define IXCLRDataProcess_FollowStub(This,inFlags,inAddr,inBuffer,outAddr,outBuffer,outFlags)	\
    ( (This)->lpVtbl -> FollowStub(This,inFlags,inAddr,inBuffer,outAddr,outBuffer,outFlags) ) 

#define IXCLRDataProcess_FollowStub2(This,task,inFlags,inAddr,inBuffer,outAddr,outBuffer,outFlags)	\
    ( (This)->lpVtbl -> FollowStub2(This,task,inFlags,inAddr,inBuffer,outAddr,outBuffer,outFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataProcess_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0002 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0002_0001
    {	CLRDATA_DOMAIN_DEFAULT	= 0
    } 	CLRDataAppDomainFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0002_v0_0_s_ifspec;

#ifndef __IXCLRDataAppDomain_INTERFACE_DEFINED__
#define __IXCLRDataAppDomain_INTERFACE_DEFINED__

/* interface IXCLRDataAppDomain */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataAppDomain;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7CA04601-C702-4670-A63C-FA44F7DA7BD5")
    IXCLRDataAppDomain : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProcess( 
            /* [out] */ IXCLRDataProcess **process) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUniqueID( 
            /* [out] */ ULONG64 *id) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataAppDomain *appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManagedObject( 
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataAppDomainVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataAppDomain * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataAppDomain * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataAppDomain * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProcess )( 
            IXCLRDataAppDomain * This,
            /* [out] */ IXCLRDataProcess **process);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataAppDomain * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetUniqueID )( 
            IXCLRDataAppDomain * This,
            /* [out] */ ULONG64 *id);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataAppDomain * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataAppDomain * This,
            /* [in] */ IXCLRDataAppDomain *appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *GetManagedObject )( 
            IXCLRDataAppDomain * This,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataAppDomain * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        END_INTERFACE
    } IXCLRDataAppDomainVtbl;

    interface IXCLRDataAppDomain
    {
        CONST_VTBL struct IXCLRDataAppDomainVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataAppDomain_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataAppDomain_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataAppDomain_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataAppDomain_GetProcess(This,process)	\
    ( (This)->lpVtbl -> GetProcess(This,process) ) 

#define IXCLRDataAppDomain_GetName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetName(This,bufLen,nameLen,name) ) 

#define IXCLRDataAppDomain_GetUniqueID(This,id)	\
    ( (This)->lpVtbl -> GetUniqueID(This,id) ) 

#define IXCLRDataAppDomain_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataAppDomain_IsSameObject(This,appDomain)	\
    ( (This)->lpVtbl -> IsSameObject(This,appDomain) ) 

#define IXCLRDataAppDomain_GetManagedObject(This,value)	\
    ( (This)->lpVtbl -> GetManagedObject(This,value) ) 

#define IXCLRDataAppDomain_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataAppDomain_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0003 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0003_0001
    {	CLRDATA_ASSEMBLY_DEFAULT	= 0
    } 	CLRDataAssemblyFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0003_v0_0_s_ifspec;

#ifndef __IXCLRDataAssembly_INTERFACE_DEFINED__
#define __IXCLRDataAssembly_INTERFACE_DEFINED__

/* interface IXCLRDataAssembly */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataAssembly;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2FA17588-43C2-46ab-9B51-C8F01E39C9AC")
    IXCLRDataAssembly : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartEnumModules( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumModule( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumModules( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataAssembly *assembly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumAppDomains( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAppDomain( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAppDomain **appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumAppDomains( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataAssemblyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataAssembly * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataAssembly * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataAssembly * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumModules )( 
            IXCLRDataAssembly * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumModule )( 
            IXCLRDataAssembly * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumModules )( 
            IXCLRDataAssembly * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataAssembly * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXCLRDataAssembly * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataAssembly * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataAssembly * This,
            /* [in] */ IXCLRDataAssembly *assembly);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataAssembly * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumAppDomains )( 
            IXCLRDataAssembly * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAppDomain )( 
            IXCLRDataAssembly * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAppDomain **appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumAppDomains )( 
            IXCLRDataAssembly * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            IXCLRDataAssembly * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        END_INTERFACE
    } IXCLRDataAssemblyVtbl;

    interface IXCLRDataAssembly
    {
        CONST_VTBL struct IXCLRDataAssemblyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataAssembly_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataAssembly_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataAssembly_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataAssembly_StartEnumModules(This,handle)	\
    ( (This)->lpVtbl -> StartEnumModules(This,handle) ) 

#define IXCLRDataAssembly_EnumModule(This,handle,mod)	\
    ( (This)->lpVtbl -> EnumModule(This,handle,mod) ) 

#define IXCLRDataAssembly_EndEnumModules(This,handle)	\
    ( (This)->lpVtbl -> EndEnumModules(This,handle) ) 

#define IXCLRDataAssembly_GetName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetName(This,bufLen,nameLen,name) ) 

#define IXCLRDataAssembly_GetFileName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetFileName(This,bufLen,nameLen,name) ) 

#define IXCLRDataAssembly_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataAssembly_IsSameObject(This,assembly)	\
    ( (This)->lpVtbl -> IsSameObject(This,assembly) ) 

#define IXCLRDataAssembly_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataAssembly_StartEnumAppDomains(This,handle)	\
    ( (This)->lpVtbl -> StartEnumAppDomains(This,handle) ) 

#define IXCLRDataAssembly_EnumAppDomain(This,handle,appDomain)	\
    ( (This)->lpVtbl -> EnumAppDomain(This,handle,appDomain) ) 

#define IXCLRDataAssembly_EndEnumAppDomains(This,handle)	\
    ( (This)->lpVtbl -> EndEnumAppDomains(This,handle) ) 

#define IXCLRDataAssembly_GetDisplayName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetDisplayName(This,bufLen,nameLen,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataAssembly_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0004 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0004_0001
    {	CLRDATA_MODULE_DEFAULT	= 0,
	CLRDATA_MODULE_IS_DYNAMIC	= 0x1,
	CLRDATA_MODULE_IS_MEMORY_STREAM	= 0x2
    } 	CLRDataModuleFlag;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0004_0002
    {	CLRDATA_MODULE_PE_FILE	= 0,
	CLRDATA_MODULE_PREJIT_FILE	= ( CLRDATA_MODULE_PE_FILE + 1 ) ,
	CLRDATA_MODULE_MEMORY_STREAM	= ( CLRDATA_MODULE_PREJIT_FILE + 1 ) ,
	CLRDATA_MODULE_OTHER	= ( CLRDATA_MODULE_MEMORY_STREAM + 1 ) 
    } 	CLRDataModuleExtentType;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_xclrdata_0000_0004_0003
    {
    CLRDATA_ADDRESS base;
    ULONG32 length;
    CLRDataModuleExtentType type;
    } 	CLRDATA_MODULE_EXTENT;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0004_0004
    {	CLRDATA_TYPENOTIFY_NONE	= 0,
	CLRDATA_TYPENOTIFY_LOADED	= 0x1,
	CLRDATA_TYPENOTIFY_UNLOADED	= 0x2
    } 	CLRDataTypeNotification;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0004_0005
    {	CLRDATA_METHNOTIFY_NONE	= 0,
	CLRDATA_METHNOTIFY_GENERATED	= 0x1,
	CLRDATA_METHNOTIFY_DISCARDED	= 0x2
    } 	CLRDataMethodCodeNotification;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0004_v0_0_s_ifspec;

#ifndef __IXCLRDataModule_INTERFACE_DEFINED__
#define __IXCLRDataModule_INTERFACE_DEFINED__

/* interface IXCLRDataModule */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88E32849-0A0A-4cb0-9022-7CD2E9E139E2")
    IXCLRDataModule : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartEnumAssemblies( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAssembly( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAssembly **assembly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumAssemblies( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumTypeDefinitions( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTypeDefinition( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumTypeDefinitions( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumTypeInstances( 
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTypeInstance( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeInstance **typeInstance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumTypeInstances( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumTypeDefinitionsByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTypeDefinitionByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumTypeDefinitionsByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumTypeInstancesByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTypeInstanceByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeInstance **type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumTypeInstancesByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeDefinitionByToken( 
            /* [in] */ mdTypeDef token,
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodDefinitionsByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodDefinitionByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodDefinitionsByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodInstancesByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodInstanceByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodInstancesByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMethodDefinitionByToken( 
            /* [in] */ mdMethodDef token,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumDataByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumDataByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumDataByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataModule *mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumExtents( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumExtent( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ CLRDATA_MODULE_EXTENT *extent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumExtents( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumAppDomains( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAppDomain( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAppDomain **appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumAppDomains( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersionId( 
            /* [out] */ GUID *vid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataModuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataModule * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataModule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataModule * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumAssemblies )( 
            IXCLRDataModule * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAssembly )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAssembly **assembly);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumAssemblies )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumTypeDefinitions )( 
            IXCLRDataModule * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumTypeDefinition )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumTypeDefinitions )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumTypeInstances )( 
            IXCLRDataModule * This,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumTypeInstance )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeInstance **typeInstance);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumTypeInstances )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumTypeDefinitionsByName )( 
            IXCLRDataModule * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumTypeDefinitionByName )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **type);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumTypeDefinitionsByName )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumTypeInstancesByName )( 
            IXCLRDataModule * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumTypeInstanceByName )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeInstance **type);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumTypeInstancesByName )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeDefinitionByToken )( 
            IXCLRDataModule * This,
            /* [in] */ mdTypeDef token,
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodDefinitionsByName )( 
            IXCLRDataModule * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodDefinitionByName )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **method);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodDefinitionsByName )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodInstancesByName )( 
            IXCLRDataModule * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodInstanceByName )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **method);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodInstancesByName )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetMethodDefinitionByToken )( 
            IXCLRDataModule * This,
            /* [in] */ mdMethodDef token,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumDataByName )( 
            IXCLRDataModule * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDataByName )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumDataByName )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataModule * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXCLRDataModule * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataModule * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataModule * This,
            /* [in] */ IXCLRDataModule *mod);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumExtents )( 
            IXCLRDataModule * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumExtent )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ CLRDATA_MODULE_EXTENT *extent);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumExtents )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataModule * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumAppDomains )( 
            IXCLRDataModule * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAppDomain )( 
            IXCLRDataModule * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataAppDomain **appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumAppDomains )( 
            IXCLRDataModule * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetVersionId )( 
            IXCLRDataModule * This,
            /* [out] */ GUID *vid);
        
        END_INTERFACE
    } IXCLRDataModuleVtbl;

    interface IXCLRDataModule
    {
        CONST_VTBL struct IXCLRDataModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataModule_StartEnumAssemblies(This,handle)	\
    ( (This)->lpVtbl -> StartEnumAssemblies(This,handle) ) 

#define IXCLRDataModule_EnumAssembly(This,handle,assembly)	\
    ( (This)->lpVtbl -> EnumAssembly(This,handle,assembly) ) 

#define IXCLRDataModule_EndEnumAssemblies(This,handle)	\
    ( (This)->lpVtbl -> EndEnumAssemblies(This,handle) ) 

#define IXCLRDataModule_StartEnumTypeDefinitions(This,handle)	\
    ( (This)->lpVtbl -> StartEnumTypeDefinitions(This,handle) ) 

#define IXCLRDataModule_EnumTypeDefinition(This,handle,typeDefinition)	\
    ( (This)->lpVtbl -> EnumTypeDefinition(This,handle,typeDefinition) ) 

#define IXCLRDataModule_EndEnumTypeDefinitions(This,handle)	\
    ( (This)->lpVtbl -> EndEnumTypeDefinitions(This,handle) ) 

#define IXCLRDataModule_StartEnumTypeInstances(This,appDomain,handle)	\
    ( (This)->lpVtbl -> StartEnumTypeInstances(This,appDomain,handle) ) 

#define IXCLRDataModule_EnumTypeInstance(This,handle,typeInstance)	\
    ( (This)->lpVtbl -> EnumTypeInstance(This,handle,typeInstance) ) 

#define IXCLRDataModule_EndEnumTypeInstances(This,handle)	\
    ( (This)->lpVtbl -> EndEnumTypeInstances(This,handle) ) 

#define IXCLRDataModule_StartEnumTypeDefinitionsByName(This,name,flags,handle)	\
    ( (This)->lpVtbl -> StartEnumTypeDefinitionsByName(This,name,flags,handle) ) 

#define IXCLRDataModule_EnumTypeDefinitionByName(This,handle,type)	\
    ( (This)->lpVtbl -> EnumTypeDefinitionByName(This,handle,type) ) 

#define IXCLRDataModule_EndEnumTypeDefinitionsByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumTypeDefinitionsByName(This,handle) ) 

#define IXCLRDataModule_StartEnumTypeInstancesByName(This,name,flags,appDomain,handle)	\
    ( (This)->lpVtbl -> StartEnumTypeInstancesByName(This,name,flags,appDomain,handle) ) 

#define IXCLRDataModule_EnumTypeInstanceByName(This,handle,type)	\
    ( (This)->lpVtbl -> EnumTypeInstanceByName(This,handle,type) ) 

#define IXCLRDataModule_EndEnumTypeInstancesByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumTypeInstancesByName(This,handle) ) 

#define IXCLRDataModule_GetTypeDefinitionByToken(This,token,typeDefinition)	\
    ( (This)->lpVtbl -> GetTypeDefinitionByToken(This,token,typeDefinition) ) 

#define IXCLRDataModule_StartEnumMethodDefinitionsByName(This,name,flags,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodDefinitionsByName(This,name,flags,handle) ) 

#define IXCLRDataModule_EnumMethodDefinitionByName(This,handle,method)	\
    ( (This)->lpVtbl -> EnumMethodDefinitionByName(This,handle,method) ) 

#define IXCLRDataModule_EndEnumMethodDefinitionsByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodDefinitionsByName(This,handle) ) 

#define IXCLRDataModule_StartEnumMethodInstancesByName(This,name,flags,appDomain,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodInstancesByName(This,name,flags,appDomain,handle) ) 

#define IXCLRDataModule_EnumMethodInstanceByName(This,handle,method)	\
    ( (This)->lpVtbl -> EnumMethodInstanceByName(This,handle,method) ) 

#define IXCLRDataModule_EndEnumMethodInstancesByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodInstancesByName(This,handle) ) 

#define IXCLRDataModule_GetMethodDefinitionByToken(This,token,methodDefinition)	\
    ( (This)->lpVtbl -> GetMethodDefinitionByToken(This,token,methodDefinition) ) 

#define IXCLRDataModule_StartEnumDataByName(This,name,flags,appDomain,tlsTask,handle)	\
    ( (This)->lpVtbl -> StartEnumDataByName(This,name,flags,appDomain,tlsTask,handle) ) 

#define IXCLRDataModule_EnumDataByName(This,handle,value)	\
    ( (This)->lpVtbl -> EnumDataByName(This,handle,value) ) 

#define IXCLRDataModule_EndEnumDataByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumDataByName(This,handle) ) 

#define IXCLRDataModule_GetName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetName(This,bufLen,nameLen,name) ) 

#define IXCLRDataModule_GetFileName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetFileName(This,bufLen,nameLen,name) ) 

#define IXCLRDataModule_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataModule_IsSameObject(This,mod)	\
    ( (This)->lpVtbl -> IsSameObject(This,mod) ) 

#define IXCLRDataModule_StartEnumExtents(This,handle)	\
    ( (This)->lpVtbl -> StartEnumExtents(This,handle) ) 

#define IXCLRDataModule_EnumExtent(This,handle,extent)	\
    ( (This)->lpVtbl -> EnumExtent(This,handle,extent) ) 

#define IXCLRDataModule_EndEnumExtents(This,handle)	\
    ( (This)->lpVtbl -> EndEnumExtents(This,handle) ) 

#define IXCLRDataModule_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataModule_StartEnumAppDomains(This,handle)	\
    ( (This)->lpVtbl -> StartEnumAppDomains(This,handle) ) 

#define IXCLRDataModule_EnumAppDomain(This,handle,appDomain)	\
    ( (This)->lpVtbl -> EnumAppDomain(This,handle,appDomain) ) 

#define IXCLRDataModule_EndEnumAppDomains(This,handle)	\
    ( (This)->lpVtbl -> EndEnumAppDomains(This,handle) ) 

#define IXCLRDataModule_GetVersionId(This,vid)	\
    ( (This)->lpVtbl -> GetVersionId(This,vid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataModule_INTERFACE_DEFINED__ */


#ifndef __IXCLRDataTypeDefinition_INTERFACE_DEFINED__
#define __IXCLRDataTypeDefinition_INTERFACE_DEFINED__

/* interface IXCLRDataTypeDefinition */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataTypeDefinition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4675666C-C275-45b8-9F6C-AB165D5C1E09")
    IXCLRDataTypeDefinition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetModule( 
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodDefinitions( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodDefinition( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodDefinitions( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodDefinitionsByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodDefinitionByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodDefinitionsByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMethodDefinitionByToken( 
            /* [in] */ mdMethodDef token,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumInstances( 
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInstance( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeInstance **instance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumInstances( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTokenAndScope( 
            /* [out] */ mdTypeDef *token,
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCorElementType( 
            /* [out] */ CorElementType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataTypeDefinition *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArrayRank( 
            /* [out] */ ULONG32 *rank) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBase( 
            /* [out] */ IXCLRDataTypeDefinition **base) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumFields( 
            /* [in] */ ULONG32 flags,
            /* [out] */ ULONG32 *numFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumFields( 
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumField( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumFields( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumFieldsByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 nameFlags,
            /* [in] */ ULONG32 fieldFlags,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFieldByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumFieldsByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldByToken( 
            /* [in] */ mdFieldDef token,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeNotification( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTypeNotification( 
            /* [in] */ ULONG32 flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumField2( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFieldByName2( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldByToken2( 
            /* [in] */ IXCLRDataModule *tokenScope,
            /* [in] */ mdFieldDef token,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataTypeDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataTypeDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataTypeDefinition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetModule )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodDefinitions )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodDefinition )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodDefinitions )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodDefinitionsByName )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodDefinitionByName )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodDefinition **method);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodDefinitionsByName )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetMethodDefinitionByToken )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ mdMethodDef token,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumInstances )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstance )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeInstance **instance);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumInstances )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndScope )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ mdTypeDef *token,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *GetCorElementType )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ CorElementType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ IXCLRDataTypeDefinition *type);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetArrayRank )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ ULONG32 *rank);
        
        HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ IXCLRDataTypeDefinition **base);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumFields )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ ULONG32 flags,
            /* [out] */ ULONG32 *numFields);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumFields )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumField )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumFields )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumFieldsByName )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 nameFlags,
            /* [in] */ ULONG32 fieldFlags,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFieldByName )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumFieldsByName )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldByToken )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ mdFieldDef token,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeNotification )( 
            IXCLRDataTypeDefinition * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *SetTypeNotification )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ ULONG32 flags);
        
        HRESULT ( STDMETHODCALLTYPE *EnumField2 )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFieldByName2 )( 
            IXCLRDataTypeDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldByToken2 )( 
            IXCLRDataTypeDefinition * This,
            /* [in] */ IXCLRDataModule *tokenScope,
            /* [in] */ mdFieldDef token,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataTypeDefinition **type,
            /* [out] */ ULONG32 *flags);
        
        END_INTERFACE
    } IXCLRDataTypeDefinitionVtbl;

    interface IXCLRDataTypeDefinition
    {
        CONST_VTBL struct IXCLRDataTypeDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataTypeDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataTypeDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataTypeDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataTypeDefinition_GetModule(This,mod)	\
    ( (This)->lpVtbl -> GetModule(This,mod) ) 

#define IXCLRDataTypeDefinition_StartEnumMethodDefinitions(This,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodDefinitions(This,handle) ) 

#define IXCLRDataTypeDefinition_EnumMethodDefinition(This,handle,methodDefinition)	\
    ( (This)->lpVtbl -> EnumMethodDefinition(This,handle,methodDefinition) ) 

#define IXCLRDataTypeDefinition_EndEnumMethodDefinitions(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodDefinitions(This,handle) ) 

#define IXCLRDataTypeDefinition_StartEnumMethodDefinitionsByName(This,name,flags,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodDefinitionsByName(This,name,flags,handle) ) 

#define IXCLRDataTypeDefinition_EnumMethodDefinitionByName(This,handle,method)	\
    ( (This)->lpVtbl -> EnumMethodDefinitionByName(This,handle,method) ) 

#define IXCLRDataTypeDefinition_EndEnumMethodDefinitionsByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodDefinitionsByName(This,handle) ) 

#define IXCLRDataTypeDefinition_GetMethodDefinitionByToken(This,token,methodDefinition)	\
    ( (This)->lpVtbl -> GetMethodDefinitionByToken(This,token,methodDefinition) ) 

#define IXCLRDataTypeDefinition_StartEnumInstances(This,appDomain,handle)	\
    ( (This)->lpVtbl -> StartEnumInstances(This,appDomain,handle) ) 

#define IXCLRDataTypeDefinition_EnumInstance(This,handle,instance)	\
    ( (This)->lpVtbl -> EnumInstance(This,handle,instance) ) 

#define IXCLRDataTypeDefinition_EndEnumInstances(This,handle)	\
    ( (This)->lpVtbl -> EndEnumInstances(This,handle) ) 

#define IXCLRDataTypeDefinition_GetName(This,flags,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetName(This,flags,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataTypeDefinition_GetTokenAndScope(This,token,mod)	\
    ( (This)->lpVtbl -> GetTokenAndScope(This,token,mod) ) 

#define IXCLRDataTypeDefinition_GetCorElementType(This,type)	\
    ( (This)->lpVtbl -> GetCorElementType(This,type) ) 

#define IXCLRDataTypeDefinition_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataTypeDefinition_IsSameObject(This,type)	\
    ( (This)->lpVtbl -> IsSameObject(This,type) ) 

#define IXCLRDataTypeDefinition_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataTypeDefinition_GetArrayRank(This,rank)	\
    ( (This)->lpVtbl -> GetArrayRank(This,rank) ) 

#define IXCLRDataTypeDefinition_GetBase(This,base)	\
    ( (This)->lpVtbl -> GetBase(This,base) ) 

#define IXCLRDataTypeDefinition_GetNumFields(This,flags,numFields)	\
    ( (This)->lpVtbl -> GetNumFields(This,flags,numFields) ) 

#define IXCLRDataTypeDefinition_StartEnumFields(This,flags,handle)	\
    ( (This)->lpVtbl -> StartEnumFields(This,flags,handle) ) 

#define IXCLRDataTypeDefinition_EnumField(This,handle,nameBufLen,nameLen,nameBuf,type,flags,token)	\
    ( (This)->lpVtbl -> EnumField(This,handle,nameBufLen,nameLen,nameBuf,type,flags,token) ) 

#define IXCLRDataTypeDefinition_EndEnumFields(This,handle)	\
    ( (This)->lpVtbl -> EndEnumFields(This,handle) ) 

#define IXCLRDataTypeDefinition_StartEnumFieldsByName(This,name,nameFlags,fieldFlags,handle)	\
    ( (This)->lpVtbl -> StartEnumFieldsByName(This,name,nameFlags,fieldFlags,handle) ) 

#define IXCLRDataTypeDefinition_EnumFieldByName(This,handle,type,flags,token)	\
    ( (This)->lpVtbl -> EnumFieldByName(This,handle,type,flags,token) ) 

#define IXCLRDataTypeDefinition_EndEnumFieldsByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumFieldsByName(This,handle) ) 

#define IXCLRDataTypeDefinition_GetFieldByToken(This,token,nameBufLen,nameLen,nameBuf,type,flags)	\
    ( (This)->lpVtbl -> GetFieldByToken(This,token,nameBufLen,nameLen,nameBuf,type,flags) ) 

#define IXCLRDataTypeDefinition_GetTypeNotification(This,flags)	\
    ( (This)->lpVtbl -> GetTypeNotification(This,flags) ) 

#define IXCLRDataTypeDefinition_SetTypeNotification(This,flags)	\
    ( (This)->lpVtbl -> SetTypeNotification(This,flags) ) 

#define IXCLRDataTypeDefinition_EnumField2(This,handle,nameBufLen,nameLen,nameBuf,type,flags,tokenScope,token)	\
    ( (This)->lpVtbl -> EnumField2(This,handle,nameBufLen,nameLen,nameBuf,type,flags,tokenScope,token) ) 

#define IXCLRDataTypeDefinition_EnumFieldByName2(This,handle,type,flags,tokenScope,token)	\
    ( (This)->lpVtbl -> EnumFieldByName2(This,handle,type,flags,tokenScope,token) ) 

#define IXCLRDataTypeDefinition_GetFieldByToken2(This,tokenScope,token,nameBufLen,nameLen,nameBuf,type,flags)	\
    ( (This)->lpVtbl -> GetFieldByToken2(This,tokenScope,token,nameBufLen,nameLen,nameBuf,type,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataTypeDefinition_INTERFACE_DEFINED__ */


#ifndef __IXCLRDataTypeInstance_INTERFACE_DEFINED__
#define __IXCLRDataTypeInstance_INTERFACE_DEFINED__

/* interface IXCLRDataTypeInstance */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataTypeInstance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4D078D91-9CB3-4b0d-97AC-28C8A5A82597")
    IXCLRDataTypeInstance : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodInstances( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodInstance( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **methodInstance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodInstances( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumMethodInstancesByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumMethodInstanceByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumMethodInstancesByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumStaticFields( 
            /* [out] */ ULONG32 *numFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStaticFieldByIndex( 
            /* [in] */ ULONG32 index,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumStaticFieldsByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStaticFieldByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumStaticFieldsByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumTypeArguments( 
            /* [out] */ ULONG32 *numTypeArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeArgumentByIndex( 
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataTypeInstance **typeArg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetModule( 
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefinition( 
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataTypeInstance *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumStaticFields2( 
            /* [in] */ ULONG32 flags,
            /* [out] */ ULONG32 *numFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumStaticFields( 
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStaticField( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumStaticFields( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumStaticFieldsByName2( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 nameFlags,
            /* [in] */ ULONG32 fieldFlags,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStaticFieldByName2( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumStaticFieldsByName2( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStaticFieldByToken( 
            /* [in] */ mdFieldDef token,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBase( 
            /* [out] */ IXCLRDataTypeInstance **base) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStaticField2( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumStaticFieldByName3( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStaticFieldByToken2( 
            /* [in] */ IXCLRDataModule *tokenScope,
            /* [in] */ mdFieldDef token,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataTypeInstanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataTypeInstance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataTypeInstance * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodInstances )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodInstance )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **methodInstance);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodInstances )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumMethodInstancesByName )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumMethodInstanceByName )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **method);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumMethodInstancesByName )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumStaticFields )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ ULONG32 *numFields);
        
        HRESULT ( STDMETHODCALLTYPE *GetStaticFieldByIndex )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ ULONG32 index,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumStaticFieldsByName )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStaticFieldByName )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumStaticFieldsByName )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumTypeArguments )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ ULONG32 *numTypeArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeArgumentByIndex )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataTypeInstance **typeArg);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetModule )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefinition )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ IXCLRDataTypeInstance *type);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumStaticFields2 )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ ULONG32 flags,
            /* [out] */ ULONG32 *numFields);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumStaticFields )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStaticField )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumStaticFields )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumStaticFieldsByName2 )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 nameFlags,
            /* [in] */ ULONG32 fieldFlags,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStaticFieldByName2 )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumStaticFieldsByName2 )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetStaticFieldByToken )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ mdFieldDef token,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IXCLRDataTypeInstance * This,
            /* [out] */ IXCLRDataTypeInstance **base);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStaticField2 )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EnumStaticFieldByName3 )( 
            IXCLRDataTypeInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **value,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *GetStaticFieldByToken2 )( 
            IXCLRDataTypeInstance * This,
            /* [in] */ IXCLRDataModule *tokenScope,
            /* [in] */ mdFieldDef token,
            /* [in] */ IXCLRDataTask *tlsTask,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        END_INTERFACE
    } IXCLRDataTypeInstanceVtbl;

    interface IXCLRDataTypeInstance
    {
        CONST_VTBL struct IXCLRDataTypeInstanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataTypeInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataTypeInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataTypeInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataTypeInstance_StartEnumMethodInstances(This,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodInstances(This,handle) ) 

#define IXCLRDataTypeInstance_EnumMethodInstance(This,handle,methodInstance)	\
    ( (This)->lpVtbl -> EnumMethodInstance(This,handle,methodInstance) ) 

#define IXCLRDataTypeInstance_EndEnumMethodInstances(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodInstances(This,handle) ) 

#define IXCLRDataTypeInstance_StartEnumMethodInstancesByName(This,name,flags,handle)	\
    ( (This)->lpVtbl -> StartEnumMethodInstancesByName(This,name,flags,handle) ) 

#define IXCLRDataTypeInstance_EnumMethodInstanceByName(This,handle,method)	\
    ( (This)->lpVtbl -> EnumMethodInstanceByName(This,handle,method) ) 

#define IXCLRDataTypeInstance_EndEnumMethodInstancesByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumMethodInstancesByName(This,handle) ) 

#define IXCLRDataTypeInstance_GetNumStaticFields(This,numFields)	\
    ( (This)->lpVtbl -> GetNumStaticFields(This,numFields) ) 

#define IXCLRDataTypeInstance_GetStaticFieldByIndex(This,index,tlsTask,field,bufLen,nameLen,nameBuf,token)	\
    ( (This)->lpVtbl -> GetStaticFieldByIndex(This,index,tlsTask,field,bufLen,nameLen,nameBuf,token) ) 

#define IXCLRDataTypeInstance_StartEnumStaticFieldsByName(This,name,flags,tlsTask,handle)	\
    ( (This)->lpVtbl -> StartEnumStaticFieldsByName(This,name,flags,tlsTask,handle) ) 

#define IXCLRDataTypeInstance_EnumStaticFieldByName(This,handle,value)	\
    ( (This)->lpVtbl -> EnumStaticFieldByName(This,handle,value) ) 

#define IXCLRDataTypeInstance_EndEnumStaticFieldsByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumStaticFieldsByName(This,handle) ) 

#define IXCLRDataTypeInstance_GetNumTypeArguments(This,numTypeArgs)	\
    ( (This)->lpVtbl -> GetNumTypeArguments(This,numTypeArgs) ) 

#define IXCLRDataTypeInstance_GetTypeArgumentByIndex(This,index,typeArg)	\
    ( (This)->lpVtbl -> GetTypeArgumentByIndex(This,index,typeArg) ) 

#define IXCLRDataTypeInstance_GetName(This,flags,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetName(This,flags,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataTypeInstance_GetModule(This,mod)	\
    ( (This)->lpVtbl -> GetModule(This,mod) ) 

#define IXCLRDataTypeInstance_GetDefinition(This,typeDefinition)	\
    ( (This)->lpVtbl -> GetDefinition(This,typeDefinition) ) 

#define IXCLRDataTypeInstance_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataTypeInstance_IsSameObject(This,type)	\
    ( (This)->lpVtbl -> IsSameObject(This,type) ) 

#define IXCLRDataTypeInstance_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataTypeInstance_GetNumStaticFields2(This,flags,numFields)	\
    ( (This)->lpVtbl -> GetNumStaticFields2(This,flags,numFields) ) 

#define IXCLRDataTypeInstance_StartEnumStaticFields(This,flags,tlsTask,handle)	\
    ( (This)->lpVtbl -> StartEnumStaticFields(This,flags,tlsTask,handle) ) 

#define IXCLRDataTypeInstance_EnumStaticField(This,handle,value)	\
    ( (This)->lpVtbl -> EnumStaticField(This,handle,value) ) 

#define IXCLRDataTypeInstance_EndEnumStaticFields(This,handle)	\
    ( (This)->lpVtbl -> EndEnumStaticFields(This,handle) ) 

#define IXCLRDataTypeInstance_StartEnumStaticFieldsByName2(This,name,nameFlags,fieldFlags,tlsTask,handle)	\
    ( (This)->lpVtbl -> StartEnumStaticFieldsByName2(This,name,nameFlags,fieldFlags,tlsTask,handle) ) 

#define IXCLRDataTypeInstance_EnumStaticFieldByName2(This,handle,value)	\
    ( (This)->lpVtbl -> EnumStaticFieldByName2(This,handle,value) ) 

#define IXCLRDataTypeInstance_EndEnumStaticFieldsByName2(This,handle)	\
    ( (This)->lpVtbl -> EndEnumStaticFieldsByName2(This,handle) ) 

#define IXCLRDataTypeInstance_GetStaticFieldByToken(This,token,tlsTask,field,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetStaticFieldByToken(This,token,tlsTask,field,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataTypeInstance_GetBase(This,base)	\
    ( (This)->lpVtbl -> GetBase(This,base) ) 

#define IXCLRDataTypeInstance_EnumStaticField2(This,handle,value,bufLen,nameLen,nameBuf,tokenScope,token)	\
    ( (This)->lpVtbl -> EnumStaticField2(This,handle,value,bufLen,nameLen,nameBuf,tokenScope,token) ) 

#define IXCLRDataTypeInstance_EnumStaticFieldByName3(This,handle,value,tokenScope,token)	\
    ( (This)->lpVtbl -> EnumStaticFieldByName3(This,handle,value,tokenScope,token) ) 

#define IXCLRDataTypeInstance_GetStaticFieldByToken2(This,tokenScope,token,tlsTask,field,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetStaticFieldByToken2(This,tokenScope,token,tlsTask,field,bufLen,nameLen,nameBuf) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataTypeInstance_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0007 */
/* [local] */ 

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0007_0001
    {	CLRDATA_SOURCE_TYPE_INVALID	= 0
    } 	CLRDataSourceType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0007_0002
    {	CLRDATA_IL_OFFSET_NO_MAPPING	= -1,
	CLRDATA_IL_OFFSET_PROLOG	= -2,
	CLRDATA_IL_OFFSET_EPILOG	= -3
    } 	CLRDATA_IL_OFFSET_MARKER;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_xclrdata_0000_0007_0003
    {
    ULONG32 ilOffset;
    CLRDATA_ADDRESS startAddress;
    CLRDATA_ADDRESS endAddress;
    CLRDataSourceType type;
    } 	CLRDATA_IL_ADDRESS_MAP;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0007_0004
    {	CLRDATA_METHOD_DEFAULT	= 0,
	CLRDATA_METHOD_HAS_THIS	= 0x1
    } 	CLRDataMethodFlag;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0007_0005
    {	CLRDATA_METHDEF_IL	= 0
    } 	CLRDataMethodDefinitionExtentType;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_xclrdata_0000_0007_0006
    {
    CLRDATA_ADDRESS startAddress;
    CLRDATA_ADDRESS endAddress;
    ULONG32 enCVersion;
    CLRDataMethodDefinitionExtentType type;
    } 	CLRDATA_METHDEF_EXTENT;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0007_v0_0_s_ifspec;

#ifndef __IXCLRDataMethodDefinition_INTERFACE_DEFINED__
#define __IXCLRDataMethodDefinition_INTERFACE_DEFINED__

/* interface IXCLRDataMethodDefinition */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataMethodDefinition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AAF60008-FB2C-420b-8FB1-42D244A54A97")
    IXCLRDataMethodDefinition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTypeDefinition( 
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumInstances( 
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInstance( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **instance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumInstances( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTokenAndScope( 
            /* [out] */ mdMethodDef *token,
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataMethodDefinition *method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLatestEnCVersion( 
            /* [out] */ ULONG32 *version) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumExtents( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumExtent( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ CLRDATA_METHDEF_EXTENT *extent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumExtents( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodeNotification( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCodeNotification( 
            /* [in] */ ULONG32 flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRepresentativeEntryAddress( 
            /* [out] */ CLRDATA_ADDRESS *addr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasClassOrMethodInstantiation( 
            /* [out] */ BOOL *bGeneric) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataMethodDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataMethodDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataMethodDefinition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeDefinition )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ IXCLRDataTypeDefinition **typeDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumInstances )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ IXCLRDataAppDomain *appDomain,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstance )( 
            IXCLRDataMethodDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataMethodInstance **instance);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumInstances )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndScope )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ mdMethodDef *token,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ IXCLRDataMethodDefinition *method);
        
        HRESULT ( STDMETHODCALLTYPE *GetLatestEnCVersion )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ ULONG32 *version);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumExtents )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumExtent )( 
            IXCLRDataMethodDefinition * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ CLRDATA_METHDEF_EXTENT *extent);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumExtents )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeNotification )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *SetCodeNotification )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ ULONG32 flags);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataMethodDefinition * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetRepresentativeEntryAddress )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ CLRDATA_ADDRESS *addr);
        
        HRESULT ( STDMETHODCALLTYPE *HasClassOrMethodInstantiation )( 
            IXCLRDataMethodDefinition * This,
            /* [out] */ BOOL *bGeneric);
        
        END_INTERFACE
    } IXCLRDataMethodDefinitionVtbl;

    interface IXCLRDataMethodDefinition
    {
        CONST_VTBL struct IXCLRDataMethodDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataMethodDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataMethodDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataMethodDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataMethodDefinition_GetTypeDefinition(This,typeDefinition)	\
    ( (This)->lpVtbl -> GetTypeDefinition(This,typeDefinition) ) 

#define IXCLRDataMethodDefinition_StartEnumInstances(This,appDomain,handle)	\
    ( (This)->lpVtbl -> StartEnumInstances(This,appDomain,handle) ) 

#define IXCLRDataMethodDefinition_EnumInstance(This,handle,instance)	\
    ( (This)->lpVtbl -> EnumInstance(This,handle,instance) ) 

#define IXCLRDataMethodDefinition_EndEnumInstances(This,handle)	\
    ( (This)->lpVtbl -> EndEnumInstances(This,handle) ) 

#define IXCLRDataMethodDefinition_GetName(This,flags,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetName(This,flags,bufLen,nameLen,name) ) 

#define IXCLRDataMethodDefinition_GetTokenAndScope(This,token,mod)	\
    ( (This)->lpVtbl -> GetTokenAndScope(This,token,mod) ) 

#define IXCLRDataMethodDefinition_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataMethodDefinition_IsSameObject(This,method)	\
    ( (This)->lpVtbl -> IsSameObject(This,method) ) 

#define IXCLRDataMethodDefinition_GetLatestEnCVersion(This,version)	\
    ( (This)->lpVtbl -> GetLatestEnCVersion(This,version) ) 

#define IXCLRDataMethodDefinition_StartEnumExtents(This,handle)	\
    ( (This)->lpVtbl -> StartEnumExtents(This,handle) ) 

#define IXCLRDataMethodDefinition_EnumExtent(This,handle,extent)	\
    ( (This)->lpVtbl -> EnumExtent(This,handle,extent) ) 

#define IXCLRDataMethodDefinition_EndEnumExtents(This,handle)	\
    ( (This)->lpVtbl -> EndEnumExtents(This,handle) ) 

#define IXCLRDataMethodDefinition_GetCodeNotification(This,flags)	\
    ( (This)->lpVtbl -> GetCodeNotification(This,flags) ) 

#define IXCLRDataMethodDefinition_SetCodeNotification(This,flags)	\
    ( (This)->lpVtbl -> SetCodeNotification(This,flags) ) 

#define IXCLRDataMethodDefinition_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataMethodDefinition_GetRepresentativeEntryAddress(This,addr)	\
    ( (This)->lpVtbl -> GetRepresentativeEntryAddress(This,addr) ) 

#define IXCLRDataMethodDefinition_HasClassOrMethodInstantiation(This,bGeneric)	\
    ( (This)->lpVtbl -> HasClassOrMethodInstantiation(This,bGeneric) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataMethodDefinition_INTERFACE_DEFINED__ */


#ifndef __IXCLRDataMethodInstance_INTERFACE_DEFINED__
#define __IXCLRDataMethodInstance_INTERFACE_DEFINED__

/* interface IXCLRDataMethodInstance */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataMethodInstance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECD73800-22CA-4b0d-AB55-E9BA7E6318A5")
    IXCLRDataMethodInstance : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTypeInstance( 
            /* [out] */ IXCLRDataTypeInstance **typeInstance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefinition( 
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTokenAndScope( 
            /* [out] */ mdMethodDef *token,
            /* [out] */ IXCLRDataModule **mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataMethodInstance *method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnCVersion( 
            /* [out] */ ULONG32 *version) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumTypeArguments( 
            /* [out] */ ULONG32 *numTypeArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeArgumentByIndex( 
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataTypeInstance **typeArg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetILOffsetsByAddress( 
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 offsetsLen,
            /* [out] */ ULONG32 *offsetsNeeded,
            /* [size_is][out] */ ULONG32 ilOffsets[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAddressRangesByILOffset( 
            /* [in] */ ULONG32 ilOffset,
            /* [in] */ ULONG32 rangesLen,
            /* [out] */ ULONG32 *rangesNeeded,
            /* [size_is][out] */ CLRDATA_ADDRESS_RANGE addressRanges[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetILAddressMap( 
            /* [in] */ ULONG32 mapLen,
            /* [out] */ ULONG32 *mapNeeded,
            /* [size_is][out] */ CLRDATA_IL_ADDRESS_MAP maps[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumExtents( 
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumExtent( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ CLRDATA_ADDRESS_RANGE *extent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumExtents( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRepresentativeEntryAddress( 
            /* [out] */ CLRDATA_ADDRESS *addr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataMethodInstanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataMethodInstance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataMethodInstance * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInstance )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ IXCLRDataTypeInstance **typeInstance);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefinition )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ IXCLRDataMethodDefinition **methodDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndScope )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ mdMethodDef *token,
            /* [out] */ IXCLRDataModule **mod);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ IXCLRDataMethodInstance *method);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnCVersion )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ ULONG32 *version);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumTypeArguments )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ ULONG32 *numTypeArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeArgumentByIndex )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataTypeInstance **typeArg);
        
        HRESULT ( STDMETHODCALLTYPE *GetILOffsetsByAddress )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ CLRDATA_ADDRESS address,
            /* [in] */ ULONG32 offsetsLen,
            /* [out] */ ULONG32 *offsetsNeeded,
            /* [size_is][out] */ ULONG32 ilOffsets[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetAddressRangesByILOffset )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ ULONG32 ilOffset,
            /* [in] */ ULONG32 rangesLen,
            /* [out] */ ULONG32 *rangesNeeded,
            /* [size_is][out] */ CLRDATA_ADDRESS_RANGE addressRanges[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetILAddressMap )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ ULONG32 mapLen,
            /* [out] */ ULONG32 *mapNeeded,
            /* [size_is][out] */ CLRDATA_IL_ADDRESS_MAP maps[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumExtents )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumExtent )( 
            IXCLRDataMethodInstance * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ CLRDATA_ADDRESS_RANGE *extent);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumExtents )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataMethodInstance * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetRepresentativeEntryAddress )( 
            IXCLRDataMethodInstance * This,
            /* [out] */ CLRDATA_ADDRESS *addr);
        
        END_INTERFACE
    } IXCLRDataMethodInstanceVtbl;

    interface IXCLRDataMethodInstance
    {
        CONST_VTBL struct IXCLRDataMethodInstanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataMethodInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataMethodInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataMethodInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataMethodInstance_GetTypeInstance(This,typeInstance)	\
    ( (This)->lpVtbl -> GetTypeInstance(This,typeInstance) ) 

#define IXCLRDataMethodInstance_GetDefinition(This,methodDefinition)	\
    ( (This)->lpVtbl -> GetDefinition(This,methodDefinition) ) 

#define IXCLRDataMethodInstance_GetTokenAndScope(This,token,mod)	\
    ( (This)->lpVtbl -> GetTokenAndScope(This,token,mod) ) 

#define IXCLRDataMethodInstance_GetName(This,flags,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetName(This,flags,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataMethodInstance_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataMethodInstance_IsSameObject(This,method)	\
    ( (This)->lpVtbl -> IsSameObject(This,method) ) 

#define IXCLRDataMethodInstance_GetEnCVersion(This,version)	\
    ( (This)->lpVtbl -> GetEnCVersion(This,version) ) 

#define IXCLRDataMethodInstance_GetNumTypeArguments(This,numTypeArgs)	\
    ( (This)->lpVtbl -> GetNumTypeArguments(This,numTypeArgs) ) 

#define IXCLRDataMethodInstance_GetTypeArgumentByIndex(This,index,typeArg)	\
    ( (This)->lpVtbl -> GetTypeArgumentByIndex(This,index,typeArg) ) 

#define IXCLRDataMethodInstance_GetILOffsetsByAddress(This,address,offsetsLen,offsetsNeeded,ilOffsets)	\
    ( (This)->lpVtbl -> GetILOffsetsByAddress(This,address,offsetsLen,offsetsNeeded,ilOffsets) ) 

#define IXCLRDataMethodInstance_GetAddressRangesByILOffset(This,ilOffset,rangesLen,rangesNeeded,addressRanges)	\
    ( (This)->lpVtbl -> GetAddressRangesByILOffset(This,ilOffset,rangesLen,rangesNeeded,addressRanges) ) 

#define IXCLRDataMethodInstance_GetILAddressMap(This,mapLen,mapNeeded,maps)	\
    ( (This)->lpVtbl -> GetILAddressMap(This,mapLen,mapNeeded,maps) ) 

#define IXCLRDataMethodInstance_StartEnumExtents(This,handle)	\
    ( (This)->lpVtbl -> StartEnumExtents(This,handle) ) 

#define IXCLRDataMethodInstance_EnumExtent(This,handle,extent)	\
    ( (This)->lpVtbl -> EnumExtent(This,handle,extent) ) 

#define IXCLRDataMethodInstance_EndEnumExtents(This,handle)	\
    ( (This)->lpVtbl -> EndEnumExtents(This,handle) ) 

#define IXCLRDataMethodInstance_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataMethodInstance_GetRepresentativeEntryAddress(This,addr)	\
    ( (This)->lpVtbl -> GetRepresentativeEntryAddress(This,addr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataMethodInstance_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0009 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0009_0001
    {	CLRDATA_TASK_DEFAULT	= 0,
	CLRDATA_TASK_WAITING_FOR_GC	= 0x1
    } 	CLRDataTaskFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0009_v0_0_s_ifspec;

#ifndef __IXCLRDataTask_INTERFACE_DEFINED__
#define __IXCLRDataTask_INTERFACE_DEFINED__

/* interface IXCLRDataTask */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataTask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5B0BEEA-EC62-4618-8012-A24FFC23934C")
    IXCLRDataTask : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProcess( 
            /* [out] */ IXCLRDataProcess **process) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentAppDomain( 
            /* [out] */ IXCLRDataAppDomain **appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUniqueID( 
            /* [out] */ ULONG64 *id) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameObject( 
            /* [in] */ IXCLRDataTask *task) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManagedObject( 
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDesiredExecutionState( 
            /* [out] */ ULONG32 *state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDesiredExecutionState( 
            /* [in] */ ULONG32 state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStackWalk( 
            /* [in] */ ULONG32 flags,
            /* [out] */ IXCLRDataStackWalk **stackWalk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOSThreadID( 
            /* [out] */ ULONG32 *id) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextBufSize,
            /* [out] */ ULONG32 *contextSize,
            /* [size_is][out] */ BYTE contextBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE context[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentExceptionState( 
            /* [out] */ IXCLRDataExceptionState **exception) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastExceptionState( 
            /* [out] */ IXCLRDataExceptionState **exception) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataTaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataTask * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataTask * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataTask * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProcess )( 
            IXCLRDataTask * This,
            /* [out] */ IXCLRDataProcess **process);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentAppDomain )( 
            IXCLRDataTask * This,
            /* [out] */ IXCLRDataAppDomain **appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *GetUniqueID )( 
            IXCLRDataTask * This,
            /* [out] */ ULONG64 *id);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataTask * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameObject )( 
            IXCLRDataTask * This,
            /* [in] */ IXCLRDataTask *task);
        
        HRESULT ( STDMETHODCALLTYPE *GetManagedObject )( 
            IXCLRDataTask * This,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetDesiredExecutionState )( 
            IXCLRDataTask * This,
            /* [out] */ ULONG32 *state);
        
        HRESULT ( STDMETHODCALLTYPE *SetDesiredExecutionState )( 
            IXCLRDataTask * This,
            /* [in] */ ULONG32 state);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStackWalk )( 
            IXCLRDataTask * This,
            /* [in] */ ULONG32 flags,
            /* [out] */ IXCLRDataStackWalk **stackWalk);
        
        HRESULT ( STDMETHODCALLTYPE *GetOSThreadID )( 
            IXCLRDataTask * This,
            /* [out] */ ULONG32 *id);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IXCLRDataTask * This,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextBufSize,
            /* [out] */ ULONG32 *contextSize,
            /* [size_is][out] */ BYTE contextBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IXCLRDataTask * This,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE context[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentExceptionState )( 
            IXCLRDataTask * This,
            /* [out] */ IXCLRDataExceptionState **exception);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataTask * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IXCLRDataTask * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastExceptionState )( 
            IXCLRDataTask * This,
            /* [out] */ IXCLRDataExceptionState **exception);
        
        END_INTERFACE
    } IXCLRDataTaskVtbl;

    interface IXCLRDataTask
    {
        CONST_VTBL struct IXCLRDataTaskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataTask_GetProcess(This,process)	\
    ( (This)->lpVtbl -> GetProcess(This,process) ) 

#define IXCLRDataTask_GetCurrentAppDomain(This,appDomain)	\
    ( (This)->lpVtbl -> GetCurrentAppDomain(This,appDomain) ) 

#define IXCLRDataTask_GetUniqueID(This,id)	\
    ( (This)->lpVtbl -> GetUniqueID(This,id) ) 

#define IXCLRDataTask_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataTask_IsSameObject(This,task)	\
    ( (This)->lpVtbl -> IsSameObject(This,task) ) 

#define IXCLRDataTask_GetManagedObject(This,value)	\
    ( (This)->lpVtbl -> GetManagedObject(This,value) ) 

#define IXCLRDataTask_GetDesiredExecutionState(This,state)	\
    ( (This)->lpVtbl -> GetDesiredExecutionState(This,state) ) 

#define IXCLRDataTask_SetDesiredExecutionState(This,state)	\
    ( (This)->lpVtbl -> SetDesiredExecutionState(This,state) ) 

#define IXCLRDataTask_CreateStackWalk(This,flags,stackWalk)	\
    ( (This)->lpVtbl -> CreateStackWalk(This,flags,stackWalk) ) 

#define IXCLRDataTask_GetOSThreadID(This,id)	\
    ( (This)->lpVtbl -> GetOSThreadID(This,id) ) 

#define IXCLRDataTask_GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf)	\
    ( (This)->lpVtbl -> GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf) ) 

#define IXCLRDataTask_SetContext(This,contextSize,context)	\
    ( (This)->lpVtbl -> SetContext(This,contextSize,context) ) 

#define IXCLRDataTask_GetCurrentExceptionState(This,exception)	\
    ( (This)->lpVtbl -> GetCurrentExceptionState(This,exception) ) 

#define IXCLRDataTask_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataTask_GetName(This,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetName(This,bufLen,nameLen,name) ) 

#define IXCLRDataTask_GetLastExceptionState(This,exception)	\
    ( (This)->lpVtbl -> GetLastExceptionState(This,exception) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataTask_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0010 */
/* [local] */ 

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0010_0001
    {	CLRDATA_SIMPFRAME_UNRECOGNIZED	= 0x1,
	CLRDATA_SIMPFRAME_MANAGED_METHOD	= 0x2,
	CLRDATA_SIMPFRAME_RUNTIME_MANAGED_CODE	= 0x4,
	CLRDATA_SIMPFRAME_RUNTIME_UNMANAGED_CODE	= 0x8
    } 	CLRDataSimpleFrameType;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0010_0002
    {	CLRDATA_DETFRAME_UNRECOGNIZED	= 0,
	CLRDATA_DETFRAME_UNKNOWN_STUB	= ( CLRDATA_DETFRAME_UNRECOGNIZED + 1 ) ,
	CLRDATA_DETFRAME_CLASS_INIT	= ( CLRDATA_DETFRAME_UNKNOWN_STUB + 1 ) ,
	CLRDATA_DETFRAME_EXCEPTION_FILTER	= ( CLRDATA_DETFRAME_CLASS_INIT + 1 ) ,
	CLRDATA_DETFRAME_SECURITY	= ( CLRDATA_DETFRAME_EXCEPTION_FILTER + 1 ) ,
	CLRDATA_DETFRAME_CONTEXT_POLICY	= ( CLRDATA_DETFRAME_SECURITY + 1 ) ,
	CLRDATA_DETFRAME_INTERCEPTION	= ( CLRDATA_DETFRAME_CONTEXT_POLICY + 1 ) ,
	CLRDATA_DETFRAME_PROCESS_START	= ( CLRDATA_DETFRAME_INTERCEPTION + 1 ) ,
	CLRDATA_DETFRAME_THREAD_START	= ( CLRDATA_DETFRAME_PROCESS_START + 1 ) ,
	CLRDATA_DETFRAME_TRANSITION_TO_MANAGED	= ( CLRDATA_DETFRAME_THREAD_START + 1 ) ,
	CLRDATA_DETFRAME_TRANSITION_TO_UNMANAGED	= ( CLRDATA_DETFRAME_TRANSITION_TO_MANAGED + 1 ) ,
	CLRDATA_DETFRAME_COM_INTEROP_STUB	= ( CLRDATA_DETFRAME_TRANSITION_TO_UNMANAGED + 1 ) ,
	CLRDATA_DETFRAME_DEBUGGER_EVAL	= ( CLRDATA_DETFRAME_COM_INTEROP_STUB + 1 ) ,
	CLRDATA_DETFRAME_CONTEXT_SWITCH	= ( CLRDATA_DETFRAME_DEBUGGER_EVAL + 1 ) ,
	CLRDATA_DETFRAME_FUNC_EVAL	= ( CLRDATA_DETFRAME_CONTEXT_SWITCH + 1 ) ,
	CLRDATA_DETFRAME_FINALLY	= ( CLRDATA_DETFRAME_FUNC_EVAL + 1 ) 
    } 	CLRDataDetailedFrameType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0010_0003
    {	CLRDATA_STACK_WALK_REQUEST_SET_FIRST_FRAME	= 0xe1000000
    } 	CLRDataStackWalkRequest;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0010_0004
    {	CLRDATA_STACK_SET_UNWIND_CONTEXT	= 0,
	CLRDATA_STACK_SET_CURRENT_CONTEXT	= 0x1
    } 	CLRDataStackSetContextFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0010_v0_0_s_ifspec;

#ifndef __IXCLRDataStackWalk_INTERFACE_DEFINED__
#define __IXCLRDataStackWalk_INTERFACE_DEFINED__

/* interface IXCLRDataStackWalk */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataStackWalk;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E59D8D22-ADA7-49a2-89B5-A415AFCFC95F")
    IXCLRDataStackWalk : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextBufSize,
            /* [out] */ ULONG32 *contextSize,
            /* [size_is][out] */ BYTE contextBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext( 
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE context[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStackSizeSkipped( 
            /* [out] */ ULONG64 *stackSizeSkipped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameType( 
            /* [out] */ CLRDataSimpleFrameType *simpleType,
            /* [out] */ CLRDataDetailedFrameType *detailedType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrame( 
            /* [out] */ IXCLRDataFrame **frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetContext2( 
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE context[  ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataStackWalkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataStackWalk * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataStackWalk * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataStackWalk * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IXCLRDataStackWalk * This,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextBufSize,
            /* [out] */ ULONG32 *contextSize,
            /* [size_is][out] */ BYTE contextBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext )( 
            IXCLRDataStackWalk * This,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE context[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IXCLRDataStackWalk * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStackSizeSkipped )( 
            IXCLRDataStackWalk * This,
            /* [out] */ ULONG64 *stackSizeSkipped);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameType )( 
            IXCLRDataStackWalk * This,
            /* [out] */ CLRDataSimpleFrameType *simpleType,
            /* [out] */ CLRDataDetailedFrameType *detailedType);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrame )( 
            IXCLRDataStackWalk * This,
            /* [out] */ IXCLRDataFrame **frame);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataStackWalk * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *SetContext2 )( 
            IXCLRDataStackWalk * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE context[  ]);
        
        END_INTERFACE
    } IXCLRDataStackWalkVtbl;

    interface IXCLRDataStackWalk
    {
        CONST_VTBL struct IXCLRDataStackWalkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataStackWalk_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataStackWalk_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataStackWalk_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataStackWalk_GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf)	\
    ( (This)->lpVtbl -> GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf) ) 

#define IXCLRDataStackWalk_SetContext(This,contextSize,context)	\
    ( (This)->lpVtbl -> SetContext(This,contextSize,context) ) 

#define IXCLRDataStackWalk_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IXCLRDataStackWalk_GetStackSizeSkipped(This,stackSizeSkipped)	\
    ( (This)->lpVtbl -> GetStackSizeSkipped(This,stackSizeSkipped) ) 

#define IXCLRDataStackWalk_GetFrameType(This,simpleType,detailedType)	\
    ( (This)->lpVtbl -> GetFrameType(This,simpleType,detailedType) ) 

#define IXCLRDataStackWalk_GetFrame(This,frame)	\
    ( (This)->lpVtbl -> GetFrame(This,frame) ) 

#define IXCLRDataStackWalk_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataStackWalk_SetContext2(This,flags,contextSize,context)	\
    ( (This)->lpVtbl -> SetContext2(This,flags,contextSize,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataStackWalk_INTERFACE_DEFINED__ */


#ifndef __IXCLRDataFrame_INTERFACE_DEFINED__
#define __IXCLRDataFrame_INTERFACE_DEFINED__

/* interface IXCLRDataFrame */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("271498C2-4085-4766-BC3A-7F8ED188A173")
    IXCLRDataFrame : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFrameType( 
            /* [out] */ CLRDataSimpleFrameType *simpleType,
            /* [out] */ CLRDataDetailedFrameType *detailedType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContext( 
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextBufSize,
            /* [out] */ ULONG32 *contextSize,
            /* [size_is][out] */ BYTE contextBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppDomain( 
            /* [out] */ IXCLRDataAppDomain **appDomain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumArguments( 
            /* [out] */ ULONG32 *numArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArgumentByIndex( 
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataValue **arg,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumLocalVariables( 
            /* [out] */ ULONG32 *numLocals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocalVariableByIndex( 
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataValue **localVariable,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodeName( 
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMethodInstance( 
            /* [out] */ IXCLRDataMethodInstance **method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumTypeArguments( 
            /* [out] */ ULONG32 *numTypeArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeArgumentByIndex( 
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataTypeInstance **typeArg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataFrame * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameType )( 
            IXCLRDataFrame * This,
            /* [out] */ CLRDataSimpleFrameType *simpleType,
            /* [out] */ CLRDataDetailedFrameType *detailedType);
        
        HRESULT ( STDMETHODCALLTYPE *GetContext )( 
            IXCLRDataFrame * This,
            /* [in] */ ULONG32 contextFlags,
            /* [in] */ ULONG32 contextBufSize,
            /* [out] */ ULONG32 *contextSize,
            /* [size_is][out] */ BYTE contextBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppDomain )( 
            IXCLRDataFrame * This,
            /* [out] */ IXCLRDataAppDomain **appDomain);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumArguments )( 
            IXCLRDataFrame * This,
            /* [out] */ ULONG32 *numArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetArgumentByIndex )( 
            IXCLRDataFrame * This,
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataValue **arg,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumLocalVariables )( 
            IXCLRDataFrame * This,
            /* [out] */ ULONG32 *numLocals);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocalVariableByIndex )( 
            IXCLRDataFrame * This,
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataValue **localVariable,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeName )( 
            IXCLRDataFrame * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetMethodInstance )( 
            IXCLRDataFrame * This,
            /* [out] */ IXCLRDataMethodInstance **method);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataFrame * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumTypeArguments )( 
            IXCLRDataFrame * This,
            /* [out] */ ULONG32 *numTypeArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeArgumentByIndex )( 
            IXCLRDataFrame * This,
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataTypeInstance **typeArg);
        
        END_INTERFACE
    } IXCLRDataFrameVtbl;

    interface IXCLRDataFrame
    {
        CONST_VTBL struct IXCLRDataFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataFrame_GetFrameType(This,simpleType,detailedType)	\
    ( (This)->lpVtbl -> GetFrameType(This,simpleType,detailedType) ) 

#define IXCLRDataFrame_GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf)	\
    ( (This)->lpVtbl -> GetContext(This,contextFlags,contextBufSize,contextSize,contextBuf) ) 

#define IXCLRDataFrame_GetAppDomain(This,appDomain)	\
    ( (This)->lpVtbl -> GetAppDomain(This,appDomain) ) 

#define IXCLRDataFrame_GetNumArguments(This,numArgs)	\
    ( (This)->lpVtbl -> GetNumArguments(This,numArgs) ) 

#define IXCLRDataFrame_GetArgumentByIndex(This,index,arg,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetArgumentByIndex(This,index,arg,bufLen,nameLen,name) ) 

#define IXCLRDataFrame_GetNumLocalVariables(This,numLocals)	\
    ( (This)->lpVtbl -> GetNumLocalVariables(This,numLocals) ) 

#define IXCLRDataFrame_GetLocalVariableByIndex(This,index,localVariable,bufLen,nameLen,name)	\
    ( (This)->lpVtbl -> GetLocalVariableByIndex(This,index,localVariable,bufLen,nameLen,name) ) 

#define IXCLRDataFrame_GetCodeName(This,flags,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetCodeName(This,flags,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataFrame_GetMethodInstance(This,method)	\
    ( (This)->lpVtbl -> GetMethodInstance(This,method) ) 

#define IXCLRDataFrame_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataFrame_GetNumTypeArguments(This,numTypeArgs)	\
    ( (This)->lpVtbl -> GetNumTypeArguments(This,numTypeArgs) ) 

#define IXCLRDataFrame_GetTypeArgumentByIndex(This,index,typeArg)	\
    ( (This)->lpVtbl -> GetTypeArgumentByIndex(This,index,typeArg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataFrame_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0012 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0012_0001
    {	CLRDATA_EXCEPTION_DEFAULT	= 0,
	CLRDATA_EXCEPTION_NESTED	= 0x1,
	CLRDATA_EXCEPTION_PARTIAL	= 0x2
    } 	CLRDataExceptionStateFlag;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0012_0002
    {	CLRDATA_EXBASE_EXCEPTION	= 0,
	CLRDATA_EXBASE_OUT_OF_MEMORY	= ( CLRDATA_EXBASE_EXCEPTION + 1 ) ,
	CLRDATA_EXBASE_INVALID_ARGUMENT	= ( CLRDATA_EXBASE_OUT_OF_MEMORY + 1 ) 
    } 	CLRDataBaseExceptionType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0012_0003
    {	CLRDATA_EXSAME_SECOND_CHANCE	= 0,
	CLRDATA_EXSAME_FIRST_CHANCE	= 0x1
    } 	CLRDataExceptionSameFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0012_v0_0_s_ifspec;

#ifndef __IXCLRDataExceptionState_INTERFACE_DEFINED__
#define __IXCLRDataExceptionState_INTERFACE_DEFINED__

/* interface IXCLRDataExceptionState */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataExceptionState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75DA9E4C-BD33-43C8-8F5C-96E8A5241F57")
    IXCLRDataExceptionState : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrevious( 
            /* [out] */ IXCLRDataExceptionState **exState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetManagedObject( 
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBaseType( 
            /* [out] */ CLRDataBaseExceptionType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCode( 
            /* [out] */ ULONG32 *code) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *strLen,
            /* [size_is][out] */ WCHAR str[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameState( 
            /* [in] */ EXCEPTION_RECORD64 *exRecord,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE cxRecord[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSameState2( 
            /* [in] */ ULONG32 flags,
            /* [in] */ EXCEPTION_RECORD64 *exRecord,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE cxRecord[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTask( 
            /* [out] */ IXCLRDataTask **task) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataExceptionStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataExceptionState * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataExceptionState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataExceptionState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataExceptionState * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrevious )( 
            IXCLRDataExceptionState * This,
            /* [out] */ IXCLRDataExceptionState **exState);
        
        HRESULT ( STDMETHODCALLTYPE *GetManagedObject )( 
            IXCLRDataExceptionState * This,
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IXCLRDataExceptionState * This,
            /* [out] */ CLRDataBaseExceptionType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetCode )( 
            IXCLRDataExceptionState * This,
            /* [out] */ ULONG32 *code);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IXCLRDataExceptionState * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *strLen,
            /* [size_is][out] */ WCHAR str[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataExceptionState * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameState )( 
            IXCLRDataExceptionState * This,
            /* [in] */ EXCEPTION_RECORD64 *exRecord,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE cxRecord[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *IsSameState2 )( 
            IXCLRDataExceptionState * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ EXCEPTION_RECORD64 *exRecord,
            /* [in] */ ULONG32 contextSize,
            /* [size_is][in] */ BYTE cxRecord[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetTask )( 
            IXCLRDataExceptionState * This,
            /* [out] */ IXCLRDataTask **task);
        
        END_INTERFACE
    } IXCLRDataExceptionStateVtbl;

    interface IXCLRDataExceptionState
    {
        CONST_VTBL struct IXCLRDataExceptionStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataExceptionState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataExceptionState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataExceptionState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataExceptionState_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataExceptionState_GetPrevious(This,exState)	\
    ( (This)->lpVtbl -> GetPrevious(This,exState) ) 

#define IXCLRDataExceptionState_GetManagedObject(This,value)	\
    ( (This)->lpVtbl -> GetManagedObject(This,value) ) 

#define IXCLRDataExceptionState_GetBaseType(This,type)	\
    ( (This)->lpVtbl -> GetBaseType(This,type) ) 

#define IXCLRDataExceptionState_GetCode(This,code)	\
    ( (This)->lpVtbl -> GetCode(This,code) ) 

#define IXCLRDataExceptionState_GetString(This,bufLen,strLen,str)	\
    ( (This)->lpVtbl -> GetString(This,bufLen,strLen,str) ) 

#define IXCLRDataExceptionState_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataExceptionState_IsSameState(This,exRecord,contextSize,cxRecord)	\
    ( (This)->lpVtbl -> IsSameState(This,exRecord,contextSize,cxRecord) ) 

#define IXCLRDataExceptionState_IsSameState2(This,flags,exRecord,contextSize,cxRecord)	\
    ( (This)->lpVtbl -> IsSameState2(This,flags,exRecord,contextSize,cxRecord) ) 

#define IXCLRDataExceptionState_GetTask(This,task)	\
    ( (This)->lpVtbl -> GetTask(This,task) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataExceptionState_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xclrdata_0000_0013 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_xclrdata_0000_0013_0001
    {	CLRDATA_VLOC_MEMORY	= 0,
	CLRDATA_VLOC_REGISTER	= 0x1
    } 	ClrDataValueLocationFlag;



extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xclrdata_0000_0013_v0_0_s_ifspec;

#ifndef __IXCLRDataValue_INTERFACE_DEFINED__
#define __IXCLRDataValue_INTERFACE_DEFINED__

/* interface IXCLRDataValue */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataValue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96EC93C7-1000-4e93-8991-98D8766E6666")
    IXCLRDataValue : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ ULONG32 *flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAddress( 
            /* [out] */ CLRDATA_ADDRESS *address) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ ULONG64 *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *dataSize,
            /* [size_is][out] */ BYTE buffer[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBytes( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *dataSize,
            /* [size_is][in] */ BYTE buffer[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ IXCLRDataTypeInstance **typeInstance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumFields( 
            /* [out] */ ULONG32 *numFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldByIndex( 
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Request( 
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumFields2( 
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTypeInstance *fromType,
            /* [out] */ ULONG32 *numFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumFields( 
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTypeInstance *fromType,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumField( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumFields( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartEnumFieldsByName( 
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 nameFlags,
            /* [in] */ ULONG32 fieldFlags,
            /* [in] */ IXCLRDataTypeInstance *fromType,
            /* [out] */ CLRDATA_ENUM *handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFieldByName( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumFieldsByName( 
            /* [in] */ CLRDATA_ENUM handle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldByToken( 
            /* [in] */ mdFieldDef token,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssociatedValue( 
            /* [out] */ IXCLRDataValue **assocValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssociatedType( 
            /* [out] */ IXCLRDataTypeInstance **assocType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *strLen,
            /* [size_is][out] */ WCHAR str[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArrayProperties( 
            /* [out] */ ULONG32 *rank,
            /* [out] */ ULONG32 *totalElements,
            /* [in] */ ULONG32 numDim,
            /* [size_is][out] */ ULONG32 dims[  ],
            /* [in] */ ULONG32 numBases,
            /* [size_is][out] */ LONG32 bases[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArrayElement( 
            /* [in] */ ULONG32 numInd,
            /* [size_is][in] */ LONG32 indices[  ],
            /* [out] */ IXCLRDataValue **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumField2( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFieldByName2( 
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFieldByToken2( 
            /* [in] */ IXCLRDataModule *tokenScope,
            /* [in] */ mdFieldDef token,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumLocations( 
            /* [out] */ ULONG32 *numLocs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocationByIndex( 
            /* [in] */ ULONG32 loc,
            /* [out] */ ULONG32 *flags,
            /* [out] */ CLRDATA_ADDRESS *arg) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataValueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataValue * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataValue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataValue * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXCLRDataValue * This,
            /* [out] */ ULONG32 *flags);
        
        HRESULT ( STDMETHODCALLTYPE *GetAddress )( 
            IXCLRDataValue * This,
            /* [out] */ CLRDATA_ADDRESS *address);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IXCLRDataValue * This,
            /* [out] */ ULONG64 *size);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *dataSize,
            /* [size_is][out] */ BYTE buffer[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SetBytes )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *dataSize,
            /* [size_is][in] */ BYTE buffer[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IXCLRDataValue * This,
            /* [out] */ IXCLRDataTypeInstance **typeInstance);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumFields )( 
            IXCLRDataValue * This,
            /* [out] */ ULONG32 *numFields);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldByIndex )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 index,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *Request )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 reqCode,
            /* [in] */ ULONG32 inBufferSize,
            /* [size_is][in] */ BYTE *inBuffer,
            /* [in] */ ULONG32 outBufferSize,
            /* [size_is][out] */ BYTE *outBuffer);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumFields2 )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTypeInstance *fromType,
            /* [out] */ ULONG32 *numFields);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumFields )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 flags,
            /* [in] */ IXCLRDataTypeInstance *fromType,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumField )( 
            IXCLRDataValue * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumFields )( 
            IXCLRDataValue * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *StartEnumFieldsByName )( 
            IXCLRDataValue * This,
            /* [in] */ LPCWSTR name,
            /* [in] */ ULONG32 nameFlags,
            /* [in] */ ULONG32 fieldFlags,
            /* [in] */ IXCLRDataTypeInstance *fromType,
            /* [out] */ CLRDATA_ENUM *handle);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFieldByName )( 
            IXCLRDataValue * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EndEnumFieldsByName )( 
            IXCLRDataValue * This,
            /* [in] */ CLRDATA_ENUM handle);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldByToken )( 
            IXCLRDataValue * This,
            /* [in] */ mdFieldDef token,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssociatedValue )( 
            IXCLRDataValue * This,
            /* [out] */ IXCLRDataValue **assocValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssociatedType )( 
            IXCLRDataValue * This,
            /* [out] */ IXCLRDataTypeInstance **assocType);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *strLen,
            /* [size_is][out] */ WCHAR str[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetArrayProperties )( 
            IXCLRDataValue * This,
            /* [out] */ ULONG32 *rank,
            /* [out] */ ULONG32 *totalElements,
            /* [in] */ ULONG32 numDim,
            /* [size_is][out] */ ULONG32 dims[  ],
            /* [in] */ ULONG32 numBases,
            /* [size_is][out] */ LONG32 bases[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetArrayElement )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 numInd,
            /* [size_is][in] */ LONG32 indices[  ],
            /* [out] */ IXCLRDataValue **value);
        
        HRESULT ( STDMETHODCALLTYPE *EnumField2 )( 
            IXCLRDataValue * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 nameBufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ],
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFieldByName2 )( 
            IXCLRDataValue * This,
            /* [out][in] */ CLRDATA_ENUM *handle,
            /* [out] */ IXCLRDataValue **field,
            /* [out] */ IXCLRDataModule **tokenScope,
            /* [out] */ mdFieldDef *token);
        
        HRESULT ( STDMETHODCALLTYPE *GetFieldByToken2 )( 
            IXCLRDataValue * This,
            /* [in] */ IXCLRDataModule *tokenScope,
            /* [in] */ mdFieldDef token,
            /* [out] */ IXCLRDataValue **field,
            /* [in] */ ULONG32 bufLen,
            /* [out] */ ULONG32 *nameLen,
            /* [size_is][out] */ WCHAR nameBuf[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumLocations )( 
            IXCLRDataValue * This,
            /* [out] */ ULONG32 *numLocs);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocationByIndex )( 
            IXCLRDataValue * This,
            /* [in] */ ULONG32 loc,
            /* [out] */ ULONG32 *flags,
            /* [out] */ CLRDATA_ADDRESS *arg);
        
        END_INTERFACE
    } IXCLRDataValueVtbl;

    interface IXCLRDataValue
    {
        CONST_VTBL struct IXCLRDataValueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataValue_GetFlags(This,flags)	\
    ( (This)->lpVtbl -> GetFlags(This,flags) ) 

#define IXCLRDataValue_GetAddress(This,address)	\
    ( (This)->lpVtbl -> GetAddress(This,address) ) 

#define IXCLRDataValue_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IXCLRDataValue_GetBytes(This,bufLen,dataSize,buffer)	\
    ( (This)->lpVtbl -> GetBytes(This,bufLen,dataSize,buffer) ) 

#define IXCLRDataValue_SetBytes(This,bufLen,dataSize,buffer)	\
    ( (This)->lpVtbl -> SetBytes(This,bufLen,dataSize,buffer) ) 

#define IXCLRDataValue_GetType(This,typeInstance)	\
    ( (This)->lpVtbl -> GetType(This,typeInstance) ) 

#define IXCLRDataValue_GetNumFields(This,numFields)	\
    ( (This)->lpVtbl -> GetNumFields(This,numFields) ) 

#define IXCLRDataValue_GetFieldByIndex(This,index,field,bufLen,nameLen,nameBuf,token)	\
    ( (This)->lpVtbl -> GetFieldByIndex(This,index,field,bufLen,nameLen,nameBuf,token) ) 

#define IXCLRDataValue_Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer)	\
    ( (This)->lpVtbl -> Request(This,reqCode,inBufferSize,inBuffer,outBufferSize,outBuffer) ) 

#define IXCLRDataValue_GetNumFields2(This,flags,fromType,numFields)	\
    ( (This)->lpVtbl -> GetNumFields2(This,flags,fromType,numFields) ) 

#define IXCLRDataValue_StartEnumFields(This,flags,fromType,handle)	\
    ( (This)->lpVtbl -> StartEnumFields(This,flags,fromType,handle) ) 

#define IXCLRDataValue_EnumField(This,handle,field,nameBufLen,nameLen,nameBuf,token)	\
    ( (This)->lpVtbl -> EnumField(This,handle,field,nameBufLen,nameLen,nameBuf,token) ) 

#define IXCLRDataValue_EndEnumFields(This,handle)	\
    ( (This)->lpVtbl -> EndEnumFields(This,handle) ) 

#define IXCLRDataValue_StartEnumFieldsByName(This,name,nameFlags,fieldFlags,fromType,handle)	\
    ( (This)->lpVtbl -> StartEnumFieldsByName(This,name,nameFlags,fieldFlags,fromType,handle) ) 

#define IXCLRDataValue_EnumFieldByName(This,handle,field,token)	\
    ( (This)->lpVtbl -> EnumFieldByName(This,handle,field,token) ) 

#define IXCLRDataValue_EndEnumFieldsByName(This,handle)	\
    ( (This)->lpVtbl -> EndEnumFieldsByName(This,handle) ) 

#define IXCLRDataValue_GetFieldByToken(This,token,field,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetFieldByToken(This,token,field,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataValue_GetAssociatedValue(This,assocValue)	\
    ( (This)->lpVtbl -> GetAssociatedValue(This,assocValue) ) 

#define IXCLRDataValue_GetAssociatedType(This,assocType)	\
    ( (This)->lpVtbl -> GetAssociatedType(This,assocType) ) 

#define IXCLRDataValue_GetString(This,bufLen,strLen,str)	\
    ( (This)->lpVtbl -> GetString(This,bufLen,strLen,str) ) 

#define IXCLRDataValue_GetArrayProperties(This,rank,totalElements,numDim,dims,numBases,bases)	\
    ( (This)->lpVtbl -> GetArrayProperties(This,rank,totalElements,numDim,dims,numBases,bases) ) 

#define IXCLRDataValue_GetArrayElement(This,numInd,indices,value)	\
    ( (This)->lpVtbl -> GetArrayElement(This,numInd,indices,value) ) 

#define IXCLRDataValue_EnumField2(This,handle,field,nameBufLen,nameLen,nameBuf,tokenScope,token)	\
    ( (This)->lpVtbl -> EnumField2(This,handle,field,nameBufLen,nameLen,nameBuf,tokenScope,token) ) 

#define IXCLRDataValue_EnumFieldByName2(This,handle,field,tokenScope,token)	\
    ( (This)->lpVtbl -> EnumFieldByName2(This,handle,field,tokenScope,token) ) 

#define IXCLRDataValue_GetFieldByToken2(This,tokenScope,token,field,bufLen,nameLen,nameBuf)	\
    ( (This)->lpVtbl -> GetFieldByToken2(This,tokenScope,token,field,bufLen,nameLen,nameBuf) ) 

#define IXCLRDataValue_GetNumLocations(This,numLocs)	\
    ( (This)->lpVtbl -> GetNumLocations(This,numLocs) ) 

#define IXCLRDataValue_GetLocationByIndex(This,loc,flags,arg)	\
    ( (This)->lpVtbl -> GetLocationByIndex(This,loc,flags,arg) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataValue_INTERFACE_DEFINED__ */


#ifndef __IXCLRDataExceptionNotification_INTERFACE_DEFINED__
#define __IXCLRDataExceptionNotification_INTERFACE_DEFINED__

/* interface IXCLRDataExceptionNotification */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataExceptionNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D95A079-42A1-4837-818F-0B97D7048E0E")
    IXCLRDataExceptionNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCodeGenerated( 
            /* [in] */ IXCLRDataMethodInstance *method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCodeDiscarded( 
            /* [in] */ IXCLRDataMethodInstance *method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnProcessExecution( 
            /* [in] */ ULONG32 state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTaskExecution( 
            /* [in] */ IXCLRDataTask *task,
            /* [in] */ ULONG32 state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnModuleLoaded( 
            /* [in] */ IXCLRDataModule *mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnModuleUnloaded( 
            /* [in] */ IXCLRDataModule *mod) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTypeLoaded( 
            /* [in] */ IXCLRDataTypeInstance *typeInst) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTypeUnloaded( 
            /* [in] */ IXCLRDataTypeInstance *typeInst) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataExceptionNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataExceptionNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataExceptionNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCodeGenerated )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataMethodInstance *method);
        
        HRESULT ( STDMETHODCALLTYPE *OnCodeDiscarded )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataMethodInstance *method);
        
        HRESULT ( STDMETHODCALLTYPE *OnProcessExecution )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ ULONG32 state);
        
        HRESULT ( STDMETHODCALLTYPE *OnTaskExecution )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataTask *task,
            /* [in] */ ULONG32 state);
        
        HRESULT ( STDMETHODCALLTYPE *OnModuleLoaded )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataModule *mod);
        
        HRESULT ( STDMETHODCALLTYPE *OnModuleUnloaded )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataModule *mod);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeLoaded )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataTypeInstance *typeInst);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeUnloaded )( 
            IXCLRDataExceptionNotification * This,
            /* [in] */ IXCLRDataTypeInstance *typeInst);
        
        END_INTERFACE
    } IXCLRDataExceptionNotificationVtbl;

    interface IXCLRDataExceptionNotification
    {
        CONST_VTBL struct IXCLRDataExceptionNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataExceptionNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataExceptionNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataExceptionNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataExceptionNotification_OnCodeGenerated(This,method)	\
    ( (This)->lpVtbl -> OnCodeGenerated(This,method) ) 

#define IXCLRDataExceptionNotification_OnCodeDiscarded(This,method)	\
    ( (This)->lpVtbl -> OnCodeDiscarded(This,method) ) 

#define IXCLRDataExceptionNotification_OnProcessExecution(This,state)	\
    ( (This)->lpVtbl -> OnProcessExecution(This,state) ) 

#define IXCLRDataExceptionNotification_OnTaskExecution(This,task,state)	\
    ( (This)->lpVtbl -> OnTaskExecution(This,task,state) ) 

#define IXCLRDataExceptionNotification_OnModuleLoaded(This,mod)	\
    ( (This)->lpVtbl -> OnModuleLoaded(This,mod) ) 

#define IXCLRDataExceptionNotification_OnModuleUnloaded(This,mod)	\
    ( (This)->lpVtbl -> OnModuleUnloaded(This,mod) ) 

#define IXCLRDataExceptionNotification_OnTypeLoaded(This,typeInst)	\
    ( (This)->lpVtbl -> OnTypeLoaded(This,typeInst) ) 

#define IXCLRDataExceptionNotification_OnTypeUnloaded(This,typeInst)	\
    ( (This)->lpVtbl -> OnTypeUnloaded(This,typeInst) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataExceptionNotification_INTERFACE_DEFINED__ */


#ifndef __IXCLRDataExceptionNotification2_INTERFACE_DEFINED__
#define __IXCLRDataExceptionNotification2_INTERFACE_DEFINED__

/* interface IXCLRDataExceptionNotification2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IXCLRDataExceptionNotification2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31201a94-4337-49b7-aef7-0c755054091f")
    IXCLRDataExceptionNotification2 : public IXCLRDataExceptionNotification
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnAppDomainLoaded( 
            /* [in] */ IXCLRDataAppDomain *domain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAppDomainUnloaded( 
            /* [in] */ IXCLRDataAppDomain *domain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnException( 
            /* [in] */ IXCLRDataExceptionState *exception) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IXCLRDataExceptionNotification2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXCLRDataExceptionNotification2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXCLRDataExceptionNotification2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnCodeGenerated )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataMethodInstance *method);
        
        HRESULT ( STDMETHODCALLTYPE *OnCodeDiscarded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataMethodInstance *method);
        
        HRESULT ( STDMETHODCALLTYPE *OnProcessExecution )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ ULONG32 state);
        
        HRESULT ( STDMETHODCALLTYPE *OnTaskExecution )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataTask *task,
            /* [in] */ ULONG32 state);
        
        HRESULT ( STDMETHODCALLTYPE *OnModuleLoaded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataModule *mod);
        
        HRESULT ( STDMETHODCALLTYPE *OnModuleUnloaded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataModule *mod);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeLoaded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataTypeInstance *typeInst);
        
        HRESULT ( STDMETHODCALLTYPE *OnTypeUnloaded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataTypeInstance *typeInst);
        
        HRESULT ( STDMETHODCALLTYPE *OnAppDomainLoaded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataAppDomain *domain);
        
        HRESULT ( STDMETHODCALLTYPE *OnAppDomainUnloaded )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataAppDomain *domain);
        
        HRESULT ( STDMETHODCALLTYPE *OnException )( 
            IXCLRDataExceptionNotification2 * This,
            /* [in] */ IXCLRDataExceptionState *exception);
        
        END_INTERFACE
    } IXCLRDataExceptionNotification2Vtbl;

    interface IXCLRDataExceptionNotification2
    {
        CONST_VTBL struct IXCLRDataExceptionNotification2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXCLRDataExceptionNotification2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXCLRDataExceptionNotification2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXCLRDataExceptionNotification2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXCLRDataExceptionNotification2_OnCodeGenerated(This,method)	\
    ( (This)->lpVtbl -> OnCodeGenerated(This,method) ) 

#define IXCLRDataExceptionNotification2_OnCodeDiscarded(This,method)	\
    ( (This)->lpVtbl -> OnCodeDiscarded(This,method) ) 

#define IXCLRDataExceptionNotification2_OnProcessExecution(This,state)	\
    ( (This)->lpVtbl -> OnProcessExecution(This,state) ) 

#define IXCLRDataExceptionNotification2_OnTaskExecution(This,task,state)	\
    ( (This)->lpVtbl -> OnTaskExecution(This,task,state) ) 

#define IXCLRDataExceptionNotification2_OnModuleLoaded(This,mod)	\
    ( (This)->lpVtbl -> OnModuleLoaded(This,mod) ) 

#define IXCLRDataExceptionNotification2_OnModuleUnloaded(This,mod)	\
    ( (This)->lpVtbl -> OnModuleUnloaded(This,mod) ) 

#define IXCLRDataExceptionNotification2_OnTypeLoaded(This,typeInst)	\
    ( (This)->lpVtbl -> OnTypeLoaded(This,typeInst) ) 

#define IXCLRDataExceptionNotification2_OnTypeUnloaded(This,typeInst)	\
    ( (This)->lpVtbl -> OnTypeUnloaded(This,typeInst) ) 


#define IXCLRDataExceptionNotification2_OnAppDomainLoaded(This,domain)	\
    ( (This)->lpVtbl -> OnAppDomainLoaded(This,domain) ) 

#define IXCLRDataExceptionNotification2_OnAppDomainUnloaded(This,domain)	\
    ( (This)->lpVtbl -> OnAppDomainUnloaded(This,domain) ) 

#define IXCLRDataExceptionNotification2_OnException(This,exception)	\
    ( (This)->lpVtbl -> OnException(This,exception) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXCLRDataExceptionNotification2_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


