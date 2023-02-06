#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// DemoGameManager
struct DemoGameManager_t1809206616;
// PoolingSystem`1<UnityEngine.GameObject>
struct PoolingSystem_1_t2759908697;
// PoolingSystem`1<UnityEngine.Rigidbody>
struct PoolingSystem_1_t719221141;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoGameManager
struct  DemoGameManager_t1809206616  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject DemoGameManager::spherePrefab
	GameObject_t4012695102 * ___spherePrefab_2;
	// UnityEngine.GameObject DemoGameManager::cubePrefab
	GameObject_t4012695102 * ___cubePrefab_3;
	// UnityEngine.GameObject DemoGameManager::capsulePrefab
	GameObject_t4012695102 * ___capsulePrefab_4;
	// PoolingSystem`1<UnityEngine.GameObject> DemoGameManager::spheres
	PoolingSystem_1_t2759908697 * ___spheres_6;
	// PoolingSystem`1<UnityEngine.GameObject> DemoGameManager::cubes
	PoolingSystem_1_t2759908697 * ___cubes_7;
	// PoolingSystem`1<UnityEngine.Rigidbody> DemoGameManager::capsules
	PoolingSystem_1_t719221141 * ___capsules_8;
	// System.Single DemoGameManager::counter
	float ___counter_9;
	// UnityEngine.GameObject DemoGameManager::tmpObj
	GameObject_t4012695102 * ___tmpObj_10;
	// UnityEngine.Rigidbody DemoGameManager::tmpRB
	Rigidbody_t1972007546 * ___tmpRB_11;
	// UnityEngine.Rect DemoGameManager::cubesCount
	Rect_t1525428817  ___cubesCount_12;
	// UnityEngine.Rect DemoGameManager::spheresCount
	Rect_t1525428817  ___spheresCount_13;
	// UnityEngine.Rect DemoGameManager::capsulesCount
	Rect_t1525428817  ___capsulesCount_14;

public:
	inline static int32_t get_offset_of_spherePrefab_2() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___spherePrefab_2)); }
	inline GameObject_t4012695102 * get_spherePrefab_2() const { return ___spherePrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_spherePrefab_2() { return &___spherePrefab_2; }
	inline void set_spherePrefab_2(GameObject_t4012695102 * value)
	{
		___spherePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___spherePrefab_2, value);
	}

	inline static int32_t get_offset_of_cubePrefab_3() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___cubePrefab_3)); }
	inline GameObject_t4012695102 * get_cubePrefab_3() const { return ___cubePrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_cubePrefab_3() { return &___cubePrefab_3; }
	inline void set_cubePrefab_3(GameObject_t4012695102 * value)
	{
		___cubePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubePrefab_3, value);
	}

	inline static int32_t get_offset_of_capsulePrefab_4() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___capsulePrefab_4)); }
	inline GameObject_t4012695102 * get_capsulePrefab_4() const { return ___capsulePrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_capsulePrefab_4() { return &___capsulePrefab_4; }
	inline void set_capsulePrefab_4(GameObject_t4012695102 * value)
	{
		___capsulePrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___capsulePrefab_4, value);
	}

	inline static int32_t get_offset_of_spheres_6() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___spheres_6)); }
	inline PoolingSystem_1_t2759908697 * get_spheres_6() const { return ___spheres_6; }
	inline PoolingSystem_1_t2759908697 ** get_address_of_spheres_6() { return &___spheres_6; }
	inline void set_spheres_6(PoolingSystem_1_t2759908697 * value)
	{
		___spheres_6 = value;
		Il2CppCodeGenWriteBarrier(&___spheres_6, value);
	}

	inline static int32_t get_offset_of_cubes_7() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___cubes_7)); }
	inline PoolingSystem_1_t2759908697 * get_cubes_7() const { return ___cubes_7; }
	inline PoolingSystem_1_t2759908697 ** get_address_of_cubes_7() { return &___cubes_7; }
	inline void set_cubes_7(PoolingSystem_1_t2759908697 * value)
	{
		___cubes_7 = value;
		Il2CppCodeGenWriteBarrier(&___cubes_7, value);
	}

	inline static int32_t get_offset_of_capsules_8() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___capsules_8)); }
	inline PoolingSystem_1_t719221141 * get_capsules_8() const { return ___capsules_8; }
	inline PoolingSystem_1_t719221141 ** get_address_of_capsules_8() { return &___capsules_8; }
	inline void set_capsules_8(PoolingSystem_1_t719221141 * value)
	{
		___capsules_8 = value;
		Il2CppCodeGenWriteBarrier(&___capsules_8, value);
	}

	inline static int32_t get_offset_of_counter_9() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___counter_9)); }
	inline float get_counter_9() const { return ___counter_9; }
	inline float* get_address_of_counter_9() { return &___counter_9; }
	inline void set_counter_9(float value)
	{
		___counter_9 = value;
	}

	inline static int32_t get_offset_of_tmpObj_10() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___tmpObj_10)); }
	inline GameObject_t4012695102 * get_tmpObj_10() const { return ___tmpObj_10; }
	inline GameObject_t4012695102 ** get_address_of_tmpObj_10() { return &___tmpObj_10; }
	inline void set_tmpObj_10(GameObject_t4012695102 * value)
	{
		___tmpObj_10 = value;
		Il2CppCodeGenWriteBarrier(&___tmpObj_10, value);
	}

	inline static int32_t get_offset_of_tmpRB_11() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___tmpRB_11)); }
	inline Rigidbody_t1972007546 * get_tmpRB_11() const { return ___tmpRB_11; }
	inline Rigidbody_t1972007546 ** get_address_of_tmpRB_11() { return &___tmpRB_11; }
	inline void set_tmpRB_11(Rigidbody_t1972007546 * value)
	{
		___tmpRB_11 = value;
		Il2CppCodeGenWriteBarrier(&___tmpRB_11, value);
	}

	inline static int32_t get_offset_of_cubesCount_12() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___cubesCount_12)); }
	inline Rect_t1525428817  get_cubesCount_12() const { return ___cubesCount_12; }
	inline Rect_t1525428817 * get_address_of_cubesCount_12() { return &___cubesCount_12; }
	inline void set_cubesCount_12(Rect_t1525428817  value)
	{
		___cubesCount_12 = value;
	}

	inline static int32_t get_offset_of_spheresCount_13() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___spheresCount_13)); }
	inline Rect_t1525428817  get_spheresCount_13() const { return ___spheresCount_13; }
	inline Rect_t1525428817 * get_address_of_spheresCount_13() { return &___spheresCount_13; }
	inline void set_spheresCount_13(Rect_t1525428817  value)
	{
		___spheresCount_13 = value;
	}

	inline static int32_t get_offset_of_capsulesCount_14() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616, ___capsulesCount_14)); }
	inline Rect_t1525428817  get_capsulesCount_14() const { return ___capsulesCount_14; }
	inline Rect_t1525428817 * get_address_of_capsulesCount_14() { return &___capsulesCount_14; }
	inline void set_capsulesCount_14(Rect_t1525428817  value)
	{
		___capsulesCount_14 = value;
	}
};

struct DemoGameManager_t1809206616_StaticFields
{
public:
	// DemoGameManager DemoGameManager::instance
	DemoGameManager_t1809206616 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(DemoGameManager_t1809206616_StaticFields, ___instance_5)); }
	inline DemoGameManager_t1809206616 * get_instance_5() const { return ___instance_5; }
	inline DemoGameManager_t1809206616 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(DemoGameManager_t1809206616 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
