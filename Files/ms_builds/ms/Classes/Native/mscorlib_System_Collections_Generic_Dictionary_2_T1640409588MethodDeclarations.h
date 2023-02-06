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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>
struct Transform_1_t1640409588;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1422459121_gshared (Transform_1_t1640409588 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1422459121(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1640409588 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1422459121_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m1477973611_gshared (Transform_1_t1640409588 * __this, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1477973611(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t1640409588 *, Il2CppObject *, double, const MethodInfo*))Transform_1_Invoke_m1477973611_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3698400202_gshared (Transform_1_t1640409588 * __this, Il2CppObject * ___key, double ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3698400202(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1640409588 *, Il2CppObject *, double, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3698400202_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m2936596799_gshared (Transform_1_t1640409588 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2936596799(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t1640409588 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2936596799_gshared)(__this, ___result, method)
