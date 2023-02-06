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

// Ionic.Zip.OpenDelegate
struct OpenDelegate_t1492450310;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t219029575;
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

// System.Void Ionic.Zip.OpenDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OpenDelegate__ctor_m1388959727 (OpenDelegate_t1492450310 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.OpenDelegate::Invoke(System.String)
extern "C"  Stream_t219029575 * OpenDelegate_Invoke_m2723549381 (OpenDelegate_t1492450310 * __this, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Stream_t219029575 * pinvoke_delegate_wrapper_OpenDelegate_t1492450310(Il2CppObject* delegate, String_t* ___entryName);
// System.IAsyncResult Ionic.Zip.OpenDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OpenDelegate_BeginInvoke_m3162406686 (OpenDelegate_t1492450310 * __this, String_t* ___entryName, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Ionic.Zip.OpenDelegate::EndInvoke(System.IAsyncResult)
extern "C"  Stream_t219029575 * OpenDelegate_EndInvoke_m637517523 (OpenDelegate_t1492450310 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
