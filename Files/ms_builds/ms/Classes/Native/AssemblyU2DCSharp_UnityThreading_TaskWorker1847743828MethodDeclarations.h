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

// UnityThreading.TaskWorker
struct TaskWorker_t1847743828;
// System.String
struct String_t;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UnityThreading_TaskDistributor3607791827.h"

// System.Void UnityThreading.TaskWorker::.ctor(System.String,UnityThreading.TaskDistributor)
extern "C"  void TaskWorker__ctor_m2166084522 (TaskWorker_t1847743828 * __this, String_t* ___name, TaskDistributor_t3607791827 * ___taskDistributor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.TaskDistributor UnityThreading.TaskWorker::get_TaskDistributor()
extern "C"  TaskDistributor_t3607791827 * TaskWorker_get_TaskDistributor_m2217155898 (TaskWorker_t1847743828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskWorker::set_TaskDistributor(UnityThreading.TaskDistributor)
extern "C"  void TaskWorker_set_TaskDistributor_m2234775049 (TaskWorker_t1847743828 * __this, TaskDistributor_t3607791827 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityThreading.TaskWorker::Do()
extern "C"  Il2CppObject * TaskWorker_Do_m1805749002 (TaskWorker_t1847743828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TaskWorker::Dispose()
extern "C"  void TaskWorker_Dispose_m704326554 (TaskWorker_t1847743828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
