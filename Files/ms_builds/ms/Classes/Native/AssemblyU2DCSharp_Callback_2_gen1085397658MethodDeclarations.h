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

// Callback`2<System.Int32,UnityEngine.Vector3>
struct Callback_2_t1085397658;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Callback`2<System.Int32,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_2__ctor_m3005685572_gshared (Callback_2_t1085397658 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_2__ctor_m3005685572(__this, ___object, ___method, method) ((  void (*) (Callback_2_t1085397658 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_2__ctor_m3005685572_gshared)(__this, ___object, ___method, method)
// System.Void Callback`2<System.Int32,UnityEngine.Vector3>::Invoke(T,U)
extern "C"  void Callback_2_Invoke_m3467032119_gshared (Callback_2_t1085397658 * __this, int32_t ___arg1, Vector3_t3525329789  ___arg2, const MethodInfo* method);
#define Callback_2_Invoke_m3467032119(__this, ___arg1, ___arg2, method) ((  void (*) (Callback_2_t1085397658 *, int32_t, Vector3_t3525329789 , const MethodInfo*))Callback_2_Invoke_m3467032119_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult Callback`2<System.Int32,UnityEngine.Vector3>::BeginInvoke(T,U,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_2_BeginInvoke_m1791454070_gshared (Callback_2_t1085397658 * __this, int32_t ___arg1, Vector3_t3525329789  ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_2_BeginInvoke_m1791454070(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_2_t1085397658 *, int32_t, Vector3_t3525329789 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_2_BeginInvoke_m1791454070_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void Callback`2<System.Int32,UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_2_EndInvoke_m2840908628_gshared (Callback_2_t1085397658 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_2_EndInvoke_m2840908628(__this, ___result, method) ((  void (*) (Callback_2_t1085397658 *, Il2CppObject *, const MethodInfo*))Callback_2_EndInvoke_m2840908628_gshared)(__this, ___result, method)
