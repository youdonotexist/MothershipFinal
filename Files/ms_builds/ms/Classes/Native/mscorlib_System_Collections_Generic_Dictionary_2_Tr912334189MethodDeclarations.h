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

// System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,Vectrosity.Vector3Pair>
struct Transform_1_t912334189;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Vector3Pa3261854258.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,Vectrosity.Vector3Pair>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m169302902_gshared (Transform_1_t912334189 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m169302902(__this, ___object, ___method, method) ((  void (*) (Transform_1_t912334189 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m169302902_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,Vectrosity.Vector3Pair>::Invoke(TKey,TValue)
extern "C"  Vector3Pair_t3261854258  Transform_1_Invoke_m3886318914_gshared (Transform_1_t912334189 * __this, Vector3Pair_t3261854258  ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3886318914(__this, ___key, ___value, method) ((  Vector3Pair_t3261854258  (*) (Transform_1_t912334189 *, Vector3Pair_t3261854258 , bool, const MethodInfo*))Transform_1_Invoke_m3886318914_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,Vectrosity.Vector3Pair>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m553208173_gshared (Transform_1_t912334189 * __this, Vector3Pair_t3261854258  ___key, bool ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m553208173(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t912334189 *, Vector3Pair_t3261854258 , bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m553208173_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vectrosity.Vector3Pair,System.Boolean,Vectrosity.Vector3Pair>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3Pair_t3261854258  Transform_1_EndInvoke_m4215119368_gshared (Transform_1_t912334189 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m4215119368(__this, ___result, method) ((  Vector3Pair_t3261854258  (*) (Transform_1_t912334189 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4215119368_gshared)(__this, ___result, method)
