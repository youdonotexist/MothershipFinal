#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityThreading.Task>
struct List_1_t3868870255;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// System.Comparison`1<UnityThreading.Task>
struct Comparison_1_t1480618866;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_UnityThreading_TaskSortingSystem1708037887.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityThreading.DispatcherBase
struct  DispatcherBase_t1034334729  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityThreading.Task> UnityThreading.DispatcherBase::taskList
	List_1_t3868870255 * ___taskList_0;
	// System.Threading.ManualResetEvent UnityThreading.DispatcherBase::dataEvent
	ManualResetEvent_t2399218676 * ___dataEvent_1;
	// System.Boolean UnityThreading.DispatcherBase::AllowAccessLimitationChecks
	bool ___AllowAccessLimitationChecks_2;
	// UnityThreading.TaskSortingSystem UnityThreading.DispatcherBase::TaskSortingSystem
	int32_t ___TaskSortingSystem_3;

public:
	inline static int32_t get_offset_of_taskList_0() { return static_cast<int32_t>(offsetof(DispatcherBase_t1034334729, ___taskList_0)); }
	inline List_1_t3868870255 * get_taskList_0() const { return ___taskList_0; }
	inline List_1_t3868870255 ** get_address_of_taskList_0() { return &___taskList_0; }
	inline void set_taskList_0(List_1_t3868870255 * value)
	{
		___taskList_0 = value;
		Il2CppCodeGenWriteBarrier(&___taskList_0, value);
	}

	inline static int32_t get_offset_of_dataEvent_1() { return static_cast<int32_t>(offsetof(DispatcherBase_t1034334729, ___dataEvent_1)); }
	inline ManualResetEvent_t2399218676 * get_dataEvent_1() const { return ___dataEvent_1; }
	inline ManualResetEvent_t2399218676 ** get_address_of_dataEvent_1() { return &___dataEvent_1; }
	inline void set_dataEvent_1(ManualResetEvent_t2399218676 * value)
	{
		___dataEvent_1 = value;
		Il2CppCodeGenWriteBarrier(&___dataEvent_1, value);
	}

	inline static int32_t get_offset_of_AllowAccessLimitationChecks_2() { return static_cast<int32_t>(offsetof(DispatcherBase_t1034334729, ___AllowAccessLimitationChecks_2)); }
	inline bool get_AllowAccessLimitationChecks_2() const { return ___AllowAccessLimitationChecks_2; }
	inline bool* get_address_of_AllowAccessLimitationChecks_2() { return &___AllowAccessLimitationChecks_2; }
	inline void set_AllowAccessLimitationChecks_2(bool value)
	{
		___AllowAccessLimitationChecks_2 = value;
	}

	inline static int32_t get_offset_of_TaskSortingSystem_3() { return static_cast<int32_t>(offsetof(DispatcherBase_t1034334729, ___TaskSortingSystem_3)); }
	inline int32_t get_TaskSortingSystem_3() const { return ___TaskSortingSystem_3; }
	inline int32_t* get_address_of_TaskSortingSystem_3() { return &___TaskSortingSystem_3; }
	inline void set_TaskSortingSystem_3(int32_t value)
	{
		___TaskSortingSystem_3 = value;
	}
};

struct DispatcherBase_t1034334729_StaticFields
{
public:
	// System.Comparison`1<UnityThreading.Task> UnityThreading.DispatcherBase::<>f__am$cache4
	Comparison_1_t1480618866 * ___U3CU3Ef__amU24cache4_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(DispatcherBase_t1034334729_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Comparison_1_t1480618866 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Comparison_1_t1480618866 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Comparison_1_t1480618866 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
