#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MinionPhysicsVehicle
struct MinionPhysicsVehicle_t2819122459;

#include "AssemblyU2DCSharp_MinionTypeBase2690101217.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SplitMinion
struct  SplitMinion_t3493129232  : public MinionTypeBase_t2690101217
{
public:
	// MinionPhysicsVehicle SplitMinion::splitMinionPrefab
	MinionPhysicsVehicle_t2819122459 * ___splitMinionPrefab_6;
	// UnityEngine.LayerMask SplitMinion::seekLayers
	LayerMask_t1862190090  ___seekLayers_7;
	// System.Single SplitMinion::radius
	float ___radius_8;

public:
	inline static int32_t get_offset_of_splitMinionPrefab_6() { return static_cast<int32_t>(offsetof(SplitMinion_t3493129232, ___splitMinionPrefab_6)); }
	inline MinionPhysicsVehicle_t2819122459 * get_splitMinionPrefab_6() const { return ___splitMinionPrefab_6; }
	inline MinionPhysicsVehicle_t2819122459 ** get_address_of_splitMinionPrefab_6() { return &___splitMinionPrefab_6; }
	inline void set_splitMinionPrefab_6(MinionPhysicsVehicle_t2819122459 * value)
	{
		___splitMinionPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___splitMinionPrefab_6, value);
	}

	inline static int32_t get_offset_of_seekLayers_7() { return static_cast<int32_t>(offsetof(SplitMinion_t3493129232, ___seekLayers_7)); }
	inline LayerMask_t1862190090  get_seekLayers_7() const { return ___seekLayers_7; }
	inline LayerMask_t1862190090 * get_address_of_seekLayers_7() { return &___seekLayers_7; }
	inline void set_seekLayers_7(LayerMask_t1862190090  value)
	{
		___seekLayers_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(SplitMinion_t3493129232, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
