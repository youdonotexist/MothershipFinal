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

// UIEventListener/KeyCodeDelegate
struct KeyCodeDelegate_t3737044593;
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
#include "UnityEngine_UnityEngine_KeyCode2371581209.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIEventListener/KeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyCodeDelegate__ctor_m7954803 (KeyCodeDelegate_t3737044593 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::Invoke(UnityEngine.GameObject,UnityEngine.KeyCode)
extern "C"  void KeyCodeDelegate_Invoke_m2550997564 (KeyCodeDelegate_t3737044593 * __this, GameObject_t4012695102 * ___go, int32_t ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyCodeDelegate_t3737044593(Il2CppObject* delegate, GameObject_t4012695102 * ___go, int32_t ___key);
// System.IAsyncResult UIEventListener/KeyCodeDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.KeyCode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyCodeDelegate_BeginInvoke_m1563712113 (KeyCodeDelegate_t3737044593 * __this, GameObject_t4012695102 * ___go, int32_t ___key, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/KeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void KeyCodeDelegate_EndInvoke_m1724220675 (KeyCodeDelegate_t3737044593 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
