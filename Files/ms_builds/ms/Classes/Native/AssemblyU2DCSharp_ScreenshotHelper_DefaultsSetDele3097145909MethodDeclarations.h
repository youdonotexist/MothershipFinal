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

// ScreenshotHelper/DefaultsSetDelegate
struct DefaultsSetDelegate_t3097145909;
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

// System.Void ScreenshotHelper/DefaultsSetDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DefaultsSetDelegate__ctor_m2688741409 (DefaultsSetDelegate_t3097145909 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper/DefaultsSetDelegate::Invoke()
extern "C"  void DefaultsSetDelegate_Invoke_m3383952315 (DefaultsSetDelegate_t3097145909 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DefaultsSetDelegate_t3097145909(Il2CppObject* delegate);
// System.IAsyncResult ScreenshotHelper/DefaultsSetDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DefaultsSetDelegate_BeginInvoke_m714766056 (DefaultsSetDelegate_t3097145909 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper/DefaultsSetDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void DefaultsSetDelegate_EndInvoke_m957192881 (DefaultsSetDelegate_t3097145909 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
