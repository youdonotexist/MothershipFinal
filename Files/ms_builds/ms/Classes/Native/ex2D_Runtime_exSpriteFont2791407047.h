#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exBitmapFont
struct exBitmapFont_t3811321649;
// System.String
struct String_t;

#include "ex2D_Runtime_exSpriteBase2791274569.h"
#include "ex2D_Runtime_exSpriteFont_TextAlign938456504.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteFont
struct  exSpriteFont_t2791407047  : public exSpriteBase_t2791274569
{
public:
	// exBitmapFont exSpriteFont::fontInfo_
	exBitmapFont_t3811321649 * ___fontInfo__15;
	// System.String exSpriteFont::text_
	String_t* ___text__16;
	// System.Boolean exSpriteFont::useMultiline_
	bool ___useMultiline__17;
	// exSpriteFont/TextAlign exSpriteFont::textAlign_
	int32_t ___textAlign__18;
	// System.Boolean exSpriteFont::useKerning_
	bool ___useKerning__19;
	// System.Single exSpriteFont::tracking_
	float ___tracking__20;
	// System.Single exSpriteFont::lineSpacing_
	float ___lineSpacing__21;
	// UnityEngine.Color exSpriteFont::topColor_
	Color_t1588175760  ___topColor__22;
	// UnityEngine.Color exSpriteFont::botColor_
	Color_t1588175760  ___botColor__23;
	// System.Boolean exSpriteFont::useOutline_
	bool ___useOutline__24;
	// System.Single exSpriteFont::outlineWidth_
	float ___outlineWidth__25;
	// UnityEngine.Color exSpriteFont::outlineColor_
	Color_t1588175760  ___outlineColor__26;
	// System.Boolean exSpriteFont::useShadow_
	bool ___useShadow__27;
	// UnityEngine.Vector2 exSpriteFont::shadowBias_
	Vector2_t3525329788  ___shadowBias__28;
	// UnityEngine.Color exSpriteFont::shadowColor_
	Color_t1588175760  ___shadowColor__29;

public:
	inline static int32_t get_offset_of_fontInfo__15() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___fontInfo__15)); }
	inline exBitmapFont_t3811321649 * get_fontInfo__15() const { return ___fontInfo__15; }
	inline exBitmapFont_t3811321649 ** get_address_of_fontInfo__15() { return &___fontInfo__15; }
	inline void set_fontInfo__15(exBitmapFont_t3811321649 * value)
	{
		___fontInfo__15 = value;
		Il2CppCodeGenWriteBarrier(&___fontInfo__15, value);
	}

	inline static int32_t get_offset_of_text__16() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___text__16)); }
	inline String_t* get_text__16() const { return ___text__16; }
	inline String_t** get_address_of_text__16() { return &___text__16; }
	inline void set_text__16(String_t* value)
	{
		___text__16 = value;
		Il2CppCodeGenWriteBarrier(&___text__16, value);
	}

	inline static int32_t get_offset_of_useMultiline__17() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___useMultiline__17)); }
	inline bool get_useMultiline__17() const { return ___useMultiline__17; }
	inline bool* get_address_of_useMultiline__17() { return &___useMultiline__17; }
	inline void set_useMultiline__17(bool value)
	{
		___useMultiline__17 = value;
	}

	inline static int32_t get_offset_of_textAlign__18() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___textAlign__18)); }
	inline int32_t get_textAlign__18() const { return ___textAlign__18; }
	inline int32_t* get_address_of_textAlign__18() { return &___textAlign__18; }
	inline void set_textAlign__18(int32_t value)
	{
		___textAlign__18 = value;
	}

	inline static int32_t get_offset_of_useKerning__19() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___useKerning__19)); }
	inline bool get_useKerning__19() const { return ___useKerning__19; }
	inline bool* get_address_of_useKerning__19() { return &___useKerning__19; }
	inline void set_useKerning__19(bool value)
	{
		___useKerning__19 = value;
	}

	inline static int32_t get_offset_of_tracking__20() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___tracking__20)); }
	inline float get_tracking__20() const { return ___tracking__20; }
	inline float* get_address_of_tracking__20() { return &___tracking__20; }
	inline void set_tracking__20(float value)
	{
		___tracking__20 = value;
	}

	inline static int32_t get_offset_of_lineSpacing__21() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___lineSpacing__21)); }
	inline float get_lineSpacing__21() const { return ___lineSpacing__21; }
	inline float* get_address_of_lineSpacing__21() { return &___lineSpacing__21; }
	inline void set_lineSpacing__21(float value)
	{
		___lineSpacing__21 = value;
	}

	inline static int32_t get_offset_of_topColor__22() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___topColor__22)); }
	inline Color_t1588175760  get_topColor__22() const { return ___topColor__22; }
	inline Color_t1588175760 * get_address_of_topColor__22() { return &___topColor__22; }
	inline void set_topColor__22(Color_t1588175760  value)
	{
		___topColor__22 = value;
	}

	inline static int32_t get_offset_of_botColor__23() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___botColor__23)); }
	inline Color_t1588175760  get_botColor__23() const { return ___botColor__23; }
	inline Color_t1588175760 * get_address_of_botColor__23() { return &___botColor__23; }
	inline void set_botColor__23(Color_t1588175760  value)
	{
		___botColor__23 = value;
	}

	inline static int32_t get_offset_of_useOutline__24() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___useOutline__24)); }
	inline bool get_useOutline__24() const { return ___useOutline__24; }
	inline bool* get_address_of_useOutline__24() { return &___useOutline__24; }
	inline void set_useOutline__24(bool value)
	{
		___useOutline__24 = value;
	}

	inline static int32_t get_offset_of_outlineWidth__25() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___outlineWidth__25)); }
	inline float get_outlineWidth__25() const { return ___outlineWidth__25; }
	inline float* get_address_of_outlineWidth__25() { return &___outlineWidth__25; }
	inline void set_outlineWidth__25(float value)
	{
		___outlineWidth__25 = value;
	}

	inline static int32_t get_offset_of_outlineColor__26() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___outlineColor__26)); }
	inline Color_t1588175760  get_outlineColor__26() const { return ___outlineColor__26; }
	inline Color_t1588175760 * get_address_of_outlineColor__26() { return &___outlineColor__26; }
	inline void set_outlineColor__26(Color_t1588175760  value)
	{
		___outlineColor__26 = value;
	}

	inline static int32_t get_offset_of_useShadow__27() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___useShadow__27)); }
	inline bool get_useShadow__27() const { return ___useShadow__27; }
	inline bool* get_address_of_useShadow__27() { return &___useShadow__27; }
	inline void set_useShadow__27(bool value)
	{
		___useShadow__27 = value;
	}

	inline static int32_t get_offset_of_shadowBias__28() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___shadowBias__28)); }
	inline Vector2_t3525329788  get_shadowBias__28() const { return ___shadowBias__28; }
	inline Vector2_t3525329788 * get_address_of_shadowBias__28() { return &___shadowBias__28; }
	inline void set_shadowBias__28(Vector2_t3525329788  value)
	{
		___shadowBias__28 = value;
	}

	inline static int32_t get_offset_of_shadowColor__29() { return static_cast<int32_t>(offsetof(exSpriteFont_t2791407047, ___shadowColor__29)); }
	inline Color_t1588175760  get_shadowColor__29() const { return ___shadowColor__29; }
	inline Color_t1588175760 * get_address_of_shadowColor__29() { return &___shadowColor__29; }
	inline void set_shadowColor__29(Color_t1588175760  value)
	{
		___shadowColor__29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
