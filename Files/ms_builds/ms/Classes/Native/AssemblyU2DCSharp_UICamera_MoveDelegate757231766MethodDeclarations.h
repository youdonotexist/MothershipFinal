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

// UICamera/MoveDelegate
struct MoveDelegate_t757231766;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UICamera/MoveDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void MoveDelegate__ctor_m1406652899 (MoveDelegate_t757231766 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::Invoke(UnityEngine.Vector2)
extern "C"  void MoveDelegate_Invoke_m415996061 (MoveDelegate_t757231766 * __this, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MoveDelegate_t757231766(Il2CppObject* delegate, Vector2_t3525329788  ___delta);
// System.IAsyncResult UICamera/MoveDelegate::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MoveDelegate_BeginInvoke_m2872910330 (MoveDelegate_t757231766 * __this, Vector2_t3525329788  ___delta, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICamera/MoveDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void MoveDelegate_EndInvoke_m2219683187 (MoveDelegate_t757231766 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
