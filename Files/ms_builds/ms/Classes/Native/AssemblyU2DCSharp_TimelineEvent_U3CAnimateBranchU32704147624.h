#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Object
struct Il2CppObject;
// TimelineEvent
struct TimelineEvent_t3300482745;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimelineEvent/<AnimateBranch>c__Iterator4B
struct  U3CAnimateBranchU3Ec__Iterator4B_t2704147624  : public Il2CppObject
{
public:
	// UnityEngine.Vector3[] TimelineEvent/<AnimateBranch>c__Iterator4B::<points>__0
	Vector3U5BU5D_t3227571696* ___U3CpointsU3E__0_0;
	// System.Single TimelineEvent/<AnimateBranch>c__Iterator4B::<duration>__1
	float ___U3CdurationU3E__1_1;
	// System.Single TimelineEvent/<AnimateBranch>c__Iterator4B::<elapsed>__2
	float ___U3CelapsedU3E__2_2;
	// UnityEngine.Vector3 TimelineEvent/<AnimateBranch>c__Iterator4B::<newPos>__3
	Vector3_t3525329789  ___U3CnewPosU3E__3_3;
	// UnityEngine.GameObject TimelineEvent/<AnimateBranch>c__Iterator4B::<go>__4
	GameObject_t4012695102 * ___U3CgoU3E__4_4;
	// System.Int32 TimelineEvent/<AnimateBranch>c__Iterator4B::$PC
	int32_t ___U24PC_5;
	// System.Object TimelineEvent/<AnimateBranch>c__Iterator4B::$current
	Il2CppObject * ___U24current_6;
	// TimelineEvent TimelineEvent/<AnimateBranch>c__Iterator4B::<>f__this
	TimelineEvent_t3300482745 * ___U3CU3Ef__this_7;

public:
	inline static int32_t get_offset_of_U3CpointsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U3CpointsU3E__0_0)); }
	inline Vector3U5BU5D_t3227571696* get_U3CpointsU3E__0_0() const { return ___U3CpointsU3E__0_0; }
	inline Vector3U5BU5D_t3227571696** get_address_of_U3CpointsU3E__0_0() { return &___U3CpointsU3E__0_0; }
	inline void set_U3CpointsU3E__0_0(Vector3U5BU5D_t3227571696* value)
	{
		___U3CpointsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpointsU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CdurationU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U3CdurationU3E__1_1)); }
	inline float get_U3CdurationU3E__1_1() const { return ___U3CdurationU3E__1_1; }
	inline float* get_address_of_U3CdurationU3E__1_1() { return &___U3CdurationU3E__1_1; }
	inline void set_U3CdurationU3E__1_1(float value)
	{
		___U3CdurationU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__2_2() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U3CelapsedU3E__2_2)); }
	inline float get_U3CelapsedU3E__2_2() const { return ___U3CelapsedU3E__2_2; }
	inline float* get_address_of_U3CelapsedU3E__2_2() { return &___U3CelapsedU3E__2_2; }
	inline void set_U3CelapsedU3E__2_2(float value)
	{
		___U3CelapsedU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CnewPosU3E__3_3() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U3CnewPosU3E__3_3)); }
	inline Vector3_t3525329789  get_U3CnewPosU3E__3_3() const { return ___U3CnewPosU3E__3_3; }
	inline Vector3_t3525329789 * get_address_of_U3CnewPosU3E__3_3() { return &___U3CnewPosU3E__3_3; }
	inline void set_U3CnewPosU3E__3_3(Vector3_t3525329789  value)
	{
		___U3CnewPosU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_U3CgoU3E__4_4() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U3CgoU3E__4_4)); }
	inline GameObject_t4012695102 * get_U3CgoU3E__4_4() const { return ___U3CgoU3E__4_4; }
	inline GameObject_t4012695102 ** get_address_of_U3CgoU3E__4_4() { return &___U3CgoU3E__4_4; }
	inline void set_U3CgoU3E__4_4(GameObject_t4012695102 * value)
	{
		___U3CgoU3E__4_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgoU3E__4_4, value);
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_7() { return static_cast<int32_t>(offsetof(U3CAnimateBranchU3Ec__Iterator4B_t2704147624, ___U3CU3Ef__this_7)); }
	inline TimelineEvent_t3300482745 * get_U3CU3Ef__this_7() const { return ___U3CU3Ef__this_7; }
	inline TimelineEvent_t3300482745 ** get_address_of_U3CU3Ef__this_7() { return &___U3CU3Ef__this_7; }
	inline void set_U3CU3Ef__this_7(TimelineEvent_t3300482745 * value)
	{
		___U3CU3Ef__this_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
