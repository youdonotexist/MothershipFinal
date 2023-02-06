#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<ContinueWhenAnyEnded>c__AnonStoreyA6
struct  U3CContinueWhenAnyEndedU3Ec__AnonStoreyA6_t2031078409  : public Il2CppObject
{
public:
	// System.Object UnityThreading.TaskExtension/<ContinueWhenAnyEnded>c__AnonStoreyA6::syncRoot
	Il2CppObject * ___syncRoot_0;
	// System.Boolean UnityThreading.TaskExtension/<ContinueWhenAnyEnded>c__AnonStoreyA6::done
	bool ___done_1;
	// System.Action`1<UnityThreading.Task> UnityThreading.TaskExtension/<ContinueWhenAnyEnded>c__AnonStoreyA6::action
	Action_1_t3220363991 * ___action_2;

public:
	inline static int32_t get_offset_of_syncRoot_0() { return static_cast<int32_t>(offsetof(U3CContinueWhenAnyEndedU3Ec__AnonStoreyA6_t2031078409, ___syncRoot_0)); }
	inline Il2CppObject * get_syncRoot_0() const { return ___syncRoot_0; }
	inline Il2CppObject ** get_address_of_syncRoot_0() { return &___syncRoot_0; }
	inline void set_syncRoot_0(Il2CppObject * value)
	{
		___syncRoot_0 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_0, value);
	}

	inline static int32_t get_offset_of_done_1() { return static_cast<int32_t>(offsetof(U3CContinueWhenAnyEndedU3Ec__AnonStoreyA6_t2031078409, ___done_1)); }
	inline bool get_done_1() const { return ___done_1; }
	inline bool* get_address_of_done_1() { return &___done_1; }
	inline void set_done_1(bool value)
	{
		___done_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(U3CContinueWhenAnyEndedU3Ec__AnonStoreyA6_t2031078409, ___action_2)); }
	inline Action_1_t3220363991 * get_action_2() const { return ___action_2; }
	inline Action_1_t3220363991 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(Action_1_t3220363991 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier(&___action_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
