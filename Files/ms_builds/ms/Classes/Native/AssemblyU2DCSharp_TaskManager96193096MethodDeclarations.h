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

// TaskManager
struct TaskManager_t96193096;
// TaskManager/TaskState
struct TaskState_t2173790700;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"

// System.Void TaskManager::.ctor()
extern "C"  void TaskManager__ctor_m934986275 (TaskManager_t96193096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TaskManager/TaskState TaskManager::CreateTask(System.Collections.IEnumerator)
extern "C"  TaskState_t2173790700 * TaskManager_CreateTask_m4083302751 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___coroutine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
