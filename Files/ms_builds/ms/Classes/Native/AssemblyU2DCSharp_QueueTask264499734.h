#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TaskManager/TaskState
struct TaskState_t2173790700;
// QueueTask/FinishedHandler
struct FinishedHandler_t2586567256;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QueueTask
struct  QueueTask_t264499734  : public Il2CppObject
{
public:
	// TaskManager/TaskState QueueTask::task
	TaskState_t2173790700 * ___task_0;
	// QueueTask/FinishedHandler QueueTask::Finished
	FinishedHandler_t2586567256 * ___Finished_1;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(QueueTask_t264499734, ___task_0)); }
	inline TaskState_t2173790700 * get_task_0() const { return ___task_0; }
	inline TaskState_t2173790700 ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(TaskState_t2173790700 * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier(&___task_0, value);
	}

	inline static int32_t get_offset_of_Finished_1() { return static_cast<int32_t>(offsetof(QueueTask_t264499734, ___Finished_1)); }
	inline FinishedHandler_t2586567256 * get_Finished_1() const { return ___Finished_1; }
	inline FinishedHandler_t2586567256 ** get_address_of_Finished_1() { return &___Finished_1; }
	inline void set_Finished_1(FinishedHandler_t2586567256 * value)
	{
		___Finished_1 = value;
		Il2CppCodeGenWriteBarrier(&___Finished_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
