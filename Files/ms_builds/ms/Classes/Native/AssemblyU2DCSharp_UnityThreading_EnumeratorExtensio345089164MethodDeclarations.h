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
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UnityThreading_TaskDistributor3607791827.h"

// UnityThreading.Task UnityThreading.EnumeratorExtension::RunAsync(System.Collections.IEnumerator)
extern "C"  Task_t3071911286 * EnumeratorExtension_RunAsync_m3691128 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___that, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.EnumeratorExtension::RunAsync(System.Collections.IEnumerator,UnityThreading.TaskDistributor)
extern "C"  Task_t3071911286 * EnumeratorExtension_RunAsync_m3390731863 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___that, TaskDistributor_t3607791827 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
