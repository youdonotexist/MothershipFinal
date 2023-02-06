#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<QueueTask>
struct List_1_t1061458703;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TaskQueue
struct  TaskQueue_t2171977324  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<QueueTask> TaskQueue::queue
	List_1_t1061458703 * ___queue_2;
	// System.Collections.Generic.List`1<QueueTask> TaskQueue::delete
	List_1_t1061458703 * ___delete_3;

public:
	inline static int32_t get_offset_of_queue_2() { return static_cast<int32_t>(offsetof(TaskQueue_t2171977324, ___queue_2)); }
	inline List_1_t1061458703 * get_queue_2() const { return ___queue_2; }
	inline List_1_t1061458703 ** get_address_of_queue_2() { return &___queue_2; }
	inline void set_queue_2(List_1_t1061458703 * value)
	{
		___queue_2 = value;
		Il2CppCodeGenWriteBarrier(&___queue_2, value);
	}

	inline static int32_t get_offset_of_delete_3() { return static_cast<int32_t>(offsetof(TaskQueue_t2171977324, ___delete_3)); }
	inline List_1_t1061458703 * get_delete_3() const { return ___delete_3; }
	inline List_1_t1061458703 ** get_address_of_delete_3() { return &___delete_3; }
	inline void set_delete_3(List_1_t1061458703 * value)
	{
		___delete_3 = value;
		Il2CppCodeGenWriteBarrier(&___delete_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
