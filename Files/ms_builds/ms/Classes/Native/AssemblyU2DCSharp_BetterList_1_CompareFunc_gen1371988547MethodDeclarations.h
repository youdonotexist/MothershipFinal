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

// BetterList`1/CompareFunc<UnityEngine.Vector3>
struct CompareFunc_t1371988547;
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

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m1702853279_gshared (CompareFunc_t1371988547 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m1702853279(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t1371988547 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m1702853279_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m2261457323_gshared (CompareFunc_t1371988547 * __this, Vector3_t3525329789  ___left, Vector3_t3525329789  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m2261457323(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t1371988547 *, Vector3_t3525329789 , Vector3_t3525329789 , const MethodInfo*))CompareFunc_Invoke_m2261457323_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m3534846850_gshared (CompareFunc_t1371988547 * __this, Vector3_t3525329789  ___left, Vector3_t3525329789  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m3534846850(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t1371988547 *, Vector3_t3525329789 , Vector3_t3525329789 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m3534846850_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2927995105_gshared (CompareFunc_t1371988547 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2927995105(__this, ___result, method) ((  int32_t (*) (CompareFunc_t1371988547 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2927995105_gshared)(__this, ___result, method)
