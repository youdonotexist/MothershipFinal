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

// UnityThreading.EnumeratableActionThread
struct EnumeratableActionThread_t69580396;
// System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>
struct Func_2_t2849578859;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityThreading.EnumeratableActionThread::.ctor(System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>)
extern "C"  void EnumeratableActionThread__ctor_m1402354257 (EnumeratableActionThread_t69580396 * __this, Func_2_t2849578859 * ___enumeratableAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.EnumeratableActionThread::.ctor(System.Func`2<UnityThreading.ThreadBase,System.Collections.IEnumerator>,System.Boolean)
extern "C"  void EnumeratableActionThread__ctor_m3293973772 (EnumeratableActionThread_t69580396 * __this, Func_2_t2849578859 * ___enumeratableAction, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityThreading.EnumeratableActionThread::Do()
extern "C"  Il2CppObject * EnumeratableActionThread_Do_m3983232738 (EnumeratableActionThread_t69580396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
