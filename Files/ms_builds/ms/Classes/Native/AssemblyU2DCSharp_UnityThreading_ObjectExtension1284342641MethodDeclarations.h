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
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UnityThreading_TaskDistributor3607791827.h"

// UnityThreading.Task UnityThreading.ObjectExtension::RunAsync(System.Object,System.String,System.Object[])
extern "C"  Task_t3071911286 * ObjectExtension_RunAsync_m3280013418 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___that, String_t* ___methodName, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityThreading.Task UnityThreading.ObjectExtension::RunAsync(System.Object,System.String,UnityThreading.TaskDistributor,System.Object[])
extern "C"  Task_t3071911286 * ObjectExtension_RunAsync_m1503329917 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___that, String_t* ___methodName, TaskDistributor_t3607791827 * ___target, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
