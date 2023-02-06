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

// EasyButton/ButtonDownHandler
struct ButtonDownHandler_t1077042582;
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

// System.Void EasyButton/ButtonDownHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ButtonDownHandler__ctor_m2916803938 (ButtonDownHandler_t1077042582 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton/ButtonDownHandler::Invoke(System.String)
extern "C"  void ButtonDownHandler_Invoke_m2611697734 (ButtonDownHandler_t1077042582 * __this, String_t* ___buttonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ButtonDownHandler_t1077042582(Il2CppObject* delegate, String_t* ___buttonName);
// System.IAsyncResult EasyButton/ButtonDownHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ButtonDownHandler_BeginInvoke_m3982390475 (ButtonDownHandler_t1077042582 * __this, String_t* ___buttonName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyButton/ButtonDownHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ButtonDownHandler_EndInvoke_m1403803762 (ButtonDownHandler_t1077042582 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
