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

// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;
// System.String
struct String_t;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;
// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// UnityThreading.TaskWorker
struct TaskWorker_t1847743828;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UnityThreading_Dispatcher3850236568.h"
#include "AssemblyU2DCSharp_UnityThreading_TaskWorker1847743828.h"

// System.Void UnityThreading.TaskDistributor::.ctor(System.String)
extern "C"  void TaskDistributor__ctor_m3283733982 (TaskDistributor_t3607791827 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::.ctor(System.String,System.Int32)
extern "C"  void TaskDistributor__ctor_m953370553 (TaskDistributor_t3607791827 * __this, String_t* ___name, int32_t ___workerThreadCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::.ctor(System.String,System.Int32,System.Boolean)
extern "C"  void TaskDistributor__ctor_m687833764 (TaskDistributor_t3607791827 * __this, String_t* ___name, int32_t ___workerThreadCount, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle UnityThreading.TaskDistributor::get_NewDataWaitHandle()
extern "C"  WaitHandle_t361062656 * TaskDistributor_get_NewDataWaitHandle_m436539199 (TaskDistributor_t3607791827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.TaskDistributor UnityThreading.TaskDistributor::get_Main()
extern "C"  TaskDistributor_t3607791827 * TaskDistributor_get_Main_m2377256360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.TaskDistributor UnityThreading.TaskDistributor::get_MainNoThrow()
extern "C"  TaskDistributor_t3607791827 * TaskDistributor_get_MainNoThrow_m508798655 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::Start()
extern "C"  void TaskDistributor_Start_m1014461604 (TaskDistributor_t3607791827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::SpawnAdditionalWorkerThread()
extern "C"  void TaskDistributor_SpawnAdditionalWorkerThread_m1109828044 (TaskDistributor_t3607791827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::FillTasks(UnityThreading.Dispatcher)
extern "C"  void TaskDistributor_FillTasks_m932321779 (TaskDistributor_t3607791827 * __this, Dispatcher_t3850236568 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::CheckAccessLimitation()
extern "C"  void TaskDistributor_CheckAccessLimitation_m1639223048 (TaskDistributor_t3607791827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::TasksAdded()
extern "C"  void TaskDistributor_TasksAdded_m1189624690 (TaskDistributor_t3607791827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskDistributor::Dispose()
extern "C"  void TaskDistributor_Dispose_m2321575649 (TaskDistributor_t3607791827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.TaskDistributor::<TasksAdded>m__2C(UnityThreading.TaskWorker)
extern "C"  bool TaskDistributor_U3CTasksAddedU3Em__2C_m3256619688 (Il2CppObject * __this /* static, unused */, TaskWorker_t1847743828 * ___worker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
