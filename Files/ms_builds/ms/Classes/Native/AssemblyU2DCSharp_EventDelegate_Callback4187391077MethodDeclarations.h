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

// EventDelegate/Callback
struct Callback_t4187391077;
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

// System.Void EventDelegate/Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m3018475132 (Callback_t4187391077 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::Invoke()
extern "C"  void Callback_Invoke_m3974108630 (Callback_t4187391077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Callback_t4187391077(Il2CppObject* delegate);
// System.IAsyncResult EventDelegate/Callback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m1093023085 (Callback_t4187391077 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate/Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m1551652492 (Callback_t4187391077 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
