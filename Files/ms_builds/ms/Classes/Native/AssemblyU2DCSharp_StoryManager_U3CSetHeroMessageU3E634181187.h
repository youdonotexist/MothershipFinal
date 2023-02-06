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
// System.Action
struct Action_t437523947;
// StoryManager
struct StoryManager_t2533029144;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoryManager/<SetHeroMessage>c__AnonStoreyB5
struct  U3CSetHeroMessageU3Ec__AnonStoreyB5_t634181187  : public Il2CppObject
{
public:
	// System.String StoryManager/<SetHeroMessage>c__AnonStoreyB5::message
	String_t* ___message_0;
	// System.Boolean StoryManager/<SetHeroMessage>c__AnonStoreyB5::typewriter
	bool ___typewriter_1;
	// System.Action StoryManager/<SetHeroMessage>c__AnonStoreyB5::finishAction
	Action_t437523947 * ___finishAction_2;
	// StoryManager StoryManager/<SetHeroMessage>c__AnonStoreyB5::<>f__this
	StoryManager_t2533029144 * ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CSetHeroMessageU3Ec__AnonStoreyB5_t634181187, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier(&___message_0, value);
	}

	inline static int32_t get_offset_of_typewriter_1() { return static_cast<int32_t>(offsetof(U3CSetHeroMessageU3Ec__AnonStoreyB5_t634181187, ___typewriter_1)); }
	inline bool get_typewriter_1() const { return ___typewriter_1; }
	inline bool* get_address_of_typewriter_1() { return &___typewriter_1; }
	inline void set_typewriter_1(bool value)
	{
		___typewriter_1 = value;
	}

	inline static int32_t get_offset_of_finishAction_2() { return static_cast<int32_t>(offsetof(U3CSetHeroMessageU3Ec__AnonStoreyB5_t634181187, ___finishAction_2)); }
	inline Action_t437523947 * get_finishAction_2() const { return ___finishAction_2; }
	inline Action_t437523947 ** get_address_of_finishAction_2() { return &___finishAction_2; }
	inline void set_finishAction_2(Action_t437523947 * value)
	{
		___finishAction_2 = value;
		Il2CppCodeGenWriteBarrier(&___finishAction_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CSetHeroMessageU3Ec__AnonStoreyB5_t634181187, ___U3CU3Ef__this_3)); }
	inline StoryManager_t2533029144 * get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline StoryManager_t2533029144 ** get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(StoryManager_t2533029144 * value)
	{
		___U3CU3Ef__this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
