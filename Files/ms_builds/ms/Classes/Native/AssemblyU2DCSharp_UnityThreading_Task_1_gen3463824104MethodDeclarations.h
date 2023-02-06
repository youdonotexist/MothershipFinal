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

// UnityThreading.Task`1<System.Object>
struct Task_1_t3463824104;
// System.Func`2<UnityThreading.Task,System.Object>
struct Func_2_t3648968942;
// System.Func`1<System.Object>
struct Func_1_t1979887667;
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
#include "AssemblyU2DCSharp_UnityThreading_DispatcherBase1034334729.h"

// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Func`2<UnityThreading.Task,T>)
extern "C"  void Task_1__ctor_m91675795_gshared (Task_1_t3463824104 * __this, Func_2_t3648968942 * ___function, const MethodInfo* method);
#define Task_1__ctor_m91675795(__this, ___function, method) ((  void (*) (Task_1_t3463824104 *, Func_2_t3648968942 *, const MethodInfo*))Task_1__ctor_m91675795_gshared)(__this, ___function, method)
// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Func`1<T>)
extern "C"  void Task_1__ctor_m2634317262_gshared (Task_1_t3463824104 * __this, Func_1_t1979887667 * ___function, const MethodInfo* method);
#define Task_1__ctor_m2634317262(__this, ___function, method) ((  void (*) (Task_1_t3463824104 *, Func_1_t1979887667 *, const MethodInfo*))Task_1__ctor_m2634317262_gshared)(__this, ___function, method)
// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Action`1<UnityThreading.Task>)
extern "C"  void Task_1__ctor_m17029020_gshared (Task_1_t3463824104 * __this, Action_1_t3220363991 * ___action, const MethodInfo* method);
#define Task_1__ctor_m17029020(__this, ___action, method) ((  void (*) (Task_1_t3463824104 *, Action_1_t3220363991 *, const MethodInfo*))Task_1__ctor_m17029020_gshared)(__this, ___action, method)
// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Action)
extern "C"  void Task_1__ctor_m3477697277_gshared (Task_1_t3463824104 * __this, Action_t437523947 * ___action, const MethodInfo* method);
#define Task_1__ctor_m3477697277(__this, ___action, method) ((  void (*) (Task_1_t3463824104 *, Action_t437523947 *, const MethodInfo*))Task_1__ctor_m3477697277_gshared)(__this, ___action, method)
// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Collections.IEnumerator)
extern "C"  void Task_1__ctor_m2702041995_gshared (Task_1_t3463824104 * __this, Il2CppObject * ___enumerator, const MethodInfo* method);
#define Task_1__ctor_m2702041995(__this, ___enumerator, method) ((  void (*) (Task_1_t3463824104 *, Il2CppObject *, const MethodInfo*))Task_1__ctor_m2702041995_gshared)(__this, ___enumerator, method)
// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Type,System.String,System.Object[])
extern "C"  void Task_1__ctor_m81074657_gshared (Task_1_t3463824104 * __this, Type_t * ___type, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define Task_1__ctor_m81074657(__this, ___type, ___methodName, ___args, method) ((  void (*) (Task_1_t3463824104 *, Type_t *, String_t*, ObjectU5BU5D_t11523773*, const MethodInfo*))Task_1__ctor_m81074657_gshared)(__this, ___type, ___methodName, ___args, method)
// System.Void UnityThreading.Task`1<System.Object>::.ctor(System.Object,System.String,System.Object[])
extern "C"  void Task_1__ctor_m3892910780_gshared (Task_1_t3463824104 * __this, Il2CppObject * ___that, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method);
#define Task_1__ctor_m3892910780(__this, ___that, ___methodName, ___args, method) ((  void (*) (Task_1_t3463824104 *, Il2CppObject *, String_t*, ObjectU5BU5D_t11523773*, const MethodInfo*))Task_1__ctor_m3892910780_gshared)(__this, ___that, ___methodName, ___args, method)
// System.Collections.IEnumerator UnityThreading.Task`1<System.Object>::Do()
extern "C"  Il2CppObject * Task_1_Do_m3704834455_gshared (Task_1_t3463824104 * __this, const MethodInfo* method);
#define Task_1_Do_m3704834455(__this, method) ((  Il2CppObject * (*) (Task_1_t3463824104 *, const MethodInfo*))Task_1_Do_m3704834455_gshared)(__this, method)
// System.Object UnityThreading.Task`1<System.Object>::get_RawResult()
extern "C"  Il2CppObject * Task_1_get_RawResult_m26917573_gshared (Task_1_t3463824104 * __this, const MethodInfo* method);
#define Task_1_get_RawResult_m26917573(__this, method) ((  Il2CppObject * (*) (Task_1_t3463824104 *, const MethodInfo*))Task_1_get_RawResult_m26917573_gshared)(__this, method)
// T UnityThreading.Task`1<System.Object>::get_Result()
extern "C"  Il2CppObject * Task_1_get_Result_m259576297_gshared (Task_1_t3463824104 * __this, const MethodInfo* method);
#define Task_1_get_Result_m259576297(__this, method) ((  Il2CppObject * (*) (Task_1_t3463824104 *, const MethodInfo*))Task_1_get_Result_m259576297_gshared)(__this, method)
// UnityThreading.Task`1<T> UnityThreading.Task`1<System.Object>::Run(UnityThreading.DispatcherBase)
extern "C"  Task_1_t3463824104 * Task_1_Run_m2160790110_gshared (Task_1_t3463824104 * __this, DispatcherBase_t1034334729 * ___target, const MethodInfo* method);
#define Task_1_Run_m2160790110(__this, ___target, method) ((  Task_1_t3463824104 * (*) (Task_1_t3463824104 *, DispatcherBase_t1034334729 *, const MethodInfo*))Task_1_Run_m2160790110_gshared)(__this, ___target, method)
// UnityThreading.Task`1<T> UnityThreading.Task`1<System.Object>::Run()
extern "C"  Task_1_t3463824104 * Task_1_Run_m200430993_gshared (Task_1_t3463824104 * __this, const MethodInfo* method);
#define Task_1_Run_m200430993(__this, method) ((  Task_1_t3463824104 * (*) (Task_1_t3463824104 *, const MethodInfo*))Task_1_Run_m200430993_gshared)(__this, method)
