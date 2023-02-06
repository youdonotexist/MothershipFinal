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

// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;
// UnityThreading.Task
struct Task_t3071911286;
// System.Action
struct Action_t437523947;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task>
struct IEnumerable_1_t1649098346;
// System.Collections.Generic.List`1<UnityThreading.Task>
struct List_1_t3868870255;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_UnityThreading_Task3071911286.h"

// System.Void UnityThreading.DispatcherBase::.ctor()
extern "C"  void DispatcherBase__ctor_m3748211464 (DispatcherBase_t1034334729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityThreading.DispatcherBase::get_TaskCount()
extern "C"  int32_t DispatcherBase_get_TaskCount_m519454037 (DispatcherBase_t1034334729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.DispatcherBase::Dispatch(System.Action)
extern "C"  Task_t3071911286 * DispatcherBase_Dispatch_m4258566890 (DispatcherBase_t1034334729 * __this, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.DispatcherBase::Dispatch(UnityThreading.Task)
extern "C"  Task_t3071911286 * DispatcherBase_Dispatch_m3574253999 (DispatcherBase_t1034334729 * __this, Task_t3071911286 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.DispatcherBase::AddTask(UnityThreading.Task)
extern "C"  void DispatcherBase_AddTask_m3724939094 (DispatcherBase_t1034334729 * __this, Task_t3071911286 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.DispatcherBase::AddTasks(System.Collections.Generic.IEnumerable`1<UnityThreading.Task>)
extern "C"  void DispatcherBase_AddTasks_m897564882 (DispatcherBase_t1034334729 * __this, Il2CppObject* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.DispatcherBase::TasksAdded()
extern "C"  void DispatcherBase_TasksAdded_m2050353806 (DispatcherBase_t1034334729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.DispatcherBase::ReorderTasks(System.Collections.Generic.List`1<UnityThreading.Task>)
extern "C"  void DispatcherBase_ReorderTasks_m699096899 (DispatcherBase_t1034334729 * __this, List_1_t3868870255 * ___currentTaskList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task> UnityThreading.DispatcherBase::SplitTasks(System.Int32)
extern "C"  Il2CppObject* DispatcherBase_SplitTasks_m922993445 (DispatcherBase_t1034334729 * __this, int32_t ___divisor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityThreading.Task> UnityThreading.DispatcherBase::IsolateTasks(System.Int32)
extern "C"  Il2CppObject* DispatcherBase_IsolateTasks_m1594267188 (DispatcherBase_t1034334729 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.DispatcherBase::Dispose()
extern "C"  void DispatcherBase_Dispose_m2746905925 (DispatcherBase_t1034334729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityThreading.DispatcherBase::<ReorderTasks>m__1D(UnityThreading.Task,UnityThreading.Task)
extern "C"  int32_t DispatcherBase_U3CReorderTasksU3Em__1D_m1215838681 (Il2CppObject * __this /* static, unused */, Task_t3071911286 * ___a, Task_t3071911286 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
