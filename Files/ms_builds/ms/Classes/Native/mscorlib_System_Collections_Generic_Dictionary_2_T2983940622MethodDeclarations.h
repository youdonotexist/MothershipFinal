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

// System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,System.Collections.Generic.KeyValuePair`2<Vectrosity.Vector3Pair,System.Boolean>>
struct Transform_1_t2983940622;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21038493395.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Vector3Pa3261854258.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,System.Collections.Generic.KeyValuePair`2<Vectrosity.Vector3Pair,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4133442622_gshared (Transform_1_t2983940622 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m4133442622(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2983940622 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4133442622_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,System.Collections.Generic.KeyValuePair`2<Vectrosity.Vector3Pair,System.Boolean>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1038493395  Transform_1_Invoke_m2472430586_gshared (Transform_1_t2983940622 * __this, Vector3Pair_t3261854258  ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2472430586(__this, ___key, ___value, method) ((  KeyValuePair_2_t1038493395  (*) (Transform_1_t2983940622 *, Vector3Pair_t3261854258 , bool, const MethodInfo*))Transform_1_Invoke_m2472430586_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,System.Collections.Generic.KeyValuePair`2<Vectrosity.Vector3Pair,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1228280997_gshared (Transform_1_t2983940622 * __this, Vector3Pair_t3261854258  ___key, bool ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1228280997(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2983940622 *, Vector3Pair_t3261854258 , bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1228280997_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,System.Collections.Generic.KeyValuePair`2<Vectrosity.Vector3Pair,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1038493395  Transform_1_EndInvoke_m3749377104_gshared (Transform_1_t2983940622 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3749377104(__this, ___result, method) ((  KeyValuePair_2_t1038493395  (*) (Transform_1_t2983940622 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3749377104_gshared)(__this, ___result, method)
