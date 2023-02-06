#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoTransparency
struct  AutoTransparency_t2933568199  : public MonoBehaviour_t3012272455
{
public:
	// System.Single AutoTransparency::_mTargetTransparancy
	float ____mTargetTransparancy_2;
	// System.Single AutoTransparency::BlendSpeed
	float ___BlendSpeed_3;

public:
	inline static int32_t get_offset_of__mTargetTransparancy_2() { return static_cast<int32_t>(offsetof(AutoTransparency_t2933568199, ____mTargetTransparancy_2)); }
	inline float get__mTargetTransparancy_2() const { return ____mTargetTransparancy_2; }
	inline float* get_address_of__mTargetTransparancy_2() { return &____mTargetTransparancy_2; }
	inline void set__mTargetTransparancy_2(float value)
	{
		____mTargetTransparancy_2 = value;
	}

	inline static int32_t get_offset_of_BlendSpeed_3() { return static_cast<int32_t>(offsetof(AutoTransparency_t2933568199, ___BlendSpeed_3)); }
	inline float get_BlendSpeed_3() const { return ___BlendSpeed_3; }
	inline float* get_address_of_BlendSpeed_3() { return &___BlendSpeed_3; }
	inline void set_BlendSpeed_3(float value)
	{
		___BlendSpeed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
