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
// System.Collections.Generic.List`1<UnityThreading.Task>
struct List_1_t3868870255;
// System.Action`1<System.Collections.Generic.IEnumerable`1<UnityThreading.Task>>
struct Action_1_t1797551051;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<ContinueWhenAllEnded>c__AnonStoreyA8
struct  U3CContinueWhenAllEndedU3Ec__AnonStoreyA8_t266477430  : public Il2CppObject
{
public:
	// System.Object UnityThreading.TaskExtension/<ContinueWhenAllEnded>c__AnonStoreyA8::syncRoot
	Il2CppObject * ___syncRoot_0;
	// System.Collections.Generic.List`1<UnityThreading.Task> UnityThreading.TaskExtension/<ContinueWhenAllEnded>c__AnonStoreyA8::finishedTasks
	List_1_t3868870255 * ___finishedTasks_1;
	// System.Int32 UnityThreading.TaskExtension/<ContinueWhenAllEnded>c__AnonStoreyA8::count
	int32_t ___count_2;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<UnityThreading.Task>> UnityThreading.TaskExtension/<ContinueWhenAllEnded>c__AnonStoreyA8::action
	Action_1_t1797551051 * ___action_3;

public:
	inline static int32_t get_offset_of_syncRoot_0() { return static_cast<int32_t>(offsetof(U3CContinueWhenAllEndedU3Ec__AnonStoreyA8_t266477430, ___syncRoot_0)); }
	inline Il2CppObject * get_syncRoot_0() const { return ___syncRoot_0; }
	inline Il2CppObject ** get_address_of_syncRoot_0() { return &___syncRoot_0; }
	inline void set_syncRoot_0(Il2CppObject * value)
	{
		___syncRoot_0 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_0, value);
	}

	inline static int32_t get_offset_of_finishedTasks_1() { return static_cast<int32_t>(offsetof(U3CContinueWhenAllEndedU3Ec__AnonStoreyA8_t266477430, ___finishedTasks_1)); }
	inline List_1_t3868870255 * get_finishedTasks_1() const { return ___finishedTasks_1; }
	inline List_1_t3868870255 ** get_address_of_finishedTasks_1() { return &___finishedTasks_1; }
	inline void set_finishedTasks_1(List_1_t3868870255 * value)
	{
		___finishedTasks_1 = value;
		Il2CppCodeGenWriteBarrier(&___finishedTasks_1, value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(U3CContinueWhenAllEndedU3Ec__AnonStoreyA8_t266477430, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CContinueWhenAllEndedU3Ec__AnonStoreyA8_t266477430, ___action_3)); }
	inline Action_1_t1797551051 * get_action_3() const { return ___action_3; }
	inline Action_1_t1797551051 ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_t1797551051 * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier(&___action_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
