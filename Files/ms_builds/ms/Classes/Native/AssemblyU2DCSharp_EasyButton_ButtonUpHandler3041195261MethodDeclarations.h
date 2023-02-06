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

// EasyButton/ButtonUpHandler
struct ButtonUpHandler_t3041195261;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void EasyButton/ButtonUpHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ButtonUpHandler__ctor_m2358965385 (ButtonUpHandler_t3041195261 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton/ButtonUpHandler::Invoke(System.String)
extern "C"  void ButtonUpHandler_Invoke_m1004451263 (ButtonUpHandler_t3041195261 * __this, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ButtonUpHandler_t3041195261(Il2CppObject* delegate, String_t* ___buttonName);
// System.IAsyncResult EasyButton/ButtonUpHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ButtonUpHandler_BeginInvoke_m821326916 (ButtonUpHandler_t3041195261 * __this, String_t* ___buttonName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton/ButtonUpHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ButtonUpHandler_EndInvoke_m1638404889 (ButtonUpHandler_t3041195261 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
