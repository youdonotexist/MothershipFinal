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

// UICamera/GetKeyStateFunc
struct GetKeyStateFunc_t2362323372;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UICamera/GetKeyStateFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void GetKeyStateFunc__ctor_m1578588189 (GetKeyStateFunc_t2362323372 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::Invoke(UnityEngine.KeyCode)
extern "C"  bool GetKeyStateFunc_Invoke_m2912951154 (GetKeyStateFunc_t2362323372 * __this, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_GetKeyStateFunc_t2362323372(Il2CppObject* delegate, int32_t ___key);
// System.IAsyncResult UICamera/GetKeyStateFunc::BeginInvoke(UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetKeyStateFunc_BeginInvoke_m3115175573 (GetKeyStateFunc_t2362323372 * __this, int32_t ___key, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UICamera/GetKeyStateFunc::EndInvoke(System.IAsyncResult)
extern "C"  bool GetKeyStateFunc_EndInvoke_m2845025121 (GetKeyStateFunc_t2362323372 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
