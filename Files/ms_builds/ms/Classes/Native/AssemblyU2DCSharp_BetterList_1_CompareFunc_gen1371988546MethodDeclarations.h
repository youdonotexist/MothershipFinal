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

// BetterList`1/CompareFunc<UnityEngine.Vector2>
struct CompareFunc_t1371988546;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m70049280_gshared (CompareFunc_t1371988546 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m70049280(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t1371988546 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m70049280_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m753905514_gshared (CompareFunc_t1371988546 * __this, Vector2_t3525329788  ___left, Vector2_t3525329788  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m753905514(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t1371988546 *, Vector2_t3525329788 , Vector2_t3525329788 , const MethodInfo*))CompareFunc_Invoke_m753905514_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2841454145_gshared (CompareFunc_t1371988546 * __this, Vector2_t3525329788  ___left, Vector2_t3525329788  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2841454145(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t1371988546 *, Vector2_t3525329788 , Vector2_t3525329788 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2841454145_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m1902503106_gshared (CompareFunc_t1371988546 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m1902503106(__this, ___result, method) ((  int32_t (*) (CompareFunc_t1371988546 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m1902503106_gshared)(__this, ___result, method)
