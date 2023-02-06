#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSprite
struct exSprite_t1539598680;

#include "ex2D_Runtime_exSpriteBaseAnimHelper2192538184.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteAnimHelper
struct  exSpriteAnimHelper_t3502351511  : public exSpriteBaseAnimHelper_t2192538184
{
public:
	// exSprite exSpriteAnimHelper::sprite
	exSprite_t1539598680 * ___sprite_5;
	// UnityEngine.Color exSpriteAnimHelper::lastColor
	Color_t1588175760  ___lastColor_6;
	// System.Single exSpriteAnimHelper::lastWidth
	float ___lastWidth_7;
	// System.Single exSpriteAnimHelper::lastHeight
	float ___lastHeight_8;

public:
	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(exSpriteAnimHelper_t3502351511, ___sprite_5)); }
	inline exSprite_t1539598680 * get_sprite_5() const { return ___sprite_5; }
	inline exSprite_t1539598680 ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(exSprite_t1539598680 * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_5, value);
	}

	inline static int32_t get_offset_of_lastColor_6() { return static_cast<int32_t>(offsetof(exSpriteAnimHelper_t3502351511, ___lastColor_6)); }
	inline Color_t1588175760  get_lastColor_6() const { return ___lastColor_6; }
	inline Color_t1588175760 * get_address_of_lastColor_6() { return &___lastColor_6; }
	inline void set_lastColor_6(Color_t1588175760  value)
	{
		___lastColor_6 = value;
	}

	inline static int32_t get_offset_of_lastWidth_7() { return static_cast<int32_t>(offsetof(exSpriteAnimHelper_t3502351511, ___lastWidth_7)); }
	inline float get_lastWidth_7() const { return ___lastWidth_7; }
	inline float* get_address_of_lastWidth_7() { return &___lastWidth_7; }
	inline void set_lastWidth_7(float value)
	{
		___lastWidth_7 = value;
	}

	inline static int32_t get_offset_of_lastHeight_8() { return static_cast<int32_t>(offsetof(exSpriteAnimHelper_t3502351511, ___lastHeight_8)); }
	inline float get_lastHeight_8() const { return ___lastHeight_8; }
	inline float* get_address_of_lastHeight_8() { return &___lastHeight_8; }
	inline void set_lastHeight_8(float value)
	{
		___lastHeight_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
