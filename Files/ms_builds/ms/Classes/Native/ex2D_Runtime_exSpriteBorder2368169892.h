#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exGUIBorder
struct exGUIBorder_t1778287060;
// exAtlas
struct exAtlas_t2942648216;

#include "ex2D_Runtime_exSpriteBase2791274569.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteBorder
struct  exSpriteBorder_t2368169892  : public exSpriteBase_t2791274569
{
public:
	// System.Single exSpriteBorder::width_
	float ___width__15;
	// System.Single exSpriteBorder::height_
	float ___height__16;
	// exGUIBorder exSpriteBorder::guiBorder_
	exGUIBorder_t1778287060 * ___guiBorder__17;
	// exAtlas exSpriteBorder::atlas_
	exAtlas_t2942648216 * ___atlas__18;
	// System.Int32 exSpriteBorder::index_
	int32_t ___index__19;
	// UnityEngine.Color exSpriteBorder::color_
	Color_t1588175760  ___color__20;

public:
	inline static int32_t get_offset_of_width__15() { return static_cast<int32_t>(offsetof(exSpriteBorder_t2368169892, ___width__15)); }
	inline float get_width__15() const { return ___width__15; }
	inline float* get_address_of_width__15() { return &___width__15; }
	inline void set_width__15(float value)
	{
		___width__15 = value;
	}

	inline static int32_t get_offset_of_height__16() { return static_cast<int32_t>(offsetof(exSpriteBorder_t2368169892, ___height__16)); }
	inline float get_height__16() const { return ___height__16; }
	inline float* get_address_of_height__16() { return &___height__16; }
	inline void set_height__16(float value)
	{
		___height__16 = value;
	}

	inline static int32_t get_offset_of_guiBorder__17() { return static_cast<int32_t>(offsetof(exSpriteBorder_t2368169892, ___guiBorder__17)); }
	inline exGUIBorder_t1778287060 * get_guiBorder__17() const { return ___guiBorder__17; }
	inline exGUIBorder_t1778287060 ** get_address_of_guiBorder__17() { return &___guiBorder__17; }
	inline void set_guiBorder__17(exGUIBorder_t1778287060 * value)
	{
		___guiBorder__17 = value;
		Il2CppCodeGenWriteBarrier(&___guiBorder__17, value);
	}

	inline static int32_t get_offset_of_atlas__18() { return static_cast<int32_t>(offsetof(exSpriteBorder_t2368169892, ___atlas__18)); }
	inline exAtlas_t2942648216 * get_atlas__18() const { return ___atlas__18; }
	inline exAtlas_t2942648216 ** get_address_of_atlas__18() { return &___atlas__18; }
	inline void set_atlas__18(exAtlas_t2942648216 * value)
	{
		___atlas__18 = value;
		Il2CppCodeGenWriteBarrier(&___atlas__18, value);
	}

	inline static int32_t get_offset_of_index__19() { return static_cast<int32_t>(offsetof(exSpriteBorder_t2368169892, ___index__19)); }
	inline int32_t get_index__19() const { return ___index__19; }
	inline int32_t* get_address_of_index__19() { return &___index__19; }
	inline void set_index__19(int32_t value)
	{
		___index__19 = value;
	}

	inline static int32_t get_offset_of_color__20() { return static_cast<int32_t>(offsetof(exSpriteBorder_t2368169892, ___color__20)); }
	inline Color_t1588175760  get_color__20() const { return ___color__20; }
	inline Color_t1588175760 * get_address_of_color__20() { return &___color__20; }
	inline void set_color__20(Color_t1588175760  value)
	{
		___color__20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
