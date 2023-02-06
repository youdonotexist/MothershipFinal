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
// System.Action
struct Action_t437523947;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_UnityThreading_TaskDistributor3607791827.h"

// UnityThreading.Task UnityThreading.ActionExtension::RunAsync(System.Action)
extern "C"  Task_t3071911286 * ActionExtension_RunAsync_m3306832482 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___that, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.ActionExtension::RunAsync(System.Action,UnityThreading.TaskDistributor)
extern "C"  Task_t3071911286 * ActionExtension_RunAsync_m819267885 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___that, TaskDistributor_t3607791827 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.ActionExtension::AsTask(System.Action)
extern "C"  Task_t3071911286 * ActionExtension_AsTask_m1600861500 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___that, const MethodInfo* method) IL2CPP_METHOD_ATTR;
