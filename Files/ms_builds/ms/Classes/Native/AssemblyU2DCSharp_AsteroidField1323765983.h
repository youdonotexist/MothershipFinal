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
// System.Collections.Generic.List`1<Asteroid>
struct List_1_t516985300;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsteroidField
struct  AsteroidField_t1323765983  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject AsteroidField::asteroidPrefab
	GameObject_t4012695102 * ___asteroidPrefab_2;
	// System.Collections.Generic.List`1<Asteroid> AsteroidField::asteroidList
	List_1_t516985300 * ___asteroidList_3;
	// System.Int32 AsteroidField::maxAsteroids
	int32_t ___maxAsteroids_4;
	// System.Single AsteroidField::releaseWait
	float ___releaseWait_5;
	// System.Boolean AsteroidField::deployDebris
	bool ___deployDebris_6;
	// System.Int32 AsteroidField::createdCount
	int32_t ___createdCount_7;
	// System.Single AsteroidField::releaseElapsed
	float ___releaseElapsed_8;

public:
	inline static int32_t get_offset_of_asteroidPrefab_2() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___asteroidPrefab_2)); }
	inline GameObject_t4012695102 * get_asteroidPrefab_2() const { return ___asteroidPrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_asteroidPrefab_2() { return &___asteroidPrefab_2; }
	inline void set_asteroidPrefab_2(GameObject_t4012695102 * value)
	{
		___asteroidPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___asteroidPrefab_2, value);
	}

	inline static int32_t get_offset_of_asteroidList_3() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___asteroidList_3)); }
	inline List_1_t516985300 * get_asteroidList_3() const { return ___asteroidList_3; }
	inline List_1_t516985300 ** get_address_of_asteroidList_3() { return &___asteroidList_3; }
	inline void set_asteroidList_3(List_1_t516985300 * value)
	{
		___asteroidList_3 = value;
		Il2CppCodeGenWriteBarrier(&___asteroidList_3, value);
	}

	inline static int32_t get_offset_of_maxAsteroids_4() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___maxAsteroids_4)); }
	inline int32_t get_maxAsteroids_4() const { return ___maxAsteroids_4; }
	inline int32_t* get_address_of_maxAsteroids_4() { return &___maxAsteroids_4; }
	inline void set_maxAsteroids_4(int32_t value)
	{
		___maxAsteroids_4 = value;
	}

	inline static int32_t get_offset_of_releaseWait_5() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___releaseWait_5)); }
	inline float get_releaseWait_5() const { return ___releaseWait_5; }
	inline float* get_address_of_releaseWait_5() { return &___releaseWait_5; }
	inline void set_releaseWait_5(float value)
	{
		___releaseWait_5 = value;
	}

	inline static int32_t get_offset_of_deployDebris_6() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___deployDebris_6)); }
	inline bool get_deployDebris_6() const { return ___deployDebris_6; }
	inline bool* get_address_of_deployDebris_6() { return &___deployDebris_6; }
	inline void set_deployDebris_6(bool value)
	{
		___deployDebris_6 = value;
	}

	inline static int32_t get_offset_of_createdCount_7() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___createdCount_7)); }
	inline int32_t get_createdCount_7() const { return ___createdCount_7; }
	inline int32_t* get_address_of_createdCount_7() { return &___createdCount_7; }
	inline void set_createdCount_7(int32_t value)
	{
		___createdCount_7 = value;
	}

	inline static int32_t get_offset_of_releaseElapsed_8() { return static_cast<int32_t>(offsetof(AsteroidField_t1323765983, ___releaseElapsed_8)); }
	inline float get_releaseElapsed_8() const { return ___releaseElapsed_8; }
	inline float* get_address_of_releaseElapsed_8() { return &___releaseElapsed_8; }
	inline void set_releaseElapsed_8(float value)
	{
		___releaseElapsed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
