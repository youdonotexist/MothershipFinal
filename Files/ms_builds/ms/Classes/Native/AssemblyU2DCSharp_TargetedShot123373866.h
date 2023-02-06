#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_LaserProjectile3210566388.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetedShot
struct  TargetedShot_t123373866  : public LaserProjectile_t3210566388
{
public:
	// UnityEngine.Transform TargetedShot::_target
	Transform_t284553113 * ____target_6;

public:
	inline static int32_t get_offset_of__target_6() { return static_cast<int32_t>(offsetof(TargetedShot_t123373866, ____target_6)); }
	inline Transform_t284553113 * get__target_6() const { return ____target_6; }
	inline Transform_t284553113 ** get_address_of__target_6() { return &____target_6; }
	inline void set__target_6(Transform_t284553113 * value)
	{
		____target_6 = value;
		Il2CppCodeGenWriteBarrier(&____target_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
