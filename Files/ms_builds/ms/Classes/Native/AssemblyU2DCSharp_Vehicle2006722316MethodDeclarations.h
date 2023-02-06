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

// Vehicle
struct Vehicle_t2006722316;
// Damagable
struct Damagable_t4024817136;

#include "codegen/il2cpp-codegen.h"

// System.Void Vehicle::.ctor()
extern "C"  void Vehicle__ctor_m2914661855 (Vehicle_t2006722316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vehicle::RespondToDamage(System.Int32)
extern "C"  void Vehicle_RespondToDamage_m898000141 (Vehicle_t2006722316 * __this, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vehicle::SetDisabled()
extern "C"  void Vehicle_SetDisabled_m2974990203 (Vehicle_t2006722316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Damagable Vehicle::GetDamagable()
extern "C"  Damagable_t4024817136 * Vehicle_GetDamagable_m857503388 (Vehicle_t2006722316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
