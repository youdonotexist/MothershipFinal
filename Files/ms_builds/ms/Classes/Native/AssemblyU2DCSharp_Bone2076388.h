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
// Damagable
struct Damagable_t4024817136;
// exSprite
struct exSprite_t1539598680;
// UnityEngine.BoxCollider
struct BoxCollider_t131631884;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Bone_JointOrientation3568123654.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Bone
struct  Bone_t2076388  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform Bone::startJoint
	Transform_t284553113 * ___startJoint_2;
	// UnityEngine.Transform Bone::endJoint
	Transform_t284553113 * ___endJoint_3;
	// System.Boolean Bone::endBone
	bool ___endBone_4;
	// System.Boolean Bone::topBone
	bool ___topBone_5;
	// System.Boolean Bone::inflating
	bool ___inflating_6;
	// System.Boolean Bone::finished
	bool ___finished_7;
	// System.Single Bone::startLength
	float ___startLength_8;
	// UnityEngine.Vector3 Bone::originalEndDirection
	Vector3_t3525329789  ___originalEndDirection_9;
	// UnityEngine.Vector3 Bone::collapseDirection
	Vector3_t3525329789  ___collapseDirection_10;
	// System.Single Bone::originalRot
	float ___originalRot_11;
	// System.Single Bone::globalOriginalRot
	float ___globalOriginalRot_12;
	// System.Single Bone::globalCollapseRot
	float ___globalCollapseRot_13;
	// System.Single Bone::collpaseRot
	float ___collpaseRot_14;
	// System.Single Bone::inflateSpeed
	float ___inflateSpeed_15;
	// System.Single Bone::deflateSpeed
	float ___deflateSpeed_16;
	// Damagable Bone::_rootDamagable
	Damagable_t4024817136 * ____rootDamagable_17;
	// exSprite Bone::_sprite
	exSprite_t1539598680 * ____sprite_18;
	// UnityEngine.BoxCollider Bone::_collider
	BoxCollider_t131631884 * ____collider_19;
	// Bone/JointOrientation Bone::jointOrientation
	int32_t ___jointOrientation_20;

public:
	inline static int32_t get_offset_of_startJoint_2() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___startJoint_2)); }
	inline Transform_t284553113 * get_startJoint_2() const { return ___startJoint_2; }
	inline Transform_t284553113 ** get_address_of_startJoint_2() { return &___startJoint_2; }
	inline void set_startJoint_2(Transform_t284553113 * value)
	{
		___startJoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___startJoint_2, value);
	}

	inline static int32_t get_offset_of_endJoint_3() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___endJoint_3)); }
	inline Transform_t284553113 * get_endJoint_3() const { return ___endJoint_3; }
	inline Transform_t284553113 ** get_address_of_endJoint_3() { return &___endJoint_3; }
	inline void set_endJoint_3(Transform_t284553113 * value)
	{
		___endJoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___endJoint_3, value);
	}

	inline static int32_t get_offset_of_endBone_4() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___endBone_4)); }
	inline bool get_endBone_4() const { return ___endBone_4; }
	inline bool* get_address_of_endBone_4() { return &___endBone_4; }
	inline void set_endBone_4(bool value)
	{
		___endBone_4 = value;
	}

	inline static int32_t get_offset_of_topBone_5() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___topBone_5)); }
	inline bool get_topBone_5() const { return ___topBone_5; }
	inline bool* get_address_of_topBone_5() { return &___topBone_5; }
	inline void set_topBone_5(bool value)
	{
		___topBone_5 = value;
	}

	inline static int32_t get_offset_of_inflating_6() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___inflating_6)); }
	inline bool get_inflating_6() const { return ___inflating_6; }
	inline bool* get_address_of_inflating_6() { return &___inflating_6; }
	inline void set_inflating_6(bool value)
	{
		___inflating_6 = value;
	}

	inline static int32_t get_offset_of_finished_7() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___finished_7)); }
	inline bool get_finished_7() const { return ___finished_7; }
	inline bool* get_address_of_finished_7() { return &___finished_7; }
	inline void set_finished_7(bool value)
	{
		___finished_7 = value;
	}

	inline static int32_t get_offset_of_startLength_8() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___startLength_8)); }
	inline float get_startLength_8() const { return ___startLength_8; }
	inline float* get_address_of_startLength_8() { return &___startLength_8; }
	inline void set_startLength_8(float value)
	{
		___startLength_8 = value;
	}

	inline static int32_t get_offset_of_originalEndDirection_9() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___originalEndDirection_9)); }
	inline Vector3_t3525329789  get_originalEndDirection_9() const { return ___originalEndDirection_9; }
	inline Vector3_t3525329789 * get_address_of_originalEndDirection_9() { return &___originalEndDirection_9; }
	inline void set_originalEndDirection_9(Vector3_t3525329789  value)
	{
		___originalEndDirection_9 = value;
	}

	inline static int32_t get_offset_of_collapseDirection_10() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___collapseDirection_10)); }
	inline Vector3_t3525329789  get_collapseDirection_10() const { return ___collapseDirection_10; }
	inline Vector3_t3525329789 * get_address_of_collapseDirection_10() { return &___collapseDirection_10; }
	inline void set_collapseDirection_10(Vector3_t3525329789  value)
	{
		___collapseDirection_10 = value;
	}

	inline static int32_t get_offset_of_originalRot_11() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___originalRot_11)); }
	inline float get_originalRot_11() const { return ___originalRot_11; }
	inline float* get_address_of_originalRot_11() { return &___originalRot_11; }
	inline void set_originalRot_11(float value)
	{
		___originalRot_11 = value;
	}

	inline static int32_t get_offset_of_globalOriginalRot_12() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___globalOriginalRot_12)); }
	inline float get_globalOriginalRot_12() const { return ___globalOriginalRot_12; }
	inline float* get_address_of_globalOriginalRot_12() { return &___globalOriginalRot_12; }
	inline void set_globalOriginalRot_12(float value)
	{
		___globalOriginalRot_12 = value;
	}

	inline static int32_t get_offset_of_globalCollapseRot_13() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___globalCollapseRot_13)); }
	inline float get_globalCollapseRot_13() const { return ___globalCollapseRot_13; }
	inline float* get_address_of_globalCollapseRot_13() { return &___globalCollapseRot_13; }
	inline void set_globalCollapseRot_13(float value)
	{
		___globalCollapseRot_13 = value;
	}

	inline static int32_t get_offset_of_collpaseRot_14() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___collpaseRot_14)); }
	inline float get_collpaseRot_14() const { return ___collpaseRot_14; }
	inline float* get_address_of_collpaseRot_14() { return &___collpaseRot_14; }
	inline void set_collpaseRot_14(float value)
	{
		___collpaseRot_14 = value;
	}

	inline static int32_t get_offset_of_inflateSpeed_15() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___inflateSpeed_15)); }
	inline float get_inflateSpeed_15() const { return ___inflateSpeed_15; }
	inline float* get_address_of_inflateSpeed_15() { return &___inflateSpeed_15; }
	inline void set_inflateSpeed_15(float value)
	{
		___inflateSpeed_15 = value;
	}

	inline static int32_t get_offset_of_deflateSpeed_16() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___deflateSpeed_16)); }
	inline float get_deflateSpeed_16() const { return ___deflateSpeed_16; }
	inline float* get_address_of_deflateSpeed_16() { return &___deflateSpeed_16; }
	inline void set_deflateSpeed_16(float value)
	{
		___deflateSpeed_16 = value;
	}

	inline static int32_t get_offset_of__rootDamagable_17() { return static_cast<int32_t>(offsetof(Bone_t2076388, ____rootDamagable_17)); }
	inline Damagable_t4024817136 * get__rootDamagable_17() const { return ____rootDamagable_17; }
	inline Damagable_t4024817136 ** get_address_of__rootDamagable_17() { return &____rootDamagable_17; }
	inline void set__rootDamagable_17(Damagable_t4024817136 * value)
	{
		____rootDamagable_17 = value;
		Il2CppCodeGenWriteBarrier(&____rootDamagable_17, value);
	}

	inline static int32_t get_offset_of__sprite_18() { return static_cast<int32_t>(offsetof(Bone_t2076388, ____sprite_18)); }
	inline exSprite_t1539598680 * get__sprite_18() const { return ____sprite_18; }
	inline exSprite_t1539598680 ** get_address_of__sprite_18() { return &____sprite_18; }
	inline void set__sprite_18(exSprite_t1539598680 * value)
	{
		____sprite_18 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_18, value);
	}

	inline static int32_t get_offset_of__collider_19() { return static_cast<int32_t>(offsetof(Bone_t2076388, ____collider_19)); }
	inline BoxCollider_t131631884 * get__collider_19() const { return ____collider_19; }
	inline BoxCollider_t131631884 ** get_address_of__collider_19() { return &____collider_19; }
	inline void set__collider_19(BoxCollider_t131631884 * value)
	{
		____collider_19 = value;
		Il2CppCodeGenWriteBarrier(&____collider_19, value);
	}

	inline static int32_t get_offset_of_jointOrientation_20() { return static_cast<int32_t>(offsetof(Bone_t2076388, ___jointOrientation_20)); }
	inline int32_t get_jointOrientation_20() const { return ___jointOrientation_20; }
	inline int32_t* get_address_of_jointOrientation_20() { return &___jointOrientation_20; }
	inline void set_jointOrientation_20(int32_t value)
	{
		___jointOrientation_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
