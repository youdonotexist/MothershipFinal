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

// UIWrapContent/OnInitializeItem
struct OnInitializeItem_t2008047266;
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

// System.Void UIWrapContent/OnInitializeItem::.ctor(System.Object,System.IntPtr)
extern "C"  void OnInitializeItem__ctor_m953163837 (OnInitializeItem_t2008047266 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::Invoke(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void OnInitializeItem_Invoke_m2616578991 (OnInitializeItem_t2008047266 * __this, GameObject_t4012695102 * ___go, int32_t ___wrapIndex, int32_t ___realIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnInitializeItem_t2008047266(Il2CppObject* delegate, GameObject_t4012695102 * ___go, int32_t ___wrapIndex, int32_t ___realIndex);
// System.IAsyncResult UIWrapContent/OnInitializeItem::BeginInvoke(UnityEngine.GameObject,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnInitializeItem_BeginInvoke_m3195738938 (OnInitializeItem_t2008047266 * __this, GameObject_t4012695102 * ___go, int32_t ___wrapIndex, int32_t ___realIndex, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWrapContent/OnInitializeItem::EndInvoke(System.IAsyncResult)
extern "C"  void OnInitializeItem_EndInvoke_m2249144525 (OnInitializeItem_t2008047266 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
