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

// System.Comparison`1<System.Byte>
struct Comparison_1_t1187401401;
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

// System.Void System.Comparison`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m3971838538_gshared (Comparison_1_t1187401401 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m3971838538(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t1187401401 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m3971838538_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Byte>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2965910326_gshared (Comparison_1_t1187401401 * __this, uint8_t ___x, uint8_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m2965910326(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t1187401401 *, uint8_t, uint8_t, const MethodInfo*))Comparison_1_Invoke_m2965910326_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Byte>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m754156719_gshared (Comparison_1_t1187401401 * __this, uint8_t ___x, uint8_t ___y, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m754156719(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t1187401401 *, uint8_t, uint8_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m754156719_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m1412912502_gshared (Comparison_1_t1187401401 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1412912502(__this, ___result, method) ((  int32_t (*) (Comparison_1_t1187401401 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m1412912502_gshared)(__this, ___result, method)
