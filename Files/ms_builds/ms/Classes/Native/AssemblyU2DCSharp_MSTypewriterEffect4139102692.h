#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MSTypewriterEffect
struct MSTypewriterEffect_t4139102692;
// UIScrollView
struct UIScrollView_t2113479878;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t506415896;
// UILabel
struct UILabel_t291504320;
// System.String
struct String_t;
// System.Action
struct Action_t437523947;
// BetterList`1<MSTypewriterEffect/FadeEntry>
struct BetterList_1_t2592799363;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MSTypewriterEffect
struct  MSTypewriterEffect_t4139102692  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 MSTypewriterEffect::charsPerSecond
	int32_t ___charsPerSecond_3;
	// System.Single MSTypewriterEffect::fadeInTime
	float ___fadeInTime_4;
	// System.Single MSTypewriterEffect::delayOnPeriod
	float ___delayOnPeriod_5;
	// System.Single MSTypewriterEffect::delayOnNewLine
	float ___delayOnNewLine_6;
	// UIScrollView MSTypewriterEffect::scrollView
	UIScrollView_t2113479878 * ___scrollView_7;
	// System.Boolean MSTypewriterEffect::keepFullDimensions
	bool ___keepFullDimensions_8;
	// System.Collections.Generic.List`1<EventDelegate> MSTypewriterEffect::onFinished
	List_1_t506415896 * ___onFinished_9;
	// UILabel MSTypewriterEffect::mLabel
	UILabel_t291504320 * ___mLabel_10;
	// System.String MSTypewriterEffect::mFullText
	String_t* ___mFullText_11;
	// System.Int32 MSTypewriterEffect::mCurrentOffset
	int32_t ___mCurrentOffset_12;
	// System.Single MSTypewriterEffect::mNextChar
	float ___mNextChar_13;
	// System.Boolean MSTypewriterEffect::mReset
	bool ___mReset_14;
	// System.Action MSTypewriterEffect::mOnTextAdded
	Action_t437523947 * ___mOnTextAdded_15;
	// System.Boolean MSTypewriterEffect::mActive
	bool ___mActive_16;
	// BetterList`1<MSTypewriterEffect/FadeEntry> MSTypewriterEffect::mFade
	BetterList_1_t2592799363 * ___mFade_17;

public:
	inline static int32_t get_offset_of_charsPerSecond_3() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___charsPerSecond_3)); }
	inline int32_t get_charsPerSecond_3() const { return ___charsPerSecond_3; }
	inline int32_t* get_address_of_charsPerSecond_3() { return &___charsPerSecond_3; }
	inline void set_charsPerSecond_3(int32_t value)
	{
		___charsPerSecond_3 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_4() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___fadeInTime_4)); }
	inline float get_fadeInTime_4() const { return ___fadeInTime_4; }
	inline float* get_address_of_fadeInTime_4() { return &___fadeInTime_4; }
	inline void set_fadeInTime_4(float value)
	{
		___fadeInTime_4 = value;
	}

	inline static int32_t get_offset_of_delayOnPeriod_5() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___delayOnPeriod_5)); }
	inline float get_delayOnPeriod_5() const { return ___delayOnPeriod_5; }
	inline float* get_address_of_delayOnPeriod_5() { return &___delayOnPeriod_5; }
	inline void set_delayOnPeriod_5(float value)
	{
		___delayOnPeriod_5 = value;
	}

	inline static int32_t get_offset_of_delayOnNewLine_6() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___delayOnNewLine_6)); }
	inline float get_delayOnNewLine_6() const { return ___delayOnNewLine_6; }
	inline float* get_address_of_delayOnNewLine_6() { return &___delayOnNewLine_6; }
	inline void set_delayOnNewLine_6(float value)
	{
		___delayOnNewLine_6 = value;
	}

	inline static int32_t get_offset_of_scrollView_7() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___scrollView_7)); }
	inline UIScrollView_t2113479878 * get_scrollView_7() const { return ___scrollView_7; }
	inline UIScrollView_t2113479878 ** get_address_of_scrollView_7() { return &___scrollView_7; }
	inline void set_scrollView_7(UIScrollView_t2113479878 * value)
	{
		___scrollView_7 = value;
		Il2CppCodeGenWriteBarrier(&___scrollView_7, value);
	}

	inline static int32_t get_offset_of_keepFullDimensions_8() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___keepFullDimensions_8)); }
	inline bool get_keepFullDimensions_8() const { return ___keepFullDimensions_8; }
	inline bool* get_address_of_keepFullDimensions_8() { return &___keepFullDimensions_8; }
	inline void set_keepFullDimensions_8(bool value)
	{
		___keepFullDimensions_8 = value;
	}

	inline static int32_t get_offset_of_onFinished_9() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___onFinished_9)); }
	inline List_1_t506415896 * get_onFinished_9() const { return ___onFinished_9; }
	inline List_1_t506415896 ** get_address_of_onFinished_9() { return &___onFinished_9; }
	inline void set_onFinished_9(List_1_t506415896 * value)
	{
		___onFinished_9 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_9, value);
	}

	inline static int32_t get_offset_of_mLabel_10() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mLabel_10)); }
	inline UILabel_t291504320 * get_mLabel_10() const { return ___mLabel_10; }
	inline UILabel_t291504320 ** get_address_of_mLabel_10() { return &___mLabel_10; }
	inline void set_mLabel_10(UILabel_t291504320 * value)
	{
		___mLabel_10 = value;
		Il2CppCodeGenWriteBarrier(&___mLabel_10, value);
	}

	inline static int32_t get_offset_of_mFullText_11() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mFullText_11)); }
	inline String_t* get_mFullText_11() const { return ___mFullText_11; }
	inline String_t** get_address_of_mFullText_11() { return &___mFullText_11; }
	inline void set_mFullText_11(String_t* value)
	{
		___mFullText_11 = value;
		Il2CppCodeGenWriteBarrier(&___mFullText_11, value);
	}

	inline static int32_t get_offset_of_mCurrentOffset_12() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mCurrentOffset_12)); }
	inline int32_t get_mCurrentOffset_12() const { return ___mCurrentOffset_12; }
	inline int32_t* get_address_of_mCurrentOffset_12() { return &___mCurrentOffset_12; }
	inline void set_mCurrentOffset_12(int32_t value)
	{
		___mCurrentOffset_12 = value;
	}

	inline static int32_t get_offset_of_mNextChar_13() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mNextChar_13)); }
	inline float get_mNextChar_13() const { return ___mNextChar_13; }
	inline float* get_address_of_mNextChar_13() { return &___mNextChar_13; }
	inline void set_mNextChar_13(float value)
	{
		___mNextChar_13 = value;
	}

	inline static int32_t get_offset_of_mReset_14() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mReset_14)); }
	inline bool get_mReset_14() const { return ___mReset_14; }
	inline bool* get_address_of_mReset_14() { return &___mReset_14; }
	inline void set_mReset_14(bool value)
	{
		___mReset_14 = value;
	}

	inline static int32_t get_offset_of_mOnTextAdded_15() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mOnTextAdded_15)); }
	inline Action_t437523947 * get_mOnTextAdded_15() const { return ___mOnTextAdded_15; }
	inline Action_t437523947 ** get_address_of_mOnTextAdded_15() { return &___mOnTextAdded_15; }
	inline void set_mOnTextAdded_15(Action_t437523947 * value)
	{
		___mOnTextAdded_15 = value;
		Il2CppCodeGenWriteBarrier(&___mOnTextAdded_15, value);
	}

	inline static int32_t get_offset_of_mActive_16() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mActive_16)); }
	inline bool get_mActive_16() const { return ___mActive_16; }
	inline bool* get_address_of_mActive_16() { return &___mActive_16; }
	inline void set_mActive_16(bool value)
	{
		___mActive_16 = value;
	}

	inline static int32_t get_offset_of_mFade_17() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692, ___mFade_17)); }
	inline BetterList_1_t2592799363 * get_mFade_17() const { return ___mFade_17; }
	inline BetterList_1_t2592799363 ** get_address_of_mFade_17() { return &___mFade_17; }
	inline void set_mFade_17(BetterList_1_t2592799363 * value)
	{
		___mFade_17 = value;
		Il2CppCodeGenWriteBarrier(&___mFade_17, value);
	}
};

struct MSTypewriterEffect_t4139102692_StaticFields
{
public:
	// MSTypewriterEffect MSTypewriterEffect::current
	MSTypewriterEffect_t4139102692 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(MSTypewriterEffect_t4139102692_StaticFields, ___current_2)); }
	inline MSTypewriterEffect_t4139102692 * get_current_2() const { return ___current_2; }
	inline MSTypewriterEffect_t4139102692 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(MSTypewriterEffect_t4139102692 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
