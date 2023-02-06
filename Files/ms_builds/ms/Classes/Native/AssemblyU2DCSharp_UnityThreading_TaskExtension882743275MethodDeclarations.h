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

// System.Collections.Generic.IEnumerable`1<UnityThreading.Task>
struct IEnumerable_1_t1649098346;
// UnityThreading.Task
struct Task_t3071911286;
// System.Action`1<System.Object>
struct Action_1_t985559125;
// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;
// System.Action
struct Action_t437523947;
// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;
// System.Action`1<System.Collections.Generic.IEnumerable`1<UnityThreading.Task>>
struct Action_1_t1797551051;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityThreading_Task3071911286.h"
#include "AssemblyU2DCSharp_UnityThreading_DispatcherBase1034334729.h"
#include "System_Core_System_Action437523947.h"

// System.Void UnityThreading.TaskExtension::WaitAll(System.Collections.Generic.IEnumerable`1<UnityThreading.Task>)
extern "C"  void TaskExtension_WaitAll_m1656056773 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::OnResult(UnityThreading.Task,System.Action`1<System.Object>)
extern "C"  Task_t3071911286 * TaskExtension_OnResult_m1212035013 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t985559125 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::OnResult(UnityThreading.Task,System.Action`1<System.Object>,UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * TaskExtension_OnResult_m2931419278 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t985559125 * ___action, DispatcherBase_t1034334729 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenSucceeded(UnityThreading.Task,System.Action)
extern "C"  Task_t3071911286 * TaskExtension_WhenSucceeded_m1035471563 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenSucceeded(UnityThreading.Task,System.Action`1<UnityThreading.Task>)
extern "C"  Task_t3071911286 * TaskExtension_WhenSucceeded_m3948697614 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t3220363991 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenSucceeded(UnityThreading.Task,System.Action`1<UnityThreading.Task>,UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * TaskExtension_WhenSucceeded_m3741526807 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t3220363991 * ___action, DispatcherBase_t1034334729 * ___actiontargetTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenFailed(UnityThreading.Task,System.Action)
extern "C"  Task_t3071911286 * TaskExtension_WhenFailed_m635250439 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenFailed(UnityThreading.Task,System.Action`1<UnityThreading.Task>)
extern "C"  Task_t3071911286 * TaskExtension_WhenFailed_m3851761746 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t3220363991 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenFailed(UnityThreading.Task,System.Action`1<UnityThreading.Task>,UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * TaskExtension_WhenFailed_m1682521179 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t3220363991 * ___action, DispatcherBase_t1034334729 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenEnded(UnityThreading.Task,System.Action)
extern "C"  Task_t3071911286 * TaskExtension_WhenEnded_m3261199826 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenEnded(UnityThreading.Task,System.Action`1<UnityThreading.Task>)
extern "C"  Task_t3071911286 * TaskExtension_WhenEnded_m2328163623 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t3220363991 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::WhenEnded(UnityThreading.Task,System.Action`1<UnityThreading.Task>,UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * TaskExtension_WhenEnded_m1710659184 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___task, Action_1_t3220363991 * ___action, DispatcherBase_t1034334729 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::Then(UnityThreading.Task,UnityThreading.Task)
extern "C"  Task_t3071911286 * TaskExtension_Then_m1507447110 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___that, Task_t3071911286 * ___followingTask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::Then(UnityThreading.Task,UnityThreading.Task,UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * TaskExtension_Then_m777171535 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___that, Task_t3071911286 * ___followingTask, DispatcherBase_t1034334729 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::Await(UnityThreading.Task,UnityThreading.Task)
extern "C"  Task_t3071911286 * TaskExtension_Await_m755780257 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___that, Task_t3071911286 * ___taskToWaitFor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.TaskExtension::Await(UnityThreading.Task,UnityThreading.Task,UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * TaskExtension_Await_m1399495274 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___that, Task_t3071911286 * ___taskToWaitFor, DispatcherBase_t1034334729 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task> UnityThreading.TaskExtension::ContinueWhenAnyEnded(System.Collections.Generic.IEnumerable`1<UnityThreading.Task>,System.Action)
extern "C"  Il2CppObject* TaskExtension_ContinueWhenAnyEnded_m1583290607 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tasks, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task> UnityThreading.TaskExtension::ContinueWhenAnyEnded(System.Collections.Generic.IEnumerable`1<UnityThreading.Task>,System.Action`1<UnityThreading.Task>)
extern "C"  Il2CppObject* TaskExtension_ContinueWhenAnyEnded_m2229117290 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tasks, Action_1_t3220363991 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task> UnityThreading.TaskExtension::ContinueWhenAllEnded(System.Collections.Generic.IEnumerable`1<UnityThreading.Task>,System.Action)
extern "C"  Il2CppObject* TaskExtension_ContinueWhenAllEnded_m1293307236 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tasks, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task> UnityThreading.TaskExtension::ContinueWhenAllEnded(System.Collections.Generic.IEnumerable`1<UnityThreading.Task>,System.Action`1<System.Collections.Generic.IEnumerable`1<UnityThreading.Task>>)
extern "C"  Il2CppObject* TaskExtension_ContinueWhenAllEnded_m3695736476 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___tasks, Action_1_t1797551051 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
