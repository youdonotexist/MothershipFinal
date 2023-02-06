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

// exCollisionHelper
struct  exCollisionHelper_t3326075981  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean exCollisionHelper::autoResizeCollision_
	bool ___autoResizeCollision__2;
	// System.Boolean exCollisionHelper::autoLength_
	bool ___autoLength__3;
	// System.Single exCollisionHelper::length_
	float ___length__4;
	// exPlane exCollisionHelper::plane
	exPlane_t2956252521 * ___plane_5;

public:
	inline static int32_t get_offset_of_autoResizeCollision__2() { return static_cast<int32_t>(offsetof(exCollisionHelper_t3326075981, ___autoResizeCollision__2)); }
	inline bool get_autoResizeCollision__2() const { return ___autoResizeCollision__2; }
	inline bool* get_address_of_autoResizeCollision__2() { return &___autoResizeCollision__2; }
	inline void set_autoResizeCollision__2(bool value)
	{
		___autoResizeCollision__2 = value;
	}

	inline static int32_t get_offset_of_autoLength__3() { return static_cast<int32_t>(offsetof(exCollisionHelper_t3326075981, ___autoLength__3)); }
	inline bool get_autoLength__3() const { return ___autoLength__3; }
	inline bool* get_address_of_autoLength__3() { return &___autoLength__3; }
	inline void set_autoLength__3(bool value)
	{
		___autoLength__3 = value;
	}

	inline static int32_t get_offset_of_length__4() { return static_cast<int32_t>(offsetof(exCollisionHelper_t3326075981, ___length__4)); }
	inline float get_length__4() const { return ___length__4; }
	inline float* get_address_of_length__4() { return &___length__4; }
	inline void set_length__4(float value)
	{
		___length__4 = value;
	}

	inline static int32_t get_offset_of_plane_5() { return static_cast<int32_t>(offsetof(exCollisionHelper_t3326075981, ___plane_5)); }
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
