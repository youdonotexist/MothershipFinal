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

// QueueTask/FinishedHandler
struct FinishedHandler_t2586567256;
// System.Object
struct Il2CppObject;
// QueueTask
struct QueueTask_t264499734;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_QueueTask264499734.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void QueueTask/FinishedHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void FinishedHandler__ctor_m481946806 (FinishedHandler_t2586567256 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask/FinishedHandler::Invoke(System.Boolean,QueueTask)
extern "C"  void FinishedHandler_Invoke_m3718862429 (FinishedHandler_t2586567256 * __this, bool ___manual, QueueTask_t264499734 * ___task, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FinishedHandler_t2586567256(Il2CppObject* delegate, bool ___manual, QueueTask_t264499734 * ___task);
// System.IAsyncResult QueueTask/FinishedHandler::BeginInvoke(System.Boolean,QueueTask,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FinishedHandler_BeginInvoke_m740337750 (FinishedHandler_t2586567256 * __this, bool ___manual, QueueTask_t264499734 * ___task, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QueueTask/FinishedHandler::EndInvoke(System.IAsyncResult)
extern "C"  void FinishedHandler_EndInvoke_m473704902 (FinishedHandler_t2586567256 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
