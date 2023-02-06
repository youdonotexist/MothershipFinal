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

// DamagableBubbler
struct DamagableBubbler_t2189431126;
// Damagable
struct Damagable_t4024817136;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Damagable4024817136.h"

// System.Void DamagableBubbler::.ctor()
extern "C"  void DamagableBubbler__ctor_m654587397 (DamagableBubbler_t2189431126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableBubbler::OnDamage(System.Single,System.Int32)
extern "C"  void DamagableBubbler_OnDamage_m1815258393 (DamagableBubbler_t2189431126 * __this, float ___amount, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamagableBubbler::setTarget(Damagable)
extern "C"  void DamagableBubbler_setTarget_m2996224236 (DamagableBubbler_t2189431126 * __this, Damagable_t4024817136 * ___dam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Damagable DamagableBubbler::GetParentDamagable()
extern "C"  Damagable_t4024817136 * DamagableBubbler_GetParentDamagable_m428620946 (DamagableBubbler_t2189431126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
