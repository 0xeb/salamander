

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ..\salamander.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "salamander_h.h"

#define TYPE_FORMAT_STRING_SIZE   1227                              
#define PROC_FORMAT_STRING_SIZE   3039                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _salamander_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } salamander_MIDL_TYPE_FORMAT_STRING;

typedef struct _salamander_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } salamander_MIDL_PROC_FORMAT_STRING;

typedef struct _salamander_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } salamander_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const salamander_MIDL_TYPE_FORMAT_STRING salamander__MIDL_TypeFormatString;
extern const salamander_MIDL_PROC_FORMAT_STRING salamander__MIDL_ProcFormatString;
extern const salamander_MIDL_EXPR_FORMAT_STRING salamander__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamander_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamander_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderPanel_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderPanel_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderPanelItem_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderPanelItem_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderPanelItemCollection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderPanelItemCollection_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderProgressDialog_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderProgressDialog_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderWaitWindow_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderWaitWindow_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderScriptInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderScriptInfo_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderGuiComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiComponent_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderGuiCheckBox_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiCheckBox_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderGuiButton_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiButton_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderGuiContainer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiContainer_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderGuiForm_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiForm_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISalamanderGui_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISalamanderGui_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const salamander_MIDL_PROC_FORMAT_STRING salamander__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure MsgBox */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 16 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prompt */

/* 26 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter buttons */

/* 32 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter title */

/* 38 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter result */

/* 44 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 52 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_LeftPanel */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x4 ),	/* 4 */
/* 64 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 72 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter panel */

/* 82 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 84 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 86 */	NdrFcShort( 0x3ea ),	/* Type Offset=1002 */

	/* Return value */

/* 88 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 90 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 92 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RightPanel */

/* 94 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 96 */	NdrFcLong( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x5 ),	/* 5 */
/* 102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 110 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter panel */

/* 120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 124 */	NdrFcShort( 0x3ea ),	/* Type Offset=1002 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SourcePanel */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 148 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter panel */

/* 158 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 160 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 162 */	NdrFcShort( 0x3ea ),	/* Type Offset=1002 */

	/* Return value */

/* 164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 166 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TargetPanel */

/* 170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x7 ),	/* 7 */
/* 178 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 186 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter panel */

/* 196 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 200 */	NdrFcShort( 0x3ea ),	/* Type Offset=1002 */

	/* Return value */

/* 202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Version */

/* 208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x24 ),	/* 36 */
/* 222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 224 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */

/* 234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 236 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InputBox */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x9 ),	/* 9 */
/* 254 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 262 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter prompt */

/* 272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter title */

/* 278 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 280 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 282 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter _default */

/* 284 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 288 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter result */

/* 290 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 292 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 294 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 298 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Delay */


	/* Procedure get_PathType */


	/* Procedure get_WindowsVersion */

/* 302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0xa ),	/* 10 */
/* 310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 316 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 318 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ms */


	/* Parameter type */


	/* Parameter version */

/* 328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 330 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 336 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AutomationVersion */

/* 340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0xb ),	/* 11 */
/* 348 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x24 ),	/* 36 */
/* 354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 356 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */

/* 366 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sleep */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0xc ),	/* 12 */
/* 386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 392 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 394 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter time */

/* 404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 406 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 412 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AbortScript */

/* 416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0xd ),	/* 13 */
/* 424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 430 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 432 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 444 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TraceI */

/* 448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0xe ),	/* 14 */
/* 456 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 462 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 464 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter message */

/* 474 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 476 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 478 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TraceE */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0xf ),	/* 15 */
/* 494 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 502 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter message */

/* 512 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 514 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 516 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 520 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProgressDialog */

/* 524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 532 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 538 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 540 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dialog */

/* 550 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 552 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 554 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 558 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WaitWindow */

/* 562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x11 ),	/* 17 */
/* 570 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 578 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter window */

/* 588 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 592 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ViewFile */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x12 ),	/* 18 */
/* 608 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 616 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter file */

/* 626 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 628 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 630 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter cache */

/* 632 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 634 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 636 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 640 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MatchesMask */

/* 644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x13 ),	/* 19 */
/* 652 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x22 ),	/* 34 */
/* 658 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 660 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x1 ),	/* 1 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter file */

/* 670 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 672 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 674 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter mask */

/* 676 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 678 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 680 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter match */

/* 682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 684 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 686 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 690 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DebugBreak */

/* 694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x14 ),	/* 20 */
/* 702 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 708 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 710 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 722 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ErrorDialog */

/* 726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x15 ),	/* 21 */
/* 734 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 740 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 742 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter file */

/* 752 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 756 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter error */

/* 758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 760 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 762 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter buttons */

/* 764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 766 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter title */

/* 770 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 772 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 774 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter result */

/* 776 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 778 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 784 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QuestionDialog */

/* 788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x16 ),	/* 22 */
/* 796 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	NdrFcShort( 0x24 ),	/* 36 */
/* 802 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 804 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter file */

/* 814 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 816 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 818 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter question */

/* 820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 822 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 824 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter buttons */

/* 826 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter title */

/* 832 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 834 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 836 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter result */

/* 838 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 840 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 844 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 846 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OverwriteDialog */

/* 850 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x17 ),	/* 23 */
/* 858 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	NdrFcShort( 0x24 ),	/* 36 */
/* 864 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 866 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter file1 */

/* 876 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 878 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 880 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter file2 */

/* 882 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 884 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 886 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter buttons */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter result */

/* 894 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 896 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Forms */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x18 ),	/* 24 */
/* 914 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 922 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter gui */

/* 932 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 936 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Return value */

/* 938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPersistentVal */

/* 944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x19 ),	/* 25 */
/* 952 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 958 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 960 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key */

/* 970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 972 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 974 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter val */

/* 976 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 978 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 980 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 984 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPersistentVal */

/* 988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x1a ),	/* 26 */
/* 996 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1002 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1004 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key */

/* 1014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter val */

/* 1020 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1022 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1024 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Script */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1040 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1048 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter info */

/* 1058 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1062 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 1064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFullPath */

/* 1070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1078 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1084 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1086 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 1096 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1100 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter panel */

/* 1102 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1106 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter result */

/* 1108 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1112 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 1114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1116 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Path */

/* 1120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1136 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 1146 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1150 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Path */


	/* Procedure get_Path */


	/* Procedure get_Path */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1174 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1176 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */


	/* Parameter path */


	/* Parameter path */

/* 1184 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1186 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1188 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1192 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_FocusedItem */

/* 1196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1204 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1210 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1212 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter item */

/* 1222 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1226 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 1228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SelectedItems */

/* 1234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1242 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1248 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1250 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter coll */

/* 1260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1262 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1264 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1268 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Items */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1280 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1286 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter coll */

/* 1298 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1302 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */

	/* Return value */

/* 1304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectAll */

/* 1310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1322 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1324 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1326 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeselectAll */

/* 1342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1358 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter save */

/* 1368 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1372 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StoreSelection */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0xb ),	/* 11 */
/* 1388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1396 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */


	/* Procedure get_Name */


	/* Procedure get_Name */

/* 1412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1420 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1426 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1428 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1430 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */


	/* Parameter name */


	/* Parameter name */

/* 1438 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1442 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */

/* 1450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1458 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1464 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1466 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1468 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter size */

/* 1476 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1480 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DateLastModified */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1496 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1502 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1504 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter date */

/* 1514 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1516 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1518 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Attributes */

/* 1526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1534 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1540 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1542 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter attrs */

/* 1552 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1560 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 1564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1572 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1578 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1580 */	0xa,		/* 10 */
			0x85,		/* Ext Flags:  new corr desc, srv corr check, has big byval param */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter key */

/* 1590 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1592 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1594 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter item */

/* 1596 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1598 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1600 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1616 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1624 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter count */

/* 1634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1636 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1642 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 1646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1654 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1660 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1662 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 1672 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1674 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1676 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */

	/* Return value */

/* 1678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1680 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Show */


	/* Procedure Show */

/* 1684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1692 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1698 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1700 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hide */


	/* Procedure Hide */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1724 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1732 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1744 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Title */


	/* Procedure get_Title */

/* 1748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1756 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1762 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1764 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter title */


	/* Parameter title */

/* 1774 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1778 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */


	/* Return value */

/* 1780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Title */


	/* Procedure put_Title */

/* 1786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1794 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1800 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1802 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter title */


	/* Parameter title */

/* 1812 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1816 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */


	/* Return value */

/* 1818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1820 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddText */

/* 1824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1832 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1838 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1840 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 1850 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1854 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1858 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsCancelled */

/* 1862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1876 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1878 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cancelled */

/* 1888 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1890 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1892 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1896 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Position */

/* 1900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1906 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1908 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1914 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1916 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter position */

/* 1926 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1930 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Return value */

/* 1932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1934 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Position */

/* 1938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0xa ),	/* 10 */
/* 1946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1954 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter position */

/* 1964 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1968 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 1970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TotalPosition */

/* 1976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1982 */	NdrFcShort( 0xb ),	/* 11 */
/* 1984 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1990 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1992 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1994 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter position */

/* 2002 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2004 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2006 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Return value */

/* 2008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2010 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TotalPosition */

/* 2014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2020 */	NdrFcShort( 0xc ),	/* 12 */
/* 2022 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2028 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2030 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter position */

/* 2040 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2042 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2044 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 2046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2048 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Step */

/* 2052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0xd ),	/* 13 */
/* 2060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2068 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter step */

/* 2078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2086 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CanCancel */

/* 2090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0xe ),	/* 14 */
/* 2098 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2104 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2106 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2116 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2120 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CanCancel */

/* 2128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2134 */	NdrFcShort( 0xf ),	/* 15 */
/* 2136 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2142 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2144 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2158 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Style */

/* 2166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2174 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2182 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter barcount */

/* 2192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Style */

/* 2204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2212 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2220 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter barcount */

/* 2230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Maximum */

/* 2242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2250 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2256 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2258 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2260 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter max */

/* 2268 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2270 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2272 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Return value */

/* 2274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2276 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Maximum */

/* 2280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2288 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2294 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2296 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter max */

/* 2306 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2310 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 2312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TotalMaximum */

/* 2318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2332 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2334 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter max */

/* 2344 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 2346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2348 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Return value */

/* 2350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TotalMaximum */

/* 2356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2372 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter max */

/* 2382 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2384 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2386 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 2388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Text */

/* 2394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2402 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2410 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2420 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2422 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2424 */	NdrFcShort( 0x408 ),	/* Type Offset=1032 */

	/* Return value */

/* 2426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2428 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Text */

/* 2432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2446 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2448 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2458 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2460 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2462 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsCancelled */

/* 2470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2478 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2484 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2486 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cancelled */

/* 2496 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2500 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Delay */

/* 2508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0xb ),	/* 11 */
/* 2516 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2524 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ms */

/* 2534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2536 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2542 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CanCancel */

/* 2546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0xc ),	/* 12 */
/* 2554 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2560 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2562 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2576 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CanCancel */

/* 2584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0xd ),	/* 13 */
/* 2592 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2594 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2598 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2600 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter enabled */

/* 2610 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2612 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2614 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2618 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Text */

/* 2622 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2630 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2636 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2638 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2648 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2650 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2652 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 2654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2656 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Checked */

/* 2660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2668 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2676 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 2686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2688 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2690 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2694 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Checked */

/* 2698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2704 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2706 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2708 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2712 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2714 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2728 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Execute */


	/* Procedure get_DialogResult */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2744 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2752 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter result */


	/* Parameter val */

/* 2762 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2764 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2770 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DialogResult */

/* 2774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2780 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2782 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2788 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2790 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val */

/* 2800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2808 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Form */

/* 2812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2820 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2826 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2828 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter title */

/* 2838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2840 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2842 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter component */

/* 2844 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2846 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2848 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Return value */

/* 2850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2852 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Button */

/* 2856 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2864 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2870 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2872 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2882 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2884 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2886 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter result */

/* 2888 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2890 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2892 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter component */

/* 2894 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2896 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2898 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Return value */

/* 2900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2902 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckBox */

/* 2906 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2914 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2920 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2922 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2932 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2936 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter component */

/* 2938 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2940 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2942 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Return value */

/* 2944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TextBox */

/* 2950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2958 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2964 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2966 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 2976 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2980 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter component */

/* 2982 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2984 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2986 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Return value */

/* 2988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2990 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Label */

/* 2994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3002 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3008 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3010 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter text */

/* 3020 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3022 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3024 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Parameter component */

/* 3026 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3028 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3030 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Return value */

/* 3032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3034 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const salamander_MIDL_TYPE_FORMAT_STRING salamander__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x0,	/* FC_RP */
/* 40 */	NdrFcShort( 0x3b4 ),	/* Offset= 948 (988) */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0x39c ),	/* Offset= 924 (968) */
/* 46 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 48 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 50 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 52 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	NdrFcShort( 0x10 ),	/* 16 */
/* 58 */	NdrFcShort( 0x2f ),	/* 47 */
/* 60 */	NdrFcLong( 0x14 ),	/* 20 */
/* 64 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 66 */	NdrFcLong( 0x3 ),	/* 3 */
/* 70 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 72 */	NdrFcLong( 0x11 ),	/* 17 */
/* 76 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 78 */	NdrFcLong( 0x2 ),	/* 2 */
/* 82 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 84 */	NdrFcLong( 0x4 ),	/* 4 */
/* 88 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 90 */	NdrFcLong( 0x5 ),	/* 5 */
/* 94 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 96 */	NdrFcLong( 0xb ),	/* 11 */
/* 100 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 102 */	NdrFcLong( 0xa ),	/* 10 */
/* 106 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 108 */	NdrFcLong( 0x6 ),	/* 6 */
/* 112 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (344) */
/* 114 */	NdrFcLong( 0x7 ),	/* 7 */
/* 118 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 120 */	NdrFcLong( 0x8 ),	/* 8 */
/* 124 */	NdrFcShort( 0xff86 ),	/* Offset= -122 (2) */
/* 126 */	NdrFcLong( 0xd ),	/* 13 */
/* 130 */	NdrFcShort( 0xdc ),	/* Offset= 220 (350) */
/* 132 */	NdrFcLong( 0x9 ),	/* 9 */
/* 136 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (368) */
/* 138 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 142 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (386) */
/* 144 */	NdrFcLong( 0x24 ),	/* 36 */
/* 148 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (894) */
/* 150 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 154 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (894) */
/* 156 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 160 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (898) */
/* 162 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 166 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (902) */
/* 168 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 172 */	NdrFcShort( 0x2de ),	/* Offset= 734 (906) */
/* 174 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 178 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (910) */
/* 180 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 184 */	NdrFcShort( 0x2da ),	/* Offset= 730 (914) */
/* 186 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 190 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (918) */
/* 192 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 196 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (902) */
/* 198 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 202 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (906) */
/* 204 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 208 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (922) */
/* 210 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 214 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (918) */
/* 216 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 220 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (926) */
/* 222 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 226 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (930) */
/* 228 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 232 */	NdrFcShort( 0x2be ),	/* Offset= 702 (934) */
/* 234 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 238 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (938) */
/* 240 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 244 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (942) */
/* 246 */	NdrFcLong( 0x10 ),	/* 16 */
/* 250 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 252 */	NdrFcLong( 0x12 ),	/* 18 */
/* 256 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 258 */	NdrFcLong( 0x13 ),	/* 19 */
/* 262 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 264 */	NdrFcLong( 0x15 ),	/* 21 */
/* 268 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 270 */	NdrFcLong( 0x16 ),	/* 22 */
/* 274 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 276 */	NdrFcLong( 0x17 ),	/* 23 */
/* 280 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 282 */	NdrFcLong( 0xe ),	/* 14 */
/* 286 */	NdrFcShort( 0x298 ),	/* Offset= 664 (950) */
/* 288 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 292 */	NdrFcShort( 0x29c ),	/* Offset= 668 (960) */
/* 294 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 298 */	NdrFcShort( 0x29a ),	/* Offset= 666 (964) */
/* 300 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 304 */	NdrFcShort( 0x256 ),	/* Offset= 598 (902) */
/* 306 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 310 */	NdrFcShort( 0x254 ),	/* Offset= 596 (906) */
/* 312 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 316 */	NdrFcShort( 0x252 ),	/* Offset= 594 (910) */
/* 318 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 322 */	NdrFcShort( 0x248 ),	/* Offset= 584 (906) */
/* 324 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 328 */	NdrFcShort( 0x242 ),	/* Offset= 578 (906) */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* Offset= 0 (334) */
/* 336 */	NdrFcLong( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (340) */
/* 342 */	NdrFcShort( 0xffff ),	/* Offset= -1 (341) */
/* 344 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 350 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 368 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 370 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 384 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 386 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 388 */	NdrFcShort( 0x2 ),	/* Offset= 2 (390) */
/* 390 */	
			0x12, 0x0,	/* FC_UP */
/* 392 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (876) */
/* 394 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 396 */	NdrFcShort( 0x20 ),	/* 32 */
/* 398 */	NdrFcShort( 0xa ),	/* 10 */
/* 400 */	NdrFcLong( 0x8 ),	/* 8 */
/* 404 */	NdrFcShort( 0x50 ),	/* Offset= 80 (484) */
/* 406 */	NdrFcLong( 0xd ),	/* 13 */
/* 410 */	NdrFcShort( 0x70 ),	/* Offset= 112 (522) */
/* 412 */	NdrFcLong( 0x9 ),	/* 9 */
/* 416 */	NdrFcShort( 0x90 ),	/* Offset= 144 (560) */
/* 418 */	NdrFcLong( 0xc ),	/* 12 */
/* 422 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (598) */
/* 424 */	NdrFcLong( 0x24 ),	/* 36 */
/* 428 */	NdrFcShort( 0x102 ),	/* Offset= 258 (686) */
/* 430 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 434 */	NdrFcShort( 0x11e ),	/* Offset= 286 (720) */
/* 436 */	NdrFcLong( 0x10 ),	/* 16 */
/* 440 */	NdrFcShort( 0x138 ),	/* Offset= 312 (752) */
/* 442 */	NdrFcLong( 0x2 ),	/* 2 */
/* 446 */	NdrFcShort( 0x14e ),	/* Offset= 334 (780) */
/* 448 */	NdrFcLong( 0x3 ),	/* 3 */
/* 452 */	NdrFcShort( 0x164 ),	/* Offset= 356 (808) */
/* 454 */	NdrFcLong( 0x14 ),	/* 20 */
/* 458 */	NdrFcShort( 0x17a ),	/* Offset= 378 (836) */
/* 460 */	NdrFcShort( 0xffff ),	/* Offset= -1 (459) */
/* 462 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 472 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 476 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 478 */	
			0x12, 0x0,	/* FC_UP */
/* 480 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (18) */
/* 482 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 484 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 486 */	NdrFcShort( 0x10 ),	/* 16 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x6 ),	/* Offset= 6 (496) */
/* 492 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 494 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 496 */	
			0x11, 0x0,	/* FC_RP */
/* 498 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (462) */
/* 500 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 510 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 514 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (350) */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 524 */	NdrFcShort( 0x10 ),	/* 16 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x6 ),	/* Offset= 6 (534) */
/* 530 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 532 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 534 */	
			0x11, 0x0,	/* FC_RP */
/* 536 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (500) */
/* 538 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 548 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 552 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (368) */
/* 558 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x6 ),	/* Offset= 6 (572) */
/* 568 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 570 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 572 */	
			0x11, 0x0,	/* FC_RP */
/* 574 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (538) */
/* 576 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 586 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 590 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 592 */	
			0x12, 0x0,	/* FC_UP */
/* 594 */	NdrFcShort( 0x176 ),	/* Offset= 374 (968) */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 600 */	NdrFcShort( 0x10 ),	/* 16 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x6 ),	/* Offset= 6 (610) */
/* 606 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 608 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 610 */	
			0x11, 0x0,	/* FC_RP */
/* 612 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (576) */
/* 614 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 616 */	NdrFcLong( 0x2f ),	/* 47 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 626 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 628 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 630 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 632 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 636 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 638 */	NdrFcShort( 0x4 ),	/* 4 */
/* 640 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 642 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 644 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 646 */	NdrFcShort( 0x18 ),	/* 24 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0xa ),	/* Offset= 10 (660) */
/* 652 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 654 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (614) */
/* 658 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 660 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 662 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (632) */
/* 664 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 674 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 678 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 680 */	
			0x12, 0x0,	/* FC_UP */
/* 682 */	NdrFcShort( 0xffda ),	/* Offset= -38 (644) */
/* 684 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x6 ),	/* Offset= 6 (698) */
/* 694 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 696 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 698 */	
			0x11, 0x0,	/* FC_RP */
/* 700 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (664) */
/* 702 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 706 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 708 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 714 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 716 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (702) */
			0x5b,		/* FC_END */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x20 ),	/* 32 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xa ),	/* Offset= 10 (736) */
/* 728 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 730 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 732 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (708) */
			0x5b,		/* FC_END */
/* 736 */	
			0x11, 0x0,	/* FC_RP */
/* 738 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (500) */
/* 740 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 750 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 752 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 754 */	NdrFcShort( 0x10 ),	/* 16 */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x6 ),	/* Offset= 6 (764) */
/* 760 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 762 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 764 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 766 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (740) */
/* 768 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 770 */	NdrFcShort( 0x2 ),	/* 2 */
/* 772 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 778 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 780 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x10 ),	/* 16 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x6 ),	/* Offset= 6 (792) */
/* 788 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 790 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 792 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 794 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (768) */
/* 796 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 798 */	NdrFcShort( 0x4 ),	/* 4 */
/* 800 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 806 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 808 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 810 */	NdrFcShort( 0x10 ),	/* 16 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x6 ),	/* Offset= 6 (820) */
/* 816 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 818 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 820 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 822 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (796) */
/* 824 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 828 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 834 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 836 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x6 ),	/* Offset= 6 (848) */
/* 844 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 846 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 848 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 850 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (824) */
/* 852 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 856 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 858 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 860 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 866 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 868 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 870 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 872 */	NdrFcShort( 0xffec ),	/* Offset= -20 (852) */
/* 874 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 876 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x38 ),	/* 56 */
/* 880 */	NdrFcShort( 0xffec ),	/* Offset= -20 (860) */
/* 882 */	NdrFcShort( 0x0 ),	/* Offset= 0 (882) */
/* 884 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 886 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 888 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 890 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (394) */
			0x5b,		/* FC_END */
/* 894 */	
			0x12, 0x0,	/* FC_UP */
/* 896 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (644) */
/* 898 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 900 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 904 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 908 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 912 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 916 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 920 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 922 */	
			0x12, 0x0,	/* FC_UP */
/* 924 */	NdrFcShort( 0xfdbc ),	/* Offset= -580 (344) */
/* 926 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 928 */	NdrFcShort( 0xfc62 ),	/* Offset= -926 (2) */
/* 930 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 932 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (350) */
/* 934 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 936 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (368) */
/* 938 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 940 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (386) */
/* 942 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 944 */	NdrFcShort( 0x2 ),	/* Offset= 2 (946) */
/* 946 */	
			0x12, 0x0,	/* FC_UP */
/* 948 */	NdrFcShort( 0x14 ),	/* Offset= 20 (968) */
/* 950 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 952 */	NdrFcShort( 0x10 ),	/* 16 */
/* 954 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 956 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 958 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 960 */	
			0x12, 0x0,	/* FC_UP */
/* 962 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (950) */
/* 964 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 966 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 970 */	NdrFcShort( 0x20 ),	/* 32 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* Offset= 0 (974) */
/* 976 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 978 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 980 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 982 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 984 */	NdrFcShort( 0xfc56 ),	/* Offset= -938 (46) */
/* 986 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 988 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 992 */	NdrFcShort( 0x18 ),	/* 24 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0xfc46 ),	/* Offset= -954 (42) */
/* 998 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1000 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1002 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1004 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1006) */
/* 1006 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1008 */	NdrFcLong( 0xf51af265 ),	/* -182783387 */
/* 1012 */	NdrFcShort( 0xadb1 ),	/* -21071 */
/* 1014 */	NdrFcShort( 0x40b7 ),	/* 16567 */
/* 1016 */	0xb2,		/* 178 */
			0xcb,		/* 203 */
/* 1018 */	0xa2,		/* 162 */
			0x58,		/* 88 */
/* 1020 */	0xfd,		/* 253 */
			0xe6,		/* 230 */
/* 1022 */	0x90,		/* 144 */
			0x1e,		/* 30 */
/* 1024 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1026 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1032) */
/* 1028 */	
			0x13, 0x0,	/* FC_OP */
/* 1030 */	NdrFcShort( 0xfc0c ),	/* Offset= -1012 (18) */
/* 1032 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1028) */
/* 1042 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1044 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1046) */
/* 1046 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1048 */	NdrFcLong( 0xc51ebe57 ),	/* -987840937 */
/* 1052 */	NdrFcShort( 0x76b2 ),	/* 30386 */
/* 1054 */	NdrFcShort( 0x4c8c ),	/* 19596 */
/* 1056 */	0xa4,		/* 164 */
			0x4b,		/* 75 */
/* 1058 */	0x13,		/* 19 */
			0xe3,		/* 227 */
/* 1060 */	0x4f,		/* 79 */
			0x84,		/* 132 */
/* 1062 */	0x6f,		/* 111 */
			0x2e,		/* 46 */
/* 1064 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1068) */
/* 1068 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1070 */	NdrFcLong( 0x77cd7e2f ),	/* 2009955887 */
/* 1074 */	NdrFcShort( 0x5b62 ),	/* 23394 */
/* 1076 */	NdrFcShort( 0x451d ),	/* 17693 */
/* 1078 */	0xab,		/* 171 */
			0x3d,		/* 61 */
/* 1080 */	0x81,		/* 129 */
			0x2f,		/* 47 */
/* 1082 */	0x8b,		/* 139 */
			0x9f,		/* 159 */
/* 1084 */	0xcb,		/* 203 */
			0xa8,		/* 168 */
/* 1086 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1088 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1092 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1094) */
/* 1094 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1096 */	NdrFcLong( 0x5da5c3ee ),	/* 1571144686 */
/* 1100 */	NdrFcShort( 0xe167 ),	/* -7833 */
/* 1102 */	NdrFcShort( 0x4e57 ),	/* 20055 */
/* 1104 */	0xa8,		/* 168 */
			0xe9,		/* 233 */
/* 1106 */	0x22,		/* 34 */
			0xef,		/* 239 */
/* 1108 */	0x1c,		/* 28 */
			0x8b,		/* 139 */
/* 1110 */	0x45,		/* 69 */
			0xc4,		/* 196 */
/* 1112 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1114 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1120) */
/* 1116 */	
			0x13, 0x0,	/* FC_OP */
/* 1118 */	NdrFcShort( 0xff6a ),	/* Offset= -150 (968) */
/* 1120 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1124 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1116) */
/* 1130 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1134) */
/* 1134 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1136 */	NdrFcLong( 0x99dbfa2f ),	/* -1713636817 */
/* 1140 */	NdrFcShort( 0x9699 ),	/* -26983 */
/* 1142 */	NdrFcShort( 0x40eb ),	/* 16619 */
/* 1144 */	0xac,		/* 172 */
			0xee,		/* 238 */
/* 1146 */	0xb8,		/* 184 */
			0x90,		/* 144 */
/* 1148 */	0x90,		/* 144 */
			0x8a,		/* 138 */
/* 1150 */	0xa5,		/* 165 */
			0x83,		/* 131 */
/* 1152 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1156) */
/* 1156 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1158 */	NdrFcLong( 0x8cd33727 ),	/* -1932314841 */
/* 1162 */	NdrFcShort( 0xa92 ),	/* 2706 */
/* 1164 */	NdrFcShort( 0x4560 ),	/* 17760 */
/* 1166 */	0x80,		/* 128 */
			0xd7,		/* 215 */
/* 1168 */	0x1a,		/* 26 */
			0x44,		/* 68 */
/* 1170 */	0x65,		/* 101 */
			0x12,		/* 18 */
/* 1172 */	0xe,		/* 14 */
			0x9b,		/* 155 */
/* 1174 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1178) */
/* 1178 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1180 */	NdrFcLong( 0x2b527ff9 ),	/* 726827001 */
/* 1184 */	NdrFcShort( 0xdeac ),	/* -8532 */
/* 1186 */	NdrFcShort( 0x481a ),	/* 18458 */
/* 1188 */	0x9f,		/* 159 */
			0x2c,		/* 44 */
/* 1190 */	0x3e,		/* 62 */
			0x7b,		/* 123 */
/* 1192 */	0x27,		/* 39 */
			0xad,		/* 173 */
/* 1194 */	0xce,		/* 206 */
			0xd8,		/* 216 */
/* 1196 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1198 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1200 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1202 */	NdrFcShort( 0xfcac ),	/* Offset= -852 (350) */
/* 1204 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1208) */
/* 1208 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1210 */	NdrFcLong( 0x15711c8c ),	/* 359734412 */
/* 1214 */	NdrFcShort( 0x52b3 ),	/* 21171 */
/* 1216 */	NdrFcShort( 0x4a0b ),	/* 18955 */
/* 1218 */	0x90,		/* 144 */
			0xb0,		/* 176 */
/* 1220 */	0x12,		/* 18 */
			0x3c,		/* 60 */
/* 1222 */	0x8a,		/* 138 */
			0xd,		/* 13 */
/* 1224 */	0x52,		/* 82 */
			0x5b,		/* 91 */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_salamander_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISalamander, ver. 0.0,
   GUID={0x60F57ABE,0x95C7,0x48c7,{0xAE,0x37,0x9D,0xA0,0x07,0xB8,0xD5,0x7F}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamander_FormatStringOffsetTable[] =
    {
    0,
    56,
    94,
    132,
    170,
    208,
    246,
    302,
    340,
    378,
    416,
    448,
    486,
    524,
    562,
    600,
    644,
    694,
    726,
    788,
    850,
    906,
    944,
    988,
    1032,
    1070
    };



/* Object interface: ISalamanderPanel, ver. 0.0,
   GUID={0xF51AF265,0xADB1,0x40b7,{0xB2,0xCB,0xA2,0x58,0xFD,0xE6,0x90,0x1E}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderPanel_FormatStringOffsetTable[] =
    {
    1120,
    1158,
    1196,
    1234,
    1272,
    1310,
    1342,
    302,
    1380,
    (unsigned short) -1
    };



/* Object interface: ISalamanderPanelItem, ver. 0.0,
   GUID={0x8CD33727,0x0A92,0x4560,{0x80,0xD7,0x1A,0x44,0x65,0x12,0x0E,0x9B}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderPanelItem_FormatStringOffsetTable[] =
    {
    1412,
    1158,
    1450,
    1488,
    1526
    };



/* Object interface: ISalamanderPanelItemCollection, ver. 0.0,
   GUID={0x2B527FF9,0xDEAC,0x481a,{0x9F,0x2C,0x3E,0x7B,0x27,0xAD,0xCE,0xD8}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderPanelItemCollection_FormatStringOffsetTable[] =
    {
    1564,
    1608,
    1646
    };



/* Object interface: ISalamanderProgressDialog, ver. 0.0,
   GUID={0xC51EBE57,0x76B2,0x4c8c,{0xA4,0x4B,0x13,0xE3,0x4F,0x84,0x6F,0x2E}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderProgressDialog_FormatStringOffsetTable[] =
    {
    1684,
    1716,
    1748,
    1786,
    1824,
    1862,
    1900,
    1938,
    1976,
    2014,
    2052,
    2090,
    2128,
    2166,
    2204,
    2242,
    2280,
    2318,
    2356
    };



/* Object interface: ISalamanderWaitWindow, ver. 0.0,
   GUID={0x77CD7E2F,0x5B62,0x451d,{0xAB,0x3D,0x81,0x2F,0x8B,0x9F,0xCB,0xA8}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderWaitWindow_FormatStringOffsetTable[] =
    {
    1684,
    1716,
    1748,
    1786,
    2394,
    2432,
    2470,
    302,
    2508,
    2546,
    2584
    };



/* Object interface: ISalamanderScriptInfo, ver. 0.0,
   GUID={0x99DBFA2F,0x9699,0x40eb,{0xAC,0xEE,0xB8,0x90,0x90,0x8A,0xA5,0x83}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderScriptInfo_FormatStringOffsetTable[] =
    {
    1412,
    1158
    };



/* Object interface: ISalamanderGuiComponent, ver. 0.0,
   GUID={0x15711C8C,0x52B3,0x4a0b,{0x90,0xB0,0x12,0x3C,0x8A,0x0D,0x52,0x5B}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderGuiComponent_FormatStringOffsetTable[] =
    {
    1412,
    2622
    };



/* Standard interface: __MIDL_itf_salamander_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISalamanderGuiComponentInternal, ver. 0.0,
   GUID={0x037905FB,0xA081,0x4a60,{0xAE,0x61,0xC8,0x48,0x17,0x7F,0x99,0xE0}} */


/* Object interface: ISalamanderGuiCheckBox, ver. 0.0,
   GUID={0xA26789BB,0xCAA4,0x47d5,{0xBC,0xC5,0x38,0x6E,0xF2,0x42,0x20,0xD4}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderGuiCheckBox_FormatStringOffsetTable[] =
    {
    1412,
    2622,
    2660,
    2698
    };



/* Object interface: ISalamanderGuiButton, ver. 0.0,
   GUID={0xF30E467C,0x0FEA,0x4e67,{0x9F,0x51,0xC2,0xB1,0xA2,0xA3,0x0D,0x4E}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderGuiButton_FormatStringOffsetTable[] =
    {
    1412,
    2622,
    2736,
    2774
    };



/* Object interface: ISalamanderGuiContainer, ver. 0.0,
   GUID={0x6A31B232,0xB6AF,0x467a,{0xB8,0x18,0x21,0x2C,0xCC,0x6F,0x4C,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderGuiContainer_FormatStringOffsetTable[] =
    {
    1412,
    2622,
    0
    };



/* Object interface: ISalamanderGuiForm, ver. 0.0,
   GUID={0x7356DD12,0xA7DA,0x41EB,{0x8E,0x31,0xF4,0x2C,0x46,0x5C,0x87,0xE1}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderGuiForm_FormatStringOffsetTable[] =
    {
    1412,
    2622,
    2736
    };



/* Object interface: ISalamanderGui, ver. 0.0,
   GUID={0x5DA5C3EE,0xE167,0x4E57,{0xA8,0xE9,0x22,0xEF,0x1C,0x8B,0x45,0xC4}} */

#pragma code_seg(".orpc")
static const unsigned short ISalamanderGui_FormatStringOffsetTable[] =
    {
    2812,
    2856,
    2906,
    2950,
    2994
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ..\salamander.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)



extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag589_t;
extern const __midl_frag589_t __midl_frag589;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag588_t;
extern const __midl_frag588_t __midl_frag588;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag587_t;
extern const __midl_frag587_t __midl_frag587;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag586_t;
extern const __midl_frag586_t __midl_frag586;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag585_t;
extern const __midl_frag585_t __midl_frag585;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag584_t;
extern const __midl_frag584_t __midl_frag584;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag583_t;
extern const __midl_frag583_t __midl_frag583;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag582_t;
extern const __midl_frag582_t __midl_frag582;

typedef 
NDR64_FORMAT_CHAR
__midl_frag581_t;
extern const __midl_frag581_t __midl_frag581;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag580_t;
extern const __midl_frag580_t __midl_frag580;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag579_t;
extern const __midl_frag579_t __midl_frag579;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag578_t;
extern const __midl_frag578_t __midl_frag578;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag577_t;
extern const __midl_frag577_t __midl_frag577;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag576_t;
extern const __midl_frag576_t __midl_frag576;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag575_t;
extern const __midl_frag575_t __midl_frag575;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag574_t;
extern const __midl_frag574_t __midl_frag574;

typedef 
NDR64_FORMAT_CHAR
__midl_frag573_t;
extern const __midl_frag573_t __midl_frag573;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag572_t;
extern const __midl_frag572_t __midl_frag572;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag571_t;
extern const __midl_frag571_t __midl_frag571;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag570_t;
extern const __midl_frag570_t __midl_frag570;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag569_t;
extern const __midl_frag569_t __midl_frag569;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag568_t;
extern const __midl_frag568_t __midl_frag568;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag567_t;
extern const __midl_frag567_t __midl_frag567;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag566_t;
extern const __midl_frag566_t __midl_frag566;

typedef 
NDR64_FORMAT_CHAR
__midl_frag565_t;
extern const __midl_frag565_t __midl_frag565;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag564_t;
extern const __midl_frag564_t __midl_frag564;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag563_t;
extern const __midl_frag563_t __midl_frag563;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag562_t;
extern const __midl_frag562_t __midl_frag562;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag561_t;
extern const __midl_frag561_t __midl_frag561;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag560_t;
extern const __midl_frag560_t __midl_frag560;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag559_t;
extern const __midl_frag559_t __midl_frag559;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag555_t;
extern const __midl_frag555_t __midl_frag555;

typedef 
NDR64_FORMAT_CHAR
__midl_frag554_t;
extern const __midl_frag554_t __midl_frag554;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag553_t;
extern const __midl_frag553_t __midl_frag553;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag552_t;
extern const __midl_frag552_t __midl_frag552;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag551_t;
extern const __midl_frag551_t __midl_frag551;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag550_t;
extern const __midl_frag550_t __midl_frag550;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag549_t;
extern const __midl_frag549_t __midl_frag549;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag548_t;
extern const __midl_frag548_t __midl_frag548;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag547_t;
extern const __midl_frag547_t __midl_frag547;

typedef 
NDR64_FORMAT_CHAR
__midl_frag546_t;
extern const __midl_frag546_t __midl_frag546;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag544_t;
extern const __midl_frag544_t __midl_frag544;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag543_t;
extern const __midl_frag543_t __midl_frag543;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag540_t;
extern const __midl_frag540_t __midl_frag540;

typedef 
NDR64_FORMAT_CHAR
__midl_frag534_t;
extern const __midl_frag534_t __midl_frag534;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag533_t;
extern const __midl_frag533_t __midl_frag533;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag530_t;
extern const __midl_frag530_t __midl_frag530;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag529_t;
extern const __midl_frag529_t __midl_frag529;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag527_t;
extern const __midl_frag527_t __midl_frag527;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag526_t;
extern const __midl_frag526_t __midl_frag526;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag525_t;
extern const __midl_frag525_t __midl_frag525;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag523_t;
extern const __midl_frag523_t __midl_frag523;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag522_t;
extern const __midl_frag522_t __midl_frag522;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag521_t;
extern const __midl_frag521_t __midl_frag521;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag520_t;
extern const __midl_frag520_t __midl_frag520;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag472_t;
extern const __midl_frag472_t __midl_frag472;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag465_t;
extern const __midl_frag465_t __midl_frag465;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag463_t;
extern const __midl_frag463_t __midl_frag463;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag462_t;
extern const __midl_frag462_t __midl_frag462;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag461_t;
extern const __midl_frag461_t __midl_frag461;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag460_t;
extern const __midl_frag460_t __midl_frag460;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag390_t;
extern const __midl_frag390_t __midl_frag390;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag389_t;
extern const __midl_frag389_t __midl_frag389;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag388_t;
extern const __midl_frag388_t __midl_frag388;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag387_t;
extern const __midl_frag387_t __midl_frag387;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag381_t;
extern const __midl_frag381_t __midl_frag381;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag380_t;
extern const __midl_frag380_t __midl_frag380;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag379_t;
extern const __midl_frag379_t __midl_frag379;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag375_t;
extern const __midl_frag375_t __midl_frag375;

typedef 
NDR64_FORMAT_CHAR
__midl_frag369_t;
extern const __midl_frag369_t __midl_frag369;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag368_t;
extern const __midl_frag368_t __midl_frag368;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag367_t;
extern const __midl_frag367_t __midl_frag367;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag337_t;
extern const __midl_frag337_t __midl_frag337;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag336_t;
extern const __midl_frag336_t __midl_frag336;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag335_t;
extern const __midl_frag335_t __midl_frag335;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag334_t;
extern const __midl_frag334_t __midl_frag334;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag324_t;
extern const __midl_frag324_t __midl_frag324;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag305_t;
extern const __midl_frag305_t __midl_frag305;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag303_t;
extern const __midl_frag303_t __midl_frag303;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag302_t;
extern const __midl_frag302_t __midl_frag302;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag301_t;
extern const __midl_frag301_t __midl_frag301;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag300_t;
extern const __midl_frag300_t __midl_frag300;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag293_t;
extern const __midl_frag293_t __midl_frag293;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag286_t;
extern const __midl_frag286_t __midl_frag286;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag284_t;
extern const __midl_frag284_t __midl_frag284;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag283_t;
extern const __midl_frag283_t __midl_frag283;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag257_t;
extern const __midl_frag257_t __midl_frag257;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag243_t;
extern const __midl_frag243_t __midl_frag243;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag233_t;
extern const __midl_frag233_t __midl_frag233;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag223_t;
extern const __midl_frag223_t __midl_frag223;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag222_t;
extern const __midl_frag222_t __midl_frag222;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag219_t;
extern const __midl_frag219_t __midl_frag219;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag182_t;
extern const __midl_frag182_t __midl_frag182;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag176_t;
extern const __midl_frag176_t __midl_frag176;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag175_t;
extern const __midl_frag175_t __midl_frag175;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag174_t;
extern const __midl_frag174_t __midl_frag174;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag173_t;
extern const __midl_frag173_t __midl_frag173;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag150_t;
extern const __midl_frag150_t __midl_frag150;

typedef 
NDR64_FORMAT_CHAR
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag146_t;
extern const __midl_frag146_t __midl_frag146;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag142_t;
extern const __midl_frag142_t __midl_frag142;

typedef 
NDR64_FORMAT_CHAR
__midl_frag141_t;
extern const __midl_frag141_t __midl_frag141;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag140_t;
extern const __midl_frag140_t __midl_frag140;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag139_t;
extern const __midl_frag139_t __midl_frag139;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag138_t;
extern const __midl_frag138_t __midl_frag138;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag127_t;
extern const __midl_frag127_t __midl_frag127;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
NDR64_FORMAT_CHAR
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
NDR64_FORMAT_CHAR
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag85_t;
extern const __midl_frag85_t __midl_frag85;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct 
{
    struct _NDR64_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag32_t;
extern const __midl_frag32_t __midl_frag32;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    struct _NDR64_UNION_ARM frag22;
    struct _NDR64_UNION_ARM frag23;
    struct _NDR64_UNION_ARM frag24;
    struct _NDR64_UNION_ARM frag25;
    struct _NDR64_UNION_ARM frag26;
    struct _NDR64_UNION_ARM frag27;
    struct _NDR64_UNION_ARM frag28;
    struct _NDR64_UNION_ARM frag29;
    struct _NDR64_UNION_ARM frag30;
    struct _NDR64_UNION_ARM frag31;
    struct _NDR64_UNION_ARM frag32;
    struct _NDR64_UNION_ARM frag33;
    struct _NDR64_UNION_ARM frag34;
    struct _NDR64_UNION_ARM frag35;
    struct _NDR64_UNION_ARM frag36;
    struct _NDR64_UNION_ARM frag37;
    struct _NDR64_UNION_ARM frag38;
    struct _NDR64_UNION_ARM frag39;
    struct _NDR64_UNION_ARM frag40;
    struct _NDR64_UNION_ARM frag41;
    struct _NDR64_UNION_ARM frag42;
    struct _NDR64_UNION_ARM frag43;
    struct _NDR64_UNION_ARM frag44;
    struct _NDR64_UNION_ARM frag45;
    struct _NDR64_UNION_ARM frag46;
    struct _NDR64_UNION_ARM frag47;
    struct _NDR64_UNION_ARM frag48;
    struct _NDR64_UNION_ARM frag49;
    NDR64_UINT32 frag50;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag589_t __midl_frag589 =
0x5    /* FC64_INT32 */;

static const __midl_frag588_t __midl_frag588 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x15711c8c,
        0x52b3,
        0x4a0b,
        {0x90, 0xb0, 0x12, 0x3c, 0x8a, 0x0d, 0x52, 0x5b}
    }
};

static const __midl_frag587_t __midl_frag587 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag588
};

static const __midl_frag586_t __midl_frag586 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag587
};

static const __midl_frag585_t __midl_frag585 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag584_t __midl_frag584 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag585
};

static const __midl_frag583_t __midl_frag583 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag584
};

static const __midl_frag582_t __midl_frag582 =
{ 
/* Label */
    { 
    /* Label */      /* procedure Label */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* text */      /* parameter text */
        &__midl_frag584,
        { 
        /* text */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* component */      /* parameter component */
        &__midl_frag586,
        { 
        /* component */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag589,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag581_t __midl_frag581 =
0x5    /* FC64_INT32 */;

static const __midl_frag580_t __midl_frag580 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x15711c8c,
        0x52b3,
        0x4a0b,
        {0x90, 0xb0, 0x12, 0x3c, 0x8a, 0x0d, 0x52, 0x5b}
    }
};

static const __midl_frag579_t __midl_frag579 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag580
};

static const __midl_frag578_t __midl_frag578 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag579
};

static const __midl_frag577_t __midl_frag577 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag576_t __midl_frag576 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag577
};

static const __midl_frag575_t __midl_frag575 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag576
};

static const __midl_frag574_t __midl_frag574 =
{ 
/* TextBox */
    { 
    /* TextBox */      /* procedure TextBox */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* text */      /* parameter text */
        &__midl_frag576,
        { 
        /* text */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* component */      /* parameter component */
        &__midl_frag578,
        { 
        /* component */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag581,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag573_t __midl_frag573 =
0x5    /* FC64_INT32 */;

static const __midl_frag572_t __midl_frag572 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x15711c8c,
        0x52b3,
        0x4a0b,
        {0x90, 0xb0, 0x12, 0x3c, 0x8a, 0x0d, 0x52, 0x5b}
    }
};

static const __midl_frag571_t __midl_frag571 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag572
};

static const __midl_frag570_t __midl_frag570 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag571
};

static const __midl_frag569_t __midl_frag569 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag568_t __midl_frag568 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag569
};

static const __midl_frag567_t __midl_frag567 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag568
};

static const __midl_frag566_t __midl_frag566 =
{ 
/* CheckBox */
    { 
    /* CheckBox */      /* procedure CheckBox */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* text */      /* parameter text */
        &__midl_frag568,
        { 
        /* text */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* component */      /* parameter component */
        &__midl_frag570,
        { 
        /* component */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag573,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag565_t __midl_frag565 =
0x5    /* FC64_INT32 */;

static const __midl_frag564_t __midl_frag564 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x15711c8c,
        0x52b3,
        0x4a0b,
        {0x90, 0xb0, 0x12, 0x3c, 0x8a, 0x0d, 0x52, 0x5b}
    }
};

static const __midl_frag563_t __midl_frag563 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag564
};

static const __midl_frag562_t __midl_frag562 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag563
};

static const __midl_frag561_t __midl_frag561 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag560_t __midl_frag560 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag561
};

static const __midl_frag559_t __midl_frag559 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag560
};

static const __midl_frag555_t __midl_frag555 =
{ 
/* Button */
    { 
    /* Button */      /* procedure Button */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* text */      /* parameter text */
        &__midl_frag560,
        { 
        /* text */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag560,
        { 
        /* result */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* component */      /* parameter component */
        &__midl_frag562,
        { 
        /* component */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag565,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag554_t __midl_frag554 =
0x5    /* FC64_INT32 */;

static const __midl_frag553_t __midl_frag553 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x15711c8c,
        0x52b3,
        0x4a0b,
        {0x90, 0xb0, 0x12, 0x3c, 0x8a, 0x0d, 0x52, 0x5b}
    }
};

static const __midl_frag552_t __midl_frag552 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag553
};

static const __midl_frag551_t __midl_frag551 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag552
};

static const __midl_frag550_t __midl_frag550 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag549_t __midl_frag549 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag550
};

static const __midl_frag548_t __midl_frag548 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag549
};

static const __midl_frag547_t __midl_frag547 =
{ 
/* Form */
    { 
    /* Form */      /* procedure Form */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* title */      /* parameter title */
        &__midl_frag549,
        { 
        /* title */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* component */      /* parameter component */
        &__midl_frag551,
        { 
        /* component */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag554,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag546_t __midl_frag546 =
0x5    /* FC64_INT32 */;

static const __midl_frag544_t __midl_frag544 =
{ 
/* *int */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag546
};

static const __midl_frag543_t __midl_frag543 =
{ 
/* Execute */
    { 
    /* Execute */      /* procedure Execute */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag546,
        { 
        /* result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag540_t __midl_frag540 =
{ 
/* put_DialogResult */
    { 
    /* put_DialogResult */      /* procedure put_DialogResult */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* val */      /* parameter val */
        &__midl_frag546,
        { 
        /* val */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag534_t __midl_frag534 =
0x4    /* FC64_INT16 */;

static const __midl_frag533_t __midl_frag533 =
{ 
/* put_Checked */
    { 
    /* put_Checked */      /* procedure put_Checked */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* val */      /* parameter val */
        &__midl_frag534,
        { 
        /* val */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag530_t __midl_frag530 =
{ 
/* *VARIANT_BOOL */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag534
};

static const __midl_frag529_t __midl_frag529 =
{ 
/* get_Checked */
    { 
    /* get_Checked */      /* procedure get_Checked */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 38 /* 0x26 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* val */      /* parameter val */
        &__midl_frag534,
        { 
        /* val */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag527_t __midl_frag527 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag526_t __midl_frag526 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag527
};

static const __midl_frag525_t __midl_frag525 =
{ 
/* put_Text */
    { 
    /* put_Text */      /* procedure put_Text */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* text */      /* parameter text */
        &__midl_frag526,
        { 
        /* text */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag523_t __midl_frag523 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag522_t __midl_frag522 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag523
};

static const __midl_frag521_t __midl_frag521 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag522
};

static const __midl_frag520_t __midl_frag520 =
{ 
/* get_Text */
    { 
    /* get_Text */      /* procedure get_Text */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* text */      /* parameter text */
        &__midl_frag522,
        { 
        /* text */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag472_t __midl_frag472 =
{ 
/* Hide */
    { 
    /* Hide */      /* procedure Hide */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag465_t __midl_frag465 =
{ 
/* put_TotalMaximum */
    { 
    /* put_TotalMaximum */      /* procedure put_TotalMaximum */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* max */      /* parameter max */
        &__midl_frag549,
        { 
        /* max */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag463_t __midl_frag463 =
{ 
/* *_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag462_t __midl_frag462 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag463
};

static const __midl_frag461_t __midl_frag461 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag462
};

static const __midl_frag460_t __midl_frag460 =
{ 
/* get_TotalMaximum */
    { 
    /* get_TotalMaximum */      /* procedure get_TotalMaximum */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* max */      /* parameter max */
        &__midl_frag462,
        { 
        /* max */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag390_t __midl_frag390 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00000000,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag389_t __midl_frag389 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag390
};

static const __midl_frag388_t __midl_frag388 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag389
};

static const __midl_frag387_t __midl_frag387 =
{ 
/* get__NewEnum */
    { 
    /* get__NewEnum */      /* procedure get__NewEnum */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppenum */      /* parameter ppenum */
        &__midl_frag388,
        { 
        /* ppenum */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag381_t __midl_frag381 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x8cd33727,
        0x0a92,
        0x4560,
        {0x80, 0xd7, 0x1a, 0x44, 0x65, 0x12, 0x0e, 0x9b}
    }
};

static const __midl_frag380_t __midl_frag380 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag381
};

static const __midl_frag379_t __midl_frag379 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag380
};

static const __midl_frag375_t __midl_frag375 =
{ 
/* get_Item */
    { 
    /* get_Item */      /* procedure get_Item */
        (NDR64_UINT32) 36569411 /* 0x22e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* key */      /* parameter key */
        &__midl_frag549,
        { 
        /* key */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag379,
        { 
        /* item */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag369_t __midl_frag369 =
0xc    /* FC64_FLOAT64 */;

static const __midl_frag368_t __midl_frag368 =
{ 
/* *DATE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag369
};

static const __midl_frag367_t __midl_frag367 =
{ 
/* get_DateLastModified */
    { 
    /* get_DateLastModified */      /* procedure get_DateLastModified */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* date */      /* parameter date */
        &__midl_frag369,
        { 
        /* date */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag337_t __midl_frag337 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x2b527ff9,
        0xdeac,
        0x481a,
        {0x9f, 0x2c, 0x3e, 0x7b, 0x27, 0xad, 0xce, 0xd8}
    }
};

static const __midl_frag336_t __midl_frag336 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag337
};

static const __midl_frag335_t __midl_frag335 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag336
};

static const __midl_frag334_t __midl_frag334 =
{ 
/* get_Items */
    { 
    /* get_Items */      /* procedure get_Items */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* coll */      /* parameter coll */
        &__midl_frag335,
        { 
        /* coll */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag324_t __midl_frag324 =
{ 
/* get_FocusedItem */
    { 
    /* get_FocusedItem */      /* procedure get_FocusedItem */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* item */      /* parameter item */
        &__midl_frag379,
        { 
        /* item */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag305_t __midl_frag305 =
{ 
/* GetFullPath */
    { 
    /* GetFullPath */      /* procedure GetFullPath */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* path */      /* parameter path */
        &__midl_frag526,
        { 
        /* path */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* panel */      /* parameter panel */
        &__midl_frag549,
        { 
        /* panel */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag522,
        { 
        /* result */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag303_t __midl_frag303 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x99dbfa2f,
        0x9699,
        0x40eb,
        {0xac, 0xee, 0xb8, 0x90, 0x90, 0x8a, 0xa5, 0x83}
    }
};

static const __midl_frag302_t __midl_frag302 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag303
};

static const __midl_frag301_t __midl_frag301 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag302
};

static const __midl_frag300_t __midl_frag300 =
{ 
/* get_Script */
    { 
    /* get_Script */      /* procedure get_Script */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* info */      /* parameter info */
        &__midl_frag301,
        { 
        /* info */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag293_t __midl_frag293 =
{ 
/* GetPersistentVal */
    { 
    /* GetPersistentVal */      /* procedure GetPersistentVal */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* key */      /* parameter key */
        &__midl_frag526,
        { 
        /* key */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* val */      /* parameter val */
        &__midl_frag462,
        { 
        /* val */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag286_t __midl_frag286 =
{ 
/* SetPersistentVal */
    { 
    /* SetPersistentVal */      /* procedure SetPersistentVal */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* key */      /* parameter key */
        &__midl_frag526,
        { 
        /* key */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* val */      /* parameter val */
        &__midl_frag549,
        { 
        /* val */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag284_t __midl_frag284 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x5da5c3ee,
        0xe167,
        0x4e57,
        {0xa8, 0xe9, 0x22, 0xef, 0x1c, 0x8b, 0x45, 0xc4}
    }
};

static const __midl_frag283_t __midl_frag283 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag284
};

static const __midl_frag282_t __midl_frag282 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag283
};

static const __midl_frag281_t __midl_frag281 =
{ 
/* get_Forms */
    { 
    /* get_Forms */      /* procedure get_Forms */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* gui */      /* parameter gui */
        &__midl_frag282,
        { 
        /* gui */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag270_t __midl_frag270 =
{ 
/* OverwriteDialog */
    { 
    /* OverwriteDialog */      /* procedure OverwriteDialog */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* file1 */      /* parameter file1 */
        &__midl_frag549,
        { 
        /* file1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* file2 */      /* parameter file2 */
        &__midl_frag549,
        { 
        /* file2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* buttons */      /* parameter buttons */
        &__midl_frag546,
        { 
        /* buttons */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag546,
        { 
        /* result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag257_t __midl_frag257 =
{ 
/* QuestionDialog */
    { 
    /* QuestionDialog */      /* procedure QuestionDialog */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* file */      /* parameter file */
        &__midl_frag549,
        { 
        /* file */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* question */      /* parameter question */
        &__midl_frag526,
        { 
        /* question */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* buttons */      /* parameter buttons */
        &__midl_frag546,
        { 
        /* buttons */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* title */      /* parameter title */
        &__midl_frag549,
        { 
        /* title */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag546,
        { 
        /* result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag243_t __midl_frag243 =
{ 
/* ErrorDialog */
    { 
    /* ErrorDialog */      /* procedure ErrorDialog */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* file */      /* parameter file */
        &__midl_frag549,
        { 
        /* file */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* error */      /* parameter error */
        &__midl_frag549,
        { 
        /* error */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* buttons */      /* parameter buttons */
        &__midl_frag546,
        { 
        /* buttons */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* title */      /* parameter title */
        &__midl_frag549,
        { 
        /* title */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag546,
        { 
        /* result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag233_t __midl_frag233 =
{ 
/* MatchesMask */
    { 
    /* MatchesMask */      /* procedure MatchesMask */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 38 /* 0x26 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* file */      /* parameter file */
        &__midl_frag526,
        { 
        /* file */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* mask */      /* parameter mask */
        &__midl_frag526,
        { 
        /* mask */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* match */      /* parameter match */
        &__midl_frag534,
        { 
        /* match */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag224_t __midl_frag224 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x77cd7e2f,
        0x5b62,
        0x451d,
        {0xab, 0x3d, 0x81, 0x2f, 0x8b, 0x9f, 0xcb, 0xa8}
    }
};

static const __midl_frag223_t __midl_frag223 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag224
};

static const __midl_frag222_t __midl_frag222 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag223
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* get_WaitWindow */
    { 
    /* get_WaitWindow */      /* procedure get_WaitWindow */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* window */      /* parameter window */
        &__midl_frag222,
        { 
        /* window */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag219_t __midl_frag219 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xc51ebe57,
        0x76b2,
        0x4c8c,
        {0xa4, 0x4b, 0x13, 0xe3, 0x4f, 0x84, 0x6f, 0x2e}
    }
};

static const __midl_frag218_t __midl_frag218 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag219
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag218
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* get_ProgressDialog */
    { 
    /* get_ProgressDialog */      /* procedure get_ProgressDialog */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dialog */      /* parameter dialog */
        &__midl_frag217,
        { 
        /* dialog */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag182_t __midl_frag182 =
{ 
/* InputBox */
    { 
    /* InputBox */      /* procedure InputBox */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* prompt */      /* parameter prompt */
        &__midl_frag526,
        { 
        /* prompt */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* title */      /* parameter title */
        &__midl_frag549,
        { 
        /* title */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* _default */      /* parameter _default */
        &__midl_frag549,
        { 
        /* _default */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag522,
        { 
        /* result */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag176_t __midl_frag176 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0xf51af265,
        0xadb1,
        0x40b7,
        {0xb2, 0xcb, 0xa2, 0x58, 0xfd, 0xe6, 0x90, 0x1e}
    }
};

static const __midl_frag175_t __midl_frag175 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag176
};

static const __midl_frag174_t __midl_frag174 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag175
};

static const __midl_frag173_t __midl_frag173 =
{ 
/* get_TargetPanel */
    { 
    /* get_TargetPanel */      /* procedure get_TargetPanel */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* panel */      /* parameter panel */
        &__midl_frag174,
        { 
        /* panel */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag150_t __midl_frag150 =
{ 
/* *UINT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag546
};

static const __midl_frag147_t __midl_frag147 =
0x7    /* FC64_INT64 */;

static const __midl_frag146_t __midl_frag146 =
{ 
/* *ULONGLONG */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag147
};

static const __midl_frag142_t __midl_frag142 =
{ 
/* *USHORT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag534
};

static const __midl_frag141_t __midl_frag141 =
0x10    /* FC64_CHAR */;

static const __midl_frag140_t __midl_frag140 =
{ 
/* *CHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag141
};

static const __midl_frag139_t __midl_frag139 =
{ 
/* *DECIMAL */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag138
};

static const __midl_frag138_t __midl_frag138 =
{ 
/* DECIMAL */
    { 
    /* DECIMAL */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DECIMAL */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag130_t __midl_frag130 =
{ 
/* **_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag550
};

static const __midl_frag129_t __midl_frag129 =
{ 
/* *_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag32
};

static const __midl_frag128_t __midl_frag128 =
{ 
/* **_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag129
};

static const __midl_frag127_t __midl_frag127 =
{ 
/* ***_wireSAFEARRAY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag128
};

static const __midl_frag126_t __midl_frag126 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00020400,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag125_t __midl_frag125 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag126
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag125
};

static const __midl_frag121_t __midl_frag121 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag389
};

static const __midl_frag119_t __midl_frag119 =
{ 
/* **FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag527
};

static const __midl_frag117_t __midl_frag117 =
{ 
/* *DATE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag369
};

static const __midl_frag116_t __midl_frag116 =
{ 
/* *CY */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag23
};

static const __midl_frag109_t __midl_frag109 =
0xb    /* FC64_FLOAT32 */;

static const __midl_frag108_t __midl_frag108 =
{ 
/* *FLOAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag109
};

static const __midl_frag101_t __midl_frag101 =
0x2    /* FC64_INT8 */;

static const __midl_frag100_t __midl_frag100 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag101
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* *_wireBRECORD */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag64
};

static const __midl_frag98_t __midl_frag98 =
{ 
/*  */
    { 
    /* *hyper */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag95
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag95_t __midl_frag95 =
{ 
/* *hyper */
    { 
    /* *hyper */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *hyper */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag96
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag147
    }
};

static const __midl_frag94_t __midl_frag94 =
{ 
/* HYPER_SIZEDARR */
    { 
    /* HYPER_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* HYPER_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag98,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/*  */
    { 
    /* *ULONG */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag90
    }
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* *ULONG */
    { 
    /* *ULONG */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *ULONG */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag96
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag546
    }
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* DWORD_SIZEDARR */
    { 
    /* DWORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DWORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag93,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/*  */
    { 
    /* *short */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag85
    }
};

static const __midl_frag85_t __midl_frag85 =
{ 
/* *short */
    { 
    /* *short */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *short */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag96
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag534
    }
};

static const __midl_frag84_t __midl_frag84 =
{ 
/* WORD_SIZEDARR */
    { 
    /* WORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag88,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag83_t __midl_frag83 =
{ 
/*  */
    { 
    /* *byte */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag80
    }
};

static const __midl_frag80_t __midl_frag80 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag96
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag101
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* BYTE_SIZEDARR */
    { 
    /* BYTE_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* BYTE_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag83,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag78_t __midl_frag78 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag72
    }
};

static const __midl_frag73_t __midl_frag73 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag73
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag390
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag389
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* SAFEARR_HAVEIID */
    { 
    /* SAFEARR_HAVEIID */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_HAVEIID */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag77,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag78
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag70_t __midl_frag70 =
{ 
/*  */
    { 
    /* **_wireBRECORD */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag62
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag66_t __midl_frag66 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag67
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag101
    }
};

static const __midl_frag65_t __midl_frag65 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0000002f,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* _wireBRECORD */
    { 
    /* _wireBRECORD */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *struct _NDR64_POINTER_FORMAT */
            0x24,    /* FC64_IP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag65
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag66
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag62_t __midl_frag62 =
{ 
/* **_wireBRECORD */
    { 
    /* **_wireBRECORD */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag73
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireBRECORD */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag64
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag99
    }
};

static const __midl_frag61_t __midl_frag61 =
{ 
/* SAFEARR_BRECORD */
    { 
    /* SAFEARR_BRECORD */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BRECORD */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag70,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag60_t __midl_frag60 =
{ 
/*  */
    { 
    /* **_wireVARIANT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag57
    }
};

static const __midl_frag57_t __midl_frag57 =
{ 
/* **_wireVARIANT */
    { 
    /* **_wireVARIANT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireVARIANT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag73
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireVARIANT */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag12
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag550
    }
};

static const __midl_frag56_t __midl_frag56 =
{ 
/* SAFEARR_VARIANT */
    { 
    /* SAFEARR_VARIANT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_VARIANT */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag60,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag50
    }
};

static const __midl_frag51_t __midl_frag51 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag50_t __midl_frag50 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag51
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag126
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag125
    }
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* SAFEARR_DISPATCH */
    { 
    /* SAFEARR_DISPATCH */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_DISPATCH */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag55,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag43
    }
};

static const __midl_frag44_t __midl_frag44 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag43_t __midl_frag43 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag44
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag390
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag389
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* SAFEARR_UNKNOWN */
    { 
    /* SAFEARR_UNKNOWN */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_UNKNOWN */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag48,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag41_t __midl_frag41 =
{ 
/*  */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag38
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* **FLAGGED_WORD_BLOB */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **FLAGGED_WORD_BLOB */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag44
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *FLAGGED_WORD_BLOB */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag527
    }
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* SAFEARR_BSTR */
    { 
    /* SAFEARR_BSTR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BSTR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag41,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag36_t __midl_frag36 =
{ 
/* SAFEARRAYUNION */
    { 
    /* SAFEARRAYUNION */
        0x50,    /* FC64_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag37,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag42,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag49,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 12 /* 0xc */,
        &__midl_frag56,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag61,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 32781 /* 0x800d */,
        &__midl_frag71,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag79,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag84,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag89,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag94,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag35_t __midl_frag35 =
{ 
/* SAFEARRAYBOUND */
    { 
    /* SAFEARRAYBOUND */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* SAFEARRAYBOUND */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag34_t __midl_frag34 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag33_t __midl_frag33 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag34
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag35
    }
};

static const __midl_frag32_t __midl_frag32 =
{ 
/* _wireSAFEARRAY */
    { 
    /* _wireSAFEARRAY */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireSAFEARRAY */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        0,
        &__midl_frag33,
    },
    { 
    /*  */
        { 
        /* _wireSAFEARRAY */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 12 /* 0xc */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag36
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* CY */
    { 
    /* CY */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CY */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag14_t __midl_frag14 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* __MIDL_IOleAutomationTypes_0004 */
    { 
    /* __MIDL_IOleAutomationTypes_0004 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag14,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 47 /* 0x2f */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag147,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag546,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 17 /* 0x11 */,
        &__midl_frag101,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag534,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag109,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag369,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 11 /* 0xb */,
        &__midl_frag534,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag546,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag23,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag369,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag527,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag389,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag125,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8192 /* 0x2000 */,
        &__midl_frag128,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag99,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16420 /* 0x4024 */,
        &__midl_frag99,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16401 /* 0x4011 */,
        &__midl_frag100,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16386 /* 0x4002 */,
        &__midl_frag142,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16387 /* 0x4003 */,
        &__midl_frag150,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16404 /* 0x4014 */,
        &__midl_frag146,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16388 /* 0x4004 */,
        &__midl_frag108,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16389 /* 0x4005 */,
        &__midl_frag117,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16395 /* 0x400b */,
        &__midl_frag142,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16394 /* 0x400a */,
        &__midl_frag150,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16390 /* 0x4006 */,
        &__midl_frag116,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16391 /* 0x4007 */,
        &__midl_frag117,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16392 /* 0x4008 */,
        &__midl_frag119,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16397 /* 0x400d */,
        &__midl_frag121,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16393 /* 0x4009 */,
        &__midl_frag124,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 24576 /* 0x6000 */,
        &__midl_frag127,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16396 /* 0x400c */,
        &__midl_frag130,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag141,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 18 /* 0x12 */,
        &__midl_frag534,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag546,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag147,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 22 /* 0x16 */,
        &__midl_frag546,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 23 /* 0x17 */,
        &__midl_frag546,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 14 /* 0xe */,
        &__midl_frag138,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16398 /* 0x400e */,
        &__midl_frag139,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16400 /* 0x4010 */,
        &__midl_frag140,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16402 /* 0x4012 */,
        &__midl_frag142,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16403 /* 0x4013 */,
        &__midl_frag150,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16405 /* 0x4015 */,
        &__midl_frag146,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16406 /* 0x4016 */,
        &__midl_frag150,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16407 /* 0x4017 */,
        &__midl_frag150,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* _wireVARIANT */
    { 
    /* _wireVARIANT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireVARIANT */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* _wireVARIANT */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 3 /* 0x3 */,
            (NDR64_UINT16) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag13
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag6_t __midl_frag6 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag7
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag534
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* FLAGGED_WORD_BLOB */
    { 
    /* FLAGGED_WORD_BLOB */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* FLAGGED_WORD_BLOB */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag6
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* MsgBox */
    { 
    /* MsgBox */      /* procedure MsgBox */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* prompt */      /* parameter prompt */
        &__midl_frag526,
        { 
        /* prompt */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* buttons */      /* parameter buttons */
        &__midl_frag549,
        { 
        /* buttons */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* title */      /* parameter title */
        &__midl_frag549,
        { 
        /* title */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* result */      /* parameter result */
        &__midl_frag546,
        { 
        /* result */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag546,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


XFG_TRAMPOLINES64(BSTR)
XFG_TRAMPOLINES64(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize64)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal64)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal64)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree64)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize64)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal64)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal64)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree64)
            
            }
            

        };



/* Standard interface: __MIDL_itf_salamander_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISalamander, ver. 0.0,
   GUID={0x60F57ABE,0x95C7,0x48c7,{0xAE,0x37,0x9D,0xA0,0x07,0xB8,0xD5,0x7F}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamander_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag173,
    &__midl_frag173,
    &__midl_frag173,
    &__midl_frag173,
    &__midl_frag543,
    &__midl_frag182,
    &__midl_frag543,
    &__midl_frag543,
    &__midl_frag540,
    &__midl_frag472,
    &__midl_frag525,
    &__midl_frag525,
    &__midl_frag216,
    &__midl_frag221,
    &__midl_frag286,
    &__midl_frag233,
    &__midl_frag472,
    &__midl_frag243,
    &__midl_frag257,
    &__midl_frag270,
    &__midl_frag281,
    &__midl_frag286,
    &__midl_frag293,
    &__midl_frag300,
    &__midl_frag305
    };


static const MIDL_SYNTAX_INFO ISalamander_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamander_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamander_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamander_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamander_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamander_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamander_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamander_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamander_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(29) _ISalamanderProxyVtbl = 
{
    &ISalamander_ProxyInfo,
    &IID_ISalamander,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamander::MsgBox */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_LeftPanel */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_RightPanel */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_SourcePanel */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_TargetPanel */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_Version */ ,
    (void *) (INT_PTR) -1 /* ISalamander::InputBox */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_WindowsVersion */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_AutomationVersion */ ,
    (void *) (INT_PTR) -1 /* ISalamander::Sleep */ ,
    (void *) (INT_PTR) -1 /* ISalamander::AbortScript */ ,
    (void *) (INT_PTR) -1 /* ISalamander::TraceI */ ,
    (void *) (INT_PTR) -1 /* ISalamander::TraceE */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_ProgressDialog */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_WaitWindow */ ,
    (void *) (INT_PTR) -1 /* ISalamander::ViewFile */ ,
    (void *) (INT_PTR) -1 /* ISalamander::MatchesMask */ ,
    (void *) (INT_PTR) -1 /* ISalamander::DebugBreak */ ,
    (void *) (INT_PTR) -1 /* ISalamander::ErrorDialog */ ,
    (void *) (INT_PTR) -1 /* ISalamander::QuestionDialog */ ,
    (void *) (INT_PTR) -1 /* ISalamander::OverwriteDialog */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_Forms */ ,
    (void *) (INT_PTR) -1 /* ISalamander::SetPersistentVal */ ,
    (void *) (INT_PTR) -1 /* ISalamander::GetPersistentVal */ ,
    (void *) (INT_PTR) -1 /* ISalamander::get_Script */ ,
    (void *) (INT_PTR) -1 /* ISalamander::GetFullPath */
};

const CInterfaceStubVtbl _ISalamanderStubVtbl =
{
    &IID_ISalamander,
    &ISalamander_ServerInfo,
    29,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderPanel, ver. 0.0,
   GUID={0xF51AF265,0xADB1,0x40b7,{0xB2,0xCB,0xA2,0x58,0xFD,0xE6,0x90,0x1E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderPanel_Ndr64ProcTable[] =
    {
    &__midl_frag525,
    &__midl_frag520,
    &__midl_frag324,
    &__midl_frag334,
    &__midl_frag334,
    &__midl_frag472,
    &__midl_frag465,
    &__midl_frag543,
    &__midl_frag472,
    (FormatInfoRef)(LONG_PTR) -1
    };


static const MIDL_SYNTAX_INFO ISalamanderPanel_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderPanel_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderPanel_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderPanel_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderPanel_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderPanel_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderPanel_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderPanel_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderPanel_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(13) _ISalamanderPanelProxyVtbl = 
{
    &ISalamanderPanel_ProxyInfo,
    &IID_ISalamanderPanel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::put_Path */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::get_Path */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::get_FocusedItem */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::get_SelectedItems */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::get_Items */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::SelectAll */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::DeselectAll */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::get_PathType */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanel::StoreSelection */ ,
    0 /* ISalamanderPanel::_GetPanelIndex */
};

const CInterfaceStubVtbl _ISalamanderPanelStubVtbl =
{
    &IID_ISalamanderPanel,
    &ISalamanderPanel_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderPanelItem, ver. 0.0,
   GUID={0x8CD33727,0x0A92,0x4560,{0x80,0xD7,0x1A,0x44,0x65,0x12,0x0E,0x9B}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderPanelItem_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag520,
    &__midl_frag460,
    &__midl_frag367,
    &__midl_frag543
    };


static const MIDL_SYNTAX_INFO ISalamanderPanelItem_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderPanelItem_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderPanelItem_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderPanelItem_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderPanelItem_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderPanelItem_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderPanelItem_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderPanelItem_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderPanelItem_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(8) _ISalamanderPanelItemProxyVtbl = 
{
    &ISalamanderPanelItem_ProxyInfo,
    &IID_ISalamanderPanelItem,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItem::get_Name */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItem::get_Path */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItem::get_Size */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItem::get_DateLastModified */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItem::get_Attributes */
};

const CInterfaceStubVtbl _ISalamanderPanelItemStubVtbl =
{
    &IID_ISalamanderPanelItem,
    &ISalamanderPanelItem_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderPanelItemCollection, ver. 0.0,
   GUID={0x2B527FF9,0xDEAC,0x481a,{0x9F,0x2C,0x3E,0x7B,0x27,0xAD,0xCE,0xD8}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderPanelItemCollection_Ndr64ProcTable[] =
    {
    &__midl_frag375,
    &__midl_frag543,
    &__midl_frag387
    };


static const MIDL_SYNTAX_INFO ISalamanderPanelItemCollection_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderPanelItemCollection_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderPanelItemCollection_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderPanelItemCollection_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderPanelItemCollection_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderPanelItemCollection_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderPanelItemCollection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderPanelItemCollection_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderPanelItemCollection_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(6) _ISalamanderPanelItemCollectionProxyVtbl = 
{
    &ISalamanderPanelItemCollection_ProxyInfo,
    &IID_ISalamanderPanelItemCollection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItemCollection::get_Item */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItemCollection::get_Count */ ,
    (void *) (INT_PTR) -1 /* ISalamanderPanelItemCollection::get__NewEnum */
};

const CInterfaceStubVtbl _ISalamanderPanelItemCollectionStubVtbl =
{
    &IID_ISalamanderPanelItemCollection,
    &ISalamanderPanelItemCollection_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderProgressDialog, ver. 0.0,
   GUID={0xC51EBE57,0x76B2,0x4c8c,{0xA4,0x4B,0x13,0xE3,0x4F,0x84,0x6F,0x2E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderProgressDialog_Ndr64ProcTable[] =
    {
    &__midl_frag472,
    &__midl_frag472,
    &__midl_frag520,
    &__midl_frag525,
    &__midl_frag525,
    &__midl_frag529,
    &__midl_frag460,
    &__midl_frag465,
    &__midl_frag460,
    &__midl_frag465,
    &__midl_frag540,
    &__midl_frag529,
    &__midl_frag533,
    &__midl_frag543,
    &__midl_frag540,
    &__midl_frag460,
    &__midl_frag465,
    &__midl_frag460,
    &__midl_frag465
    };


static const MIDL_SYNTAX_INFO ISalamanderProgressDialog_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderProgressDialog_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderProgressDialog_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderProgressDialog_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderProgressDialog_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderProgressDialog_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderProgressDialog_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderProgressDialog_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderProgressDialog_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(22) _ISalamanderProgressDialogProxyVtbl = 
{
    &ISalamanderProgressDialog_ProxyInfo,
    &IID_ISalamanderProgressDialog,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::Show */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::Hide */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_Title */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_Title */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::AddText */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_IsCancelled */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_Position */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_Position */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_TotalPosition */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_TotalPosition */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::Step */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_CanCancel */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_CanCancel */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_Style */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_Style */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_Maximum */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_Maximum */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::get_TotalMaximum */ ,
    (void *) (INT_PTR) -1 /* ISalamanderProgressDialog::put_TotalMaximum */
};

const CInterfaceStubVtbl _ISalamanderProgressDialogStubVtbl =
{
    &IID_ISalamanderProgressDialog,
    &ISalamanderProgressDialog_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderWaitWindow, ver. 0.0,
   GUID={0x77CD7E2F,0x5B62,0x451d,{0xAB,0x3D,0x81,0x2F,0x8B,0x9F,0xCB,0xA8}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderWaitWindow_Ndr64ProcTable[] =
    {
    &__midl_frag472,
    &__midl_frag472,
    &__midl_frag520,
    &__midl_frag525,
    &__midl_frag520,
    &__midl_frag525,
    &__midl_frag529,
    &__midl_frag543,
    &__midl_frag540,
    &__midl_frag529,
    &__midl_frag533
    };


static const MIDL_SYNTAX_INFO ISalamanderWaitWindow_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderWaitWindow_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderWaitWindow_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderWaitWindow_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderWaitWindow_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderWaitWindow_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderWaitWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderWaitWindow_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderWaitWindow_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(14) _ISalamanderWaitWindowProxyVtbl = 
{
    &ISalamanderWaitWindow_ProxyInfo,
    &IID_ISalamanderWaitWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::Show */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::Hide */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::get_Title */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::put_Title */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::get_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::put_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::get_IsCancelled */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::get_Delay */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::put_Delay */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::get_CanCancel */ ,
    (void *) (INT_PTR) -1 /* ISalamanderWaitWindow::put_CanCancel */
};

const CInterfaceStubVtbl _ISalamanderWaitWindowStubVtbl =
{
    &IID_ISalamanderWaitWindow,
    &ISalamanderWaitWindow_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderScriptInfo, ver. 0.0,
   GUID={0x99DBFA2F,0x9699,0x40eb,{0xAC,0xEE,0xB8,0x90,0x90,0x8A,0xA5,0x83}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderScriptInfo_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag520
    };


static const MIDL_SYNTAX_INFO ISalamanderScriptInfo_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderScriptInfo_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderScriptInfo_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderScriptInfo_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderScriptInfo_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderScriptInfo_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderScriptInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderScriptInfo_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderScriptInfo_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(5) _ISalamanderScriptInfoProxyVtbl = 
{
    &ISalamanderScriptInfo_ProxyInfo,
    &IID_ISalamanderScriptInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderScriptInfo::get_Name */ ,
    (void *) (INT_PTR) -1 /* ISalamanderScriptInfo::get_Path */
};

const CInterfaceStubVtbl _ISalamanderScriptInfoStubVtbl =
{
    &IID_ISalamanderScriptInfo,
    &ISalamanderScriptInfo_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderGuiComponent, ver. 0.0,
   GUID={0x15711C8C,0x52B3,0x4a0b,{0x90,0xB0,0x12,0x3C,0x8A,0x0D,0x52,0x5B}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderGuiComponent_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag525
    };


static const MIDL_SYNTAX_INFO ISalamanderGuiComponent_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiComponent_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderGuiComponent_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiComponent_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiComponent_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiComponent_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderGuiComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderGuiComponent_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiComponent_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(5) _ISalamanderGuiComponentProxyVtbl = 
{
    &ISalamanderGuiComponent_ProxyInfo,
    &IID_ISalamanderGuiComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::get_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::put_Text */
};

const CInterfaceStubVtbl _ISalamanderGuiComponentStubVtbl =
{
    &IID_ISalamanderGuiComponent,
    &ISalamanderGuiComponent_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_salamander_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISalamanderGuiComponentInternal, ver. 0.0,
   GUID={0x037905FB,0xA081,0x4a60,{0xAE,0x61,0xC8,0x48,0x17,0x7F,0x99,0xE0}} */


/* Object interface: ISalamanderGuiCheckBox, ver. 0.0,
   GUID={0xA26789BB,0xCAA4,0x47d5,{0xBC,0xC5,0x38,0x6E,0xF2,0x42,0x20,0xD4}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderGuiCheckBox_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag525,
    &__midl_frag529,
    &__midl_frag533
    };


static const MIDL_SYNTAX_INFO ISalamanderGuiCheckBox_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiCheckBox_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderGuiCheckBox_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiCheckBox_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiCheckBox_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiCheckBox_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderGuiCheckBox_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderGuiCheckBox_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiCheckBox_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _ISalamanderGuiCheckBoxProxyVtbl = 
{
    &ISalamanderGuiCheckBox_ProxyInfo,
    &IID_ISalamanderGuiCheckBox,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::get_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::put_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiCheckBox::get_Checked */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiCheckBox::put_Checked */
};

const CInterfaceStubVtbl _ISalamanderGuiCheckBoxStubVtbl =
{
    &IID_ISalamanderGuiCheckBox,
    &ISalamanderGuiCheckBox_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderGuiButton, ver. 0.0,
   GUID={0xF30E467C,0x0FEA,0x4e67,{0x9F,0x51,0xC2,0xB1,0xA2,0xA3,0x0D,0x4E}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderGuiButton_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag525,
    &__midl_frag543,
    &__midl_frag540
    };


static const MIDL_SYNTAX_INFO ISalamanderGuiButton_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiButton_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderGuiButton_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiButton_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiButton_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiButton_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderGuiButton_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderGuiButton_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiButton_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _ISalamanderGuiButtonProxyVtbl = 
{
    &ISalamanderGuiButton_ProxyInfo,
    &IID_ISalamanderGuiButton,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::get_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::put_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiButton::get_DialogResult */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiButton::put_DialogResult */
};

const CInterfaceStubVtbl _ISalamanderGuiButtonStubVtbl =
{
    &IID_ISalamanderGuiButton,
    &ISalamanderGuiButton_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderGuiContainer, ver. 0.0,
   GUID={0x6A31B232,0xB6AF,0x467a,{0xB8,0x18,0x21,0x2C,0xCC,0x6F,0x4C,0x5D}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderGuiContainer_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag525,
    0
    };


static const MIDL_SYNTAX_INFO ISalamanderGuiContainer_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiContainer_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderGuiContainer_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiContainer_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiContainer_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiContainer_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderGuiContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderGuiContainer_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiContainer_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(5) _ISalamanderGuiContainerProxyVtbl = 
{
    0,
    &IID_ISalamanderGuiContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* forced delegation ISalamanderGuiComponent::get_Text */ ,
    0 /* forced delegation ISalamanderGuiComponent::put_Text */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION ISalamanderGuiContainer_table[] =
{
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _ISalamanderGuiContainerStubVtbl =
{
    &IID_ISalamanderGuiContainer,
    &ISalamanderGuiContainer_ServerInfo,
    5,
    &ISalamanderGuiContainer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISalamanderGuiForm, ver. 0.0,
   GUID={0x7356DD12,0xA7DA,0x41EB,{0x8E,0x31,0xF4,0x2C,0x46,0x5C,0x87,0xE1}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderGuiForm_Ndr64ProcTable[] =
    {
    &__midl_frag520,
    &__midl_frag525,
    &__midl_frag543
    };


static const MIDL_SYNTAX_INFO ISalamanderGuiForm_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiForm_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderGuiForm_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderGuiForm_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGuiForm_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiForm_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderGuiForm_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderGuiForm_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGuiForm_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(6) _ISalamanderGuiFormProxyVtbl = 
{
    &ISalamanderGuiForm_ProxyInfo,
    &IID_ISalamanderGuiForm,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::get_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiComponent::put_Text */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGuiForm::Execute */
};

const CInterfaceStubVtbl _ISalamanderGuiFormStubVtbl =
{
    &IID_ISalamanderGuiForm,
    &ISalamanderGuiForm_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISalamanderGui, ver. 0.0,
   GUID={0x5DA5C3EE,0xE167,0x4E57,{0xA8,0xE9,0x22,0xEF,0x1C,0x8B,0x45,0xC4}} */

#pragma code_seg(".orpc")
static const FormatInfoRef ISalamanderGui_Ndr64ProcTable[] =
    {
    &__midl_frag547,
    &__midl_frag555,
    &__midl_frag566,
    &__midl_frag574,
    &__midl_frag582
    };


static const MIDL_SYNTAX_INFO ISalamanderGui_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGui_FormatStringOffsetTable[-3],
    salamander__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &ISalamanderGui_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO ISalamanderGui_ProxyInfo =
    {
    &Object_StubDesc,
    salamander__MIDL_ProcFormatString.Format,
    &ISalamanderGui_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGui_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO ISalamanderGui_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    salamander__MIDL_ProcFormatString.Format,
    (unsigned short *) &ISalamanderGui_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)ISalamanderGui_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(8) _ISalamanderGuiProxyVtbl = 
{
    &ISalamanderGui_ProxyInfo,
    &IID_ISalamanderGui,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISalamanderGui::Form */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGui::Button */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGui::CheckBox */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGui::TextBox */ ,
    (void *) (INT_PTR) -1 /* ISalamanderGui::Label */
};

const CInterfaceStubVtbl _ISalamanderGuiStubVtbl =
{
    &IID_ISalamanderGui,
    &ISalamanderGui_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    salamander__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _salamander_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISalamanderGuiFormProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderPanelItemProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderWaitWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderScriptInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderGuiContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderProgressDialogProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderPanelProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderGuiButtonProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderGuiComponentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderGuiCheckBoxProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderGuiProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISalamanderPanelItemCollectionProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _salamander_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISalamanderGuiFormStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderPanelItemStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderWaitWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderScriptInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderGuiContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderProgressDialogStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderPanelStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderGuiButtonStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderGuiComponentStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderGuiCheckBoxStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderGuiStubVtbl,
    ( CInterfaceStubVtbl *) &_ISalamanderPanelItemCollectionStubVtbl,
    0
};

PCInterfaceName const _salamander_InterfaceNamesList[] = 
{
    "ISalamanderGuiForm",
    "ISalamanderPanelItem",
    "ISalamanderWaitWindow",
    "ISalamanderScriptInfo",
    "ISalamanderGuiContainer",
    "ISalamanderProgressDialog",
    "ISalamanderPanel",
    "ISalamanderGuiButton",
    "ISalamanderGuiComponent",
    "ISalamanderGuiCheckBox",
    "ISalamander",
    "ISalamanderGui",
    "ISalamanderPanelItemCollection",
    0
};

const IID *  const _salamander_BaseIIDList[] = 
{
    0,
    0,
    0,
    0,
    &IID_ISalamanderGuiComponent,   /* forced */
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};


#define _salamander_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _salamander, pIID, n)

int __stdcall _salamander_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _salamander, 13, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _salamander, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _salamander, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _salamander, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _salamander, 13, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo salamander_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _salamander_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _salamander_StubVtblList,
    (const PCInterfaceName * ) & _salamander_InterfaceNamesList,
    (const IID ** ) & _salamander_BaseIIDList,
    & _salamander_IID_Lookup, 
    13,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

