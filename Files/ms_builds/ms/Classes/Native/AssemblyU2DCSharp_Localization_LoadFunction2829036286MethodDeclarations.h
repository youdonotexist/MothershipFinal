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

// Localization/LoadFunction
struct LoadFunction_t2829036286;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
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
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Localization/LoadFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadFunction__ctor_m3587491947 (LoadFunction_t2829036286 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::Invoke(System.String)
extern "C"  ByteU5BU5D_t58506160* LoadFunction_Invoke_m2234063239 (LoadFunction_t2829036286 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ByteU5BU5D_t58506160* pinvoke_delegate_wrapper_LoadFunction_t2829036286(Il2CppObject* delegate, String_t* ___path);
// System.IAsyncResult Localization/LoadFunction::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadFunction_BeginInvoke_m3903429034 (LoadFunction_t2829036286 * __this, String_t* ___path, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Localization/LoadFunction::EndInvoke(System.IAsyncResult)
extern "C"  ByteU5BU5D_t58506160* LoadFunction_EndInvoke_m733835345 (LoadFunction_t2829036286 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
