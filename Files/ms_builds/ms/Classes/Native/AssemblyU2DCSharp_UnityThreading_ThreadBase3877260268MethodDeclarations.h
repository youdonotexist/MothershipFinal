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

// UnityThreading.ThreadBase
struct ThreadBase_t3877260268;
// System.String
struct String_t;
// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// UnityThreading.Task
struct Task_t3071911286;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UnityThreading_Dispatcher3850236568.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_UnityThreading_Task3071911286.h"

// System.Void UnityThreading.ThreadBase::.ctor(System.String)
extern "C"  void ThreadBase__ctor_m1361086493 (ThreadBase_t3877260268 * __this, String_t* ___threadName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::.ctor(System.String,System.Boolean)
extern "C"  void ThreadBase__ctor_m1636101568 (ThreadBase_t3877260268 * __this, String_t* ___threadName, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::.ctor(System.String,UnityThreading.Dispatcher)
extern "C"  void ThreadBase__ctor_m1325083319 (ThreadBase_t3877260268 * __this, String_t* ___threadName, Dispatcher_t3850236568 * ___targetDispatcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::.ctor(System.String,UnityThreading.Dispatcher,System.Boolean)
extern "C"  void ThreadBase__ctor_m3029435366 (ThreadBase_t3877260268 * __this, String_t* ___threadName, Dispatcher_t3850236568 * ___targetDispatcher, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.ThreadBase UnityThreading.ThreadBase::get_CurrentThread()
extern "C"  ThreadBase_t3877260268 * ThreadBase_get_CurrentThread_m2573837194 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.ThreadBase::get_IsAlive()
extern "C"  bool ThreadBase_get_IsAlive_m3163569329 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.ThreadBase::get_ShouldStop()
extern "C"  bool ThreadBase_get_ShouldStop_m3167375945 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::Start()
extern "C"  void ThreadBase_Start_m773062661 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::Exit()
extern "C"  void ThreadBase_Exit_m4061575997 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::Abort()
extern "C"  void ThreadBase_Abort_m1475470163 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::AbortWaitForSeconds(System.Single)
extern "C"  void ThreadBase_AbortWaitForSeconds_m1421874285 (ThreadBase_t3877260268 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.ThreadBase::Dispatch(System.Action)
extern "C"  Task_t3071911286 * ThreadBase_Dispatch_m319315559 (ThreadBase_t3877260268 * __this, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::DispatchAndWait(System.Action)
extern "C"  void ThreadBase_DispatchAndWait_m463397992 (ThreadBase_t3877260268 * __this, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::DispatchAndWait(System.Action,System.Single)
extern "C"  void ThreadBase_DispatchAndWait_m1482529101 (ThreadBase_t3877260268 * __this, Action_t437523947 * ___action, float ___timeOutSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.ThreadBase::Dispatch(UnityThreading.Task)
extern "C"  Task_t3071911286 * ThreadBase_Dispatch_m1566917484 (ThreadBase_t3877260268 * __this, Task_t3071911286 * ___taskBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::DispatchAndWait(UnityThreading.Task)
extern "C"  void ThreadBase_DispatchAndWait_m3580200109 (ThreadBase_t3877260268 * __this, Task_t3071911286 * ___taskBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::DispatchAndWait(UnityThreading.Task,System.Single)
extern "C"  void ThreadBase_DispatchAndWait_m3660569810 (ThreadBase_t3877260268 * __this, Task_t3071911286 * ___taskBase, float ___timeOutSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::DoInternal()
extern "C"  void ThreadBase_DoInternal_m281634183 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::RunEnumerator(System.Collections.IEnumerator)
extern "C"  void ThreadBase_RunEnumerator_m909331613 (ThreadBase_t3877260268 * __this, Il2CppObject * ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ThreadBase::Dispose()
extern "C"  void ThreadBase_Dispose_m2265425410 (ThreadBase_t3877260268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
