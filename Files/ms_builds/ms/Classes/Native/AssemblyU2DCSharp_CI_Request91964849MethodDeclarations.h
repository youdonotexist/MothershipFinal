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

// CI.Request
struct Request_t91964849;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Action`1<CI.Request>
struct Action_1_t240417554;
// System.IAsyncResult
struct IAsyncResult_t537683269;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"

// System.Void CI.Request::.ctor()
extern "C"  void Request__ctor_m28200852 (Request_t91964849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CI.Request::get_ResponseText()
extern "C"  String_t* Request_get_ResponseText_m2500868394 (Request_t91964849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CI.Request CI.Request::Send(System.String,System.String,System.Boolean)
extern "C"  Request_t91964849 * Request_Send_m2546475309 (Request_t91964849 * __this, String_t* ___url, String_t* ___action, bool ___useCache, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CI.Request CI.Request::Send(System.String,System.String,System.Collections.Hashtable)
extern "C"  Request_t91964849 * Request_Send_m375307758 (Request_t91964849 * __this, String_t* ___url, String_t* ___action, Hashtable_t3875263730 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CI.Request CI.Request::Send(System.String,System.String,System.Boolean,System.Action`1<CI.Request>)
extern "C"  Request_t91964849 * Request_Send_m226903704 (Request_t91964849 * __this, String_t* ___url, String_t* ___action, bool ___useCache, Action_1_t240417554 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CI.Request CI.Request::GET(System.String,System.Boolean,System.Action`1<CI.Request>)
extern "C"  Request_t91964849 * Request_GET_m1102040248 (Request_t91964849 * __this, String_t* ___url, bool ___useCache, Action_1_t240417554 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CI.Request CI.Request::PUT(System.String,System.Collections.Hashtable)
extern "C"  Request_t91964849 * Request_PUT_m922988103 (Request_t91964849 * __this, String_t* ___url, Hashtable_t3875263730 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CI.Request CI.Request::POST(System.String,System.Collections.Hashtable)
extern "C"  Request_t91964849 * Request_POST_m484922018 (Request_t91964849 * __this, String_t* ___url, Hashtable_t3875263730 * ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CI.Request::WriteBodyCallback(System.IAsyncResult)
extern "C"  void Request_WriteBodyCallback_m3862352811 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asynchronousRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CI.Request::RespCallback(System.IAsyncResult)
extern "C"  void Request_RespCallback_m2615530142 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asynchronousResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CI.Request::ReadCallBack(System.IAsyncResult)
extern "C"  void Request_ReadCallBack_m2506494584 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
