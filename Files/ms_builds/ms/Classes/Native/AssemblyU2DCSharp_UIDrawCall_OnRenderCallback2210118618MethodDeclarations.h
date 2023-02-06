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

// UIDrawCall/OnRenderCallback
struct OnRenderCallback_t2210118618;
// System.Object
struct Il2CppObject;
// UnityEngine.Material
struct Material_t1886596500;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIDrawCall/OnRenderCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnRenderCallback__ctor_m689700010 (OnRenderCallback_t2210118618 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::Invoke(UnityEngine.Material)
extern "C"  void OnRenderCallback_Invoke_m2414121574 (OnRenderCallback_t2210118618 * __this, Material_t1886596500 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnRenderCallback_t2210118618(Il2CppObject* delegate, Material_t1886596500 * ___mat);
// System.IAsyncResult UIDrawCall/OnRenderCallback::BeginInvoke(UnityEngine.Material,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnRenderCallback_BeginInvoke_m3206922133 (OnRenderCallback_t2210118618 * __this, Material_t1886596500 * ___mat, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIDrawCall/OnRenderCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnRenderCallback_EndInvoke_m4050408378 (OnRenderCallback_t2210118618 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
