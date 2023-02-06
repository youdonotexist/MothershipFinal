#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpatialNode[]
struct SpatialNodeU5BU5D_t1480054819;
// HeroMovementNode[]
struct HeroMovementNodeU5BU5D_t2922817770;
// HeroVehicle
struct HeroVehicle_t3389256114;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// AIDirective[]
struct AIDirectiveU5BU5D_t257938174;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroAIManager
struct  HeroAIManager_t825711499  : public MonoBehaviour_t3012272455
{
public:
	// SpatialNode[] HeroAIManager::mineManager
	SpatialNodeU5BU5D_t1480054819* ___mineManager_2;
	// SpatialNode[] HeroAIManager::shieldManager
	SpatialNodeU5BU5D_t1480054819* ___shieldManager_3;
	// HeroMovementNode[] HeroAIManager::movementNodes
	HeroMovementNodeU5BU5D_t2922817770* ___movementNodes_4;
	// SpatialNode[] HeroAIManager::everyOtherMineManager
	SpatialNodeU5BU5D_t1480054819* ___everyOtherMineManager_5;
	// HeroVehicle HeroAIManager::_vehicle
	HeroVehicle_t3389256114 * ____vehicle_6;
	// System.Int32 HeroAIManager::activeMissiles
	int32_t ___activeMissiles_7;
	// UnityEngine.GameObject HeroAIManager::minePrefab
	GameObject_t4012695102 * ___minePrefab_8;
	// UnityEngine.GameObject HeroAIManager::shieldPrefab
	GameObject_t4012695102 * ___shieldPrefab_9;
	// AIDirective[] HeroAIManager::aiList
	AIDirectiveU5BU5D_t257938174* ___aiList_10;
	// System.Int32 HeroAIManager::currentAction
	int32_t ___currentAction_11;

public:
	inline static int32_t get_offset_of_mineManager_2() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___mineManager_2)); }
	inline SpatialNodeU5BU5D_t1480054819* get_mineManager_2() const { return ___mineManager_2; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of_mineManager_2() { return &___mineManager_2; }
	inline void set_mineManager_2(SpatialNodeU5BU5D_t1480054819* value)
	{
		___mineManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___mineManager_2, value);
	}

	inline static int32_t get_offset_of_shieldManager_3() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___shieldManager_3)); }
	inline SpatialNodeU5BU5D_t1480054819* get_shieldManager_3() const { return ___shieldManager_3; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of_shieldManager_3() { return &___shieldManager_3; }
	inline void set_shieldManager_3(SpatialNodeU5BU5D_t1480054819* value)
	{
		___shieldManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___shieldManager_3, value);
	}

	inline static int32_t get_offset_of_movementNodes_4() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___movementNodes_4)); }
	inline HeroMovementNodeU5BU5D_t2922817770* get_movementNodes_4() const { return ___movementNodes_4; }
	inline HeroMovementNodeU5BU5D_t2922817770** get_address_of_movementNodes_4() { return &___movementNodes_4; }
	inline void set_movementNodes_4(HeroMovementNodeU5BU5D_t2922817770* value)
	{
		___movementNodes_4 = value;
		Il2CppCodeGenWriteBarrier(&___movementNodes_4, value);
	}

	inline static int32_t get_offset_of_everyOtherMineManager_5() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___everyOtherMineManager_5)); }
	inline SpatialNodeU5BU5D_t1480054819* get_everyOtherMineManager_5() const { return ___everyOtherMineManager_5; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of_everyOtherMineManager_5() { return &___everyOtherMineManager_5; }
	inline void set_everyOtherMineManager_5(SpatialNodeU5BU5D_t1480054819* value)
	{
		___everyOtherMineManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___everyOtherMineManager_5, value);
	}

	inline static int32_t get_offset_of__vehicle_6() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ____vehicle_6)); }
	inline HeroVehicle_t3389256114 * get__vehicle_6() const { return ____vehicle_6; }
	inline HeroVehicle_t3389256114 ** get_address_of__vehicle_6() { return &____vehicle_6; }
	inline void set__vehicle_6(HeroVehicle_t3389256114 * value)
	{
		____vehicle_6 = value;
		Il2CppCodeGenWriteBarrier(&____vehicle_6, value);
	}

	inline static int32_t get_offset_of_activeMissiles_7() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___activeMissiles_7)); }
	inline int32_t get_activeMissiles_7() const { return ___activeMissiles_7; }
	inline int32_t* get_address_of_activeMissiles_7() { return &___activeMissiles_7; }
	inline void set_activeMissiles_7(int32_t value)
	{
		___activeMissiles_7 = value;
	}

	inline static int32_t get_offset_of_minePrefab_8() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___minePrefab_8)); }
	inline GameObject_t4012695102 * get_minePrefab_8() const { return ___minePrefab_8; }
	inline GameObject_t4012695102 ** get_address_of_minePrefab_8() { return &___minePrefab_8; }
	inline void set_minePrefab_8(GameObject_t4012695102 * value)
	{
		___minePrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___minePrefab_8, value);
	}

	inline static int32_t get_offset_of_shieldPrefab_9() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___shieldPrefab_9)); }
	inline GameObject_t4012695102 * get_shieldPrefab_9() const { return ___shieldPrefab_9; }
	inline GameObject_t4012695102 ** get_address_of_shieldPrefab_9() { return &___shieldPrefab_9; }
	inline void set_shieldPrefab_9(GameObject_t4012695102 * value)
	{
		___shieldPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___shieldPrefab_9, value);
	}

	inline static int32_t get_offset_of_aiList_10() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___aiList_10)); }
	inline AIDirectiveU5BU5D_t257938174* get_aiList_10() const { return ___aiList_10; }
	inline AIDirectiveU5BU5D_t257938174** get_address_of_aiList_10() { return &___aiList_10; }
	inline void set_aiList_10(AIDirectiveU5BU5D_t257938174* value)
	{
		___aiList_10 = value;
		Il2CppCodeGenWriteBarrier(&___aiList_10, value);
	}

	inline static int32_t get_offset_of_currentAction_11() { return static_cast<int32_t>(offsetof(HeroAIManager_t825711499, ___currentAction_11)); }
	inline int32_t get_currentAction_11() const { return ___currentAction_11; }
	inline int32_t* get_address_of_currentAction_11() { return &___currentAction_11; }
	inline void set_currentAction_11(int32_t value)
	{
		___currentAction_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
