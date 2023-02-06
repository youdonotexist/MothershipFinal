#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;
// System.Object
struct Il2CppObject;
// StoryManager
struct StoryManager_t2533029144;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoryManager/<FadeOutStory>c__Iterator49
struct  U3CFadeOutStoryU3Ec__Iterator49_t3081571543  : public Il2CppObject
{
public:
	// System.Single StoryManager/<FadeOutStory>c__Iterator49::<t>__0
	float ___U3CtU3E__0_0;
	// System.Single StoryManager/<FadeOutStory>c__Iterator49::duration
	float ___duration_1;
	// System.Boolean StoryManager/<FadeOutStory>c__Iterator49::show
	bool ___show_2;
	// UnityEngine.Vector3 StoryManager/<FadeOutStory>c__Iterator49::<startPos>__1
	Vector3_t3525329789  ___U3CstartPosU3E__1_3;
	// UnityEngine.Vector3 StoryManager/<FadeOutStory>c__Iterator49::<endPos>__2
	Vector3_t3525329789  ___U3CendPosU3E__2_4;
	// System.Action StoryManager/<FadeOutStory>c__Iterator49::action
	Action_t437523947 * ___action_5;
	// System.Int32 StoryManager/<FadeOutStory>c__Iterator49::$PC
	int32_t ___U24PC_6;
	// System.Object StoryManager/<FadeOutStory>c__Iterator49::$current
	Il2CppObject * ___U24current_7;
	// System.Single StoryManager/<FadeOutStory>c__Iterator49::<$>duration
	float ___U3CU24U3Eduration_8;
	// System.Boolean StoryManager/<FadeOutStory>c__Iterator49::<$>show
	bool ___U3CU24U3Eshow_9;
	// System.Action StoryManager/<FadeOutStory>c__Iterator49::<$>action
	Action_t437523947 * ___U3CU24U3Eaction_10;
	// StoryManager StoryManager/<FadeOutStory>c__Iterator49::<>f__this
	StoryManager_t2533029144 * ___U3CU3Ef__this_11;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_duration_1() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___duration_1)); }
	inline float get_duration_1() const { return ___duration_1; }
	inline float* get_address_of_duration_1() { return &___duration_1; }
	inline void set_duration_1(float value)
	{
		___duration_1 = value;
	}

	inline static int32_t get_offset_of_show_2() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___show_2)); }
	inline bool get_show_2() const { return ___show_2; }
	inline bool* get_address_of_show_2() { return &___show_2; }
	inline void set_show_2(bool value)
	{
		___show_2 = value;
	}

	inline static int32_t get_offset_of_U3CstartPosU3E__1_3() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CstartPosU3E__1_3)); }
	inline Vector3_t3525329789  get_U3CstartPosU3E__1_3() const { return ___U3CstartPosU3E__1_3; }
	inline Vector3_t3525329789 * get_address_of_U3CstartPosU3E__1_3() { return &___U3CstartPosU3E__1_3; }
	inline void set_U3CstartPosU3E__1_3(Vector3_t3525329789  value)
	{
		___U3CstartPosU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E__2_4() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CendPosU3E__2_4)); }
	inline Vector3_t3525329789  get_U3CendPosU3E__2_4() const { return ___U3CendPosU3E__2_4; }
	inline Vector3_t3525329789 * get_address_of_U3CendPosU3E__2_4() { return &___U3CendPosU3E__2_4; }
	inline void set_U3CendPosU3E__2_4(Vector3_t3525329789  value)
	{
		___U3CendPosU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___action_5)); }
	inline Action_t437523947 * get_action_5() const { return ___action_5; }
	inline Action_t437523947 ** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(Action_t437523947 * value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier(&___action_5, value);
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eduration_8() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CU24U3Eduration_8)); }
	inline float get_U3CU24U3Eduration_8() const { return ___U3CU24U3Eduration_8; }
	inline float* get_address_of_U3CU24U3Eduration_8() { return &___U3CU24U3Eduration_8; }
	inline void set_U3CU24U3Eduration_8(float value)
	{
		___U3CU24U3Eduration_8 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Eshow_9() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CU24U3Eshow_9)); }
	inline bool get_U3CU24U3Eshow_9() const { return ___U3CU24U3Eshow_9; }
	inline bool* get_address_of_U3CU24U3Eshow_9() { return &___U3CU24U3Eshow_9; }
	inline void set_U3CU24U3Eshow_9(bool value)
	{
		___U3CU24U3Eshow_9 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Eaction_10() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CU24U3Eaction_10)); }
	inline Action_t437523947 * get_U3CU24U3Eaction_10() const { return ___U3CU24U3Eaction_10; }
	inline Action_t437523947 ** get_address_of_U3CU24U3Eaction_10() { return &___U3CU24U3Eaction_10; }
	inline void set_U3CU24U3Eaction_10(Action_t437523947 * value)
	{
		___U3CU24U3Eaction_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Eaction_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_11() { return static_cast<int32_t>(offsetof(U3CFadeOutStoryU3Ec__Iterator49_t3081571543, ___U3CU3Ef__this_11)); }
	inline StoryManager_t2533029144 * get_U3CU3Ef__this_11() const { return ___U3CU3Ef__this_11; }
	inline StoryManager_t2533029144 ** get_address_of_U3CU3Ef__this_11() { return &___U3CU3Ef__this_11; }
	inline void set_U3CU3Ef__this_11(StoryManager_t2533029144 * value)
	{
		___U3CU3Ef__this_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
