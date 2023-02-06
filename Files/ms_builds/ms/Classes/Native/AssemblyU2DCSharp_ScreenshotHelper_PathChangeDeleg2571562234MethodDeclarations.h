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

// ScreenshotHelper/PathChangeDelegate
struct PathChangeDelegate_t2571562234;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void ScreenshotHelper/PathChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void PathChangeDelegate__ctor_m3852938604 (PathChangeDelegate_t2571562234 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper/PathChangeDelegate::Invoke(System.String)
extern "C"  void PathChangeDelegate_Invoke_m1528350716 (PathChangeDelegate_t2571562234 * __this, String_t* ___newPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PathChangeDelegate_t2571562234(Il2CppObject* delegate, String_t* ___newPath);
// System.IAsyncResult ScreenshotHelper/PathChangeDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PathChangeDelegate_BeginInvoke_m2795341577 (PathChangeDelegate_t2571562234 * __this, String_t* ___newPath, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper/PathChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void PathChangeDelegate_EndInvoke_m589444476 (PathChangeDelegate_t2571562234 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
