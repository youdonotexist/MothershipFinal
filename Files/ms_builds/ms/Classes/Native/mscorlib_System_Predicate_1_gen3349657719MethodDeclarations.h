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

// System.Predicate`1<System.Byte>
struct Predicate_1_t3349657719;
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

// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m401407672_gshared (Predicate_1_t3349657719 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m401407672(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t3349657719 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m401407672_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m986317582_gshared (Predicate_1_t3349657719 * __this, uint8_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m986317582(__this, ___obj, method) ((  bool (*) (Predicate_1_t3349657719 *, uint8_t, const MethodInfo*))Predicate_1_Invoke_m986317582_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m211908321_gshared (Predicate_1_t3349657719 * __this, uint8_t ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m211908321(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t3349657719 *, uint8_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m211908321_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1925862790_gshared (Predicate_1_t3349657719 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1925862790(__this, ___result, method) ((  bool (*) (Predicate_1_t3349657719 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1925862790_gshared)(__this, ___result, method)
