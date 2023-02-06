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

// Callback
struct Callback_t4187391078;
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

// System.Void Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m3569617548 (Callback_t4187391078 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Callback::Invoke()
extern "C"  void Callback_Invoke_m1713294822 (Callback_t4187391078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Callback_t4187391078(Il2CppObject* delegate);
// System.IAsyncResult Callback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m1255404637 (Callback_t4187391078 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m2088411804 (Callback_t4187391078 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
