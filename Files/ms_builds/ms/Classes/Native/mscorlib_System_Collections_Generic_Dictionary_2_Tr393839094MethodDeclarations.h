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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>
struct Transform_1_t393839094;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21706212521.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2441316242_gshared (Transform_1_t393839094 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2441316242(__this, ___object, ___method, method) ((  void (*) (Transform_1_t393839094 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2441316242_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1706212521  Transform_1_Invoke_m2143648038_gshared (Transform_1_t393839094 * __this, Il2CppObject * ___key, Vector3_t3525329789  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2143648038(__this, ___key, ___value, method) ((  KeyValuePair_2_t1706212521  (*) (Transform_1_t393839094 *, Il2CppObject *, Vector3_t3525329789 , const MethodInfo*))Transform_1_Invoke_m2143648038_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1833782225_gshared (Transform_1_t393839094 * __this, Il2CppObject * ___key, Vector3_t3525329789  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1833782225(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t393839094 *, Il2CppObject *, Vector3_t3525329789 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1833782225_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1706212521  Transform_1_EndInvoke_m2303595428_gshared (Transform_1_t393839094 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2303595428(__this, ___result, method) ((  KeyValuePair_2_t1706212521  (*) (Transform_1_t393839094 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2303595428_gshared)(__this, ___result, method)
