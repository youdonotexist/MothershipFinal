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
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Damagable
struct Damagable_t4024817136;

#include "AssemblyU2DCSharp_Deployable3932624609.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroMissile
struct  HeroMissile_t4116636588  : public Deployable_t3932624609
{
public:
	// UnityEngine.Vector3[] HeroMissile::reversePath
	Vector3U5BU5D_t3227571696* ___reversePath_4;
	// System.Int32 HeroMissile::currentPathIndex
	int32_t ___currentPathIndex_5;
	// UnityEngine.AudioClip HeroMissile::_fireClip
	AudioClip_t3714538611 * ____fireClip_6;
	// UnityEngine.AudioSource HeroMissile::_audioSource
	AudioSource_t3628549054 * ____audioSource_7;
	// UnityEngine.GameObject HeroMissile::missileEffectPrefab
	GameObject_t4012695102 * ___missileEffectPrefab_8;
	// UnityEngine.GameObject HeroMissile::missileExplosionPrefab
	GameObject_t4012695102 * ___missileExplosionPrefab_9;
	// UnityEngine.Vector3 HeroMissile::fromNode
	Vector3_t3525329789  ___fromNode_10;
	// UnityEngine.Vector3 HeroMissile::toNode
	Vector3_t3525329789  ___toNode_11;
	// System.Single HeroMissile::speed
	float ___speed_12;
	// System.Single HeroMissile::timeToTake
	float ___timeToTake_13;
	// System.Single HeroMissile::timer
	float ___timer_14;
	// UnityEngine.Vector3 HeroMissile::newForward
	Vector3_t3525329789  ___newForward_15;
	// Damagable HeroMissile::_damagable
	Damagable_t4024817136 * ____damagable_16;

public:
	inline static int32_t get_offset_of_reversePath_4() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___reversePath_4)); }
	inline Vector3U5BU5D_t3227571696* get_reversePath_4() const { return ___reversePath_4; }
	inline Vector3U5BU5D_t3227571696** get_address_of_reversePath_4() { return &___reversePath_4; }
	inline void set_reversePath_4(Vector3U5BU5D_t3227571696* value)
	{
		___reversePath_4 = value;
		Il2CppCodeGenWriteBarrier(&___reversePath_4, value);
	}

	inline static int32_t get_offset_of_currentPathIndex_5() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___currentPathIndex_5)); }
	inline int32_t get_currentPathIndex_5() const { return ___currentPathIndex_5; }
	inline int32_t* get_address_of_currentPathIndex_5() { return &___currentPathIndex_5; }
	inline void set_currentPathIndex_5(int32_t value)
	{
		___currentPathIndex_5 = value;
	}

	inline static int32_t get_offset_of__fireClip_6() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ____fireClip_6)); }
	inline AudioClip_t3714538611 * get__fireClip_6() const { return ____fireClip_6; }
	inline AudioClip_t3714538611 ** get_address_of__fireClip_6() { return &____fireClip_6; }
	inline void set__fireClip_6(AudioClip_t3714538611 * value)
	{
		____fireClip_6 = value;
		Il2CppCodeGenWriteBarrier(&____fireClip_6, value);
	}

	inline static int32_t get_offset_of__audioSource_7() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ____audioSource_7)); }
	inline AudioSource_t3628549054 * get__audioSource_7() const { return ____audioSource_7; }
	inline AudioSource_t3628549054 ** get_address_of__audioSource_7() { return &____audioSource_7; }
	inline void set__audioSource_7(AudioSource_t3628549054 * value)
	{
		____audioSource_7 = value;
		Il2CppCodeGenWriteBarrier(&____audioSource_7, value);
	}

	inline static int32_t get_offset_of_missileEffectPrefab_8() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___missileEffectPrefab_8)); }
	inline GameObject_t4012695102 * get_missileEffectPrefab_8() const { return ___missileEffectPrefab_8; }
	inline GameObject_t4012695102 ** get_address_of_missileEffectPrefab_8() { return &___missileEffectPrefab_8; }
	inline void set_missileEffectPrefab_8(GameObject_t4012695102 * value)
	{
		___missileEffectPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___missileEffectPrefab_8, value);
	}

	inline static int32_t get_offset_of_missileExplosionPrefab_9() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___missileExplosionPrefab_9)); }
	inline GameObject_t4012695102 * get_missileExplosionPrefab_9() const { return ___missileExplosionPrefab_9; }
	inline GameObject_t4012695102 ** get_address_of_missileExplosionPrefab_9() { return &___missileExplosionPrefab_9; }
	inline void set_missileExplosionPrefab_9(GameObject_t4012695102 * value)
	{
		___missileExplosionPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___missileExplosionPrefab_9, value);
	}

	inline static int32_t get_offset_of_fromNode_10() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___fromNode_10)); }
	inline Vector3_t3525329789  get_fromNode_10() const { return ___fromNode_10; }
	inline Vector3_t3525329789 * get_address_of_fromNode_10() { return &___fromNode_10; }
	inline void set_fromNode_10(Vector3_t3525329789  value)
	{
		___fromNode_10 = value;
	}

	inline static int32_t get_offset_of_toNode_11() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___toNode_11)); }
	inline Vector3_t3525329789  get_toNode_11() const { return ___toNode_11; }
	inline Vector3_t3525329789 * get_address_of_toNode_11() { return &___toNode_11; }
	inline void set_toNode_11(Vector3_t3525329789  value)
	{
		___toNode_11 = value;
	}

	inline static int32_t get_offset_of_speed_12() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___speed_12)); }
	inline float get_speed_12() const { return ___speed_12; }
	inline float* get_address_of_speed_12() { return &___speed_12; }
	inline void set_speed_12(float value)
	{
		___speed_12 = value;
	}

	inline static int32_t get_offset_of_timeToTake_13() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___timeToTake_13)); }
	inline float get_timeToTake_13() const { return ___timeToTake_13; }
	inline float* get_address_of_timeToTake_13() { return &___timeToTake_13; }
	inline void set_timeToTake_13(float value)
	{
		___timeToTake_13 = value;
	}

	inline static int32_t get_offset_of_timer_14() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___timer_14)); }
	inline float get_timer_14() const { return ___timer_14; }
	inline float* get_address_of_timer_14() { return &___timer_14; }
	inline void set_timer_14(float value)
	{
		___timer_14 = value;
	}

	inline static int32_t get_offset_of_newForward_15() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ___newForward_15)); }
	inline Vector3_t3525329789  get_newForward_15() const { return ___newForward_15; }
	inline Vector3_t3525329789 * get_address_of_newForward_15() { return &___newForward_15; }
	inline void set_newForward_15(Vector3_t3525329789  value)
	{
		___newForward_15 = value;
	}

	inline static int32_t get_offset_of__damagable_16() { return static_cast<int32_t>(offsetof(HeroMissile_t4116636588, ____damagable_16)); }
	inline Damagable_t4024817136 * get__damagable_16() const { return ____damagable_16; }
	inline Damagable_t4024817136 ** get_address_of__damagable_16() { return &____damagable_16; }
	inline void set__damagable_16(Damagable_t4024817136 * value)
	{
		____damagable_16 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
