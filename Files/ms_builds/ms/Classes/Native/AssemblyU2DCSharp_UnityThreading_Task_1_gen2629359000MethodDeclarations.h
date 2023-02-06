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

// UnityThreading.Task`1<UnityThreading.Task/Unit>
struct Task_1_t2629359000;
// System.Func`2<UnityThreading.Task,UnityThreading.Task/Unit>
struct Func_2_t2814503838;
// System.Func`1<UnityThreading.Task/Unit>
struct Func_1_t1145422563;
// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_UnityThreading_Task_Unit2641316.h"
#include "AssemblyU2DCSharp_UnityThreading_DispatcherBase1034334729.h"

// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Func`2<UnityThreading.Task,T>)
extern "C"  void Task_1__ctor_m4231960062_gshared (Task_1_t2629359000 * __this, Func_2_t2814503838 * ___function, const MethodInfo* method);
#define Task_1__ctor_m4231960062(__this, ___function, method) ((  void (*) (Task_1_t2629359000 *, Func_2_t2814503838 *, const MethodInfo*))Task_1__ctor_m4231960062_gshared)(__this, ___function, method)
// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Func`1<T>)
extern "C"  void Task_1__ctor_m2234047161_gshared (Task_1_t2629359000 * __this, Func_1_t1145422563 * ___function, const MethodInfo* method);
#define Task_1__ctor_m2234047161(__this, ___function, method) ((  void (*) (Task_1_t2629359000 *, Func_1_t1145422563 *, const MethodInfo*))Task_1__ctor_m2234047161_gshared)(__this, ___function, method)
// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Action`1<UnityThreading.Task>)
extern "C"  void Task_1__ctor_m4157313287_gshared (Task_1_t2629359000 * __this, Action_1_t3220363991 * ___action, const MethodInfo* method);
#define Task_1__ctor_m4157313287(__this, ___action, method) ((  void (*) (Task_1_t2629359000 *, Action_1_t3220363991 *, const MethodInfo*))Task_1__ctor_m4157313287_gshared)(__this, ___action, method)
// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Action)
extern "C"  void Task_1__ctor_m4125439474_gshared (Task_1_t2629359000 * __this, Action_t437523947 * ___action, const MethodInfo* method);
#define Task_1__ctor_m4125439474(__this, ___action, method) ((  void (*) (Task_1_t2629359000 *, Action_t437523947 *, const MethodInfo*))Task_1__ctor_m4125439474_gshared)(__this, ___action, method)
// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Collections.IEnumerator)
extern "C"  void Task_1__ctor_m3503016246_gshared (Task_1_t2629359000 * __this, Il2CppObject * ___enumerator, const MethodInfo* method);
#define Task_1__ctor_m3503016246(__this, ___enumerator, method) ((  void (*) (Task_1_t2629359000 *, Il2CppObject *, const MethodInfo*))Task_1__ctor_m3503016246_gshared)(__this, ___enumerator, method)
// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Type,System.String,System.Object[])
extern "C"  void Task_1__ctor_m2576321366_gshared (Task_1_t2629359000 * __this, Type_t * ___type, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define Task_1__ctor_m2576321366(__this, ___type, ___methodName, ___args, method) ((  void (*) (Task_1_t2629359000 *, Type_t *, String_t*, ObjectU5BU5D_t11523773*, const MethodInfo*))Task_1__ctor_m2576321366_gshared)(__this, ___type, ___methodName, ___args, method)
// System.Void UnityThreading.Task`1<UnityThreading.Task/Unit>::.ctor(System.Object,System.String,System.Object[])
extern "C"  void Task_1__ctor_m938279665_gshared (Task_1_t2629359000 * __this, Il2CppObject * ___that, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define Task_1__ctor_m938279665(__this, ___that, ___methodName, ___args, method) ((  void (*) (Task_1_t2629359000 *, Il2CppObject *, String_t*, ObjectU5BU5D_t11523773*, const MethodInfo*))Task_1__ctor_m938279665_gshared)(__this, ___that, ___methodName, ___args, method)
// System.Collections.IEnumerator UnityThreading.Task`1<UnityThreading.Task/Unit>::Do()
extern "C"  Il2CppObject * Task_1_Do_m2055295228_gshared (Task_1_t2629359000 * __this, const MethodInfo* method);
#define Task_1_Do_m2055295228(__this, method) ((  Il2CppObject * (*) (Task_1_t2629359000 *, const MethodInfo*))Task_1_Do_m2055295228_gshared)(__this, method)
// System.Object UnityThreading.Task`1<UnityThreading.Task/Unit>::get_RawResult()
extern "C"  Il2CppObject * Task_1_get_RawResult_m3698834682_gshared (Task_1_t2629359000 * __this, const MethodInfo* method);
#define Task_1_get_RawResult_m3698834682(__this, method) ((  Il2CppObject * (*) (Task_1_t2629359000 *, const MethodInfo*))Task_1_get_RawResult_m3698834682_gshared)(__this, method)
// T UnityThreading.Task`1<UnityThreading.Task/Unit>::get_Result()
extern "C"  Unit_t2641317  Task_1_get_Result_m3139518720_gshared (Task_1_t2629359000 * __this, const MethodInfo* method);
#define Task_1_get_Result_m3139518720(__this, method) ((  Unit_t2641317  (*) (Task_1_t2629359000 *, const MethodInfo*))Task_1_get_Result_m3139518720_gshared)(__this, method)
// UnityThreading.Task`1<T> UnityThreading.Task`1<UnityThreading.Task/Unit>::Run(UnityThreading.DispatcherBase)
extern "C"  Task_1_t2629359000 * Task_1_Run_m721107299_gshared (Task_1_t2629359000 * __this, DispatcherBase_t1034334729 * ___target, const MethodInfo* method);
#define Task_1_Run_m721107299(__this, ___target, method) ((  Task_1_t2629359000 * (*) (Task_1_t2629359000 *, DispatcherBase_t1034334729 *, const MethodInfo*))Task_1_Run_m721107299_gshared)(__this, ___target, method)
// UnityThreading.Task`1<T> UnityThreading.Task`1<UnityThreading.Task/Unit>::Run()
extern "C"  Task_1_t2629359000 * Task_1_Run_m3516676204_gshared (Task_1_t2629359000 * __this, const MethodInfo* method);
#define Task_1_Run_m3516676204(__this, method) ((  Task_1_t2629359000 * (*) (Task_1_t2629359000 *, const MethodInfo*))Task_1_Run_m3516676204_gshared)(__this, method)
