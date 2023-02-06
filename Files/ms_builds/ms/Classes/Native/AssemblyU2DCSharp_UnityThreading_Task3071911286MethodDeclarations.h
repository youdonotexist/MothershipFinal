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

// UnityThreading.Task
struct Task_t3071911286;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;
// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityThreading_DispatcherBase1034334729.h"
#include "System_Core_System_Action437523947.h"

// System.Void UnityThreading.Task::.ctor()
extern "C"  void Task__ctor_m2607897211 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::Finalize()
extern "C"  void Task_Finalize_m304902151 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Task::get_Current()
extern "C"  Task_t3071911286 * Task_get_Current_m887133708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Task::get_ShouldAbort()
extern "C"  bool Task_get_ShouldAbort_m1794950689 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Task::get_HasEnded()
extern "C"  bool Task_get_HasEnded_m3402133758 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Task::get_IsEnding()
extern "C"  bool Task_get_IsEnding_m3917823855 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Task::get_IsSucceeded()
extern "C"  bool Task_get_IsSucceeded_m4229019323 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Task::get_IsFailed()
extern "C"  bool Task_get_IsFailed_m2858666245 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::Abort()
extern "C"  void Task_Abort_m2257442505 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::AbortWait()
extern "C"  void Task_AbortWait_m2654840606 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::AbortWaitForSeconds(System.Single)
extern "C"  void Task_AbortWaitForSeconds_m1201514295 (Task_t3071911286 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::Wait()
extern "C"  void Task_Wait_m8822686 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::WaitForSeconds(System.Single)
extern "C"  void Task_WaitForSeconds_m1468341943 (Task_t3071911286 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::DoInternal()
extern "C"  void Task_DoInternal_m1040788433 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::End()
extern "C"  void Task_End_m1646609332 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::RunEnumerator(System.Collections.IEnumerator)
extern "C"  void Task_RunEnumerator_m699594643 (Task_t3071911286 * __this, Il2CppObject * ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Task::Dispose()
extern "C"  void Task_Dispose_m2121569272 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Task::Run(UnityThreading.DispatcherBase)
extern "C"  Task_t3071911286 * Task_Run_m2459175016 (Task_t3071911286 * __this, DispatcherBase_t1034334729 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Task::Run()
extern "C"  Task_t3071911286 * Task_Run_m1863940935 (Task_t3071911286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Task::Create(System.Action`1<UnityThreading.Task>)
extern "C"  Task_t3071911286 * Task_Create_m1209653950 (Il2CppObject * __this /* static, unused */, Action_1_t3220363991 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Task::Create(System.Action)
extern "C"  Task_t3071911286 * Task_Create_m132894235 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Task::Create(System.Collections.IEnumerator)
extern "C"  Task_t3071911286 * Task_Create_m1696950317 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
