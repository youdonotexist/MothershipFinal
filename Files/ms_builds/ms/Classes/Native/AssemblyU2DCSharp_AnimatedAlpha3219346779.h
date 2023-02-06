﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t769069560;
// UIPanel
struct UIPanel_t295209936;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatedAlpha
struct  AnimatedAlpha_t3219346779  : public MonoBehaviour_t3012272455
{
public:
	// System.Single AnimatedAlpha::alpha
	float ___alpha_2;
	// UIWidget AnimatedAlpha::mWidget
	UIWidget_t769069560 * ___mWidget_3;
	// UIPanel AnimatedAlpha::mPanel
	UIPanel_t295209936 * ___mPanel_4;

public:
	inline static int32_t get_offset_of_alpha_2() { return static_cast<int32_t>(offsetof(AnimatedAlpha_t3219346779, ___alpha_2)); }
	inline float get_alpha_2() const { return ___alpha_2; }
	inline float* get_address_of_alpha_2() { return &___alpha_2; }
	inline void set_alpha_2(float value)
	{
		___alpha_2 = value;
	}

	inline static int32_t get_offset_of_mWidget_3() { return static_cast<int32_t>(offsetof(AnimatedAlpha_t3219346779, ___mWidget_3)); }
	inline UIWidget_t769069560 * get_mWidget_3() const { return ___mWidget_3; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_3() { return &___mWidget_3; }
	inline void set_mWidget_3(UIWidget_t769069560 * value)
	{
		___mWidget_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_3, value);
	}

	inline static int32_t get_offset_of_mPanel_4() { return static_cast<int32_t>(offsetof(AnimatedAlpha_t3219346779, ___mPanel_4)); }
	inline UIPanel_t295209936 * get_mPanel_4() const { return ___mPanel_4; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_4() { return &___mPanel_4; }
	inline void set_mPanel_4(UIPanel_t295209936 * value)
	{
		___mPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
