#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolingSystem`1<UnityEngine.GameObject>
struct  PoolingSystem_1_t2759908697  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PoolingSystem`1::availableList
	List_1_t514686775 * ___availableList_1;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PoolingSystem`1::inUseList
	List_1_t514686775 * ___inUseList_2;
	// UnityEngine.GameObject PoolingSystem`1::original
	GameObject_t4012695102 * ___original_3;
	// System.Boolean PoolingSystem`1::isGameObject
	bool ___isGameObject_4;
	// UnityEngine.Transform PoolingSystem`1::outOfTheWayParent
	Transform_t284553113 * ___outOfTheWayParent_5;

public:
	inline static int32_t get_offset_of_availableList_1() { return static_cast<int32_t>(offsetof(PoolingSystem_1_t2759908697, ___availableList_1)); }
	inline List_1_t514686775 * get_availableList_1() const { return ___availableList_1; }
	inline List_1_t514686775 ** get_address_of_availableList_1() { return &___availableList_1; }
	inline void set_availableList_1(List_1_t514686775 * value)
	{
		___availableList_1 = value;
		Il2CppCodeGenWriteBarrier(&___availableList_1, value);
	}

	inline static int32_t get_offset_of_inUseList_2() { return static_cast<int32_t>(offsetof(PoolingSystem_1_t2759908697, ___inUseList_2)); }
	inline List_1_t514686775 * get_inUseList_2() const { return ___inUseList_2; }
	inline List_1_t514686775 ** get_address_of_inUseList_2() { return &___inUseList_2; }
	inline void set_inUseList_2(List_1_t514686775 * value)
	{
		___inUseList_2 = value;
		Il2CppCodeGenWriteBarrier(&___inUseList_2, value);
	}

	inline static int32_t get_offset_of_original_3() { return static_cast<int32_t>(offsetof(PoolingSystem_1_t2759908697, ___original_3)); }
	inline GameObject_t4012695102 * get_original_3() const { return ___original_3; }
	inline GameObject_t4012695102 ** get_address_of_original_3() { return &___original_3; }
	inline void set_original_3(GameObject_t4012695102 * value)
	{
		___original_3 = value;
		Il2CppCodeGenWriteBarrier(&___original_3, value);
	}

	inline static int32_t get_offset_of_isGameObject_4() { return static_cast<int32_t>(offsetof(PoolingSystem_1_t2759908697, ___isGameObject_4)); }
	inline bool get_isGameObject_4() const { return ___isGameObject_4; }
	inline bool* get_address_of_isGameObject_4() { return &___isGameObject_4; }
	inline void set_isGameObject_4(bool value)
	{
		___isGameObject_4 = value;
	}

	inline static int32_t get_offset_of_outOfTheWayParent_5() { return static_cast<int32_t>(offsetof(PoolingSystem_1_t2759908697, ___outOfTheWayParent_5)); }
	inline Transform_t284553113 * get_outOfTheWayParent_5() const { return ___outOfTheWayParent_5; }
	inline Transform_t284553113 ** get_address_of_outOfTheWayParent_5() { return &___outOfTheWayParent_5; }
	inline void set_outOfTheWayParent_5(Transform_t284553113 * value)
	{
		___outOfTheWayParent_5 = value;
		Il2CppCodeGenWriteBarrier(&___outOfTheWayParent_5, value);
	}
};

struct PoolingSystem_1_t2759908697_StaticFields
{
public:
	// UnityEngine.Vector3 PoolingSystem`1::outOfTheWay
	Vector3_t3525329789  ___outOfTheWay_0;

public:
	inline static int32_t get_offset_of_outOfTheWay_0() { return static_cast<int32_t>(offsetof(PoolingSystem_1_t2759908697_StaticFields, ___outOfTheWay_0)); }
	inline Vector3_t3525329789  get_outOfTheWay_0() const { return ___outOfTheWay_0; }
	inline Vector3_t3525329789 * get_address_of_outOfTheWay_0() { return &___outOfTheWay_0; }
	inline void set_outOfTheWay_0(Vector3_t3525329789  value)
	{
		___outOfTheWay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
