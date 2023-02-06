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

// Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t2458683936;
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
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Ionic.Zip.SetCompressionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SetCompressionCallback__ctor_m2867170249 (SetCompressionCallback_t2458683936 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionLevel Ionic.Zip.SetCompressionCallback::Invoke(System.String,System.String)
extern "C"  int32_t SetCompressionCallback_Invoke_m581279389 (SetCompressionCallback_t2458683936 * __this, String_t* ___localFileName, String_t* ___fileNameInArchive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_SetCompressionCallback_t2458683936(Il2CppObject* delegate, String_t* ___localFileName, String_t* ___fileNameInArchive);
// System.IAsyncResult Ionic.Zip.SetCompressionCallback::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SetCompressionCallback_BeginInvoke_m2179923656 (SetCompressionCallback_t2458683936 * __this, String_t* ___localFileName, String_t* ___fileNameInArchive, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.CompressionLevel Ionic.Zip.SetCompressionCallback::EndInvoke(System.IAsyncResult)
extern "C"  int32_t SetCompressionCallback_EndInvoke_m508105463 (SetCompressionCallback_t2458683936 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
