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

// TaskManager/TaskState/FinishedHandler
struct FinishedHandler_t2586567257;
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

// System.Void TaskManager/TaskState/FinishedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void FinishedHandler__ctor_m1190255621 (FinishedHandler_t2586567257 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState/FinishedHandler::Invoke(System.Boolean)
extern "C"  void FinishedHandler_Invoke_m138786774 (FinishedHandler_t2586567257 * __this, bool ___manual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FinishedHandler_t2586567257(Il2CppObject* delegate, bool ___manual);
// System.IAsyncResult TaskManager/TaskState/FinishedHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FinishedHandler_BeginInvoke_m3286049403 (FinishedHandler_t2586567257 * __this, bool ___manual, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TaskManager/TaskState/FinishedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void FinishedHandler_EndInvoke_m2243303573 (FinishedHandler_t2586567257 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
