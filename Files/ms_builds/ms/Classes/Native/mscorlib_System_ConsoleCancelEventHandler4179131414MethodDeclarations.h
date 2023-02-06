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

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t4179131414;
// System.Object
struct Il2CppObject;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t1397909147;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_ConsoleCancelEventArgs1397909147.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ConsoleCancelEventHandler__ctor_m1663124562 (ConsoleCancelEventHandler_t4179131414 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C"  void ConsoleCancelEventHandler_Invoke_m3426425839 (ConsoleCancelEventHandler_t4179131414 * __this, Il2CppObject * ___sender, ConsoleCancelEventArgs_t1397909147 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t4179131414(Il2CppObject* delegate, Il2CppObject * ___sender, ConsoleCancelEventArgs_t1397909147 * ___e);
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConsoleCancelEventHandler_BeginInvoke_m2504764258 (ConsoleCancelEventHandler_t4179131414 * __this, Il2CppObject * ___sender, ConsoleCancelEventArgs_t1397909147 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ConsoleCancelEventHandler_EndInvoke_m223850338 (ConsoleCancelEventHandler_t4179131414 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
