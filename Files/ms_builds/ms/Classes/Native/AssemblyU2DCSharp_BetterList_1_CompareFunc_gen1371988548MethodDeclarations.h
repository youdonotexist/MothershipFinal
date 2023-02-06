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

// BetterList`1/CompareFunc<UnityEngine.Vector4>
struct CompareFunc_t1371988548;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3335657278_gshared (CompareFunc_t1371988548 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m3335657278(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t1371988548 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3335657278_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3769009132_gshared (CompareFunc_t1371988548 * __this, Vector4_t3525329790  ___left, Vector4_t3525329790  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m3769009132(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t1371988548 *, Vector4_t3525329790 , Vector4_t3525329790 , const MethodInfo*))CompareFunc_Invoke_m3769009132_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m4228239555_gshared (CompareFunc_t1371988548 * __this, Vector4_t3525329790  ___left, Vector4_t3525329790  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m4228239555(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t1371988548 *, Vector4_t3525329790 , Vector4_t3525329790 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m4228239555_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m3953487104_gshared (CompareFunc_t1371988548 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m3953487104(__this, ___result, method) ((  int32_t (*) (CompareFunc_t1371988548 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m3953487104_gshared)(__this, ___result, method)
