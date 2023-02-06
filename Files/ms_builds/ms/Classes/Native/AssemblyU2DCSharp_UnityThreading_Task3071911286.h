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
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// UnityThreading.Task
struct Task_t3071911286;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Int322847414787.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.Task
struct  Task_t3071911286  : public Il2CppObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) UnityThreading.Task::Priority
	int32_t ___Priority_0;
	// System.Action UnityThreading.Task::TaskEnded
	Action_t437523947 * ___TaskEnded_1;
	// System.Threading.ManualResetEvent UnityThreading.Task::abortEvent
	ManualResetEvent_t2399218676 * ___abortEvent_2;
	// System.Threading.ManualResetEvent UnityThreading.Task::endedEvent
	ManualResetEvent_t2399218676 * ___endedEvent_3;
	// System.Threading.ManualResetEvent UnityThreading.Task::endingEvent
	ManualResetEvent_t2399218676 * ___endingEvent_4;
	// System.Boolean UnityThreading.Task::hasStarted
	bool ___hasStarted_5;
	// System.Boolean UnityThreading.Task::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_Priority_0() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___Priority_0)); }
	inline int32_t get_Priority_0() const { return ___Priority_0; }
	inline int32_t* get_address_of_Priority_0() { return &___Priority_0; }
	inline void set_Priority_0(int32_t value)
	{
		___Priority_0 = value;
	}

	inline static int32_t get_offset_of_TaskEnded_1() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___TaskEnded_1)); }
	inline Action_t437523947 * get_TaskEnded_1() const { return ___TaskEnded_1; }
	inline Action_t437523947 ** get_address_of_TaskEnded_1() { return &___TaskEnded_1; }
	inline void set_TaskEnded_1(Action_t437523947 * value)
	{
		___TaskEnded_1 = value;
		Il2CppCodeGenWriteBarrier(&___TaskEnded_1, value);
	}

	inline static int32_t get_offset_of_abortEvent_2() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___abortEvent_2)); }
	inline ManualResetEvent_t2399218676 * get_abortEvent_2() const { return ___abortEvent_2; }
	inline ManualResetEvent_t2399218676 ** get_address_of_abortEvent_2() { return &___abortEvent_2; }
	inline void set_abortEvent_2(ManualResetEvent_t2399218676 * value)
	{
		___abortEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___abortEvent_2, value);
	}

	inline static int32_t get_offset_of_endedEvent_3() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___endedEvent_3)); }
	inline ManualResetEvent_t2399218676 * get_endedEvent_3() const { return ___endedEvent_3; }
	inline ManualResetEvent_t2399218676 ** get_address_of_endedEvent_3() { return &___endedEvent_3; }
	inline void set_endedEvent_3(ManualResetEvent_t2399218676 * value)
	{
		___endedEvent_3 = value;
		Il2CppCodeGenWriteBarrier(&___endedEvent_3, value);
	}

	inline static int32_t get_offset_of_endingEvent_4() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___endingEvent_4)); }
	inline ManualResetEvent_t2399218676 * get_endingEvent_4() const { return ___endingEvent_4; }
	inline ManualResetEvent_t2399218676 ** get_address_of_endingEvent_4() { return &___endingEvent_4; }
	inline void set_endingEvent_4(ManualResetEvent_t2399218676 * value)
	{
		___endingEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___endingEvent_4, value);
	}

	inline static int32_t get_offset_of_hasStarted_5() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___hasStarted_5)); }
	inline bool get_hasStarted_5() const { return ___hasStarted_5; }
	inline bool* get_address_of_hasStarted_5() { return &___hasStarted_5; }
	inline void set_hasStarted_5(bool value)
	{
		___hasStarted_5 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Task_t3071911286, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Task_t3071911286_ThreadStaticFields
{
public:
	// UnityThreading.Task UnityThreading.Task::current
	Task_t3071911286 * ___current_6;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(Task_t3071911286_ThreadStaticFields, ___current_6)); }
	inline Task_t3071911286 * get_current_6() const { return ___current_6; }
	inline Task_t3071911286 ** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(Task_t3071911286 * value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier(&___current_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
