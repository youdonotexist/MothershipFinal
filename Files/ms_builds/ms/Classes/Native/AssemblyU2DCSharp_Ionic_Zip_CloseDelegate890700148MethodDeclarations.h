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

// Ionic.Zip.CloseDelegate
struct CloseDelegate_t890700148;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Ionic.Zip.CloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CloseDelegate__ctor_m3149701947 (CloseDelegate_t890700148 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CloseDelegate::Invoke(System.String,System.IO.Stream)
extern "C"  void CloseDelegate_Invoke_m1338712304 (CloseDelegate_t890700148 * __this, String_t* ___entryName, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CloseDelegate_t890700148(Il2CppObject* delegate, String_t* ___entryName, Stream_t219029575 * ___stream);
// System.IAsyncResult Ionic.Zip.CloseDelegate::BeginInvoke(System.String,System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CloseDelegate_BeginInvoke_m1716257869 (CloseDelegate_t890700148 * __this, String_t* ___entryName, Stream_t219029575 * ___stream, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.CloseDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CloseDelegate_EndInvoke_m1027664587 (CloseDelegate_t890700148 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
