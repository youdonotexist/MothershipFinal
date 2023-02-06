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

// BetterList`1/CompareFunc<UnityEngine.Color32>
struct CompareFunc_t1983742965;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void BetterList`1/CompareFunc<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C"  void CompareFunc__ctor_m2461687853_gshared (CompareFunc_t1983742965 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define CompareFunc__ctor_m2461687853(__this, ___object, ___method, method) ((  void (*) (CompareFunc_t1983742965 *, Il2CppObject *, IntPtr_t, const MethodInfo*))CompareFunc__ctor_m2461687853_gshared)(__this, ___object, ___method, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::Invoke(T,T)
extern "C"  int32_t CompareFunc_Invoke_m488889309_gshared (CompareFunc_t1983742965 * __this, Color32_t4137084207  ___left, Color32_t4137084207  ___right, const MethodInfo* method);
#define CompareFunc_Invoke_m488889309(__this, ___left, ___right, method) ((  int32_t (*) (CompareFunc_t1983742965 *, Color32_t4137084207 , Color32_t4137084207 , const MethodInfo*))CompareFunc_Invoke_m488889309_gshared)(__this, ___left, ___right, method)
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompareFunc_BeginInvoke_m149463988_gshared (CompareFunc_t1983742965 * __this, Color32_t4137084207  ___left, Color32_t4137084207  ___right, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define CompareFunc_BeginInvoke_m149463988(__this, ___left, ___right, ___callback, ___object, method) ((  Il2CppObject * (*) (CompareFunc_t1983742965 *, Color32_t4137084207 , Color32_t4137084207 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))CompareFunc_BeginInvoke_m149463988_gshared)(__this, ___left, ___right, ___callback, ___object, method)
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompareFunc_EndInvoke_m3946677615_gshared (CompareFunc_t1983742965 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define CompareFunc_EndInvoke_m3946677615(__this, ___result, method) ((  int32_t (*) (CompareFunc_t1983742965 *, Il2CppObject *, const MethodInfo*))CompareFunc_EndInvoke_m3946677615_gshared)(__this, ___result, method)
