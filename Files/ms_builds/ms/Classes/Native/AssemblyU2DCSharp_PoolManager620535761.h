#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PoolManager
struct PoolManager_t620535761;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.Dictionary`2<System.String,PoolingSystem`1<UnityEngine.GameObject>>
struct Dictionary_2_t102639305;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PoolManager
struct  PoolManager_t620535761  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] PoolManager::basicPrefabs
	GameObjectU5BU5D_t3499186955* ___basicPrefabs_3;
	// UnityEngine.GameObject[] PoolManager::juggernautPrefabs
	GameObjectU5BU5D_t3499186955* ___juggernautPrefabs_4;
	// UnityEngine.GameObject[] PoolManager::scientistPrefabs
	GameObjectU5BU5D_t3499186955* ___scientistPrefabs_5;
	// UnityEngine.GameObject[] PoolManager::generalPrefabs
	GameObjectU5BU5D_t3499186955* ___generalPrefabs_6;
	// System.Collections.Generic.Dictionary`2<System.String,PoolingSystem`1<UnityEngine.GameObject>> PoolManager::_pools
	Dictionary_2_t102639305 * ____pools_7;

public:
	inline static int32_t get_offset_of_basicPrefabs_3() { return static_cast<int32_t>(offsetof(PoolManager_t620535761, ___basicPrefabs_3)); }
	inline GameObjectU5BU5D_t3499186955* get_basicPrefabs_3() const { return ___basicPrefabs_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_basicPrefabs_3() { return &___basicPrefabs_3; }
	inline void set_basicPrefabs_3(GameObjectU5BU5D_t3499186955* value)
	{
		___basicPrefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___basicPrefabs_3, value);
	}

	inline static int32_t get_offset_of_juggernautPrefabs_4() { return static_cast<int32_t>(offsetof(PoolManager_t620535761, ___juggernautPrefabs_4)); }
	inline GameObjectU5BU5D_t3499186955* get_juggernautPrefabs_4() const { return ___juggernautPrefabs_4; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_juggernautPrefabs_4() { return &___juggernautPrefabs_4; }
	inline void set_juggernautPrefabs_4(GameObjectU5BU5D_t3499186955* value)
	{
		___juggernautPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier(&___juggernautPrefabs_4, value);
	}

	inline static int32_t get_offset_of_scientistPrefabs_5() { return static_cast<int32_t>(offsetof(PoolManager_t620535761, ___scientistPrefabs_5)); }
	inline GameObjectU5BU5D_t3499186955* get_scientistPrefabs_5() const { return ___scientistPrefabs_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_scientistPrefabs_5() { return &___scientistPrefabs_5; }
	inline void set_scientistPrefabs_5(GameObjectU5BU5D_t3499186955* value)
	{
		___scientistPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier(&___scientistPrefabs_5, value);
	}

	inline static int32_t get_offset_of_generalPrefabs_6() { return static_cast<int32_t>(offsetof(PoolManager_t620535761, ___generalPrefabs_6)); }
	inline GameObjectU5BU5D_t3499186955* get_generalPrefabs_6() const { return ___generalPrefabs_6; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_generalPrefabs_6() { return &___generalPrefabs_6; }
	inline void set_generalPrefabs_6(GameObjectU5BU5D_t3499186955* value)
	{
		___generalPrefabs_6 = value;
		Il2CppCodeGenWriteBarrier(&___generalPrefabs_6, value);
	}

	inline static int32_t get_offset_of__pools_7() { return static_cast<int32_t>(offsetof(PoolManager_t620535761, ____pools_7)); }
	inline Dictionary_2_t102639305 * get__pools_7() const { return ____pools_7; }
	inline Dictionary_2_t102639305 ** get_address_of__pools_7() { return &____pools_7; }
	inline void set__pools_7(Dictionary_2_t102639305 * value)
	{
		____pools_7 = value;
		Il2CppCodeGenWriteBarrier(&____pools_7, value);
	}
};

struct PoolManager_t620535761_StaticFields
{
public:
	// PoolManager PoolManager::_Instance
	PoolManager_t620535761 * ____Instance_2;

public:
	inline static int32_t get_offset_of__Instance_2() { return static_cast<int32_t>(offsetof(PoolManager_t620535761_StaticFields, ____Instance_2)); }
	inline PoolManager_t620535761 * get__Instance_2() const { return ____Instance_2; }
	inline PoolManager_t620535761 ** get_address_of__Instance_2() { return &____Instance_2; }
	inline void set__Instance_2(PoolManager_t620535761 * value)
	{
		____Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
