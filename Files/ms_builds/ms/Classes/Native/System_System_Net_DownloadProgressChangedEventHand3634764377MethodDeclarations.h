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

// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t3634764377;
// System.Object
struct Il2CppObject;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t1454724802;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Net_DownloadProgressChangedEventArgs1454724802.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.DownloadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DownloadProgressChangedEventHandler__ctor_m3662803621 (DownloadProgressChangedEventHandler_t3634764377 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::Invoke(System.Object,System.Net.DownloadProgressChangedEventArgs)
extern "C"  void DownloadProgressChangedEventHandler_Invoke_m1663937529 (DownloadProgressChangedEventHandler_t3634764377 * __this, Il2CppObject * ___sender, DownloadProgressChangedEventArgs_t1454724802 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DownloadProgressChangedEventHandler_t3634764377(Il2CppObject* delegate, Il2CppObject * ___sender, DownloadProgressChangedEventArgs_t1454724802 * ___e);
// System.IAsyncResult System.Net.DownloadProgressChangedEventHandler::BeginInvoke(System.Object,System.Net.DownloadProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DownloadProgressChangedEventHandler_BeginInvoke_m3903691410 (DownloadProgressChangedEventHandler_t3634764377 * __this, Il2CppObject * ___sender, DownloadProgressChangedEventArgs_t1454724802 * ___e, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DownloadProgressChangedEventHandler_EndInvoke_m753565493 (DownloadProgressChangedEventHandler_t3634764377 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
