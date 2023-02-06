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

// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t1372593658;
// System.Object
struct Il2CppObject;
// System.Diagnostics.DataReceivedEventArgs
struct DataReceivedEventArgs_t977397323;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Diagnostics_DataReceivedEventArgs977397323.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Diagnostics.DataReceivedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DataReceivedEventHandler__ctor_m1968661556 (DataReceivedEventHandler_t1372593658 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DataReceivedEventHandler::Invoke(System.Object,System.Diagnostics.DataReceivedEventArgs)
extern "C"  void DataReceivedEventHandler_Invoke_m301582485 (DataReceivedEventHandler_t1372593658 * __this, Il2CppObject * ___sender, DataReceivedEventArgs_t977397323 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DataReceivedEventHandler_t1372593658(Il2CppObject* delegate, Il2CppObject * ___sender, DataReceivedEventArgs_t977397323 * ___e);
// System.IAsyncResult System.Diagnostics.DataReceivedEventHandler::BeginInvoke(System.Object,System.Diagnostics.DataReceivedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DataReceivedEventHandler_BeginInvoke_m566512410 (DataReceivedEventHandler_t1372593658 * __this, Il2CppObject * ___sender, DataReceivedEventArgs_t977397323 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DataReceivedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DataReceivedEventHandler_EndInvoke_m2362249284 (DataReceivedEventHandler_t1372593658 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
