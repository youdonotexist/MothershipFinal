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

// UIWidget/HitCheck
struct HitCheck_t3012954453;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UIWidget/HitCheck::.ctor(System.Object,System.IntPtr)
extern "C"  void HitCheck__ctor_m17538403 (HitCheck_t3012954453 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::Invoke(UnityEngine.Vector3)
extern "C"  bool HitCheck_Invoke_m3382841584 (HitCheck_t3012954453 * __this, Vector3_t3525329789  ___worldPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_HitCheck_t3012954453(Il2CppObject* delegate, Vector3_t3525329789  ___worldPos);
// System.IAsyncResult UIWidget/HitCheck::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HitCheck_BeginInvoke_m1200520187 (HitCheck_t3012954453 * __this, Vector3_t3525329789  ___worldPos, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget/HitCheck::EndInvoke(System.IAsyncResult)
extern "C"  bool HitCheck_EndInvoke_m1381750975 (HitCheck_t3012954453 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
