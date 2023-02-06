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

// UnityThreadHelper
struct UnityThreadHelper_t1984380493;
// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;
// UnityThreading.ActionThread
struct ActionThread_t464308177;
// System.Action`1<UnityThreading.ActionThread>
struct Action_1_t612760882;
// System.Action
struct Action_t437523947;
// UnityThreading.ThreadBase
struct ThreadBase_t3877260268;
// System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>
struct Func_2_t2849578859;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t1429988286;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_UnityThreading_ThreadBase3877260268.h"

// System.Void UnityThreadHelper::.ctor()
extern "C"  void UnityThreadHelper__ctor_m2229876158 (UnityThreadHelper_t1984380493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreadHelper::.cctor()
extern "C"  void UnityThreadHelper__cctor_m4219555247 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreadHelper::EnsureHelper()
extern "C"  void UnityThreadHelper_EnsureHelper_m279376210 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreadHelper UnityThreadHelper::get_Instance()
extern "C"  UnityThreadHelper_t1984380493 * UnityThreadHelper_get_Instance_m2616512702 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Dispatcher UnityThreadHelper::get_Dispatcher()
extern "C"  Dispatcher_t3850236568 * UnityThreadHelper_get_Dispatcher_m3377815125 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.TaskDistributor UnityThreadHelper::get_TaskDistributor()
extern "C"  TaskDistributor_t3607791827 * UnityThreadHelper_get_TaskDistributor_m1325709467 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Dispatcher UnityThreadHelper::get_CurrentDispatcher()
extern "C"  Dispatcher_t3850236568 * UnityThreadHelper_get_CurrentDispatcher_m1047201012 (UnityThreadHelper_t1984380493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.TaskDistributor UnityThreadHelper::get_CurrentTaskDistributor()
extern "C"  TaskDistributor_t3607791827 * UnityThreadHelper_get_CurrentTaskDistributor_m1318663986 (UnityThreadHelper_t1984380493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreadHelper::EnsureHelperInstance()
extern "C"  void UnityThreadHelper_EnsureHelperInstance_m3073880007 (UnityThreadHelper_t1984380493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ActionThread UnityThreadHelper::CreateThread(System.Action`1<UnityThreading.ActionThread>,System.Boolean)
extern "C"  ActionThread_t464308177 * UnityThreadHelper_CreateThread_m3156279202 (Il2CppObject * __this /* static, unused */, Action_1_t612760882 * ___action, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ActionThread UnityThreadHelper::CreateThread(System.Action`1<UnityThreading.ActionThread>)
extern "C"  ActionThread_t464308177 * UnityThreadHelper_CreateThread_m3920834171 (Il2CppObject * __this /* static, unused */, Action_1_t612760882 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ActionThread UnityThreadHelper::CreateThread(System.Action,System.Boolean)
extern "C"  ActionThread_t464308177 * UnityThreadHelper_CreateThread_m2358090276 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___action, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ActionThread UnityThreadHelper::CreateThread(System.Action)
extern "C"  ActionThread_t464308177 * UnityThreadHelper_CreateThread_m684269625 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ThreadBase UnityThreadHelper::CreateThread(System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>,System.Boolean)
extern "C"  ThreadBase_t3877260268 * UnityThreadHelper_CreateThread_m73155814 (Il2CppObject * __this /* static, unused */, Func_2_t2849578859 * ___action, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ThreadBase UnityThreadHelper::CreateThread(System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>)
extern "C"  ThreadBase_t3877260268 * UnityThreadHelper_CreateThread_m2770766263 (Il2CppObject * __this /* static, unused */, Func_2_t2849578859 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ThreadBase UnityThreadHelper::CreateThread(System.Func`1<System.Collections.IEnumerator>,System.Boolean)
extern "C"  ThreadBase_t3877260268 * UnityThreadHelper_CreateThread_m2553868331 (Il2CppObject * __this /* static, unused */, Func_1_t1429988286 * ___action, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ThreadBase UnityThreadHelper::CreateThread(System.Func`1<System.Collections.IEnumerator>)
extern "C"  ThreadBase_t3877260268 * UnityThreadHelper_CreateThread_m377707794 (Il2CppObject * __this /* static, unused */, Func_1_t1429988286 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreadHelper::RegisterThread(UnityThreading.ThreadBase)
extern "C"  void UnityThreadHelper_RegisterThread_m484689497 (UnityThreadHelper_t1984380493 * __this, ThreadBase_t3877260268 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreadHelper::OnDestroy()
extern "C"  void UnityThreadHelper_OnDestroy_m1838021559 (UnityThreadHelper_t1984380493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreadHelper::Update()
extern "C"  void UnityThreadHelper_Update_m2133546255 (UnityThreadHelper_t1984380493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreadHelper::<Update>m__53(UnityThreading.ThreadBase)
extern "C"  bool UnityThreadHelper_U3CUpdateU3Em__53_m4267313546 (Il2CppObject * __this /* static, unused */, ThreadBase_t3877260268 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
