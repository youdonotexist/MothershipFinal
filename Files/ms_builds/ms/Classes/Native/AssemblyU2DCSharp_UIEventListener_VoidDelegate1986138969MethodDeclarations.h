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

// UIEventListener/VoidDelegate
struct VoidDelegate_t1986138969;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIEventListener/VoidDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VoidDelegate__ctor_m2148343221 (VoidDelegate_t1986138969 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void VoidDelegate_Invoke_m906509447 (VoidDelegate_t1986138969 * __this, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VoidDelegate_t1986138969(Il2CppObject* delegate, GameObject_t4012695102 * ___go);
// System.IAsyncResult UIEventListener/VoidDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VoidDelegate_BeginInvoke_m1126265106 (VoidDelegate_t1986138969 * __this, GameObject_t4012695102 * ___go, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VoidDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VoidDelegate_EndInvoke_m3499471429 (VoidDelegate_t1986138969 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
