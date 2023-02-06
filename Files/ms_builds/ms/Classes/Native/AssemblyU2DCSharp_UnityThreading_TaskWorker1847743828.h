#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.Dispatcher
struct Dispatcher_t3850236568;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;

#include "AssemblyU2DCSharp_UnityThreading_ThreadBase3877260268.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskWorker
struct  TaskWorker_t1847743828  : public ThreadBase_t3877260268
{
public:
	// UnityThreading.Dispatcher UnityThreading.TaskWorker::Dispatcher
	Dispatcher_t3850236568 * ___Dispatcher_5;
	// UnityThreading.TaskDistributor UnityThreading.TaskWorker::<TaskDistributor>k__BackingField
	TaskDistributor_t3607791827 * ___U3CTaskDistributorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_Dispatcher_5() { return static_cast<int32_t>(offsetof(TaskWorker_t1847743828, ___Dispatcher_5)); }
	inline Dispatcher_t3850236568 * get_Dispatcher_5() const { return ___Dispatcher_5; }
	inline Dispatcher_t3850236568 ** get_address_of_Dispatcher_5() { return &___Dispatcher_5; }
	inline void set_Dispatcher_5(Dispatcher_t3850236568 * value)
	{
		___Dispatcher_5 = value;
		Il2CppCodeGenWriteBarrier(&___Dispatcher_5, value);
	}

	inline static int32_t get_offset_of_U3CTaskDistributorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TaskWorker_t1847743828, ___U3CTaskDistributorU3Ek__BackingField_6)); }
	inline TaskDistributor_t3607791827 * get_U3CTaskDistributorU3Ek__BackingField_6() const { return ___U3CTaskDistributorU3Ek__BackingField_6; }
	inline TaskDistributor_t3607791827 ** get_address_of_U3CTaskDistributorU3Ek__BackingField_6() { return &___U3CTaskDistributorU3Ek__BackingField_6; }
	inline void set_U3CTaskDistributorU3Ek__BackingField_6(TaskDistributor_t3607791827 * value)
	{
		___U3CTaskDistributorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTaskDistributorU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
