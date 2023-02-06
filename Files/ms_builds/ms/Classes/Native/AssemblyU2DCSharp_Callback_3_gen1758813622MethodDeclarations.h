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

// Callback`3<System.Single,System.Single,System.Boolean>
struct Callback_3_t1758813622;
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

// System.Void Callback`3<System.Single,System.Single,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_3__ctor_m385515918_gshared (Callback_3_t1758813622 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_3__ctor_m385515918(__this, ___object, ___method, method) ((  void (*) (Callback_3_t1758813622 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_3__ctor_m385515918_gshared)(__this, ___object, ___method, method)
// System.Void Callback`3<System.Single,System.Single,System.Boolean>::Invoke(T,U,V)
extern "C"  void Callback_3_Invoke_m3726810563_gshared (Callback_3_t1758813622 * __this, float ___arg1, float ___arg2, bool ___arg3, const MethodInfo* method);
#define Callback_3_Invoke_m3726810563(__this, ___arg1, ___arg2, ___arg3, method) ((  void (*) (Callback_3_t1758813622 *, float, float, bool, const MethodInfo*))Callback_3_Invoke_m3726810563_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult Callback`3<System.Single,System.Single,System.Boolean>::BeginInvoke(T,U,V,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_3_BeginInvoke_m358301526_gshared (Callback_3_t1758813622 * __this, float ___arg1, float ___arg2, bool ___arg3, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_3_BeginInvoke_m358301526(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_3_t1758813622 *, float, float, bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_3_BeginInvoke_m358301526_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void Callback`3<System.Single,System.Single,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_3_EndInvoke_m922282654_gshared (Callback_3_t1758813622 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_3_EndInvoke_m922282654(__this, ___result, method) ((  void (*) (Callback_3_t1758813622 *, Il2CppObject *, const MethodInfo*))Callback_3_EndInvoke_m922282654_gshared)(__this, ___result, method)
