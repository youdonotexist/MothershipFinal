#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSpriteBase
struct exSpriteBase_t2791274569;
// exPixelPerfectCamera
struct exPixelPerfectCamera_t400865983;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exPixelPerfect
struct  exPixelPerfect_t1919594234  : public MonoBehaviour_t3012272455
{
public:
	// exSpriteBase exPixelPerfect::sprite
	exSpriteBase_t2791274569 * ___sprite_2;
	// UnityEngine.Vector3 exPixelPerfect::cameraToSprite
	Vector3_t3525329789  ___cameraToSprite_3;
	// exPixelPerfectCamera exPixelPerfect::ppfCamera
	exPixelPerfectCamera_t400865983 * ___ppfCamera_4;

public:
	inline static int32_t get_offset_of_sprite_2() { return static_cast<int32_t>(offsetof(exPixelPerfect_t1919594234, ___sprite_2)); }
	inline exSpriteBase_t2791274569 * get_sprite_2() const { return ___sprite_2; }
	inline exSpriteBase_t2791274569 ** get_address_of_sprite_2() { return &___sprite_2; }
	inline void set_sprite_2(exSpriteBase_t2791274569 * value)
	{
		___sprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_2, value);
	}

	inline static int32_t get_offset_of_cameraToSprite_3() { return static_cast<int32_t>(offsetof(exPixelPerfect_t1919594234, ___cameraToSprite_3)); }
	inline Vector3_t3525329789  get_cameraToSprite_3() const { return ___cameraToSprite_3; }
	inline Vector3_t3525329789 * get_address_of_cameraToSprite_3() { return &___cameraToSprite_3; }
	inline void set_cameraToSprite_3(Vector3_t3525329789  value)
	{
		___cameraToSprite_3 = value;
	}

	inline static int32_t get_offset_of_ppfCamera_4() { return static_cast<int32_t>(offsetof(exPixelPerfect_t1919594234, ___ppfCamera_4)); }
	inline exPixelPerfectCamera_t400865983 * get_ppfCamera_4() const { return ___ppfCamera_4; }
	inline exPixelPerfectCamera_t400865983 ** get_address_of_ppfCamera_4() { return &___ppfCamera_4; }
	inline void set_ppfCamera_4(exPixelPerfectCamera_t400865983 * value)
	{
		___ppfCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___ppfCamera_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
