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

// Callback`2<System.Single,System.Single>
struct Callback_2_t2222692344;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Callback`2<System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_2__ctor_m3622454168_gshared (Callback_2_t2222692344 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_2__ctor_m3622454168(__this, ___object, ___method, method) ((  void (*) (Callback_2_t2222692344 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_2__ctor_m3622454168_gshared)(__this, ___object, ___method, method)
// System.Void Callback`2<System.Single,System.Single>::Invoke(T,U)
extern "C"  void Callback_2_Invoke_m324591715_gshared (Callback_2_t2222692344 * __this, float ___arg1, float ___arg2, const MethodInfo* method);
#define Callback_2_Invoke_m324591715(__this, ___arg1, ___arg2, method) ((  void (*) (Callback_2_t2222692344 *, float, float, const MethodInfo*))Callback_2_Invoke_m324591715_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult Callback`2<System.Single,System.Single>::BeginInvoke(T,U,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_2_BeginInvoke_m1917495850_gshared (Callback_2_t2222692344 * __this, float ___arg1, float ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_2_BeginInvoke_m1917495850(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_2_t2222692344 *, float, float, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_2_BeginInvoke_m1917495850_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void Callback`2<System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_2_EndInvoke_m1348420008_gshared (Callback_2_t2222692344 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_2_EndInvoke_m1348420008(__this, ___result, method) ((  void (*) (Callback_2_t2222692344 *, Il2CppObject *, const MethodInfo*))Callback_2_EndInvoke_m1348420008_gshared)(__this, ___result, method)
