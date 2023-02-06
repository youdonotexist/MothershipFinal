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

// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// UnityThreading.Task
struct Task_t3071911286;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityThreading_Dispatcher3850236568.h"
#include "mscorlib_System_Threading_WaitHandle361062656.h"
#include "AssemblyU2DCSharp_UnityThreading_Task3071911286.h"

// System.Void UnityThreading.Dispatcher::.ctor()
extern "C"  void Dispatcher__ctor_m2927919577 (Dispatcher_t3850236568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::.ctor(System.Boolean)
extern "C"  void Dispatcher__ctor_m3044181904 (Dispatcher_t3850236568 * __this, bool ___setThreadDefaults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.Dispatcher::get_CurrentTask()
extern "C"  Task_t3071911286 * Dispatcher_get_CurrentTask_m3614711951 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Dispatcher UnityThreading.Dispatcher::get_Current()
extern "C"  Dispatcher_t3850236568 * Dispatcher_get_Current_m3861861832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::set_Current(UnityThreading.Dispatcher)
extern "C"  void Dispatcher_set_Current_m3913709 (Il2CppObject * __this /* static, unused */, Dispatcher_t3850236568 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Dispatcher UnityThreading.Dispatcher::get_CurrentNoThrow()
extern "C"  Dispatcher_t3850236568 * Dispatcher_get_CurrentNoThrow_m4294638239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Dispatcher UnityThreading.Dispatcher::get_Main()
extern "C"  Dispatcher_t3850236568 * Dispatcher_get_Main_m1669008812 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Dispatcher UnityThreading.Dispatcher::get_MainNoThrow()
extern "C"  Dispatcher_t3850236568 * Dispatcher_get_MainNoThrow_m2213501499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::ProcessTasks()
extern "C"  void Dispatcher_ProcessTasks_m694821098 (Dispatcher_t3850236568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Dispatcher::ProcessTasks(System.Threading.WaitHandle)
extern "C"  bool Dispatcher_ProcessTasks_m2985760042 (Dispatcher_t3850236568 * __this, WaitHandle_t361062656 * ___exitHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Dispatcher::ProcessNextTask()
extern "C"  bool Dispatcher_ProcessNextTask_m1922118930 (Dispatcher_t3850236568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.Dispatcher::ProcessNextTask(System.Threading.WaitHandle)
extern "C"  bool Dispatcher_ProcessNextTask_m431543118 (Dispatcher_t3850236568 * __this, WaitHandle_t361062656 * ___exitHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::ProcessTasksInternal()
extern "C"  void Dispatcher_ProcessTasksInternal_m1633881991 (Dispatcher_t3850236568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::ProcessSingleTask(UnityThreading.Task)
extern "C"  void Dispatcher_ProcessSingleTask_m3565517423 (Dispatcher_t3850236568 * __this, Task_t3071911286 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::RunTask(UnityThreading.Task)
extern "C"  void Dispatcher_RunTask_m3161108091 (Dispatcher_t3850236568 * __this, Task_t3071911286 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::CheckAccessLimitation()
extern "C"  void Dispatcher_CheckAccessLimitation_m2015308605 (Dispatcher_t3850236568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.Dispatcher::Dispose()
extern "C"  void Dispatcher_Dispose_m425417686 (Dispatcher_t3850236568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
