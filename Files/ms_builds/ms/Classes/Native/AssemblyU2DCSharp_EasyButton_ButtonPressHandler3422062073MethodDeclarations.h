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

// EasyButton/ButtonPressHandler
struct ButtonPressHandler_t3422062073;
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

// System.Void EasyButton/ButtonPressHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ButtonPressHandler__ctor_m1415739339 (ButtonPressHandler_t3422062073 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton/ButtonPressHandler::Invoke(System.String)
extern "C"  void ButtonPressHandler_Invoke_m3097038653 (ButtonPressHandler_t3422062073 * __this, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ButtonPressHandler_t3422062073(Il2CppObject* delegate, String_t* ___buttonName);
// System.IAsyncResult EasyButton/ButtonPressHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ButtonPressHandler_BeginInvoke_m2537811018 (ButtonPressHandler_t3422062073 * __this, String_t* ___buttonName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton/ButtonPressHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ButtonPressHandler_EndInvoke_m1520928603 (ButtonPressHandler_t3422062073 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
