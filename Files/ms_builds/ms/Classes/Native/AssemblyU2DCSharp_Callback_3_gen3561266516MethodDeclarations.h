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

// Callback`3<System.Int32,System.Int32,System.Int32>
struct Callback_3_t3561266516;
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

// System.Void Callback`3<System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_3__ctor_m2207895890_gshared (Callback_3_t3561266516 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_3__ctor_m2207895890(__this, ___object, ___method, method) ((  void (*) (Callback_3_t3561266516 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_3__ctor_m2207895890_gshared)(__this, ___object, ___method, method)
// System.Void Callback`3<System.Int32,System.Int32,System.Int32>::Invoke(T,U,V)
extern "C"  void Callback_3_Invoke_m980712319_gshared (Callback_3_t3561266516 * __this, int32_t ___arg1, int32_t ___arg2, int32_t ___arg3, const MethodInfo* method);
#define Callback_3_Invoke_m980712319(__this, ___arg1, ___arg2, ___arg3, method) ((  void (*) (Callback_3_t3561266516 *, int32_t, int32_t, int32_t, const MethodInfo*))Callback_3_Invoke_m980712319_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult Callback`3<System.Int32,System.Int32,System.Int32>::BeginInvoke(T,U,V,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_3_BeginInvoke_m1769377554_gshared (Callback_3_t3561266516 * __this, int32_t ___arg1, int32_t ___arg2, int32_t ___arg3, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_3_BeginInvoke_m1769377554(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_3_t3561266516 *, int32_t, int32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_3_BeginInvoke_m1769377554_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void Callback`3<System.Int32,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_3_EndInvoke_m840875106_gshared (Callback_3_t3561266516 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_3_EndInvoke_m840875106(__this, ___result, method) ((  void (*) (Callback_3_t3561266516 *, Il2CppObject *, const MethodInfo*))Callback_3_EndInvoke_m840875106_gshared)(__this, ___result, method)
