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

// BetterList`1/CompareFunc<System.Object>
struct CompareFunc_t2978732474;
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

// System.Void BetterList`1/CompareFunc<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m3334039642_gshared (CompareFunc_t2978732474 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m3334039642(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t2978732474 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m3334039642_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<System.Object>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m529220816_gshared (CompareFunc_t2978732474 * __this, Il2CppObject * ___left, Il2CppObject * ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m529220816(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t2978732474 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))CompareFunc_Invoke_m529220816_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2181926439_gshared (CompareFunc_t2978732474 * __this, Il2CppObject * ___left, Il2CppObject * ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2181926439(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t2978732474 *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2181926439_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m2267781532_gshared (CompareFunc_t2978732474 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m2267781532(__this, ___result, method) ((  int32_t (*) (CompareFunc_t2978732474 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m2267781532_gshared)(__this, ___result, method)
