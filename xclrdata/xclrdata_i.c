

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IXCLRDataTarget3,0x59d9b5e1,0x4a6f,0x4531,0x84,0xc3,0x51,0xd1,0x2d,0xa2,0x2f,0xd4);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataProcess,0x5c552ab6,0xfc09,0x4cb3,0x8e,0x36,0x22,0xfa,0x03,0xc7,0x98,0xb7);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataAppDomain,0x7CA04601,0xC702,0x4670,0xA6,0x3C,0xFA,0x44,0xF7,0xDA,0x7B,0xD5);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataAssembly,0x2FA17588,0x43C2,0x46ab,0x9B,0x51,0xC8,0xF0,0x1E,0x39,0xC9,0xAC);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataModule,0x88E32849,0x0A0A,0x4cb0,0x90,0x22,0x7C,0xD2,0xE9,0xE1,0x39,0xE2);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataTypeDefinition,0x4675666C,0xC275,0x45b8,0x9F,0x6C,0xAB,0x16,0x5D,0x5C,0x1E,0x09);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataTypeInstance,0x4D078D91,0x9CB3,0x4b0d,0x97,0xAC,0x28,0xC8,0xA5,0xA8,0x25,0x97);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataMethodDefinition,0xAAF60008,0xFB2C,0x420b,0x8F,0xB1,0x42,0xD2,0x44,0xA5,0x4A,0x97);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataMethodInstance,0xECD73800,0x22CA,0x4b0d,0xAB,0x55,0xE9,0xBA,0x7E,0x63,0x18,0xA5);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataTask,0xA5B0BEEA,0xEC62,0x4618,0x80,0x12,0xA2,0x4F,0xFC,0x23,0x93,0x4C);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataStackWalk,0xE59D8D22,0xADA7,0x49a2,0x89,0xB5,0xA4,0x15,0xAF,0xCF,0xC9,0x5F);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataFrame,0x271498C2,0x4085,0x4766,0xBC,0x3A,0x7F,0x8E,0xD1,0x88,0xA1,0x73);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataExceptionState,0x75DA9E4C,0xBD33,0x43C8,0x8F,0x5C,0x96,0xE8,0xA5,0x24,0x1F,0x57);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataValue,0x96EC93C7,0x1000,0x4e93,0x89,0x91,0x98,0xD8,0x76,0x6E,0x66,0x66);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataExceptionNotification,0x2D95A079,0x42A1,0x4837,0x81,0x8F,0x0B,0x97,0xD7,0x04,0x8E,0x0E);


MIDL_DEFINE_GUID(IID, IID_IXCLRDataExceptionNotification2,0x31201a94,0x4337,0x49b7,0xae,0xf7,0x0c,0x75,0x50,0x54,0x09,0x1f);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



