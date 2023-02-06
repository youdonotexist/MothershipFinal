#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPool
struct ObjectPool_t3060192283;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t2694701391;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.GameObject>
struct Dictionary_2_t1897742422;
// ObjectPool/StartupPool[]
struct StartupPoolU5BU5D_t2042804068;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_ObjectPool_StartupPoolMode1815636316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPool
struct  ObjectPool_t3060192283  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.GameObject>> ObjectPool::pooledObjects
	Dictionary_2_t2694701391 * ___pooledObjects_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.GameObject> ObjectPool::spawnedObjects
	Dictionary_2_t1897742422 * ___spawnedObjects_5;
	// ObjectPool/StartupPoolMode ObjectPool::startupPoolMode
	int32_t ___startupPoolMode_6;
	// ObjectPool/StartupPool[] ObjectPool::startupPools
	StartupPoolU5BU5D_t2042804068* ___startupPools_7;
	// System.Boolean ObjectPool::startupPoolsCreated
	bool ___startupPoolsCreated_8;

public:
	inline static int32_t get_offset_of_pooledObjects_4() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___pooledObjects_4)); }
	inline Dictionary_2_t2694701391 * get_pooledObjects_4() const { return ___pooledObjects_4; }
	inline Dictionary_2_t2694701391 ** get_address_of_pooledObjects_4() { return &___pooledObjects_4; }
	inline void set_pooledObjects_4(Dictionary_2_t2694701391 * value)
	{
		___pooledObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___pooledObjects_4, value);
	}

	inline static int32_t get_offset_of_spawnedObjects_5() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___spawnedObjects_5)); }
	inline Dictionary_2_t1897742422 * get_spawnedObjects_5() const { return ___spawnedObjects_5; }
	inline Dictionary_2_t1897742422 ** get_address_of_spawnedObjects_5() { return &___spawnedObjects_5; }
	inline void set_spawnedObjects_5(Dictionary_2_t1897742422 * value)
	{
		___spawnedObjects_5 = value;
		Il2CppCodeGenWriteBarrier(&___spawnedObjects_5, value);
	}

	inline static int32_t get_offset_of_startupPoolMode_6() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___startupPoolMode_6)); }
	inline int32_t get_startupPoolMode_6() const { return ___startupPoolMode_6; }
	inline int32_t* get_address_of_startupPoolMode_6() { return &___startupPoolMode_6; }
	inline void set_startupPoolMode_6(int32_t value)
	{
		___startupPoolMode_6 = value;
	}

	inline static int32_t get_offset_of_startupPools_7() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___startupPools_7)); }
	inline StartupPoolU5BU5D_t2042804068* get_startupPools_7() const { return ___startupPools_7; }
	inline StartupPoolU5BU5D_t2042804068** get_address_of_startupPools_7() { return &___startupPools_7; }
	inline void set_startupPools_7(StartupPoolU5BU5D_t2042804068* value)
	{
		___startupPools_7 = value;
		Il2CppCodeGenWriteBarrier(&___startupPools_7, value);
	}

	inline static int32_t get_offset_of_startupPoolsCreated_8() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283, ___startupPoolsCreated_8)); }
	inline bool get_startupPoolsCreated_8() const { return ___startupPoolsCreated_8; }
	inline bool* get_address_of_startupPoolsCreated_8() { return &___startupPoolsCreated_8; }
	inline void set_startupPoolsCreated_8(bool value)
	{
		___startupPoolsCreated_8 = value;
	}
};

struct ObjectPool_t3060192283_StaticFields
{
public:
	// ObjectPool ObjectPool::_instance
	ObjectPool_t3060192283 * ____instance_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPool::tempList
	List_1_t514686775 * ___tempList_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283_StaticFields, ____instance_2)); }
	inline ObjectPool_t3060192283 * get__instance_2() const { return ____instance_2; }
	inline ObjectPool_t3060192283 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ObjectPool_t3060192283 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_tempList_3() { return static_cast<int32_t>(offsetof(ObjectPool_t3060192283_StaticFields, ___tempList_3)); }
	inline List_1_t514686775 * get_tempList_3() const { return ___tempList_3; }
	inline List_1_t514686775 ** get_address_of_tempList_3() { return &___tempList_3; }
	inline void set_tempList_3(List_1_t514686775 * value)
	{
		___tempList_3 = value;
		Il2CppCodeGenWriteBarrier(&___tempList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
