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

// Ionic.Zip.WriteDelegate
struct WriteDelegate_t2087363675;
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

// System.Void Ionic.Zip.WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate__ctor_m97984162 (WriteDelegate_t2087363675 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.WriteDelegate::Invoke(System.String,System.IO.Stream)
extern "C"  void WriteDelegate_Invoke_m3353055447 (WriteDelegate_t2087363675 * __this, String_t* ___entryName, Stream_t219029575 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t2087363675(Il2CppObject* delegate, String_t* ___entryName, Stream_t219029575 * ___stream);
// System.IAsyncResult Ionic.Zip.WriteDelegate::BeginInvoke(System.String,System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_BeginInvoke_m3850912052 (WriteDelegate_t2087363675 * __this, String_t* ___entryName, Stream_t219029575 * ___stream, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ionic.Zip.WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_EndInvoke_m2335650226 (WriteDelegate_t2087363675 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
