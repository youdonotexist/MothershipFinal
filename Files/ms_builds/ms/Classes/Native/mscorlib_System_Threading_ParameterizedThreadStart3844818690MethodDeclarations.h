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

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t3844818690;
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

// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C"  void ParameterizedThreadStart__ctor_m3466234562 (ParameterizedThreadStart_t3844818690 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern "C"  void ParameterizedThreadStart_Invoke_m4073167224 (ParameterizedThreadStart_t3844818690 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ParameterizedThreadStart_t3844818690(Il2CppObject* delegate, Il2CppObject * ___obj);
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ParameterizedThreadStart_BeginInvoke_m3339435041 (ParameterizedThreadStart_t3844818690 * __this, Il2CppObject * ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern "C"  void ParameterizedThreadStart_EndInvoke_m4258639314 (ParameterizedThreadStart_t3844818690 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
