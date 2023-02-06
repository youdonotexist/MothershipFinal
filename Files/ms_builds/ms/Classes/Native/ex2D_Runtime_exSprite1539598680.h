#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// exAtlas
struct exAtlas_t2942648216;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;

#include "ex2D_Runtime_exSpriteBase2791274569.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSprite
struct  exSprite_t1539598680  : public exSpriteBase_t2791274569
{
public:
	// System.String exSprite::textureGUID
	String_t* ___textureGUID_15;
	// System.Boolean exSprite::trimTexture
	bool ___trimTexture_16;
	// UnityEngine.Rect exSprite::trimUV
	Rect_t1525428817  ___trimUV_17;
	// System.Boolean exSprite::useTextureOffset_
	bool ___useTextureOffset__18;
	// UnityEngine.Color exSprite::color_
	Color_t1588175760  ___color__19;
	// System.Boolean exSprite::customSize_
	bool ___customSize__20;
	// System.Single exSprite::width_
	float ___width__21;
	// System.Single exSprite::height_
	float ___height__22;
	// exAtlas exSprite::atlas_
	exAtlas_t2942648216 * ___atlas__23;
	// System.Int32 exSprite::index_
	int32_t ___index__24;
	// exSpriteAnimation exSprite::spanim
	exSpriteAnimation_t1937626380 * ___spanim_25;

public:
	inline static int32_t get_offset_of_textureGUID_15() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___textureGUID_15)); }
	inline String_t* get_textureGUID_15() const { return ___textureGUID_15; }
	inline String_t** get_address_of_textureGUID_15() { return &___textureGUID_15; }
	inline void set_textureGUID_15(String_t* value)
	{
		___textureGUID_15 = value;
		Il2CppCodeGenWriteBarrier(&___textureGUID_15, value);
	}

	inline static int32_t get_offset_of_trimTexture_16() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___trimTexture_16)); }
	inline bool get_trimTexture_16() const { return ___trimTexture_16; }
	inline bool* get_address_of_trimTexture_16() { return &___trimTexture_16; }
	inline void set_trimTexture_16(bool value)
	{
		___trimTexture_16 = value;
	}

	inline static int32_t get_offset_of_trimUV_17() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___trimUV_17)); }
	inline Rect_t1525428817  get_trimUV_17() const { return ___trimUV_17; }
	inline Rect_t1525428817 * get_address_of_trimUV_17() { return &___trimUV_17; }
	inline void set_trimUV_17(Rect_t1525428817  value)
	{
		___trimUV_17 = value;
	}

	inline static int32_t get_offset_of_useTextureOffset__18() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___useTextureOffset__18)); }
	inline bool get_useTextureOffset__18() const { return ___useTextureOffset__18; }
	inline bool* get_address_of_useTextureOffset__18() { return &___useTextureOffset__18; }
	inline void set_useTextureOffset__18(bool value)
	{
		___useTextureOffset__18 = value;
	}

	inline static int32_t get_offset_of_color__19() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___color__19)); }
	inline Color_t1588175760  get_color__19() const { return ___color__19; }
	inline Color_t1588175760 * get_address_of_color__19() { return &___color__19; }
	inline void set_color__19(Color_t1588175760  value)
	{
		___color__19 = value;
	}

	inline static int32_t get_offset_of_customSize__20() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___customSize__20)); }
	inline bool get_customSize__20() const { return ___customSize__20; }
	inline bool* get_address_of_customSize__20() { return &___customSize__20; }
	inline void set_customSize__20(bool value)
	{
		___customSize__20 = value;
	}

	inline static int32_t get_offset_of_width__21() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___width__21)); }
	inline float get_width__21() const { return ___width__21; }
	inline float* get_address_of_width__21() { return &___width__21; }
	inline void set_width__21(float value)
	{
		___width__21 = value;
	}

	inline static int32_t get_offset_of_height__22() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___height__22)); }
	inline float get_height__22() const { return ___height__22; }
	inline float* get_address_of_height__22() { return &___height__22; }
	inline void set_height__22(float value)
	{
		___height__22 = value;
	}

	inline static int32_t get_offset_of_atlas__23() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___atlas__23)); }
	inline exAtlas_t2942648216 * get_atlas__23() const { return ___atlas__23; }
	inline exAtlas_t2942648216 ** get_address_of_atlas__23() { return &___atlas__23; }
	inline void set_atlas__23(exAtlas_t2942648216 * value)
	{
		___atlas__23 = value;
		Il2CppCodeGenWriteBarrier(&___atlas__23, value);
	}

	inline static int32_t get_offset_of_index__24() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___index__24)); }
	inline int32_t get_index__24() const { return ___index__24; }
	inline int32_t* get_address_of_index__24() { return &___index__24; }
	inline void set_index__24(int32_t value)
	{
		___index__24 = value;
	}

	inline static int32_t get_offset_of_spanim_25() { return static_cast<int32_t>(offsetof(exSprite_t1539598680, ___spanim_25)); }
	inline exSpriteAnimation_t1937626380 * get_spanim_25() const { return ___spanim_25; }
	inline exSpriteAnimation_t1937626380 ** get_address_of_spanim_25() { return &___spanim_25; }
	inline void set_spanim_25(exSpriteAnimation_t1937626380 * value)
	{
		___spanim_25 = value;
		Il2CppCodeGenWriteBarrier(&___spanim_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
