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

// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t41355861;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_UICamera_DepthEntry2194697103.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BetterList`1/CompareFunc<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m1393544147_gshared (CompareFunc_t41355861 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m1393544147(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t41355861 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m1393544147_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m3104379639_gshared (CompareFunc_t41355861 * __this, DepthEntry_t2194697103  ___left, DepthEntry_t2194697103  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m3104379639(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t41355861 *, DepthEntry_t2194697103 , DepthEntry_t2194697103 , const MethodInfo*))CompareFunc_Invoke_m3104379639_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m3444521166_gshared (CompareFunc_t41355861 * __this, DepthEntry_t2194697103  ___left, DepthEntry_t2194697103  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m3444521166(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t41355861 *, DepthEntry_t2194697103 , DepthEntry_t2194697103 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m3444521166_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2125902869_gshared (CompareFunc_t41355861 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2125902869(__this, ___result, method) ((  int32_t (*) (CompareFunc_t41355861 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2125902869_gshared)(__this, ___result, method)
