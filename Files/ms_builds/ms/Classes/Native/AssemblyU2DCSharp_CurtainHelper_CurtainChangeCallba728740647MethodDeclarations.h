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

// CurtainHelper/CurtainChangeCallback
struct CurtainChangeCallback_t728740647;
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

// System.Void CurtainHelper/CurtainChangeCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CurtainChangeCallback__ctor_m2405389551 (CurtainChangeCallback_t728740647 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurtainHelper/CurtainChangeCallback::Invoke()
extern "C"  void CurtainChangeCallback_Invoke_m3861171721 (CurtainChangeCallback_t728740647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CurtainChangeCallback_t728740647(Il2CppObject* delegate);
// System.IAsyncResult CurtainHelper/CurtainChangeCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CurtainChangeCallback_BeginInvoke_m2829822818 (CurtainChangeCallback_t728740647 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CurtainHelper/CurtainChangeCallback::EndInvoke(System.IAsyncResult)
extern "C"  void CurtainChangeCallback_EndInvoke_m3100153471 (CurtainChangeCallback_t728740647 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
