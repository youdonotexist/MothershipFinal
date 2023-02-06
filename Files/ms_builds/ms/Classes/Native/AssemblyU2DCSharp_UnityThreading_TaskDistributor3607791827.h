#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityThreading.TaskWorker[]
struct TaskWorkerU5BU5D_t1969628893;
// UnityThreading.TaskDistributor
struct TaskDistributor_t3607791827;
// System.String
struct String_t;
// System.Func`2<UnityThreading.TaskWorker,System.Boolean>
struct Func_2_t3467787393;

#include "AssemblyU2DCSharp_UnityThreading_DispatcherBase1034334729.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.TaskDistributor
struct  TaskDistributor_t3607791827  : public DispatcherBase_t1034334729
{
public:
	// UnityThreading.TaskWorker[] UnityThreading.TaskDistributor::workerThreads
	TaskWorkerU5BU5D_t1969628893* ___workerThreads_5;
	// System.Boolean UnityThreading.TaskDistributor::AllowDynamicGrowth
	bool ___AllowDynamicGrowth_7;
	// System.String UnityThreading.TaskDistributor::name
	String_t* ___name_8;

public:
	inline static int32_t get_offset_of_workerThreads_5() { return static_cast<int32_t>(offsetof(TaskDistributor_t3607791827, ___workerThreads_5)); }
	inline TaskWorkerU5BU5D_t1969628893* get_workerThreads_5() const { return ___workerThreads_5; }
	inline TaskWorkerU5BU5D_t1969628893** get_address_of_workerThreads_5() { return &___workerThreads_5; }
	inline void set_workerThreads_5(TaskWorkerU5BU5D_t1969628893* value)
	{
		___workerThreads_5 = value;
		Il2CppCodeGenWriteBarrier(&___workerThreads_5, value);
	}

	inline static int32_t get_offset_of_AllowDynamicGrowth_7() { return static_cast<int32_t>(offsetof(TaskDistributor_t3607791827, ___AllowDynamicGrowth_7)); }
	inline bool get_AllowDynamicGrowth_7() const { return ___AllowDynamicGrowth_7; }
	inline bool* get_address_of_AllowDynamicGrowth_7() { return &___AllowDynamicGrowth_7; }
	inline void set_AllowDynamicGrowth_7(bool value)
	{
		___AllowDynamicGrowth_7 = value;
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(TaskDistributor_t3607791827, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier(&___name_8, value);
	}
};

struct TaskDistributor_t3607791827_StaticFields
{
public:
	// UnityThreading.TaskDistributor UnityThreading.TaskDistributor::mainTaskDistributor
	TaskDistributor_t3607791827 * ___mainTaskDistributor_6;
	// System.Func`2<UnityThreading.TaskWorker,System.Boolean> UnityThreading.TaskDistributor::<>f__am$cache4
	Func_2_t3467787393 * ___U3CU3Ef__amU24cache4_9;

public:
	inline static int32_t get_offset_of_mainTaskDistributor_6() { return static_cast<int32_t>(offsetof(TaskDistributor_t3607791827_StaticFields, ___mainTaskDistributor_6)); }
	inline TaskDistributor_t3607791827 * get_mainTaskDistributor_6() const { return ___mainTaskDistributor_6; }
	inline TaskDistributor_t3607791827 ** get_address_of_mainTaskDistributor_6() { return &___mainTaskDistributor_6; }
	inline void set_mainTaskDistributor_6(TaskDistributor_t3607791827 * value)
	{
		___mainTaskDistributor_6 = value;
		Il2CppCodeGenWriteBarrier(&___mainTaskDistributor_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_9() { return static_cast<int32_t>(offsetof(TaskDistributor_t3607791827_StaticFields, ___U3CU3Ef__amU24cache4_9)); }
	inline Func_2_t3467787393 * get_U3CU3Ef__amU24cache4_9() const { return ___U3CU3Ef__amU24cache4_9; }
	inline Func_2_t3467787393 ** get_address_of_U3CU3Ef__amU24cache4_9() { return &___U3CU3Ef__amU24cache4_9; }
	inline void set_U3CU3Ef__amU24cache4_9(Func_2_t3467787393 * value)
	{
		___U3CU3Ef__amU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
