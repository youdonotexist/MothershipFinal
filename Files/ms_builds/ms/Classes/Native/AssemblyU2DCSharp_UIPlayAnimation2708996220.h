﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPlayAnimation
struct UIPlayAnimation_t2708996220;
// UnityEngine.Animation
struct Animation_t350396337;
// UnityEngine.Animator
struct Animator_t792326996;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t506415896;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Trigger4118341060.h"
#include "AssemblyU2DCSharp_AnimationOrTween_Direction259989387.h"
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition3725892324.h"
#include "AssemblyU2DCSharp_AnimationOrTween_DisableConditio3573771103.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPlayAnimation
struct  UIPlayAnimation_t2708996220  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animation UIPlayAnimation::target
	Animation_t350396337 * ___target_3;
	// UnityEngine.Animator UIPlayAnimation::animator
	Animator_t792326996 * ___animator_4;
	// System.String UIPlayAnimation::clipName
	String_t* ___clipName_5;
	// AnimationOrTween.Trigger UIPlayAnimation::trigger
	int32_t ___trigger_6;
	// AnimationOrTween.Direction UIPlayAnimation::playDirection
	int32_t ___playDirection_7;
	// System.Boolean UIPlayAnimation::resetOnPlay
	bool ___resetOnPlay_8;
	// System.Boolean UIPlayAnimation::clearSelection
	bool ___clearSelection_9;
	// AnimationOrTween.EnableCondition UIPlayAnimation::ifDisabledOnPlay
	int32_t ___ifDisabledOnPlay_10;
	// AnimationOrTween.DisableCondition UIPlayAnimation::disableWhenFinished
	int32_t ___disableWhenFinished_11;
	// System.Collections.Generic.List`1<EventDelegate> UIPlayAnimation::onFinished
	List_1_t506415896 * ___onFinished_12;
	// UnityEngine.GameObject UIPlayAnimation::eventReceiver
	GameObject_t4012695102 * ___eventReceiver_13;
	// System.String UIPlayAnimation::callWhenFinished
	String_t* ___callWhenFinished_14;
	// System.Boolean UIPlayAnimation::mStarted
	bool ___mStarted_15;
	// System.Boolean UIPlayAnimation::mActivated
	bool ___mActivated_16;
	// System.Boolean UIPlayAnimation::dragHighlight
	bool ___dragHighlight_17;

public:
	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___target_3)); }
	inline Animation_t350396337 * get_target_3() const { return ___target_3; }
	inline Animation_t350396337 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Animation_t350396337 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___animator_4)); }
	inline Animator_t792326996 * get_animator_4() const { return ___animator_4; }
	inline Animator_t792326996 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t792326996 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier(&___animator_4, value);
	}

	inline static int32_t get_offset_of_clipName_5() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___clipName_5)); }
	inline String_t* get_clipName_5() const { return ___clipName_5; }
	inline String_t** get_address_of_clipName_5() { return &___clipName_5; }
	inline void set_clipName_5(String_t* value)
	{
		___clipName_5 = value;
		Il2CppCodeGenWriteBarrier(&___clipName_5, value);
	}

	inline static int32_t get_offset_of_trigger_6() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___trigger_6)); }
	inline int32_t get_trigger_6() const { return ___trigger_6; }
	inline int32_t* get_address_of_trigger_6() { return &___trigger_6; }
	inline void set_trigger_6(int32_t value)
	{
		___trigger_6 = value;
	}

	inline static int32_t get_offset_of_playDirection_7() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___playDirection_7)); }
	inline int32_t get_playDirection_7() const { return ___playDirection_7; }
	inline int32_t* get_address_of_playDirection_7() { return &___playDirection_7; }
	inline void set_playDirection_7(int32_t value)
	{
		___playDirection_7 = value;
	}

	inline static int32_t get_offset_of_resetOnPlay_8() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___resetOnPlay_8)); }
	inline bool get_resetOnPlay_8() const { return ___resetOnPlay_8; }
	inline bool* get_address_of_resetOnPlay_8() { return &___resetOnPlay_8; }
	inline void set_resetOnPlay_8(bool value)
	{
		___resetOnPlay_8 = value;
	}

	inline static int32_t get_offset_of_clearSelection_9() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___clearSelection_9)); }
	inline bool get_clearSelection_9() const { return ___clearSelection_9; }
	inline bool* get_address_of_clearSelection_9() { return &___clearSelection_9; }
	inline void set_clearSelection_9(bool value)
	{
		___clearSelection_9 = value;
	}

	inline static int32_t get_offset_of_ifDisabledOnPlay_10() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___ifDisabledOnPlay_10)); }
	inline int32_t get_ifDisabledOnPlay_10() const { return ___ifDisabledOnPlay_10; }
	inline int32_t* get_address_of_ifDisabledOnPlay_10() { return &___ifDisabledOnPlay_10; }
	inline void set_ifDisabledOnPlay_10(int32_t value)
	{
		___ifDisabledOnPlay_10 = value;
	}

	inline static int32_t get_offset_of_disableWhenFinished_11() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___disableWhenFinished_11)); }
	inline int32_t get_disableWhenFinished_11() const { return ___disableWhenFinished_11; }
	inline int32_t* get_address_of_disableWhenFinished_11() { return &___disableWhenFinished_11; }
	inline void set_disableWhenFinished_11(int32_t value)
	{
		___disableWhenFinished_11 = value;
	}

	inline static int32_t get_offset_of_onFinished_12() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___onFinished_12)); }
	inline List_1_t506415896 * get_onFinished_12() const { return ___onFinished_12; }
	inline List_1_t506415896 ** get_address_of_onFinished_12() { return &___onFinished_12; }
	inline void set_onFinished_12(List_1_t506415896 * value)
	{
		___onFinished_12 = value;
		Il2CppCodeGenWriteBarrier(&___onFinished_12, value);
	}

	inline static int32_t get_offset_of_eventReceiver_13() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___eventReceiver_13)); }
	inline GameObject_t4012695102 * get_eventReceiver_13() const { return ___eventReceiver_13; }
	inline GameObject_t4012695102 ** get_address_of_eventReceiver_13() { return &___eventReceiver_13; }
	inline void set_eventReceiver_13(GameObject_t4012695102 * value)
	{
		___eventReceiver_13 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_13, value);
	}

	inline static int32_t get_offset_of_callWhenFinished_14() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___callWhenFinished_14)); }
	inline String_t* get_callWhenFinished_14() const { return ___callWhenFinished_14; }
	inline String_t** get_address_of_callWhenFinished_14() { return &___callWhenFinished_14; }
	inline void set_callWhenFinished_14(String_t* value)
	{
		___callWhenFinished_14 = value;
		Il2CppCodeGenWriteBarrier(&___callWhenFinished_14, value);
	}

	inline static int32_t get_offset_of_mStarted_15() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___mStarted_15)); }
	inline bool get_mStarted_15() const { return ___mStarted_15; }
	inline bool* get_address_of_mStarted_15() { return &___mStarted_15; }
	inline void set_mStarted_15(bool value)
	{
		___mStarted_15 = value;
	}

	inline static int32_t get_offset_of_mActivated_16() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___mActivated_16)); }
	inline bool get_mActivated_16() const { return ___mActivated_16; }
	inline bool* get_address_of_mActivated_16() { return &___mActivated_16; }
	inline void set_mActivated_16(bool value)
	{
		___mActivated_16 = value;
	}

	inline static int32_t get_offset_of_dragHighlight_17() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220, ___dragHighlight_17)); }
	inline bool get_dragHighlight_17() const { return ___dragHighlight_17; }
	inline bool* get_address_of_dragHighlight_17() { return &___dragHighlight_17; }
	inline void set_dragHighlight_17(bool value)
	{
		___dragHighlight_17 = value;
	}
};

struct UIPlayAnimation_t2708996220_StaticFields
{
public:
	// UIPlayAnimation UIPlayAnimation::current
	UIPlayAnimation_t2708996220 * ___current_2;

public:
	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(UIPlayAnimation_t2708996220_StaticFields, ___current_2)); }
	inline UIPlayAnimation_t2708996220 * get_current_2() const { return ___current_2; }
	inline UIPlayAnimation_t2708996220 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(UIPlayAnimation_t2708996220 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
