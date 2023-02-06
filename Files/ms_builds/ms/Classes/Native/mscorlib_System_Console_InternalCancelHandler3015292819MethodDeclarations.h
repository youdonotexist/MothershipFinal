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

// System.Console/InternalCancelHandler
struct InternalCancelHandler_t3015292819;
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

// System.Void System.Console/InternalCancelHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void InternalCancelHandler__ctor_m4177357452 (InternalCancelHandler_t3015292819 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::Invoke()
extern "C"  void InternalCancelHandler_Invoke_m793783782 (InternalCancelHandler_t3015292819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InternalCancelHandler_t3015292819(Il2CppObject* delegate);
// System.IAsyncResult System.Console/InternalCancelHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InternalCancelHandler_BeginInvoke_m3703798621 (InternalCancelHandler_t3015292819 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console/InternalCancelHandler::EndInvoke(System.IAsyncResult)
extern "C"  void InternalCancelHandler_EndInvoke_m1952711324 (InternalCancelHandler_t3015292819 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
