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

// Callback`1<System.Single>
struct Callback_1_t2625347080;
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

// System.Void Callback`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_1__ctor_m1323863828_gshared (Callback_1_t2625347080 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_1__ctor_m1323863828(__this, ___object, ___method, method) ((  void (*) (Callback_1_t2625347080 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_1__ctor_m1323863828_gshared)(__this, ___object, ___method, method)
// System.Void Callback`1<System.Single>::Invoke(T)
extern "C"  void Callback_1_Invoke_m3623986864_gshared (Callback_1_t2625347080 * __this, float ___arg1, const MethodInfo* method);
#define Callback_1_Invoke_m3623986864(__this, ___arg1, method) ((  void (*) (Callback_1_t2625347080 *, float, const MethodInfo*))Callback_1_Invoke_m3623986864_gshared)(__this, ___arg1, method)
// System.IAsyncResult Callback`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_1_BeginInvoke_m1103310597_gshared (Callback_1_t2625347080 * __this, float ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_1_BeginInvoke_m1103310597(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_1_t2625347080 *, float, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_1_BeginInvoke_m1103310597_gshared)(__this, ___arg1, ___callback, ___object, method)
// System.Void Callback`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_1_EndInvoke_m1416014628_gshared (Callback_1_t2625347080 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_1_EndInvoke_m1416014628(__this, ___result, method) ((  void (*) (Callback_1_t2625347080 *, Il2CppObject *, const MethodInfo*))Callback_1_EndInvoke_m1416014628_gshared)(__this, ___result, method)
