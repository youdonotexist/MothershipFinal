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

// UICamera/GetAxisFunc
struct GetAxisFunc_t3240405851;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UICamera/GetAxisFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void GetAxisFunc__ctor_m1542983500 (GetAxisFunc_t3240405851 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::Invoke(System.String)
extern "C"  float GetAxisFunc_Invoke_m1850848720 (GetAxisFunc_t3240405851 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_GetAxisFunc_t3240405851(Il2CppObject* delegate, String_t* ___name);
// System.IAsyncResult UICamera/GetAxisFunc::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetAxisFunc_BeginInvoke_m1267475617 (GetAxisFunc_t3240405851 * __this, String_t* ___name, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UICamera/GetAxisFunc::EndInvoke(System.IAsyncResult)
extern "C"  float GetAxisFunc_EndInvoke_m2037749288 (GetAxisFunc_t3240405851 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
