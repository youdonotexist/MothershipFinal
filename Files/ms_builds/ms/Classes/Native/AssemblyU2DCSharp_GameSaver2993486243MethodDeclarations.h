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

// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "codegen/il2cpp-codegen.h"

// System.Void GameSaver::InitSaveState()
extern "C"  void GameSaver_InitSaveState_m3245576234 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList GameSaver::GetSaveState()
extern "C"  ArrayList_t2121638921 * GameSaver_GetSaveState_m1794062716 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable GameSaver::GetSaveStateByIndex(System.Int32)
extern "C"  Hashtable_t3875263730 * GameSaver_GetSaveStateByIndex_m2679830921 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSaver::SetSaveState(System.Int32,System.Boolean)
extern "C"  void GameSaver_SetSaveState_m2131363038 (Il2CppObject * __this /* static, unused */, int32_t ___encounterIndex, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
