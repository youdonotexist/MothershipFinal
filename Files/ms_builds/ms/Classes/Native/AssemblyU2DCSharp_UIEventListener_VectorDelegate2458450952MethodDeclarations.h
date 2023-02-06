﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UIEventListener/VectorDelegate
struct VectorDelegate_t2458450952;
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
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIEventListener/VectorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void VectorDelegate__ctor_m3847473060 (VectorDelegate_t2458450952 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::Invoke(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  void VectorDelegate_Invoke_m4222878826 (VectorDelegate_t2458450952 * __this, GameObject_t4012695102 * ___go, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VectorDelegate_t2458450952(Il2CppObject* delegate, GameObject_t4012695102 * ___go, Vector2_t3525329788  ___delta);
// System.IAsyncResult UIEventListener/VectorDelegate::BeginInvoke(UnityEngine.GameObject,UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * VectorDelegate_BeginInvoke_m1138345741 (VectorDelegate_t2458450952 * __this, GameObject_t4012695102 * ___go, Vector2_t3525329788  ___delta, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEventListener/VectorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void VectorDelegate_EndInvoke_m3521424308 (VectorDelegate_t2458450952 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
