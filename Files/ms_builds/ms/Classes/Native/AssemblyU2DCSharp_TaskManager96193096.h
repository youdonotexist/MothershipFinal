#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TaskManager
struct TaskManager_t96193096;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TaskManager
struct  TaskManager_t96193096  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct TaskManager_t96193096_StaticFields
{
public:
	// TaskManager TaskManager::singleton
	TaskManager_t96193096 * ___singleton_2;

public:
	inline static int32_t get_offset_of_singleton_2() { return static_cast<int32_t>(offsetof(TaskManager_t96193096_StaticFields, ___singleton_2)); }
	inline TaskManager_t96193096 * get_singleton_2() const { return ___singleton_2; }
	inline TaskManager_t96193096 ** get_address_of_singleton_2() { return &___singleton_2; }
	inline void set_singleton_2(TaskManager_t96193096 * value)
	{
		___singleton_2 = value;
		Il2CppCodeGenWriteBarrier(&___singleton_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
