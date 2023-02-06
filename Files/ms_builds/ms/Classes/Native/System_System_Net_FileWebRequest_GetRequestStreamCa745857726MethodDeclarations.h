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

// System.Net.FileWebRequest/GetRequestStreamCallback
struct GetRequestStreamCallback_t745857726;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t219029575;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.FileWebRequest/GetRequestStreamCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void GetRequestStreamCallback__ctor_m609089324 (GetRequestStreamCallback_t745857726 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::Invoke()
extern "C"  Stream_t219029575 * GetRequestStreamCallback_Invoke_m2602366844 (GetRequestStreamCallback_t745857726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Stream_t219029575 * pinvoke_delegate_wrapper_GetRequestStreamCallback_t745857726(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetRequestStreamCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * GetRequestStreamCallback_BeginInvoke_m1340948413 (GetRequestStreamCallback_t745857726 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::EndInvoke(System.IAsyncResult)
extern "C"  Stream_t219029575 * GetRequestStreamCallback_EndInvoke_m697554866 (GetRequestStreamCallback_t745857726 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
