#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Explosion
struct  Explosion_t2337690357  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AnimationCurve Explosion::animationCurve
	AnimationCurve_t3342907448 * ___animationCurve_2;
	// System.Single Explosion::duration
	float ___duration_3;

public:
	inline static int32_t get_offset_of_animationCurve_2() { return static_cast<int32_t>(offsetof(Explosion_t2337690357, ___animationCurve_2)); }
	inline AnimationCurve_t3342907448 * get_animationCurve_2() const { return ___animationCurve_2; }
	inline AnimationCurve_t3342907448 ** get_address_of_animationCurve_2() { return &___animationCurve_2; }
	inline void set_animationCurve_2(AnimationCurve_t3342907448 * value)
	{
		___animationCurve_2 = value;
		Il2CppCodeGenWriteBarrier(&___animationCurve_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(Explosion_t2337690357, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
