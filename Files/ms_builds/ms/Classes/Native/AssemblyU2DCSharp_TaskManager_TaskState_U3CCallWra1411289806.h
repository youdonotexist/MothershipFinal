﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// TaskManager/TaskState/FinishedHandler
struct FinishedHandler_t2586567257;
// System.Object
struct Il2CppObject;
// TaskManager/TaskState
struct TaskState_t2173790700;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TaskManager/TaskState/<CallWrapper>c__Iterator68
struct  U3CCallWrapperU3Ec__Iterator68_t1411289806  : public Il2CppObject
{
public:
	// System.Collections.IEnumerator TaskManager/TaskState/<CallWrapper>c__Iterator68::<e>__0
	Il2CppObject * ___U3CeU3E__0_0;
	// TaskManager/TaskState/FinishedHandler TaskManager/TaskState/<CallWrapper>c__Iterator68::<handler>__1
	FinishedHandler_t2586567257 * ___U3ChandlerU3E__1_1;
	// System.Int32 TaskManager/TaskState/<CallWrapper>c__Iterator68::$PC
	int32_t ___U24PC_2;
	// System.Object TaskManager/TaskState/<CallWrapper>c__Iterator68::$current
	Il2CppObject * ___U24current_3;
	// TaskManager/TaskState TaskManager/TaskState/<CallWrapper>c__Iterator68::<>f__this
	TaskState_t2173790700 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CeU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCallWrapperU3Ec__Iterator68_t1411289806, ___U3CeU3E__0_0)); }
	inline Il2CppObject * get_U3CeU3E__0_0() const { return ___U3CeU3E__0_0; }
	inline Il2CppObject ** get_address_of_U3CeU3E__0_0() { return &___U3CeU3E__0_0; }
	inline void set_U3CeU3E__0_0(Il2CppObject * value)
	{
		___U3CeU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3ChandlerU3E__1_1() { return static_cast<int32_t>(offsetof(U3CCallWrapperU3Ec__Iterator68_t1411289806, ___U3ChandlerU3E__1_1)); }
	inline FinishedHandler_t2586567257 * get_U3ChandlerU3E__1_1() const { return ___U3ChandlerU3E__1_1; }
	inline FinishedHandler_t2586567257 ** get_address_of_U3ChandlerU3E__1_1() { return &___U3ChandlerU3E__1_1; }
	inline void set_U3ChandlerU3E__1_1(FinishedHandler_t2586567257 * value)
	{
		___U3ChandlerU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChandlerU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CCallWrapperU3Ec__Iterator68_t1411289806, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CCallWrapperU3Ec__Iterator68_t1411289806, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CCallWrapperU3Ec__Iterator68_t1411289806, ___U3CU3Ef__this_4)); }
	inline TaskState_t2173790700 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline TaskState_t2173790700 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(TaskState_t2173790700 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
