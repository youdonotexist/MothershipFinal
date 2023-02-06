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
// System.Action`1<UnityThreading.Task`1<System.Object>>
struct Action_1_t3612276809;
// System.Object
struct Il2CppObject;
// UnityThreading.Task`1<System.Object>
struct Task_1_t3463824104;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1<System.Object>
struct  U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003  : public Il2CppObject
{
public:
	// UnityThreading.DispatcherBase UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1::target
	DispatcherBase_t1034334729 * ___target_0;
	// System.Action`1<UnityThreading.Task`1<T>> UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1::action
	Action_1_t3612276809 * ___action_1;
	// System.Object UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1::syncRoot
	Il2CppObject * ___syncRoot_2;
	// System.Boolean UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1::ended
	bool ___ended_3;
	// System.Action`1<UnityThreading.Task`1<T>> UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1::perform
	Action_1_t3612276809 * ___perform_4;
	// UnityThreading.Task`1<T> UnityThreading.TaskExtension/<WhenEnded>c__AnonStorey9E`1::task
	Task_1_t3463824104 * ___task_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003, ___target_0)); }
	inline DispatcherBase_t1034334729 * get_target_0() const { return ___target_0; }
	inline DispatcherBase_t1034334729 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(DispatcherBase_t1034334729 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003, ___action_1)); }
	inline Action_1_t3612276809 * get_action_1() const { return ___action_1; }
	inline Action_1_t3612276809 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(Action_1_t3612276809 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_syncRoot_2() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003, ___syncRoot_2)); }
	inline Il2CppObject * get_syncRoot_2() const { return ___syncRoot_2; }
	inline Il2CppObject ** get_address_of_syncRoot_2() { return &___syncRoot_2; }
	inline void set_syncRoot_2(Il2CppObject * value)
	{
		___syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_2, value);
	}

	inline static int32_t get_offset_of_ended_3() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003, ___ended_3)); }
	inline bool get_ended_3() const { return ___ended_3; }
	inline bool* get_address_of_ended_3() { return &___ended_3; }
	inline void set_ended_3(bool value)
	{
		___ended_3 = value;
	}

	inline static int32_t get_offset_of_perform_4() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003, ___perform_4)); }
	inline Action_1_t3612276809 * get_perform_4() const { return ___perform_4; }
	inline Action_1_t3612276809 ** get_address_of_perform_4() { return &___perform_4; }
	inline void set_perform_4(Action_1_t3612276809 * value)
	{
		___perform_4 = value;
		Il2CppCodeGenWriteBarrier(&___perform_4, value);
	}

	inline static int32_t get_offset_of_task_5() { return static_cast<int32_t>(offsetof(U3CWhenEndedU3Ec__AnonStorey9E_1_t1170110003, ___task_5)); }
	inline Task_1_t3463824104 * get_task_5() const { return ___task_5; }
	inline Task_1_t3463824104 ** get_address_of_task_5() { return &___task_5; }
	inline void set_task_5(Task_1_t3463824104 * value)
	{
		___task_5 = value;
		Il2CppCodeGenWriteBarrier(&___task_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
