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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>
struct Transform_1_t3819700289;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m843809800_gshared (Transform_1_t3819700289 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m843809800(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3819700289 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m843809800_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2292276916_gshared (Transform_1_t3819700289 * __this, Il2CppObject * ___key, Vector3_t3525329789  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2292276916(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t3819700289 *, Il2CppObject *, Vector3_t3525329789 , const MethodInfo*))Transform_1_Invoke_m2292276916_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m246956947_gshared (Transform_1_t3819700289 * __this, Il2CppObject * ___key, Vector3_t3525329789  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m246956947(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3819700289 *, Il2CppObject *, Vector3_t3525329789 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m246956947_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m655018326_gshared (Transform_1_t3819700289 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m655018326(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t3819700289 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m655018326_gshared)(__this, ___result, method)
