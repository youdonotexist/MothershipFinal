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

// Damagable
struct Damagable_t4024817136;

#include "codegen/il2cpp-codegen.h"

// System.Void Damagable::.ctor()
extern "C"  void Damagable__ctor_m3201232251 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damagable::Awake()
extern "C"  void Damagable_Awake_m3438837470 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damagable::OnDamage(System.Single,System.Int32)
extern "C"  void Damagable_OnDamage_m1592682851 (Damagable_t4024817136 * __this, float ___amount, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damagable::OnHeal(System.Single)
extern "C"  void Damagable_OnHeal_m3192686235 (Damagable_t4024817136 * __this, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damagable::SetMaxHealth(System.Single)
extern "C"  void Damagable_SetMaxHealth_m3559783812 (Damagable_t4024817136 * __this, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damagable::set_Health(System.Single)
extern "C"  void Damagable_set_Health_m3674935273 (Damagable_t4024817136 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Damagable::get_Health()
extern "C"  float Damagable_get_Health_m1044062786 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Damagable::set_MaxHealth(System.Single)
extern "C"  void Damagable_set_MaxHealth_m1164373007 (Damagable_t4024817136 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Damagable::get_MaxHealth()
extern "C"  float Damagable_get_MaxHealth_m2411167196 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Damagable::get_HealthPercentage()
extern "C"  float Damagable_get_HealthPercentage_m1844661564 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Damagable::IsHitCount()
extern "C"  bool Damagable_IsHitCount_m2607541307 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Damagable Damagable::GetParentDamagable()
extern "C"  Damagable_t4024817136 * Damagable_GetParentDamagable_m4248972790 (Damagable_t4024817136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
