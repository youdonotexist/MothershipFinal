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
// TargetedShot
struct TargetedShot_t123373866;

#include "AssemblyU2DCSharp_DirectivePack461000424.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScienceHeroDirectives
struct  ScienceHeroDirectives_t169817346  : public DirectivePack_t461000424
{
public:
	// UnityEngine.GameObject ScienceHeroDirectives::minePrefab
	GameObject_t4012695102 * ___minePrefab_6;
	// UnityEngine.GameObject ScienceHeroDirectives::missileProjectile
	GameObject_t4012695102 * ___missileProjectile_7;
	// UnityEngine.GameObject ScienceHeroDirectives::projectile
	GameObject_t4012695102 * ___projectile_8;
	// UnityEngine.GameObject ScienceHeroDirectives::shieldPrefab
	GameObject_t4012695102 * ___shieldPrefab_9;
	// TargetedShot ScienceHeroDirectives::_laser
	TargetedShot_t123373866 * ____laser_10;
	// System.Single ScienceHeroDirectives::lastFireTime
	float ___lastFireTime_11;
	// System.Single ScienceHeroDirectives::waitBetweenFire
	float ___waitBetweenFire_12;
	// System.Int32 ScienceHeroDirectives::shotsPerWait
	int32_t ___shotsPerWait_13;
	// System.Int32 ScienceHeroDirectives::currentShotsPerWait
	int32_t ___currentShotsPerWait_14;
	// System.Boolean ScienceHeroDirectives::isTeleportScan
	bool ___isTeleportScan_15;
	// System.Boolean ScienceHeroDirectives::isTeleporting
	bool ___isTeleporting_16;
	// System.Boolean ScienceHeroDirectives::canFire
	bool ___canFire_17;

public:
	inline static int32_t get_offset_of_minePrefab_6() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___minePrefab_6)); }
	inline GameObject_t4012695102 * get_minePrefab_6() const { return ___minePrefab_6; }
	inline GameObject_t4012695102 ** get_address_of_minePrefab_6() { return &___minePrefab_6; }
	inline void set_minePrefab_6(GameObject_t4012695102 * value)
	{
		___minePrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___minePrefab_6, value);
	}

	inline static int32_t get_offset_of_missileProjectile_7() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___missileProjectile_7)); }
	inline GameObject_t4012695102 * get_missileProjectile_7() const { return ___missileProjectile_7; }
	inline GameObject_t4012695102 ** get_address_of_missileProjectile_7() { return &___missileProjectile_7; }
	inline void set_missileProjectile_7(GameObject_t4012695102 * value)
	{
		___missileProjectile_7 = value;
		Il2CppCodeGenWriteBarrier(&___missileProjectile_7, value);
	}

	inline static int32_t get_offset_of_projectile_8() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___projectile_8)); }
	inline GameObject_t4012695102 * get_projectile_8() const { return ___projectile_8; }
	inline GameObject_t4012695102 ** get_address_of_projectile_8() { return &___projectile_8; }
	inline void set_projectile_8(GameObject_t4012695102 * value)
	{
		___projectile_8 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_8, value);
	}

	inline static int32_t get_offset_of_shieldPrefab_9() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___shieldPrefab_9)); }
	inline GameObject_t4012695102 * get_shieldPrefab_9() const { return ___shieldPrefab_9; }
	inline GameObject_t4012695102 ** get_address_of_shieldPrefab_9() { return &___shieldPrefab_9; }
	inline void set_shieldPrefab_9(GameObject_t4012695102 * value)
	{
		___shieldPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___shieldPrefab_9, value);
	}

	inline static int32_t get_offset_of__laser_10() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ____laser_10)); }
	inline TargetedShot_t123373866 * get__laser_10() const { return ____laser_10; }
	inline TargetedShot_t123373866 ** get_address_of__laser_10() { return &____laser_10; }
	inline void set__laser_10(TargetedShot_t123373866 * value)
	{
		____laser_10 = value;
		Il2CppCodeGenWriteBarrier(&____laser_10, value);
	}

	inline static int32_t get_offset_of_lastFireTime_11() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___lastFireTime_11)); }
	inline float get_lastFireTime_11() const { return ___lastFireTime_11; }
	inline float* get_address_of_lastFireTime_11() { return &___lastFireTime_11; }
	inline void set_lastFireTime_11(float value)
	{
		___lastFireTime_11 = value;
	}

	inline static int32_t get_offset_of_waitBetweenFire_12() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___waitBetweenFire_12)); }
	inline float get_waitBetweenFire_12() const { return ___waitBetweenFire_12; }
	inline float* get_address_of_waitBetweenFire_12() { return &___waitBetweenFire_12; }
	inline void set_waitBetweenFire_12(float value)
	{
		___waitBetweenFire_12 = value;
	}

	inline static int32_t get_offset_of_shotsPerWait_13() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___shotsPerWait_13)); }
	inline int32_t get_shotsPerWait_13() const { return ___shotsPerWait_13; }
	inline int32_t* get_address_of_shotsPerWait_13() { return &___shotsPerWait_13; }
	inline void set_shotsPerWait_13(int32_t value)
	{
		___shotsPerWait_13 = value;
	}

	inline static int32_t get_offset_of_currentShotsPerWait_14() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___currentShotsPerWait_14)); }
	inline int32_t get_currentShotsPerWait_14() const { return ___currentShotsPerWait_14; }
	inline int32_t* get_address_of_currentShotsPerWait_14() { return &___currentShotsPerWait_14; }
	inline void set_currentShotsPerWait_14(int32_t value)
	{
		___currentShotsPerWait_14 = value;
	}

	inline static int32_t get_offset_of_isTeleportScan_15() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___isTeleportScan_15)); }
	inline bool get_isTeleportScan_15() const { return ___isTeleportScan_15; }
	inline bool* get_address_of_isTeleportScan_15() { return &___isTeleportScan_15; }
	inline void set_isTeleportScan_15(bool value)
	{
		___isTeleportScan_15 = value;
	}

	inline static int32_t get_offset_of_isTeleporting_16() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___isTeleporting_16)); }
	inline bool get_isTeleporting_16() const { return ___isTeleporting_16; }
	inline bool* get_address_of_isTeleporting_16() { return &___isTeleporting_16; }
	inline void set_isTeleporting_16(bool value)
	{
		___isTeleporting_16 = value;
	}

	inline static int32_t get_offset_of_canFire_17() { return static_cast<int32_t>(offsetof(ScienceHeroDirectives_t169817346, ___canFire_17)); }
	inline bool get_canFire_17() const { return ___canFire_17; }
	inline bool* get_address_of_canFire_17() { return &___canFire_17; }
	inline void set_canFire_17(bool value)
	{
		___canFire_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
