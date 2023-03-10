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
// UIPopupList
struct UIPopupList_t1804933942;
// UIToggle
struct UIToggle_t688812808;
// UIProgressBar
struct UIProgressBar_t168062834;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISavedOption
struct  UISavedOption_t3282279080  : public MonoBehaviour_t3012272455
{
public:
	// System.String UISavedOption::keyName
	String_t* ___keyName_2;
	// UIPopupList UISavedOption::mList
	UIPopupList_t1804933942 * ___mList_3;
	// UIToggle UISavedOption::mCheck
	UIToggle_t688812808 * ___mCheck_4;
	// UIProgressBar UISavedOption::mSlider
	UIProgressBar_t168062834 * ___mSlider_5;

public:
	inline static int32_t get_offset_of_keyName_2() { return static_cast<int32_t>(offsetof(UISavedOption_t3282279080, ___keyName_2)); }
	inline String_t* get_keyName_2() const { return ___keyName_2; }
	inline String_t** get_address_of_keyName_2() { return &___keyName_2; }
	inline void set_keyName_2(String_t* value)
	{
		___keyName_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyName_2, value);
	}

	inline static int32_t get_offset_of_mList_3() { return static_cast<int32_t>(offsetof(UISavedOption_t3282279080, ___mList_3)); }
	inline UIPopupList_t1804933942 * get_mList_3() const { return ___mList_3; }
	inline UIPopupList_t1804933942 ** get_address_of_mList_3() { return &___mList_3; }
	inline void set_mList_3(UIPopupList_t1804933942 * value)
	{
		___mList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mList_3, value);
	}

	inline static int32_t get_offset_of_mCheck_4() { return static_cast<int32_t>(offsetof(UISavedOption_t3282279080, ___mCheck_4)); }
	inline UIToggle_t688812808 * get_mCheck_4() const { return ___mCheck_4; }
	inline UIToggle_t688812808 ** get_address_of_mCheck_4() { return &___mCheck_4; }
	inline void set_mCheck_4(UIToggle_t688812808 * value)
	{
		___mCheck_4 = value;
		Il2CppCodeGenWriteBarrier(&___mCheck_4, value);
	}

	inline static int32_t get_offset_of_mSlider_5() { return static_cast<int32_t>(offsetof(UISavedOption_t3282279080, ___mSlider_5)); }
	inline UIProgressBar_t168062834 * get_mSlider_5() const { return ___mSlider_5; }
	inline UIProgressBar_t168062834 ** get_address_of_mSlider_5() { return &___mSlider_5; }
	inline void set_mSlider_5(UIProgressBar_t168062834 * value)
	{
		___mSlider_5 = value;
		Il2CppCodeGenWriteBarrier(&___mSlider_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
