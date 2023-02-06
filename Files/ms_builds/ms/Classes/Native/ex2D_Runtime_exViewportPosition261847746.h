#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exPlane
struct exPlane_t2956252521;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exViewportPosition
struct  exViewportPosition_t261847746  : public MonoBehaviour_t3012272455
{
public:
	// System.Single exViewportPosition::x_
	float ___x__2;
	// System.Single exViewportPosition::y_
	float ___y__3;
	// exPlane exViewportPosition::plane
	exPlane_t2956252521 * ___plane_4;

public:
	inline static int32_t get_offset_of_x__2() { return static_cast<int32_t>(offsetof(exViewportPosition_t261847746, ___x__2)); }
	inline float get_x__2() const { return ___x__2; }
	inline float* get_address_of_x__2() { return &___x__2; }
	inline void set_x__2(float value)
	{
		___x__2 = value;
	}

	inline static int32_t get_offset_of_y__3() { return static_cast<int32_t>(offsetof(exViewportPosition_t261847746, ___y__3)); }
	inline float get_y__3() const { return ___y__3; }
	inline float* get_address_of_y__3() { return &___y__3; }
	inline void set_y__3(float value)
	{
		___y__3 = value;
	}

	inline static int32_t get_offset_of_plane_4() { return static_cast<int32_t>(offsetof(exViewportPosition_t261847746, ___plane_4)); }
	inline exPlane_t2956252521 * get_plane_4() const { return ___plane_4; }
	inline exPlane_t2956252521 ** get_address_of_plane_4() { return &___plane_4; }
	inline void set_plane_4(exPlane_t2956252521 * value)
	{
		___plane_4 = value;
		Il2CppCodeGenWriteBarrier(&___plane_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
