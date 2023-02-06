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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>
struct Transform_1_t3001161802;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24064025788.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2384065784_gshared (Transform_1_t3001161802 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2384065784(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3001161802 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2384065784_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4064025788  Transform_1_Invoke_m2886105984_gshared (Transform_1_t3001161802 * __this, Il2CppObject * ___key, Color_t1588175760  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2886105984(__this, ___key, ___value, method) ((  KeyValuePair_2_t4064025788  (*) (Transform_1_t3001161802 *, Il2CppObject *, Color_t1588175760 , const MethodInfo*))Transform_1_Invoke_m2886105984_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1078099755_gshared (Transform_1_t3001161802 * __this, Il2CppObject * ___key, Color_t1588175760  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1078099755(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3001161802 *, Il2CppObject *, Color_t1588175760 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1078099755_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4064025788  Transform_1_EndInvoke_m4062967050_gshared (Transform_1_t3001161802 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m4062967050(__this, ___result, method) ((  KeyValuePair_2_t4064025788  (*) (Transform_1_t3001161802 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4062967050_gshared)(__this, ___result, method)
