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

// StoryManager/OnContinueDelegate
struct OnContinueDelegate_t3982509931;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void StoryManager/OnContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnContinueDelegate__ctor_m3914784409 (OnContinueDelegate_t3982509931 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager/OnContinueDelegate::Invoke()
extern "C"  void OnContinueDelegate_Invoke_m196614195 (OnContinueDelegate_t3982509931 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnContinueDelegate_t3982509931(Il2CppObject* delegate);
// System.IAsyncResult StoryManager/OnContinueDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnContinueDelegate_BeginInvoke_m3756656632 (OnContinueDelegate_t3982509931 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StoryManager/OnContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnContinueDelegate_EndInvoke_m2693498153 (OnContinueDelegate_t3982509931 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
