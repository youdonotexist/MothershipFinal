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
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// LaserMissile
struct LaserMissile_t3567223803;
// AngledTripleShot
struct AngledTripleShot_t1089062249;
// IKTest[]
struct IKTestU5BU5D_t723451229;

#include "AssemblyU2DCSharp_DirectivePack461000424.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JuggernautHeroDirectives
struct  JuggernautHeroDirectives_t3789385032  : public DirectivePack_t461000424
{
public:
	// UnityEngine.GameObject JuggernautHeroDirectives::laserMissilePrefab
	GameObject_t4012695102 * ___laserMissilePrefab_6;
	// UnityEngine.GameObject JuggernautHeroDirectives::turretMinePrefab
	GameObject_t4012695102 * ___turretMinePrefab_7;
	// UnityEngine.AudioClip JuggernautHeroDirectives::chargeLaserBuildup
	AudioClip_t3714538611 * ___chargeLaserBuildup_8;
	// UnityEngine.AudioClip JuggernautHeroDirectives::chargeLaserHitMothership
	AudioClip_t3714538611 * ___chargeLaserHitMothership_9;
	// LaserMissile JuggernautHeroDirectives::_laserMissile
	LaserMissile_t3567223803 * ____laserMissile_10;
	// AngledTripleShot JuggernautHeroDirectives::_laser
	AngledTripleShot_t1089062249 * ____laser_11;
	// System.Single JuggernautHeroDirectives::waitBetweenFire
	float ___waitBetweenFire_12;
	// System.Boolean JuggernautHeroDirectives::canFire
	bool ___canFire_13;
	// System.Single JuggernautHeroDirectives::lastFireTime
	float ___lastFireTime_14;
	// System.Int32 JuggernautHeroDirectives::shotsPerWait
	int32_t ___shotsPerWait_15;
	// System.Int32 JuggernautHeroDirectives::currentShotsPerWait
	int32_t ___currentShotsPerWait_16;
	// System.Boolean JuggernautHeroDirectives::deploying
	bool ___deploying_17;
	// IKTest[] JuggernautHeroDirectives::_ikArms
	IKTestU5BU5D_t723451229* ____ikArms_18;

public:
	inline static int32_t get_offset_of_laserMissilePrefab_6() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___laserMissilePrefab_6)); }
	inline GameObject_t4012695102 * get_laserMissilePrefab_6() const { return ___laserMissilePrefab_6; }
	inline GameObject_t4012695102 ** get_address_of_laserMissilePrefab_6() { return &___laserMissilePrefab_6; }
	inline void set_laserMissilePrefab_6(GameObject_t4012695102 * value)
	{
		___laserMissilePrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___laserMissilePrefab_6, value);
	}

	inline static int32_t get_offset_of_turretMinePrefab_7() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___turretMinePrefab_7)); }
	inline GameObject_t4012695102 * get_turretMinePrefab_7() const { return ___turretMinePrefab_7; }
	inline GameObject_t4012695102 ** get_address_of_turretMinePrefab_7() { return &___turretMinePrefab_7; }
	inline void set_turretMinePrefab_7(GameObject_t4012695102 * value)
	{
		___turretMinePrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___turretMinePrefab_7, value);
	}

	inline static int32_t get_offset_of_chargeLaserBuildup_8() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___chargeLaserBuildup_8)); }
	inline AudioClip_t3714538611 * get_chargeLaserBuildup_8() const { return ___chargeLaserBuildup_8; }
	inline AudioClip_t3714538611 ** get_address_of_chargeLaserBuildup_8() { return &___chargeLaserBuildup_8; }
	inline void set_chargeLaserBuildup_8(AudioClip_t3714538611 * value)
	{
		___chargeLaserBuildup_8 = value;
		Il2CppCodeGenWriteBarrier(&___chargeLaserBuildup_8, value);
	}

	inline static int32_t get_offset_of_chargeLaserHitMothership_9() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___chargeLaserHitMothership_9)); }
	inline AudioClip_t3714538611 * get_chargeLaserHitMothership_9() const { return ___chargeLaserHitMothership_9; }
	inline AudioClip_t3714538611 ** get_address_of_chargeLaserHitMothership_9() { return &___chargeLaserHitMothership_9; }
	inline void set_chargeLaserHitMothership_9(AudioClip_t3714538611 * value)
	{
		___chargeLaserHitMothership_9 = value;
		Il2CppCodeGenWriteBarrier(&___chargeLaserHitMothership_9, value);
	}

	inline static int32_t get_offset_of__laserMissile_10() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ____laserMissile_10)); }
	inline LaserMissile_t3567223803 * get__laserMissile_10() const { return ____laserMissile_10; }
	inline LaserMissile_t3567223803 ** get_address_of__laserMissile_10() { return &____laserMissile_10; }
	inline void set__laserMissile_10(LaserMissile_t3567223803 * value)
	{
		____laserMissile_10 = value;
		Il2CppCodeGenWriteBarrier(&____laserMissile_10, value);
	}

	inline static int32_t get_offset_of__laser_11() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ____laser_11)); }
	inline AngledTripleShot_t1089062249 * get__laser_11() const { return ____laser_11; }
	inline AngledTripleShot_t1089062249 ** get_address_of__laser_11() { return &____laser_11; }
	inline void set__laser_11(AngledTripleShot_t1089062249 * value)
	{
		____laser_11 = value;
		Il2CppCodeGenWriteBarrier(&____laser_11, value);
	}

	inline static int32_t get_offset_of_waitBetweenFire_12() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___waitBetweenFire_12)); }
	inline float get_waitBetweenFire_12() const { return ___waitBetweenFire_12; }
	inline float* get_address_of_waitBetweenFire_12() { return &___waitBetweenFire_12; }
	inline void set_waitBetweenFire_12(float value)
	{
		___waitBetweenFire_12 = value;
	}

	inline static int32_t get_offset_of_canFire_13() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___canFire_13)); }
	inline bool get_canFire_13() const { return ___canFire_13; }
	inline bool* get_address_of_canFire_13() { return &___canFire_13; }
	inline void set_canFire_13(bool value)
	{
		___canFire_13 = value;
	}

	inline static int32_t get_offset_of_lastFireTime_14() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___lastFireTime_14)); }
	inline float get_lastFireTime_14() const { return ___lastFireTime_14; }
	inline float* get_address_of_lastFireTime_14() { return &___lastFireTime_14; }
	inline void set_lastFireTime_14(float value)
	{
		___lastFireTime_14 = value;
	}

	inline static int32_t get_offset_of_shotsPerWait_15() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___shotsPerWait_15)); }
	inline int32_t get_shotsPerWait_15() const { return ___shotsPerWait_15; }
	inline int32_t* get_address_of_shotsPerWait_15() { return &___shotsPerWait_15; }
	inline void set_shotsPerWait_15(int32_t value)
	{
		___shotsPerWait_15 = value;
	}

	inline static int32_t get_offset_of_currentShotsPerWait_16() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___currentShotsPerWait_16)); }
	inline int32_t get_currentShotsPerWait_16() const { return ___currentShotsPerWait_16; }
	inline int32_t* get_address_of_currentShotsPerWait_16() { return &___currentShotsPerWait_16; }
	inline void set_currentShotsPerWait_16(int32_t value)
	{
		___currentShotsPerWait_16 = value;
	}

	inline static int32_t get_offset_of_deploying_17() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ___deploying_17)); }
	inline bool get_deploying_17() const { return ___deploying_17; }
	inline bool* get_address_of_deploying_17() { return &___deploying_17; }
	inline void set_deploying_17(bool value)
	{
		___deploying_17 = value;
	}

	inline static int32_t get_offset_of__ikArms_18() { return static_cast<int32_t>(offsetof(JuggernautHeroDirectives_t3789385032, ____ikArms_18)); }
	inline IKTestU5BU5D_t723451229* get__ikArms_18() const { return ____ikArms_18; }
	inline IKTestU5BU5D_t723451229** get_address_of__ikArms_18() { return &____ikArms_18; }
	inline void set__ikArms_18(IKTestU5BU5D_t723451229* value)
	{
		____ikArms_18 = value;
		Il2CppCodeGenWriteBarrier(&____ikArms_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
