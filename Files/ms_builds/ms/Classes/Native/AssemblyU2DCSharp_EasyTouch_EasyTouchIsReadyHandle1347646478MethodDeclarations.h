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

// EasyTouch/EasyTouchIsReadyHandler
struct EasyTouchIsReadyHandler_t1347646478;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void EasyTouch/EasyTouchIsReadyHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void EasyTouchIsReadyHandler__ctor_m228436499 (EasyTouchIsReadyHandler_t1347646478 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/EasyTouchIsReadyHandler::Invoke()
extern "C"  void EasyTouchIsReadyHandler_Invoke_m234965037 (EasyTouchIsReadyHandler_t1347646478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EasyTouchIsReadyHandler_t1347646478(Il2CppObject* delegate);
// System.IAsyncResult EasyTouch/EasyTouchIsReadyHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EasyTouchIsReadyHandler_BeginInvoke_m2236309950 (EasyTouchIsReadyHandler_t1347646478 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyTouch/EasyTouchIsReadyHandler::EndInvoke(System.IAsyncResult)
extern "C"  void EasyTouchIsReadyHandler_EndInvoke_m1705450915 (EasyTouchIsReadyHandler_t1347646478 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
