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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>
struct Transform_1_t1337819782;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1037466527_gshared (Transform_1_t1337819782 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1037466527(__this, ___object, ___method, method) ((  void (*) (Transform_1_t1337819782 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1037466527_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::Invoke(TKey,TValue)
extern "C"  double Transform_1_Invoke_m4079375741_gshared (Transform_1_t1337819782 * __this, Il2CppObject * ___key, double ___value, const MethodInfo* method);
#define Transform_1_Invoke_m4079375741(__this, ___key, ___value, method) ((  double (*) (Transform_1_t1337819782 *, Il2CppObject *, double, const MethodInfo*))Transform_1_Invoke_m4079375741_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m525820124_gshared (Transform_1_t1337819782 * __this, Il2CppObject * ___key, double ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m525820124(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t1337819782 *, Il2CppObject *, double, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m525820124_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C"  double Transform_1_EndInvoke_m2171267821_gshared (Transform_1_t1337819782 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2171267821(__this, ___result, method) ((  double (*) (Transform_1_t1337819782 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2171267821_gshared)(__this, ___result, method)
