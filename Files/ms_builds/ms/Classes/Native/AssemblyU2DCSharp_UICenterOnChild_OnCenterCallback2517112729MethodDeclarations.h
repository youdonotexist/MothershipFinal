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

// UICenterOnChild/OnCenterCallback
struct OnCenterCallback_t2517112729;
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

// System.Void UICenterOnChild/OnCenterCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCenterCallback__ctor_m2637723835 (OnCenterCallback_t2517112729 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::Invoke(UnityEngine.GameObject)
extern "C"  void OnCenterCallback_Invoke_m4202039949 (OnCenterCallback_t2517112729 * __this, GameObject_t4012695102 * ___centeredObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnCenterCallback_t2517112729(Il2CppObject* delegate, GameObject_t4012695102 * ___centeredObject);
// System.IAsyncResult UICenterOnChild/OnCenterCallback::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnCenterCallback_BeginInvoke_m2529681176 (OnCenterCallback_t2517112729 * __this, GameObject_t4012695102 * ___centeredObject, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnCenterCallback_EndInvoke_m2500034635 (OnCenterCallback_t2517112729 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
