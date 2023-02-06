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

// UICamera/BoolDelegate
struct BoolDelegate_t945637040;
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

// System.Void UICamera/BoolDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BoolDelegate__ctor_m4411260 (BoolDelegate_t945637040 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/BoolDelegate::Invoke(UnityEngine.GameObject,System.Boolean)
extern "C"  void BoolDelegate_Invoke_m2246923247 (BoolDelegate_t945637040 * __this, GameObject_t4012695102 * ___go, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoolDelegate_t945637040(Il2CppObject* delegate, GameObject_t4012695102 * ___go, bool ___state);
// System.IAsyncResult UICamera/BoolDelegate::BeginInvoke(UnityEngine.GameObject,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BoolDelegate_BeginInvoke_m1530415638 (BoolDelegate_t945637040 * __this, GameObject_t4012695102 * ___go, bool ___state, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/BoolDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BoolDelegate_EndInvoke_m3368148876 (BoolDelegate_t945637040 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
