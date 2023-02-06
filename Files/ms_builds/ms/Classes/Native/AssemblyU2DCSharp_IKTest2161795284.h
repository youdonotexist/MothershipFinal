#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// ArmManager
struct ArmManager_t3707824593;
// Joint[]
struct JointU5BU5D_t1829910191;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1585173756;
// ArmGrabber
struct ArmGrabber_t3152484583;
// Bone[]
struct BoneU5BU5D_t3798918413;
// Magnet
struct Magnet_t2297203594;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IKTest
struct  IKTest_t2161795284  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform IKTest::target
	Transform_t284553113 * ___target_2;
	// ArmManager IKTest::_armManager
	ArmManager_t3707824593 * ____armManager_3;
	// Joint[] IKTest::_joints
	JointU5BU5D_t1829910191* ____joints_4;
	// UnityEngine.Transform[] IKTest::_jointTransforms
	TransformU5BU5D_t3681339876* ____jointTransforms_5;
	// UnityEngine.Collider[] IKTest::_colliders
	ColliderU5BU5D_t1585173756* ____colliders_6;
	// ArmGrabber IKTest::_armGrabber
	ArmGrabber_t3152484583 * ____armGrabber_7;
	// UnityEngine.Transform IKTest::m_Effector
	Transform_t284553113 * ___m_Effector_8;
	// UnityEngine.Transform IKTest::idleTarget
	Transform_t284553113 * ___idleTarget_9;
	// UnityEngine.Transform IKTest::idleTargetHolder
	Transform_t284553113 * ___idleTargetHolder_10;
	// System.Boolean IKTest::UpperArm
	bool ___UpperArm_11;
	// Bone[] IKTest::_bones
	BoneU5BU5D_t3798918413* ____bones_12;
	// Magnet IKTest::_magnet
	Magnet_t2297203594 * ____magnet_13;
	// System.Single IKTest::tick
	float ___tick_14;
	// System.Single IKTest::tickElapsed
	float ___tickElapsed_15;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___target_2)); }
	inline Transform_t284553113 * get_target_2() const { return ___target_2; }
	inline Transform_t284553113 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t284553113 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of__armManager_3() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____armManager_3)); }
	inline ArmManager_t3707824593 * get__armManager_3() const { return ____armManager_3; }
	inline ArmManager_t3707824593 ** get_address_of__armManager_3() { return &____armManager_3; }
	inline void set__armManager_3(ArmManager_t3707824593 * value)
	{
		____armManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____armManager_3, value);
	}

	inline static int32_t get_offset_of__joints_4() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____joints_4)); }
	inline JointU5BU5D_t1829910191* get__joints_4() const { return ____joints_4; }
	inline JointU5BU5D_t1829910191** get_address_of__joints_4() { return &____joints_4; }
	inline void set__joints_4(JointU5BU5D_t1829910191* value)
	{
		____joints_4 = value;
		Il2CppCodeGenWriteBarrier(&____joints_4, value);
	}

	inline static int32_t get_offset_of__jointTransforms_5() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____jointTransforms_5)); }
	inline TransformU5BU5D_t3681339876* get__jointTransforms_5() const { return ____jointTransforms_5; }
	inline TransformU5BU5D_t3681339876** get_address_of__jointTransforms_5() { return &____jointTransforms_5; }
	inline void set__jointTransforms_5(TransformU5BU5D_t3681339876* value)
	{
		____jointTransforms_5 = value;
		Il2CppCodeGenWriteBarrier(&____jointTransforms_5, value);
	}

	inline static int32_t get_offset_of__colliders_6() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____colliders_6)); }
	inline ColliderU5BU5D_t1585173756* get__colliders_6() const { return ____colliders_6; }
	inline ColliderU5BU5D_t1585173756** get_address_of__colliders_6() { return &____colliders_6; }
	inline void set__colliders_6(ColliderU5BU5D_t1585173756* value)
	{
		____colliders_6 = value;
		Il2CppCodeGenWriteBarrier(&____colliders_6, value);
	}

	inline static int32_t get_offset_of__armGrabber_7() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____armGrabber_7)); }
	inline ArmGrabber_t3152484583 * get__armGrabber_7() const { return ____armGrabber_7; }
	inline ArmGrabber_t3152484583 ** get_address_of__armGrabber_7() { return &____armGrabber_7; }
	inline void set__armGrabber_7(ArmGrabber_t3152484583 * value)
	{
		____armGrabber_7 = value;
		Il2CppCodeGenWriteBarrier(&____armGrabber_7, value);
	}

	inline static int32_t get_offset_of_m_Effector_8() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___m_Effector_8)); }
	inline Transform_t284553113 * get_m_Effector_8() const { return ___m_Effector_8; }
	inline Transform_t284553113 ** get_address_of_m_Effector_8() { return &___m_Effector_8; }
	inline void set_m_Effector_8(Transform_t284553113 * value)
	{
		___m_Effector_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Effector_8, value);
	}

	inline static int32_t get_offset_of_idleTarget_9() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___idleTarget_9)); }
	inline Transform_t284553113 * get_idleTarget_9() const { return ___idleTarget_9; }
	inline Transform_t284553113 ** get_address_of_idleTarget_9() { return &___idleTarget_9; }
	inline void set_idleTarget_9(Transform_t284553113 * value)
	{
		___idleTarget_9 = value;
		Il2CppCodeGenWriteBarrier(&___idleTarget_9, value);
	}

	inline static int32_t get_offset_of_idleTargetHolder_10() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___idleTargetHolder_10)); }
	inline Transform_t284553113 * get_idleTargetHolder_10() const { return ___idleTargetHolder_10; }
	inline Transform_t284553113 ** get_address_of_idleTargetHolder_10() { return &___idleTargetHolder_10; }
	inline void set_idleTargetHolder_10(Transform_t284553113 * value)
	{
		___idleTargetHolder_10 = value;
		Il2CppCodeGenWriteBarrier(&___idleTargetHolder_10, value);
	}

	inline static int32_t get_offset_of_UpperArm_11() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___UpperArm_11)); }
	inline bool get_UpperArm_11() const { return ___UpperArm_11; }
	inline bool* get_address_of_UpperArm_11() { return &___UpperArm_11; }
	inline void set_UpperArm_11(bool value)
	{
		___UpperArm_11 = value;
	}

	inline static int32_t get_offset_of__bones_12() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____bones_12)); }
	inline BoneU5BU5D_t3798918413* get__bones_12() const { return ____bones_12; }
	inline BoneU5BU5D_t3798918413** get_address_of__bones_12() { return &____bones_12; }
	inline void set__bones_12(BoneU5BU5D_t3798918413* value)
	{
		____bones_12 = value;
		Il2CppCodeGenWriteBarrier(&____bones_12, value);
	}

	inline static int32_t get_offset_of__magnet_13() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ____magnet_13)); }
	inline Magnet_t2297203594 * get__magnet_13() const { return ____magnet_13; }
	inline Magnet_t2297203594 ** get_address_of__magnet_13() { return &____magnet_13; }
	inline void set__magnet_13(Magnet_t2297203594 * value)
	{
		____magnet_13 = value;
		Il2CppCodeGenWriteBarrier(&____magnet_13, value);
	}

	inline static int32_t get_offset_of_tick_14() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___tick_14)); }
	inline float get_tick_14() const { return ___tick_14; }
	inline float* get_address_of_tick_14() { return &___tick_14; }
	inline void set_tick_14(float value)
	{
		___tick_14 = value;
	}

	inline static int32_t get_offset_of_tickElapsed_15() { return static_cast<int32_t>(offsetof(IKTest_t2161795284, ___tickElapsed_15)); }
	inline float get_tickElapsed_15() const { return ___tickElapsed_15; }
	inline float* get_address_of_tickElapsed_15() { return &___tickElapsed_15; }
	inline void set_tickElapsed_15(float value)
	{
		___tickElapsed_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
