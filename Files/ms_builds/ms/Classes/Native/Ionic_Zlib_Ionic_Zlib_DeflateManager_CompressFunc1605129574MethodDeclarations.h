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

// Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t1605129574;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Ionic_Zlib_Ionic_Zlib_BlockState1531979153.h"
#include "Ionic_Zlib_Ionic_Zlib_FlushType3984958891.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void CompressFunc__ctor_m2133144026 (CompressFunc_t1605129574 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Ionic.Zlib.FlushType)
extern "C"  int32_t CompressFunc_Invoke_m819868421 (CompressFunc_t1605129574 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_CompressFunc_t1605129574(Il2CppObject* delegate, int32_t ___flush);
// System.IAsyncResult Ionic.Zlib.DeflateManager/CompressFunc::BeginInvoke(Ionic.Zlib.FlushType,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CompressFunc_BeginInvoke_m2462401750 (CompressFunc_t1605129574 * __this, int32_t ___flush, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Ionic.Zlib.BlockState Ionic.Zlib.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CompressFunc_EndInvoke_m2422529090 (CompressFunc_t1605129574 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
