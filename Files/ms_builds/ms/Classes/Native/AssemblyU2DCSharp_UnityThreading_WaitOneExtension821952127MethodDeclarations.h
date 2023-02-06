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

// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_ManualResetEvent2399218676.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Boolean UnityThreading.WaitOneExtension::InterWaitOne(System.Threading.ManualResetEvent,System.Int32)
extern "C"  bool WaitOneExtension_InterWaitOne_m1649479326 (Il2CppObject * __this /* static, unused */, ManualResetEvent_t2399218676 * ___that, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityThreading.WaitOneExtension::InterWaitOne(System.Threading.ManualResetEvent,System.TimeSpan)
extern "C"  bool WaitOneExtension_InterWaitOne_m1933074735 (Il2CppObject * __this /* static, unused */, ManualResetEvent_t2399218676 * ___that, TimeSpan_t763862892  ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
