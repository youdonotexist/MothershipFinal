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
#include "ex2D_Runtime_exPlane_Anchor1965534933.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exScreenPosition
struct  exScreenPosition_t119453000  : public MonoBehaviour_t3012272455
{
public:
	// System.Single exScreenPosition::x_
	float ___x__2;
	// System.Single exScreenPosition::y_
	float ___y__3;
	// exPlane/Anchor exScreenPosition::anchor_
	int32_t ___anchor__4;
	// exPlane exScreenPosition::plane
	exPlane_t2956252521 * ___plane_5;

public:
	inline static int32_t get_offset_of_x__2() { return static_cast<int32_t>(offsetof(exScreenPosition_t119453000, ___x__2)); }
	inline float get_x__2() const { return ___x__2; }
	inline float* get_address_of_x__2() { return &___x__2; }
	inline void set_x__2(float value)
	{
		___x__2 = value;
	}

	inline static int32_t get_offset_of_y__3() { return static_cast<int32_t>(offsetof(exScreenPosition_t119453000, ___y__3)); }
	inline float get_y__3() const { return ___y__3; }
	inline float* get_address_of_y__3() { return &___y__3; }
	inline void set_y__3(float value)
	{
		___y__3 = value;
	}

	inline static int32_t get_offset_of_anchor__4() { return static_cast<int32_t>(offsetof(exScreenPosition_t119453000, ___anchor__4)); }
	inline int32_t get_anchor__4() const { return ___anchor__4; }
	inline int32_t* get_address_of_anchor__4() { return &___anchor__4; }
	inline void set_anchor__4(int32_t value)
	{
		___anchor__4 = value;
	}

	inline static int32_t get_offset_of_plane_5() { return static_cast<int32_t>(offsetof(exScreenPosition_t119453000, ___plane_5)); }
	inline exPlane_t2956252521 * get_plane_5() const { return ___plane_5; }
	inline exPlane_t2956252521 ** get_address_of_plane_5() { return &___plane_5; }
	inline void set_plane_5(exPlane_t2956252521 * value)
	{
		___plane_5 = value;
		Il2CppCodeGenWriteBarrier(&___plane_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
