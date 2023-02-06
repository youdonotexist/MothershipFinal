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

// Callback`3<System.Object,System.Object,System.Object>
struct Callback_3_t615405881;
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

// System.Void Callback`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_3__ctor_m3127077335_gshared (Callback_3_t615405881 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_3__ctor_m3127077335(__this, ___object, ___method, method) ((  void (*) (Callback_3_t615405881 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_3__ctor_m3127077335_gshared)(__this, ___object, ___method, method)
// System.Void Callback`3<System.Object,System.Object,System.Object>::Invoke(T,U,V)
extern "C"  void Callback_3_Invoke_m2471426522_gshared (Callback_3_t615405881 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, const MethodInfo* method);
#define Callback_3_Invoke_m2471426522(__this, ___arg1, ___arg2, ___arg3, method) ((  void (*) (Callback_3_t615405881 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Callback_3_Invoke_m2471426522_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult Callback`3<System.Object,System.Object,System.Object>::BeginInvoke(T,U,V,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_3_BeginInvoke_m2718776053_gshared (Callback_3_t615405881 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_3_BeginInvoke_m2718776053(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_3_t615405881 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_3_BeginInvoke_m2718776053_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void Callback`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_3_EndInvoke_m363552615_gshared (Callback_3_t615405881 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_3_EndInvoke_m363552615(__this, ___result, method) ((  void (*) (Callback_3_t615405881 *, Il2CppObject *, const MethodInfo*))Callback_3_EndInvoke_m363552615_gshared)(__this, ___result, method)
