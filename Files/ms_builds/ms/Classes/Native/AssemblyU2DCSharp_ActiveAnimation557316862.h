﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ActiveAnimation
struct ActiveAnimation_t557316862;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t506415896;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction259989387.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ActiveAnimation
struct  ActiveAnimation_t557316862  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<EventDelegate> ActiveAnimation::onFinished
	List_1_t506415896 * ___onFinished_3;
	// UnityEngine.GameObject ActiveAnimation::eventReceiver
	GameObject_t4012695102 * ___eventReceiver_4;
	// System.String ActiveAnimation::callWhenFinished
	String_t* ___callWhenFinished_5;
	// UnityEngine.Animation ActiveAnimation::mAnim
	Animation_t350396337 * ___mAnim_6;
	// AnimationOrTween.Direction ActiveAnimation::mLastDirection
	int32_t ___mLastDirection_7;
	// AnimationOrTween.Direction ActiveAnimation::mDisableDirection
	int32_t ___mDisableDirection_8;
	// System.Boolean ActiveAnimation::mNotify
	bool ___mNotify_9;
	// UnityEngine.Animator ActiveAnimation::mAnimator
	Animator_t792326996 * ___mAnimator_10;
	// System.String ActiveAnimation::mClip
	String_t* ___mClip_11;

public:
	inline static int32_t get_offset_of_onFinished_3() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___onFinished_3)); }
	inline List_1_t506415896 * get_onFinished_3() const { return ___onFinished_3; }
	inline List_1_t506415896 ** get_address_of_onFinished_3() { return &___onFinished_3; }
	inline void set_onFinished_3(List_1_t506415896 * value)
	{
		___onFinished_3 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_3, value);
	}

	inline static int32_t get_offset_of_eventReceiver_4() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___eventReceiver_4)); }
	inline GameObject_t4012695102 * get_eventReceiver_4() const { return ___eventReceiver_4; }
	inline GameObject_t4012695102 ** get_address_of_eventReceiver_4() { return &___eventReceiver_4; }
	inline void set_eventReceiver_4(GameObject_t4012695102 * value)
	{
		___eventReceiver_4 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_4, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_5() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___callWhenFinished_5)); }
	inline String_t* get_callWhenFinished_5() const { return ___callWhenFinished_5; }
	inline String_t** get_address_of_callWhenFinished_5() { return &___callWhenFinished_5; }
	inline void set_callWhenFinished_5(String_t* value)
	{
		___callWhenFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_5, value);
	}

	inline static int32_t get_offset_of_mAnim_6() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___mAnim_6)); }
	inline Animation_t350396337 * get_mAnim_6() const { return ___mAnim_6; }
	inline Animation_t350396337 ** get_address_of_mAnim_6() { return &___mAnim_6; }
	inline void set_mAnim_6(Animation_t350396337 * value)
	{
		___mAnim_6 = value;
		Il2CppCodeGenWriteBarrier(&___mAnim_6, value);
	}

	inline static int32_t get_offset_of_mLastDirection_7() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___mLastDirection_7)); }
	inline int32_t get_mLastDirection_7() const { return ___mLastDirection_7; }
	inline int32_t* get_address_of_mLastDirection_7() { return &___mLastDirection_7; }
	inline void set_mLastDirection_7(int32_t value)
	{
		___mLastDirection_7 = value;
	}

	inline static int32_t get_offset_of_mDisableDirection_8() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___mDisableDirection_8)); }
	inline int32_t get_mDisableDirection_8() const { return ___mDisableDirection_8; }
	inline int32_t* get_address_of_mDisableDirection_8() { return &___mDisableDirection_8; }
	inline void set_mDisableDirection_8(int32_t value)
	{
		___mDisableDirection_8 = value;
	}

	inline static int32_t get_offset_of_mNotify_9() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___mNotify_9)); }
	inline bool get_mNotify_9() const { return ___mNotify_9; }
	inline bool* get_address_of_mNotify_9() { return &___mNotify_9; }
	inline void set_mNotify_9(bool value)
	{
		___mNotify_9 = value;
	}

	inline static int32_t get_offset_of_mAnimator_10() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___mAnimator_10)); }
	inline Animator_t792326996 * get_mAnimator_10() const { return ___mAnimator_10; }
	inline Animator_t792326996 ** get_address_of_mAnimator_10() { return &___mAnimator_10; }
	inline void set_mAnimator_10(Animator_t792326996 * value)
	{
		___mAnimator_10 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimator_10, value);
	}

	inline static int32_t get_offset_of_mClip_11() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862, ___mClip_11)); }
	inline String_t* get_mClip_11() const { return ___mClip_11; }
	inline String_t** get_address_of_mClip_11() { return &___mClip_11; }
	inline void set_mClip_11(String_t* value)
	{
		___mClip_11 = value;
		Il2CppCodeGenWriteBarrier(&___mClip_11, value);
	}
};

struct ActiveAnimation_t557316862_StaticFields
{
public:
	// ActiveAnimation ActiveAnimation::current
	ActiveAnimation_t557316862 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(ActiveAnimation_t557316862_StaticFields, ___current_2)); }
	inline ActiveAnimation_t557316862 * get_current_2() const { return ___current_2; }
	inline ActiveAnimation_t557316862 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(ActiveAnimation_t557316862 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
