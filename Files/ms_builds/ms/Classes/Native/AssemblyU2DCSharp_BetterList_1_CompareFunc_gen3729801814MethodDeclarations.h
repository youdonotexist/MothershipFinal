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

// BetterList`1/CompareFunc<UnityEngine.Color>
struct CompareFunc_t3729801814;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m1713620716_gshared (CompareFunc_t3729801814 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m1713620716(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t3729801814 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m1713620716_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m283192190_gshared (CompareFunc_t3729801814 * __this, Color_t1588175760  ___left, Color_t1588175760  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m283192190(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t3729801814 *, Color_t1588175760 , Color_t1588175760 , const MethodInfo*))CompareFunc_Invoke_m283192190_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m1887011797_gshared (CompareFunc_t3729801814 * __this, Color_t1588175760  ___left, Color_t1588175760  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m1887011797(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t3729801814 *, Color_t1588175760 , Color_t1588175760 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m1887011797_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m4199524398_gshared (CompareFunc_t3729801814 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m4199524398(__this, ___result, method) ((  int32_t (*) (CompareFunc_t3729801814 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m4199524398_gshared)(__this, ___result, method)
