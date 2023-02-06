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

// System.Func`2<System.Object,UnityThreading.Task/Unit>
struct Func_2_t1301318248;
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

// System.Void System.Func`2<System.Object,UnityThreading.Task/Unit>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4081890861_gshared (Func_2_t1301318248 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m4081890861(__this, ___object, ___method, method) ((  void (*) (Func_2_t1301318248 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4081890861_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,UnityThreading.Task/Unit>::Invoke(T)
extern "C"  Unit_t2641317  Func_2_Invoke_m2105983769_gshared (Func_2_t1301318248 * __this, Il2CppObject * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m2105983769(__this, ___arg1, method) ((  Unit_t2641317  (*) (Func_2_t1301318248 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m2105983769_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,UnityThreading.Task/Unit>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m2862552268_gshared (Func_2_t1301318248 * __this, Il2CppObject * ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m2862552268(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Func_2_t1301318248 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m2862552268_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,UnityThreading.Task/Unit>::EndInvoke(System.IAsyncResult)
extern "C"  Unit_t2641317  Func_2_EndInvoke_m2437192283_gshared (Func_2_t1301318248 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m2437192283(__this, ___result, method) ((  Unit_t2641317  (*) (Func_2_t1301318248 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m2437192283_gshared)(__this, ___result, method)
