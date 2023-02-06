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

// UnityThreading.ActionThread
struct ActionThread_t464308177;
// System.Action`1<UnityThreading.ActionThread>
struct Action_1_t612760882;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityThreading.ActionThread::.ctor(System.Action`1<UnityThreading.ActionThread>)
extern "C"  void ActionThread__ctor_m4145119799 (ActionThread_t464308177 * __this, Action_1_t612760882 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.ActionThread::.ctor(System.Action`1<UnityThreading.ActionThread>,System.Boolean)
extern "C"  void ActionThread__ctor_m2031172710 (ActionThread_t464308177 * __this, Action_1_t612760882 * ___action, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityThreading.ActionThread::Do()
extern "C"  Il2CppObject * ActionThread_Do_m670396679 (ActionThread_t464308177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
