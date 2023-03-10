#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIRect
struct UIRect_t2503437976;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;

#include "AssemblyU2DCSharp_UITweener105489188.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TweenAlpha
struct  TweenAlpha_t2920325587  : public UITweener_t105489188
{
public:
	// System.Single TweenAlpha::from
	float ___from_20;
	// System.Single TweenAlpha::to
	float ___to_21;
	// System.Boolean TweenAlpha::mCached
	bool ___mCached_22;
	// UIRect TweenAlpha::mRect
	UIRect_t2503437976 * ___mRect_23;
	// UnityEngine.Material TweenAlpha::mMat
	Material_t1886596500 * ___mMat_24;
	// UnityEngine.SpriteRenderer TweenAlpha::mSr
	SpriteRenderer_t2223784725 * ___mSr_25;

public:
	inline static int32_t get_offset_of_from_20() { return static_cast<int32_t>(offsetof(TweenAlpha_t2920325587, ___from_20)); }
	inline float get_from_20() const { return ___from_20; }
	inline float* get_address_of_from_20() { return &___from_20; }
	inline void set_from_20(float value)
	{
		___from_20 = value;
	}

	inline static int32_t get_offset_of_to_21() { return static_cast<int32_t>(offsetof(TweenAlpha_t2920325587, ___to_21)); }
	inline float get_to_21() const { return ___to_21; }
	inline float* get_address_of_to_21() { return &___to_21; }
	inline void set_to_21(float value)
	{
		___to_21 = value;
	}

	inline static int32_t get_offset_of_mCached_22() { return static_cast<int32_t>(offsetof(TweenAlpha_t2920325587, ___mCached_22)); }
	inline bool get_mCached_22() const { return ___mCached_22; }
	inline bool* get_address_of_mCached_22() { return &___mCached_22; }
	inline void set_mCached_22(bool value)
	{
		___mCached_22 = value;
	}

	inline static int32_t get_offset_of_mRect_23() { return static_cast<int32_t>(offsetof(TweenAlpha_t2920325587, ___mRect_23)); }
	inline UIRect_t2503437976 * get_mRect_23() const { return ___mRect_23; }
	inline UIRect_t2503437976 ** get_address_of_mRect_23() { return &___mRect_23; }
	inline void set_mRect_23(UIRect_t2503437976 * value)
	{
		___mRect_23 = value;
		Il2CppCodeGenWriteBarrier(&___mRect_23, value);
	}

	inline static int32_t get_offset_of_mMat_24() { return static_cast<int32_t>(offsetof(TweenAlpha_t2920325587, ___mMat_24)); }
	inline Material_t1886596500 * get_mMat_24() const { return ___mMat_24; }
	inline Material_t1886596500 ** get_address_of_mMat_24() { return &___mMat_24; }
	inline void set_mMat_24(Material_t1886596500 * value)
	{
		___mMat_24 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_24, value);
	}

	inline static int32_t get_offset_of_mSr_25() { return static_cast<int32_t>(offsetof(TweenAlpha_t2920325587, ___mSr_25)); }
	inline SpriteRenderer_t2223784725 * get_mSr_25() const { return ___mSr_25; }
	inline SpriteRenderer_t2223784725 ** get_address_of_mSr_25() { return &___mSr_25; }
	inline void set_mSr_25(SpriteRenderer_t2223784725 * value)
	{
		___mSr_25 = value;
		Il2CppCodeGenWriteBarrier(&___mSr_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
