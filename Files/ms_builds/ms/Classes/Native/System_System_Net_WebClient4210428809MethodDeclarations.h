#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.WebClient
struct WebClient_t4210428809;
// System.Net.IWebProxy
struct IWebProxy_t49946189;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;
// System.Object
struct Il2CppObject;
// System.Net.WebRequest
struct WebRequest_t3488810021;
// System.IO.Stream
struct Stream_t219029575;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t1454724802;
// System.Net.WebResponse
struct WebResponse_t2411292415;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_Net_DownloadProgressChangedEventArgs1454724802.h"
#include "System_System_Net_WebRequest3488810021.h"

// System.Void System.Net.WebClient::.ctor()
extern "C"  void WebClient__ctor_m2477960557 (WebClient_t4210428809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::.cctor()
extern "C"  void WebClient__cctor_m3320237024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebClient::get_Proxy()
extern "C"  Il2CppObject * WebClient_get_Proxy_m212112292 (WebClient_t4210428809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebClient::get_IsBusy()
extern "C"  bool WebClient_get_IsBusy_m2414763289 (WebClient_t4210428809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::CheckBusy()
extern "C"  void WebClient_CheckBusy_m581754988 (WebClient_t4210428809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::SetBusy()
extern "C"  void WebClient_SetBusy_m1659299526 (WebClient_t4210428809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadData(System.String)
extern "C"  ByteU5BU5D_t58506160* WebClient_DownloadData_m4193784751 (WebClient_t4210428809 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadData(System.Uri)
extern "C"  ByteU5BU5D_t58506160* WebClient_DownloadData_m2315567654 (WebClient_t4210428809 * __this, Uri_t2776692961 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::DownloadDataCore(System.Uri,System.Object)
extern "C"  ByteU5BU5D_t58506160* WebClient_DownloadDataCore_m2361543795 (WebClient_t4210428809 * __this, Uri_t2776692961 * ___address, Il2CppObject * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::CreateUri(System.String)
extern "C"  Uri_t2776692961 * WebClient_CreateUri_m3126770009 (WebClient_t4210428809 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::GetQueryString(System.Boolean)
extern "C"  String_t* WebClient_GetQueryString_m3086610068 (WebClient_t4210428809 * __this, bool ___add_qmark, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebClient::MakeUri(System.String)
extern "C"  Uri_t2776692961 * WebClient_MakeUri_m1674872779 (WebClient_t4210428809 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::SetupRequest(System.Uri)
extern "C"  WebRequest_t3488810021 * WebClient_SetupRequest_m931338404 (WebClient_t4210428809 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebClient::ReadAll(System.IO.Stream,System.Int32,System.Object)
extern "C"  ByteU5BU5D_t58506160* WebClient_ReadAll_m1240881634 (WebClient_t4210428809 * __this, Stream_t219029575 * ___stream, int32_t ___length, Il2CppObject * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebClient::UrlEncode(System.String)
extern "C"  String_t* WebClient_UrlEncode_m1541238133 (WebClient_t4210428809 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebClient::OnDownloadProgressChanged(System.Net.DownloadProgressChangedEventArgs)
extern "C"  void WebClient_OnDownloadProgressChanged_m2326155103 (WebClient_t4210428809 * __this, DownloadProgressChangedEventArgs_t1454724802 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebClient::GetWebRequest(System.Uri)
extern "C"  WebRequest_t3488810021 * WebClient_GetWebRequest_m2859966311 (WebClient_t4210428809 * __this, Uri_t2776692961 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebClient::GetWebResponse(System.Net.WebRequest)
extern "C"  WebResponse_t2411292415 * WebClient_GetWebResponse_m242843735 (WebClient_t4210428809 * __this, WebRequest_t3488810021 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
