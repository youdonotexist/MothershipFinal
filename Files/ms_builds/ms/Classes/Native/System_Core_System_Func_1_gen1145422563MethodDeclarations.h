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

// System.Func`1<UnityThreading.Task/Unit>
struct Func_1_t1145422563;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_UnityThreading_Task_Unit2641316.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`1<UnityThreading.Task/Unit>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m583092474_gshared (Func_1_t1145422563 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m583092474(__this, ___object, ___method, method) ((  void (*) (Func_1_t1145422563 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_1__ctor_m583092474_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<UnityThreading.Task/Unit>::Invoke()
extern "C"  Unit_t2641317  Func_1_Invoke_m967246962_gshared (Func_1_t1145422563 * __this, const MethodInfo* method);
#define Func_1_Invoke_m967246962(__this, method) ((  Unit_t2641317  (*) (Func_1_t1145422563 *, const MethodInfo*))Func_1_Invoke_m967246962_gshared)(__this, method)
// System.IAsyncResult System.Func`1<UnityThreading.Task/Unit>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_1_BeginInvoke_m1058107191_gshared (Func_1_t1145422563 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m1058107191(__this, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_1_t1145422563 *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_1_BeginInvoke_m1058107191_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<UnityThreading.Task/Unit>::EndInvoke(System.IAsyncResult)
extern "C"  Unit_t2641317  Func_1_EndInvoke_m2205558824_gshared (Func_1_t1145422563 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m2205558824(__this, ___result, method) ((  Unit_t2641317  (*) (Func_1_t1145422563 *, Il2CppObject *, const MethodInfo*))Func_1_EndInvoke_m2205558824_gshared)(__this, ___result, method)
