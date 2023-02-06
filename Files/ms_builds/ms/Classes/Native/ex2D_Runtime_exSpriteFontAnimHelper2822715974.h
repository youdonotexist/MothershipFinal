#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSpriteFont
struct exSpriteFont_t2791407047;

#include "ex2D_Runtime_exSpriteBaseAnimHelper2192538184.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteFontAnimHelper
struct  exSpriteFontAnimHelper_t2822715974  : public exSpriteBaseAnimHelper_t2192538184
{
public:
	// exSpriteFont exSpriteFontAnimHelper::spriteFont
	exSpriteFont_t2791407047 * ___spriteFont_5;
	// UnityEngine.Color exSpriteFontAnimHelper::lastTopColor
	Color_t1588175760  ___lastTopColor_6;
	// UnityEngine.Color exSpriteFontAnimHelper::lastBotColor
	Color_t1588175760  ___lastBotColor_7;
	// System.Single exSpriteFontAnimHelper::lastOutlineWidth
	float ___lastOutlineWidth_8;
	// UnityEngine.Color exSpriteFontAnimHelper::lastOutlineColor
	Color_t1588175760  ___lastOutlineColor_9;
	// UnityEngine.Vector2 exSpriteFontAnimHelper::lastShadowBias
	Vector2_t3525329788  ___lastShadowBias_10;
	// UnityEngine.Color exSpriteFontAnimHelper::lastShadowColor
	Color_t1588175760  ___lastShadowColor_11;

public:
	inline static int32_t get_offset_of_spriteFont_5() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___spriteFont_5)); }
	inline exSpriteFont_t2791407047 * get_spriteFont_5() const { return ___spriteFont_5; }
	inline exSpriteFont_t2791407047 ** get_address_of_spriteFont_5() { return &___spriteFont_5; }
	inline void set_spriteFont_5(exSpriteFont_t2791407047 * value)
	{
		___spriteFont_5 = value;
		Il2CppCodeGenWriteBarrier(&___spriteFont_5, value);
	}

	inline static int32_t get_offset_of_lastTopColor_6() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___lastTopColor_6)); }
	inline Color_t1588175760  get_lastTopColor_6() const { return ___lastTopColor_6; }
	inline Color_t1588175760 * get_address_of_lastTopColor_6() { return &___lastTopColor_6; }
	inline void set_lastTopColor_6(Color_t1588175760  value)
	{
		___lastTopColor_6 = value;
	}

	inline static int32_t get_offset_of_lastBotColor_7() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___lastBotColor_7)); }
	inline Color_t1588175760  get_lastBotColor_7() const { return ___lastBotColor_7; }
	inline Color_t1588175760 * get_address_of_lastBotColor_7() { return &___lastBotColor_7; }
	inline void set_lastBotColor_7(Color_t1588175760  value)
	{
		___lastBotColor_7 = value;
	}

	inline static int32_t get_offset_of_lastOutlineWidth_8() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___lastOutlineWidth_8)); }
	inline float get_lastOutlineWidth_8() const { return ___lastOutlineWidth_8; }
	inline float* get_address_of_lastOutlineWidth_8() { return &___lastOutlineWidth_8; }
	inline void set_lastOutlineWidth_8(float value)
	{
		___lastOutlineWidth_8 = value;
	}

	inline static int32_t get_offset_of_lastOutlineColor_9() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___lastOutlineColor_9)); }
	inline Color_t1588175760  get_lastOutlineColor_9() const { return ___lastOutlineColor_9; }
	inline Color_t1588175760 * get_address_of_lastOutlineColor_9() { return &___lastOutlineColor_9; }
	inline void set_lastOutlineColor_9(Color_t1588175760  value)
	{
		___lastOutlineColor_9 = value;
	}

	inline static int32_t get_offset_of_lastShadowBias_10() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___lastShadowBias_10)); }
	inline Vector2_t3525329788  get_lastShadowBias_10() const { return ___lastShadowBias_10; }
	inline Vector2_t3525329788 * get_address_of_lastShadowBias_10() { return &___lastShadowBias_10; }
	inline void set_lastShadowBias_10(Vector2_t3525329788  value)
	{
		___lastShadowBias_10 = value;
	}

	inline static int32_t get_offset_of_lastShadowColor_11() { return static_cast<int32_t>(offsetof(exSpriteFontAnimHelper_t2822715974, ___lastShadowColor_11)); }
	inline Color_t1588175760  get_lastShadowColor_11() const { return ___lastShadowColor_11; }
	inline Color_t1588175760 * get_address_of_lastShadowColor_11() { return &___lastShadowColor_11; }
	inline void set_lastShadowColor_11(Color_t1588175760  value)
	{
		___lastShadowColor_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
