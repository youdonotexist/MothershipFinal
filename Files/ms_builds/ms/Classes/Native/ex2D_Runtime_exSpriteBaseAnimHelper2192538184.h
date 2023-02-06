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

#include "ex2D_Runtime_exAnimationHelper3120018207.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteBaseAnimHelper
struct  exSpriteBaseAnimHelper_t2192538184  : public exAnimationHelper_t3120018207
{
public:
	// exSpriteBase exSpriteBaseAnimHelper::spriteBase
	exSpriteBase_t2791274569 * ___spriteBase_2;
	// UnityEngine.Vector2 exSpriteBaseAnimHelper::lastScale
	Vector2_t3525329788  ___lastScale_3;
	// UnityEngine.Vector2 exSpriteBaseAnimHelper::lastShear
	Vector2_t3525329788  ___lastShear_4;

public:
	inline static int32_t get_offset_of_spriteBase_2() { return static_cast<int32_t>(offsetof(exSpriteBaseAnimHelper_t2192538184, ___spriteBase_2)); }
	inline exSpriteBase_t2791274569 * get_spriteBase_2() const { return ___spriteBase_2; }
	inline exSpriteBase_t2791274569 ** get_address_of_spriteBase_2() { return &___spriteBase_2; }
	inline void set_spriteBase_2(exSpriteBase_t2791274569 * value)
	{
		___spriteBase_2 = value;
		Il2CppCodeGenWriteBarrier(&___spriteBase_2, value);
	}

	inline static int32_t get_offset_of_lastScale_3() { return static_cast<int32_t>(offsetof(exSpriteBaseAnimHelper_t2192538184, ___lastScale_3)); }
	inline Vector2_t3525329788  get_lastScale_3() const { return ___lastScale_3; }
	inline Vector2_t3525329788 * get_address_of_lastScale_3() { return &___lastScale_3; }
	inline void set_lastScale_3(Vector2_t3525329788  value)
	{
		___lastScale_3 = value;
	}

	inline static int32_t get_offset_of_lastShear_4() { return static_cast<int32_t>(offsetof(exSpriteBaseAnimHelper_t2192538184, ___lastShear_4)); }
	inline Vector2_t3525329788  get_lastShear_4() const { return ___lastShear_4; }
	inline Vector2_t3525329788 * get_address_of_lastShear_4() { return &___lastShear_4; }
	inline void set_lastShear_4(Vector2_t3525329788  value)
	{
		___lastShear_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
