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

// BetterList`1/CompareFunc<System.Int32>
struct CompareFunc_t694073545;
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

// System.Void BetterList`1/CompareFunc<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2813669491_gshared (CompareFunc_t694073545 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m2813669491(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t694073545 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2813669491_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.Int32>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m2755697915_gshared (CompareFunc_t694073545 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m2755697915(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t694073545 *, int32_t, int32_t, const MethodInfo*))CompareFunc_Invoke_m2755697915_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m1350408102_gshared (CompareFunc_t694073545 * __this, int32_t ___left, int32_t ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m1350408102(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t694073545 *, int32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m1350408102_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2654356369_gshared (CompareFunc_t694073545 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2654356369(__this, ___result, method) ((  int32_t (*) (CompareFunc_t694073545 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2654356369_gshared)(__this, ___result, method)
