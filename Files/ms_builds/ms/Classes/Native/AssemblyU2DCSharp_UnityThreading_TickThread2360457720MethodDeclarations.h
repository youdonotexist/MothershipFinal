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

// UnityThreading.TickThread
struct TickThread_t2360457720;
// System.Action
struct Action_t437523947;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"

// System.Void UnityThreading.TickThread::.ctor(System.Action,System.Int32)
extern "C"  void TickThread__ctor_m3782990771 (TickThread_t2360457720 * __this, Action_t437523947 * ___action, int32_t ___tickLengthInMilliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityThreading.TickThread::.ctor(System.Action,System.Int32,System.Boolean)
extern "C"  void TickThread__ctor_m640760682 (TickThread_t2360457720 * __this, Action_t437523947 * ___action, int32_t ___tickLengthInMilliseconds, bool ___autoStartThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityThreading.TickThread::Do()
extern "C"  Il2CppObject * TickThread_Do_m4120110254 (TickThread_t2360457720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
