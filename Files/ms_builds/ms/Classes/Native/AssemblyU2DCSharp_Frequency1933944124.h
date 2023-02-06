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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Frequency
struct  Frequency_t1933944124  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve Frequency::variation
	AnimationCurve_t3342907448 * ___variation_7;

public:
	inline static int32_t get_offset_of_variation_7() { return static_cast<int32_t>(offsetof(Frequency_t1933944124, ___variation_7)); }
	inline AnimationCurve_t3342907448 * get_variation_7() const { return ___variation_7; }
	inline AnimationCurve_t3342907448 ** get_address_of_variation_7() { return &___variation_7; }
	inline void set_variation_7(AnimationCurve_t3342907448 * value)
	{
		___variation_7 = value;
		Il2CppCodeGenWriteBarrier(&___variation_7, value);
	}
};

struct Frequency_t1933944124_StaticFields
{
public:
	// System.Single Frequency::MinHertz
	float ___MinHertz_5;
	// System.Single Frequency::MaxHertz
	float ___MaxHertz_6;

public:
	inline static int32_t get_offset_of_MinHertz_5() { return static_cast<int32_t>(offsetof(Frequency_t1933944124_StaticFields, ___MinHertz_5)); }
	inline float get_MinHertz_5() const { return ___MinHertz_5; }
	inline float* get_address_of_MinHertz_5() { return &___MinHertz_5; }
	inline void set_MinHertz_5(float value)
	{
		___MinHertz_5 = value;
	}

	inline static int32_t get_offset_of_MaxHertz_6() { return static_cast<int32_t>(offsetof(Frequency_t1933944124_StaticFields, ___MaxHertz_6)); }
	inline float get_MaxHertz_6() const { return ___MaxHertz_6; }
	inline float* get_address_of_MaxHertz_6() { return &___MaxHertz_6; }
	inline void set_MaxHertz_6(float value)
	{
		___MaxHertz_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
