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

// System.Predicate`1<UnityEngine.Rect>
struct Predicate_1_t2096392715;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Rect>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2243424448_gshared (Predicate_1_t2096392715 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2243424448(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t2096392715 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2243424448_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Rect>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3972571202_gshared (Predicate_1_t2096392715 * __this, Rect_t1525428817  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3972571202(__this, ___obj, method) ((  bool (*) (Predicate_1_t2096392715 *, Rect_t1525428817 , const MethodInfo*))Predicate_1_Invoke_m3972571202_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Rect>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m781519697_gshared (Predicate_1_t2096392715 * __this, Rect_t1525428817  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m781519697(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t2096392715 *, Rect_t1525428817 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m781519697_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Rect>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3794387154_gshared (Predicate_1_t2096392715 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3794387154(__this, ___result, method) ((  bool (*) (Predicate_1_t2096392715 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3794387154_gshared)(__this, ___result, method)
