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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>
struct Transform_1_t3056000369;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_Emit_Label1734909569.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2142264102_gshared (Transform_1_t3056000369 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2142264102(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3056000369 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2142264102_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::Invoke(TKey,TValue)
extern "C"  Label_t1734909569  Transform_1_Invoke_m1313211922_gshared (Transform_1_t3056000369 * __this, int32_t ___key, Label_t1734909569  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1313211922(__this, ___key, ___value, method) ((  Label_t1734909569  (*) (Transform_1_t3056000369 *, int32_t, Label_t1734909569 , const MethodInfo*))Transform_1_Invoke_m1313211922_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m643021501_gshared (Transform_1_t3056000369 * __this, int32_t ___key, Label_t1734909569  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m643021501(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3056000369 *, int32_t, Label_t1734909569 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m643021501_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Reflection.Emit.Label>::EndInvoke(System.IAsyncResult)
extern "C"  Label_t1734909569  Transform_1_EndInvoke_m3909253944_gshared (Transform_1_t3056000369 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3909253944(__this, ___result, method) ((  Label_t1734909569  (*) (Transform_1_t3056000369 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3909253944_gshared)(__this, ___result, method)
