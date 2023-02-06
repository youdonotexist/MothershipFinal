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

// BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>
struct CompareFunc_t3237457404;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_TypewriterEffect_FadeEntry1095831350.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2987098333_gshared (CompareFunc_t3237457404 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m2987098333(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t3237457404 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2987098333_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m2695003217_gshared (CompareFunc_t3237457404 * __this, FadeEntry_t1095831350  ___left, FadeEntry_t1095831350  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m2695003217(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t3237457404 *, FadeEntry_t1095831350 , FadeEntry_t1095831350 , const MethodInfo*))CompareFunc_Invoke_m2695003217_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m2795945852_gshared (CompareFunc_t3237457404 * __this, FadeEntry_t1095831350  ___left, FadeEntry_t1095831350  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m2795945852(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t3237457404 *, FadeEntry_t1095831350 , FadeEntry_t1095831350 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m2795945852_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<TypewriterEffect/FadeEntry>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m642779259_gshared (CompareFunc_t3237457404 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m642779259(__this, ___result, method) ((  int32_t (*) (CompareFunc_t3237457404 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m642779259_gshared)(__this, ___result, method)
