#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DamagableHitCount
struct DamagableHitCount_t3741473612;

#include "AssemblyU2DCSharp_MinionTypeBase2690101217.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DoubleHealthMinion
struct  DoubleHealthMinion_t791121027  : public MinionTypeBase_t2690101217
{
public:
	// DamagableHitCount DoubleHealthMinion::_damagable
	DamagableHitCount_t3741473612 * ____damagable_6;

public:
	inline static int32_t get_offset_of__damagable_6() { return static_cast<int32_t>(offsetof(DoubleHealthMinion_t791121027, ____damagable_6)); }
	inline DamagableHitCount_t3741473612 * get__damagable_6() const { return ____damagable_6; }
	inline DamagableHitCount_t3741473612 ** get_address_of__damagable_6() { return &____damagable_6; }
	inline void set__damagable_6(DamagableHitCount_t3741473612 * value)
	{
		____damagable_6 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
