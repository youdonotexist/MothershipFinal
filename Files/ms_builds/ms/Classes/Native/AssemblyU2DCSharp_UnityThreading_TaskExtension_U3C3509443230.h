#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.DispatcherBase
struct DispatcherBase_t1034334729;
// System.Action`1<UnityThreading.Task>
struct Action_1_t3220363991;
// System.Object
struct Il2CppObject;
// UnityThreading.Task
struct Task_t3071911286;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2
struct  U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230  : public Il2CppObject
{
public:
	// UnityThreading.DispatcherBase UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2::target
	DispatcherBase_t1034334729 * ___target_0;
	// System.Action`1<UnityThreading.Task> UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2::action
	Action_1_t3220363991 * ___action_1;
	// System.Object UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2::syncRoot
	Il2CppObject * ___syncRoot_2;
	// System.Boolean UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2::ended
	bool ___ended_3;
	// System.Action`1<UnityThreading.Task> UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2::perform
	Action_1_t3220363991 * ___perform_4;
	// UnityThreading.Task UnityThreading.TaskExtension/<WhenEnded>c__AnonStoreyA2::task
	Task_t3071911286 * ___task_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230, ___target_0)); }
	inline DispatcherBase_t1034334729 * get_target_0() const { return ___target_0; }
	inline DispatcherBase_t1034334729 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(DispatcherBase_t1034334729 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230, ___action_1)); }
	inline Action_1_t3220363991 * get_action_1() const { return ___action_1; }
	inline Action_1_t3220363991 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_1_t3220363991 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_syncRoot_2() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230, ___syncRoot_2)); }
	inline Il2CppObject * get_syncRoot_2() const { return ___syncRoot_2; }
	inline Il2CppObject ** get_address_of_syncRoot_2() { return &___syncRoot_2; }
	inline void set_syncRoot_2(Il2CppObject * value)
	{
		___syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_2, value);
	}

	inline static int32_t get_offset_of_ended_3() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230, ___ended_3)); }
	inline bool get_ended_3() const { return ___ended_3; }
	inline bool* get_address_of_ended_3() { return &___ended_3; }
	inline void set_ended_3(bool value)
	{
		___ended_3 = value;
	}

	inline static int32_t get_offset_of_perform_4() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230, ___perform_4)); }
	inline Action_1_t3220363991 * get_perform_4() const { return ___perform_4; }
	inline Action_1_t3220363991 ** get_address_of_perform_4() { return &___perform_4; }
	inline void set_perform_4(Action_1_t3220363991 * value)
	{
		___perform_4 = value;
		Il2CppCodeGenWriteBarrier(&___perform_4, value);
	}

	inline static int32_t get_offset_of_task_5() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStoreyA2_t3509443230, ___task_5)); }
	inline Task_t3071911286 * get_task_5() const { return ___task_5; }
	inline Task_t3071911286 ** get_address_of_task_5() { return &___task_5; }
	inline void set_task_5(Task_t3071911286 * value)
	{
		___task_5 = value;
		Il2CppCodeGenWriteBarrier(&___task_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
