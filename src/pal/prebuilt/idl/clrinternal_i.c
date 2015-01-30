//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 
//



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* @@MIDL_FILE_HEADING(  ) */

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

MIDL_DEFINE_GUID(IID, IID_IExecutionEngine,0x7AF02DAC,0x2A33,0x494b,0xA0,0x9F,0x25,0xE0,0x0A,0x93,0xC6,0xF8);


MIDL_DEFINE_GUID(IID, IID_IEEMemoryManager,0x17713B61,0xB59F,0x4e13,0xBA,0xAF,0x91,0x62,0x3D,0xC8,0xAD,0xC0);


MIDL_DEFINE_GUID(IID, IID_IPrivateManagedExceptionReporting,0xAD76A023,0x332D,0x4298,0x80,0x01,0x07,0xAA,0x93,0x50,0xDC,0xA4);


MIDL_DEFINE_GUID(IID, IID_ICLRRuntimeHostInternal,0x07C4E752,0x3CBA,0x4A07,0x99,0x43,0xB5,0xF2,0x06,0x38,0x21,0x78);


MIDL_DEFINE_GUID(IID, IID_ICLRShimControlInternal,0x826AAAD7,0x717B,0x44f8,0x9B,0xB0,0x7D,0xAC,0x36,0x8B,0x85,0xA5);


MIDL_DEFINE_GUID(IID, IID_ICLRActivationFactory,0x331F2F6C,0x385F,0x462c,0x91,0x25,0x81,0x67,0x12,0xFB,0x2B,0xC6);


MIDL_DEFINE_GUID(IID, IID_ICLRActivationFactory2,0x035049E5,0x2658,0x40C0,0x92,0x69,0x21,0xC4,0x8D,0x8F,0x07,0x48);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


