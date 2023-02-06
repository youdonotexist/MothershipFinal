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

// Callback`1<MissionManager/PostBattleMessage>
struct Callback_1_t3533432154;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_MissionManager_PostBattleMessage1866294095.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Callback`1<MissionManager/PostBattleMessage>::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback_1__ctor_m4146275550_gshared (Callback_1_t3533432154 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Callback_1__ctor_m4146275550(__this, ___object, ___method, method) ((  void (*) (Callback_1_t3533432154 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Callback_1__ctor_m4146275550_gshared)(__this, ___object, ___method, method)
// System.Void Callback`1<MissionManager/PostBattleMessage>::Invoke(T)
extern "C"  void Callback_1_Invoke_m1353462182_gshared (Callback_1_t3533432154 * __this, PostBattleMessage_t1866294095  ___arg1, const MethodInfo* method);
#define Callback_1_Invoke_m1353462182(__this, ___arg1, method) ((  void (*) (Callback_1_t3533432154 *, PostBattleMessage_t1866294095 , const MethodInfo*))Callback_1_Invoke_m1353462182_gshared)(__this, ___arg1, method)
// System.IAsyncResult Callback`1<MissionManager/PostBattleMessage>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_1_BeginInvoke_m482730611_gshared (Callback_1_t3533432154 * __this, PostBattleMessage_t1866294095  ___arg1, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Callback_1_BeginInvoke_m482730611(__this, ___arg1, ___callback, ___object, method) ((  Il2CppObject * (*) (Callback_1_t3533432154 *, PostBattleMessage_t1866294095 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Callback_1_BeginInvoke_m482730611_gshared)(__this, ___arg1, ___callback, ___object, method)
// System.Void Callback`1<MissionManager/PostBattleMessage>::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_1_EndInvoke_m622310894_gshared (Callback_1_t3533432154 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Callback_1_EndInvoke_m622310894(__this, ___result, method) ((  void (*) (Callback_1_t3533432154 *, Il2CppObject *, const MethodInfo*))Callback_1_EndInvoke_m622310894_gshared)(__this, ___result, method)
