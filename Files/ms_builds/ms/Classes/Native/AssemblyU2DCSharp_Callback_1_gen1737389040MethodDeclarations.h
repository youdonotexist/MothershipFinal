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

// Callback`1<PortState/MinionTypeLevelDetail>
struct Callback_1_t1737389040;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeLevelDetail70250981.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Callback`1<PortState/MinionTypeLevelDetail>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_1__ctor_m1108457045_gshared (Callback_1_t1737389040 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_1__ctor_m1108457045(__this, ___object, ___method, method) ((  void (*) (Callback_1_t1737389040 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_1__ctor_m1108457045_gshared)(__this, ___object, ___method, method)
// System.Void Callback`1<PortState/MinionTypeLevelDetail>::Invoke(T)
extern "C"  void Callback_1_Invoke_m2254520399_gshared (Callback_1_t1737389040 * __this, MinionTypeLevelDetail_t70250981  ___arg1, const MethodInfo* method);
#define Callback_1_Invoke_m2254520399(__this, ___arg1, method) ((  void (*) (Callback_1_t1737389040 *, MinionTypeLevelDetail_t70250981 , const MethodInfo*))Callback_1_Invoke_m2254520399_gshared)(__this, ___arg1, method)
// System.IAsyncResult Callback`1<PortState/MinionTypeLevelDetail>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_1_BeginInvoke_m1631233188_gshared (Callback_1_t1737389040 * __this, MinionTypeLevelDetail_t70250981  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_1_BeginInvoke_m1631233188(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_1_t1737389040 *, MinionTypeLevelDetail_t70250981 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_1_BeginInvoke_m1631233188_gshared)(__this, ___arg1, ___callback, ___object, method)
// System.Void Callback`1<PortState/MinionTypeLevelDetail>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_1_EndInvoke_m553622245_gshared (Callback_1_t1737389040 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_1_EndInvoke_m553622245(__this, ___result, method) ((  void (*) (Callback_1_t1737389040 *, Il2CppObject *, const MethodInfo*))Callback_1_EndInvoke_m553622245_gshared)(__this, ___result, method)
