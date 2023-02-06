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

// CircleRadius
struct  CircleRadius_t2008976802  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CircleRadius::elapsed
	float ___elapsed_2;
	// System.Single CircleRadius::radius
	float ___radius_3;
	// System.Single CircleRadius::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(CircleRadius_t2008976802, ___elapsed_2)); }
	inline float get_elapsed_2() const { return ___elapsed_2; }
	inline float* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(float value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(CircleRadius_t2008976802, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(CircleRadius_t2008976802, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
