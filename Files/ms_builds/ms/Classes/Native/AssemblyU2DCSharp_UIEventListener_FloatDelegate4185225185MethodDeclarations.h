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

// UIEventListener/FloatDelegate
struct FloatDelegate_t4185225185;
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

// System.Void UIEventListener/FloatDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FloatDelegate__ctor_m3763122083 (FloatDelegate_t4185225185 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::Invoke(UnityEngine.GameObject,System.Single)
extern "C"  void FloatDelegate_Invoke_m679169946 (FloatDelegate_t4185225185 * __this, GameObject_t4012695102 * ___go, float ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FloatDelegate_t4185225185(Il2CppObject* delegate, GameObject_t4012695102 * ___go, float ___delta);
// System.IAsyncResult UIEventListener/FloatDelegate::BeginInvoke(UnityEngine.GameObject,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FloatDelegate_BeginInvoke_m1300802035 (FloatDelegate_t4185225185 * __this, GameObject_t4012695102 * ___go, float ___delta, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/FloatDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FloatDelegate_EndInvoke_m1264020275 (FloatDelegate_t4185225185 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
