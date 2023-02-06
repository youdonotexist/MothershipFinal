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

// AngledReflectShot
struct  AngledReflectShot_t2055918726  : public LaserProjectile_t3210566388
{
public:
	// System.Boolean AngledReflectShot::center
	bool ___center_6;
	// System.Boolean AngledReflectShot::left
	bool ___left_7;
	// System.Boolean AngledReflectShot::right
	bool ___right_8;
	// UnityEngine.Transform AngledReflectShot::_transform
	Transform_t284553113 * ____transform_9;

public:
	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(AngledReflectShot_t2055918726, ___center_6)); }
	inline bool get_center_6() const { return ___center_6; }
	inline bool* get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(bool value)
	{
		___center_6 = value;
	}

	inline static int32_t get_offset_of_left_7() { return static_cast<int32_t>(offsetof(AngledReflectShot_t2055918726, ___left_7)); }
	inline bool get_left_7() const { return ___left_7; }
	inline bool* get_address_of_left_7() { return &___left_7; }
	inline void set_left_7(bool value)
	{
		___left_7 = value;
	}

	inline static int32_t get_offset_of_right_8() { return static_cast<int32_t>(offsetof(AngledReflectShot_t2055918726, ___right_8)); }
	inline bool get_right_8() const { return ___right_8; }
	inline bool* get_address_of_right_8() { return &___right_8; }
	inline void set_right_8(bool value)
	{
		___right_8 = value;
	}

	inline static int32_t get_offset_of__transform_9() { return static_cast<int32_t>(offsetof(AngledReflectShot_t2055918726, ____transform_9)); }
	inline Transform_t284553113 * get__transform_9() const { return ____transform_9; }
	inline Transform_t284553113 ** get_address_of__transform_9() { return &____transform_9; }
	inline void set__transform_9(Transform_t284553113 * value)
	{
		____transform_9 = value;
		Il2CppCodeGenWriteBarrier(&____transform_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
