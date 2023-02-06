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

// TaskManager/TaskState
struct TaskState_t2173790700;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// TaskManager/TaskState/FinishedHandler
struct FinishedHandler_t2586567257;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TaskManager_TaskState_FinishedHa2586567256.h"
#include "mscorlib_System_String968488902.h"

// System.Void TaskManager/TaskState::.ctor(System.Collections.IEnumerator)
extern "C"  void TaskState__ctor_m2449229489 (TaskState_t2173790700 * __this, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::add_Finished(TaskManager/TaskState/FinishedHandler)
extern "C"  void TaskState_add_Finished_m1446010966 (TaskState_t2173790700 * __this, FinishedHandler_t2586567257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::remove_Finished(TaskManager/TaskState/FinishedHandler)
extern "C"  void TaskState_remove_Finished_m4273366931 (TaskState_t2173790700 * __this, FinishedHandler_t2586567257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TaskManager/TaskState::get_Running()
extern "C"  bool TaskState_get_Running_m3548061710 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TaskManager/TaskState::get_Paused()
extern "C"  bool TaskState_get_Paused_m1389770721 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TaskManager/TaskState::get_Name()
extern "C"  String_t* TaskState_get_Name_m1990162671 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::set_Name(System.String)
extern "C"  void TaskState_set_Name_m2490637468 (TaskState_t2173790700 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::Pause()
extern "C"  void TaskState_Pause_m1487016378 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::Unpause()
extern "C"  void TaskState_Unpause_m3187150913 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::Start()
extern "C"  void TaskState_Start_m380028198 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState::Stop()
extern "C"  void TaskState_Stop_m2367976416 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TaskManager/TaskState::CallWrapper()
extern "C"  Il2CppObject * TaskState_CallWrapper_m640428129 (TaskState_t2173790700 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
