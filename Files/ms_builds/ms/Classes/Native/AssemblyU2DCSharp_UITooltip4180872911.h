﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITooltip
struct UITooltip_t4180872911;
// UnityEngine.Camera
struct Camera_t3533968274;
// UILabel
struct UILabel_t291504320;
// UISprite
struct UISprite_t661437049;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// UIWidget[]
struct UIWidgetU5BU5D_t4236988201;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITooltip
struct  UITooltip_t4180872911  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera UITooltip::uiCamera
	Camera_t3533968274 * ___uiCamera_3;
	// UILabel UITooltip::text
	UILabel_t291504320 * ___text_4;
	// UISprite UITooltip::background
	UISprite_t661437049 * ___background_5;
	// System.Single UITooltip::appearSpeed
	float ___appearSpeed_6;
	// System.Boolean UITooltip::scalingTransitions
	bool ___scalingTransitions_7;
	// UnityEngine.GameObject UITooltip::mHover
	GameObject_t4012695102 * ___mHover_8;
	// UnityEngine.Transform UITooltip::mTrans
	Transform_t284553113 * ___mTrans_9;
	// System.Single UITooltip::mTarget
	float ___mTarget_10;
	// System.Single UITooltip::mCurrent
	float ___mCurrent_11;
	// UnityEngine.Vector3 UITooltip::mPos
	Vector3_t3525329789  ___mPos_12;
	// UnityEngine.Vector3 UITooltip::mSize
	Vector3_t3525329789  ___mSize_13;
	// UIWidget[] UITooltip::mWidgets
	UIWidgetU5BU5D_t4236988201* ___mWidgets_14;

public:
	inline static int32_t get_offset_of_uiCamera_3() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___uiCamera_3)); }
	inline Camera_t3533968274 * get_uiCamera_3() const { return ___uiCamera_3; }
	inline Camera_t3533968274 ** get_address_of_uiCamera_3() { return &___uiCamera_3; }
	inline void set_uiCamera_3(Camera_t3533968274 * value)
	{
		___uiCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiCamera_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___text_4)); }
	inline UILabel_t291504320 * get_text_4() const { return ___text_4; }
	inline UILabel_t291504320 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(UILabel_t291504320 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}

	inline static int32_t get_offset_of_background_5() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___background_5)); }
	inline UISprite_t661437049 * get_background_5() const { return ___background_5; }
	inline UISprite_t661437049 ** get_address_of_background_5() { return &___background_5; }
	inline void set_background_5(UISprite_t661437049 * value)
	{
		___background_5 = value;
		Il2CppCodeGenWriteBarrier(&___background_5, value);
	}

	inline static int32_t get_offset_of_appearSpeed_6() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___appearSpeed_6)); }
	inline float get_appearSpeed_6() const { return ___appearSpeed_6; }
	inline float* get_address_of_appearSpeed_6() { return &___appearSpeed_6; }
	inline void set_appearSpeed_6(float value)
	{
		___appearSpeed_6 = value;
	}

	inline static int32_t get_offset_of_scalingTransitions_7() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___scalingTransitions_7)); }
	inline bool get_scalingTransitions_7() const { return ___scalingTransitions_7; }
	inline bool* get_address_of_scalingTransitions_7() { return &___scalingTransitions_7; }
	inline void set_scalingTransitions_7(bool value)
	{
		___scalingTransitions_7 = value;
	}

	inline static int32_t get_offset_of_mHover_8() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mHover_8)); }
	inline GameObject_t4012695102 * get_mHover_8() const { return ___mHover_8; }
	inline GameObject_t4012695102 ** get_address_of_mHover_8() { return &___mHover_8; }
	inline void set_mHover_8(GameObject_t4012695102 * value)
	{
		___mHover_8 = value;
		Il2CppCodeGenWriteBarrier(&___mHover_8, value);
	}

	inline static int32_t get_offset_of_mTrans_9() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mTrans_9)); }
	inline Transform_t284553113 * get_mTrans_9() const { return ___mTrans_9; }
	inline Transform_t284553113 ** get_address_of_mTrans_9() { return &___mTrans_9; }
	inline void set_mTrans_9(Transform_t284553113 * value)
	{
		___mTrans_9 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_9, value);
	}

	inline static int32_t get_offset_of_mTarget_10() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mTarget_10)); }
	inline float get_mTarget_10() const { return ___mTarget_10; }
	inline float* get_address_of_mTarget_10() { return &___mTarget_10; }
	inline void set_mTarget_10(float value)
	{
		___mTarget_10 = value;
	}

	inline static int32_t get_offset_of_mCurrent_11() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mCurrent_11)); }
	inline float get_mCurrent_11() const { return ___mCurrent_11; }
	inline float* get_address_of_mCurrent_11() { return &___mCurrent_11; }
	inline void set_mCurrent_11(float value)
	{
		___mCurrent_11 = value;
	}

	inline static int32_t get_offset_of_mPos_12() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mPos_12)); }
	inline Vector3_t3525329789  get_mPos_12() const { return ___mPos_12; }
	inline Vector3_t3525329789 * get_address_of_mPos_12() { return &___mPos_12; }
	inline void set_mPos_12(Vector3_t3525329789  value)
	{
		___mPos_12 = value;
	}

	inline static int32_t get_offset_of_mSize_13() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mSize_13)); }
	inline Vector3_t3525329789  get_mSize_13() const { return ___mSize_13; }
	inline Vector3_t3525329789 * get_address_of_mSize_13() { return &___mSize_13; }
	inline void set_mSize_13(Vector3_t3525329789  value)
	{
		___mSize_13 = value;
	}

	inline static int32_t get_offset_of_mWidgets_14() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911, ___mWidgets_14)); }
	inline UIWidgetU5BU5D_t4236988201* get_mWidgets_14() const { return ___mWidgets_14; }
	inline UIWidgetU5BU5D_t4236988201** get_address_of_mWidgets_14() { return &___mWidgets_14; }
	inline void set_mWidgets_14(UIWidgetU5BU5D_t4236988201* value)
	{
		___mWidgets_14 = value;
		Il2CppCodeGenWriteBarrier(&___mWidgets_14, value);
	}
};

struct UITooltip_t4180872911_StaticFields
{
public:
	// UITooltip UITooltip::mInstance
	UITooltip_t4180872911 * ___mInstance_2;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(UITooltip_t4180872911_StaticFields, ___mInstance_2)); }
	inline UITooltip_t4180872911 * get_mInstance_2() const { return ___mInstance_2; }
	inline UITooltip_t4180872911 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(UITooltip_t4180872911 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
