﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothLookAt
struct  SmoothLookAt_t822992544  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform SmoothLookAt::target
	Transform_t284553113 * ___target_2;
	// System.Single SmoothLookAt::damping
	float ___damping_3;
	// System.Boolean SmoothLookAt::smooth
	bool ___smooth_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SmoothLookAt_t822992544, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_damping_3() { return static_cast<int32_t>(offsetof(SmoothLookAt_t822992544, ___damping_3)); }
	inline float get_damping_3() const { return ___damping_3; }
	inline float* get_address_of_damping_3() { return &___damping_3; }
	inline void set_damping_3(float value)
	{
		___damping_3 = value;
	}

	inline static int32_t get_offset_of_smooth_4() { return static_cast<int32_t>(offsetof(SmoothLookAt_t822992544, ___smooth_4)); }
	inline bool get_smooth_4() const { return ___smooth_4; }
	inline bool* get_address_of_smooth_4() { return &___smooth_4; }
	inline void set_smooth_4(bool value)
	{
		___smooth_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
