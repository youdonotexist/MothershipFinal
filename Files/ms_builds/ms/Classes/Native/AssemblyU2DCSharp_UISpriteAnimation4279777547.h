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
// UISprite
struct UISprite_t661437049;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISpriteAnimation
struct  UISpriteAnimation_t4279777547  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 UISpriteAnimation::mFPS
	int32_t ___mFPS_2;
	// System.String UISpriteAnimation::mPrefix
	String_t* ___mPrefix_3;
	// System.Boolean UISpriteAnimation::mLoop
	bool ___mLoop_4;
	// System.Boolean UISpriteAnimation::mSnap
	bool ___mSnap_5;
	// UISprite UISpriteAnimation::mSprite
	UISprite_t661437049 * ___mSprite_6;
	// System.Single UISpriteAnimation::mDelta
	float ___mDelta_7;
	// System.Int32 UISpriteAnimation::mIndex
	int32_t ___mIndex_8;
	// System.Boolean UISpriteAnimation::mActive
	bool ___mActive_9;
	// System.Collections.Generic.List`1<System.String> UISpriteAnimation::mSpriteNames
	List_1_t1765447871 * ___mSpriteNames_10;

public:
	inline static int32_t get_offset_of_mFPS_2() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mFPS_2)); }
	inline int32_t get_mFPS_2() const { return ___mFPS_2; }
	inline int32_t* get_address_of_mFPS_2() { return &___mFPS_2; }
	inline void set_mFPS_2(int32_t value)
	{
		___mFPS_2 = value;
	}

	inline static int32_t get_offset_of_mPrefix_3() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mPrefix_3)); }
	inline String_t* get_mPrefix_3() const { return ___mPrefix_3; }
	inline String_t** get_address_of_mPrefix_3() { return &___mPrefix_3; }
	inline void set_mPrefix_3(String_t* value)
	{
		___mPrefix_3 = value;
		Il2CppCodeGenWriteBarrier(&___mPrefix_3, value);
	}

	inline static int32_t get_offset_of_mLoop_4() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mLoop_4)); }
	inline bool get_mLoop_4() const { return ___mLoop_4; }
	inline bool* get_address_of_mLoop_4() { return &___mLoop_4; }
	inline void set_mLoop_4(bool value)
	{
		___mLoop_4 = value;
	}

	inline static int32_t get_offset_of_mSnap_5() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mSnap_5)); }
	inline bool get_mSnap_5() const { return ___mSnap_5; }
	inline bool* get_address_of_mSnap_5() { return &___mSnap_5; }
	inline void set_mSnap_5(bool value)
	{
		___mSnap_5 = value;
	}

	inline static int32_t get_offset_of_mSprite_6() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mSprite_6)); }
	inline UISprite_t661437049 * get_mSprite_6() const { return ___mSprite_6; }
	inline UISprite_t661437049 ** get_address_of_mSprite_6() { return &___mSprite_6; }
	inline void set_mSprite_6(UISprite_t661437049 * value)
	{
		___mSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_6, value);
	}

	inline static int32_t get_offset_of_mDelta_7() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mDelta_7)); }
	inline float get_mDelta_7() const { return ___mDelta_7; }
	inline float* get_address_of_mDelta_7() { return &___mDelta_7; }
	inline void set_mDelta_7(float value)
	{
		___mDelta_7 = value;
	}

	inline static int32_t get_offset_of_mIndex_8() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mIndex_8)); }
	inline int32_t get_mIndex_8() const { return ___mIndex_8; }
	inline int32_t* get_address_of_mIndex_8() { return &___mIndex_8; }
	inline void set_mIndex_8(int32_t value)
	{
		___mIndex_8 = value;
	}

	inline static int32_t get_offset_of_mActive_9() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mActive_9)); }
	inline bool get_mActive_9() const { return ___mActive_9; }
	inline bool* get_address_of_mActive_9() { return &___mActive_9; }
	inline void set_mActive_9(bool value)
	{
		___mActive_9 = value;
	}

	inline static int32_t get_offset_of_mSpriteNames_10() { return static_cast<int32_t>(offsetof(UISpriteAnimation_t4279777547, ___mSpriteNames_10)); }
	inline List_1_t1765447871 * get_mSpriteNames_10() const { return ___mSpriteNames_10; }
	inline List_1_t1765447871 ** get_address_of_mSpriteNames_10() { return &___mSpriteNames_10; }
	inline void set_mSpriteNames_10(List_1_t1765447871 * value)
	{
		___mSpriteNames_10 = value;
		Il2CppCodeGenWriteBarrier(&___mSpriteNames_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
