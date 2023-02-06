#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// ColliderOutline2D
struct ColliderOutline2D_t1787330656;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoreStatus
struct  CoreStatus_t3996308625  : public MonoBehaviour_t3012272455
{
public:
	// exSpriteAnimation CoreStatus::_animation
	exSpriteAnimation_t1937626380 * ____animation_2;
	// ColliderOutline2D CoreStatus::_outline
	ColliderOutline2D_t1787330656 * ____outline_3;
	// UnityEngine.Vector3 CoreStatus::initialPosition
	Vector3_t3525329789  ___initialPosition_4;

public:
	inline static int32_t get_offset_of__animation_2() { return static_cast<int32_t>(offsetof(CoreStatus_t3996308625, ____animation_2)); }
	inline exSpriteAnimation_t1937626380 * get__animation_2() const { return ____animation_2; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_2() { return &____animation_2; }
	inline void set__animation_2(exSpriteAnimation_t1937626380 * value)
	{
		____animation_2 = value;
		Il2CppCodeGenWriteBarrier(&____animation_2, value);
	}

	inline static int32_t get_offset_of__outline_3() { return static_cast<int32_t>(offsetof(CoreStatus_t3996308625, ____outline_3)); }
	inline ColliderOutline2D_t1787330656 * get__outline_3() const { return ____outline_3; }
	inline ColliderOutline2D_t1787330656 ** get_address_of__outline_3() { return &____outline_3; }
	inline void set__outline_3(ColliderOutline2D_t1787330656 * value)
	{
		____outline_3 = value;
		Il2CppCodeGenWriteBarrier(&____outline_3, value);
	}

	inline static int32_t get_offset_of_initialPosition_4() { return static_cast<int32_t>(offsetof(CoreStatus_t3996308625, ___initialPosition_4)); }
	inline Vector3_t3525329789  get_initialPosition_4() const { return ___initialPosition_4; }
	inline Vector3_t3525329789 * get_address_of_initialPosition_4() { return &___initialPosition_4; }
	inline void set_initialPosition_4(Vector3_t3525329789  value)
	{
		___initialPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
