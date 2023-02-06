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

// DamagableHitCount
struct DamagableHitCount_t3741473612;

#include "codegen/il2cpp-codegen.h"

// System.Void DamagableHitCount::.ctor()
extern "C"  void DamagableHitCount__ctor_m471156639 (DamagableHitCount_t3741473612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableHitCount::Start()
extern "C"  void DamagableHitCount_Start_m3713261727 (DamagableHitCount_t3741473612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableHitCount::OnDamageHitCount(System.Int32,System.Int32)
extern "C"  void DamagableHitCount_OnDamageHitCount_m1723550519 (DamagableHitCount_t3741473612 * __this, int32_t ___hits, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DamagableHitCount::get_Health()
extern "C"  float DamagableHitCount_get_Health_m2245823134 (DamagableHitCount_t3741473612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableHitCount::set_Health(System.Single)
extern "C"  void DamagableHitCount_set_Health_m2233772301 (DamagableHitCount_t3741473612 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableHitCount::OnDamage(System.Single,System.Int32)
extern "C"  void DamagableHitCount_OnDamage_m3691409855 (DamagableHitCount_t3741473612 * __this, float ___amount, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableHitCount::SetMaxHealth(System.Single)
extern "C"  void DamagableHitCount_SetMaxHealth_m1581637032 (DamagableHitCount_t3741473612 * __this, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DamagableHitCount::IsHitCount()
extern "C"  bool DamagableHitCount_IsHitCount_m3319708823 (DamagableHitCount_t3741473612 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
