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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t2225720352;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1992748293.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21714251650.h"
#include "mscorlib_System_Reflection_Emit_Label1734909569.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m3672648587_gshared (Enumerator_t1992748294 * __this, Dictionary_2_t2225720352 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m3672648587(__this, ___dictionary, method) ((  void (*) (Enumerator_t1992748294 *, Dictionary_2_t2225720352 *, const MethodInfo*))Enumerator__ctor_m3672648587_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * Enumerator_System_Collections_IEnumerator_get_Current_m2775595830_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m2775595830(__this, method) ((  Il2CppObject * (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m2775595830_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m2099307594_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m2099307594(__this, method) ((  void (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m2099307594_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t130027246  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m195133843_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m195133843(__this, method) ((  DictionaryEntry_t130027246  (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m195133843_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3610752914_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3610752914(__this, method) ((  Il2CppObject * (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3610752914_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Il2CppObject * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m648411556_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m648411556(__this, method) ((  Il2CppObject * (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m648411556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1073952694_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1073952694(__this, method) ((  bool (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_MoveNext_m1073952694_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C"  KeyValuePair_2_t1714251650  Enumerator_get_Current_m751583546_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m751583546(__this, method) ((  KeyValuePair_2_t1714251650  (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_get_Current_m751583546_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentKey()
extern "C"  int32_t Enumerator_get_CurrentKey_m931825539_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m931825539(__this, method) ((  int32_t (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_get_CurrentKey_m931825539_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_CurrentValue()
extern "C"  Label_t1734909569  Enumerator_get_CurrentValue_m304074727_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m304074727(__this, method) ((  Label_t1734909569  (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_get_CurrentValue_m304074727_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Reset()
extern "C"  void Enumerator_Reset_m4132873565_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_Reset_m4132873565(__this, method) ((  void (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_Reset_m4132873565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyState()
extern "C"  void Enumerator_VerifyState_m733854630_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m733854630(__this, method) ((  void (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_VerifyState_m733854630_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m3604534670_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m3604534670(__this, method) ((  void (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_VerifyCurrent_m3604534670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C"  void Enumerator_Dispose_m1370176237_gshared (Enumerator_t1992748294 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1370176237(__this, method) ((  void (*) (Enumerator_t1992748294 *, const MethodInfo*))Enumerator_Dispose_m1370176237_gshared)(__this, method)
