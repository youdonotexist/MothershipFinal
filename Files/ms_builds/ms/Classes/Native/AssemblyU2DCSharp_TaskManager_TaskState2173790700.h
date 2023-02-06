#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// TaskManager/TaskState/FinishedHandler
struct FinishedHandler_t2586567257;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TaskManager/TaskState
struct  TaskState_t2173790700  : public Il2CppObject
{
public:
	// System.Collections.IEnumerator TaskManager/TaskState::coroutine
	Il2CppObject * ___coroutine_0;
	// System.Boolean TaskManager/TaskState::running
	bool ___running_1;
	// System.Boolean TaskManager/TaskState::paused
	bool ___paused_2;
	// System.Boolean TaskManager/TaskState::stopped
	bool ___stopped_3;
	// System.String TaskManager/TaskState::name
	String_t* ___name_4;
	// TaskManager/TaskState/FinishedHandler TaskManager/TaskState::Finished
	FinishedHandler_t2586567257 * ___Finished_5;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(TaskState_t2173790700, ___coroutine_0)); }
	inline Il2CppObject * get_coroutine_0() const { return ___coroutine_0; }
	inline Il2CppObject ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Il2CppObject * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_0, value);
	}

	inline static int32_t get_offset_of_running_1() { return static_cast<int32_t>(offsetof(TaskState_t2173790700, ___running_1)); }
	inline bool get_running_1() const { return ___running_1; }
	inline bool* get_address_of_running_1() { return &___running_1; }
	inline void set_running_1(bool value)
	{
		___running_1 = value;
	}

	inline static int32_t get_offset_of_paused_2() { return static_cast<int32_t>(offsetof(TaskState_t2173790700, ___paused_2)); }
	inline bool get_paused_2() const { return ___paused_2; }
	inline bool* get_address_of_paused_2() { return &___paused_2; }
	inline void set_paused_2(bool value)
	{
		___paused_2 = value;
	}

	inline static int32_t get_offset_of_stopped_3() { return static_cast<int32_t>(offsetof(TaskState_t2173790700, ___stopped_3)); }
	inline bool get_stopped_3() const { return ___stopped_3; }
	inline bool* get_address_of_stopped_3() { return &___stopped_3; }
	inline void set_stopped_3(bool value)
	{
		___stopped_3 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(TaskState_t2173790700, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_Finished_5() { return static_cast<int32_t>(offsetof(TaskState_t2173790700, ___Finished_5)); }
	inline FinishedHandler_t2586567257 * get_Finished_5() const { return ___Finished_5; }
	inline FinishedHandler_t2586567257 ** get_address_of_Finished_5() { return &___Finished_5; }
	inline void set_Finished_5(FinishedHandler_t2586567257 * value)
	{
		___Finished_5 = value;
		Il2CppCodeGenWriteBarrier(&___Finished_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
