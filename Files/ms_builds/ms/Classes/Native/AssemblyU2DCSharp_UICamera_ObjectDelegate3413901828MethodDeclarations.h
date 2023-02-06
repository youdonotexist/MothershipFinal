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

// UICamera/ObjectDelegate
struct ObjectDelegate_t3413901829;
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

// System.Void UICamera/ObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjectDelegate__ctor_m2805815505 (ObjectDelegate_t3413901829 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/ObjectDelegate::Invoke(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  void ObjectDelegate_Invoke_m2351864443 (ObjectDelegate_t3413901829 * __this, GameObject_t4012695102 * ___go, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ObjectDelegate_t3413901829(Il2CppObject* delegate, GameObject_t4012695102 * ___go, GameObject_t4012695102 * ___obj);
// System.IAsyncResult UICamera/ObjectDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ObjectDelegate_BeginInvoke_m1770695168 (ObjectDelegate_t3413901829 * __this, GameObject_t4012695102 * ___go, GameObject_t4012695102 * ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/ObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ObjectDelegate_EndInvoke_m4118272865 (ObjectDelegate_t3413901829 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
