#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// MothershipVehicle
struct MothershipVehicle_t3966619277;
// TargetedShot
struct TargetedShot_t123373866;
// CenterDoubleShot
struct CenterDoubleShot_t2576597184;

#include "AssemblyU2DCSharp_Deployable3932624609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurretMine
struct  TurretMine_t1863118211  : public Deployable_t3932624609
{
public:
	// UnityEngine.AudioSource TurretMine::_source
	AudioSource_t3628549054 * ____source_4;
	// UnityEngine.AudioClip TurretMine::_deployClip
	AudioClip_t3714538611 * ____deployClip_5;
	// UnityEngine.AudioClip TurretMine::_DestroyClip
	AudioClip_t3714538611 * ____DestroyClip_6;
	// System.Single TurretMine::lastFireTime
	float ___lastFireTime_7;
	// System.Single TurretMine::waitBetweenFire
	float ___waitBetweenFire_8;
	// System.Single TurretMine::turretMineProjectileDamage
	float ___turretMineProjectileDamage_9;
	// System.Int32 TurretMine::shotsPerWait
	int32_t ___shotsPerWait_10;
	// System.Int32 TurretMine::currentShotsPerWait
	int32_t ___currentShotsPerWait_11;
	// System.Boolean TurretMine::canFire
	bool ___canFire_12;
	// MothershipVehicle TurretMine::_mothership
	MothershipVehicle_t3966619277 * ____mothership_13;
	// TargetedShot TurretMine::_laser
	TargetedShot_t123373866 * ____laser_14;
	// CenterDoubleShot TurretMine::_heroSingleShot
	CenterDoubleShot_t2576597184 * ____heroSingleShot_15;
	// System.Boolean TurretMine::standAlone
	bool ___standAlone_16;

public:
	inline static int32_t get_offset_of__source_4() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ____source_4)); }
	inline AudioSource_t3628549054 * get__source_4() const { return ____source_4; }
	inline AudioSource_t3628549054 ** get_address_of__source_4() { return &____source_4; }
	inline void set__source_4(AudioSource_t3628549054 * value)
	{
		____source_4 = value;
		Il2CppCodeGenWriteBarrier(&____source_4, value);
	}

	inline static int32_t get_offset_of__deployClip_5() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ____deployClip_5)); }
	inline AudioClip_t3714538611 * get__deployClip_5() const { return ____deployClip_5; }
	inline AudioClip_t3714538611 ** get_address_of__deployClip_5() { return &____deployClip_5; }
	inline void set__deployClip_5(AudioClip_t3714538611 * value)
	{
		____deployClip_5 = value;
		Il2CppCodeGenWriteBarrier(&____deployClip_5, value);
	}

	inline static int32_t get_offset_of__DestroyClip_6() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ____DestroyClip_6)); }
	inline AudioClip_t3714538611 * get__DestroyClip_6() const { return ____DestroyClip_6; }
	inline AudioClip_t3714538611 ** get_address_of__DestroyClip_6() { return &____DestroyClip_6; }
	inline void set__DestroyClip_6(AudioClip_t3714538611 * value)
	{
		____DestroyClip_6 = value;
		Il2CppCodeGenWriteBarrier(&____DestroyClip_6, value);
	}

	inline static int32_t get_offset_of_lastFireTime_7() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___lastFireTime_7)); }
	inline float get_lastFireTime_7() const { return ___lastFireTime_7; }
	inline float* get_address_of_lastFireTime_7() { return &___lastFireTime_7; }
	inline void set_lastFireTime_7(float value)
	{
		___lastFireTime_7 = value;
	}

	inline static int32_t get_offset_of_waitBetweenFire_8() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___waitBetweenFire_8)); }
	inline float get_waitBetweenFire_8() const { return ___waitBetweenFire_8; }
	inline float* get_address_of_waitBetweenFire_8() { return &___waitBetweenFire_8; }
	inline void set_waitBetweenFire_8(float value)
	{
		___waitBetweenFire_8 = value;
	}

	inline static int32_t get_offset_of_turretMineProjectileDamage_9() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___turretMineProjectileDamage_9)); }
	inline float get_turretMineProjectileDamage_9() const { return ___turretMineProjectileDamage_9; }
	inline float* get_address_of_turretMineProjectileDamage_9() { return &___turretMineProjectileDamage_9; }
	inline void set_turretMineProjectileDamage_9(float value)
	{
		___turretMineProjectileDamage_9 = value;
	}

	inline static int32_t get_offset_of_shotsPerWait_10() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___shotsPerWait_10)); }
	inline int32_t get_shotsPerWait_10() const { return ___shotsPerWait_10; }
	inline int32_t* get_address_of_shotsPerWait_10() { return &___shotsPerWait_10; }
	inline void set_shotsPerWait_10(int32_t value)
	{
		___shotsPerWait_10 = value;
	}

	inline static int32_t get_offset_of_currentShotsPerWait_11() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___currentShotsPerWait_11)); }
	inline int32_t get_currentShotsPerWait_11() const { return ___currentShotsPerWait_11; }
	inline int32_t* get_address_of_currentShotsPerWait_11() { return &___currentShotsPerWait_11; }
	inline void set_currentShotsPerWait_11(int32_t value)
	{
		___currentShotsPerWait_11 = value;
	}

	inline static int32_t get_offset_of_canFire_12() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___canFire_12)); }
	inline bool get_canFire_12() const { return ___canFire_12; }
	inline bool* get_address_of_canFire_12() { return &___canFire_12; }
	inline void set_canFire_12(bool value)
	{
		___canFire_12 = value;
	}

	inline static int32_t get_offset_of__mothership_13() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ____mothership_13)); }
	inline MothershipVehicle_t3966619277 * get__mothership_13() const { return ____mothership_13; }
	inline MothershipVehicle_t3966619277 ** get_address_of__mothership_13() { return &____mothership_13; }
	inline void set__mothership_13(MothershipVehicle_t3966619277 * value)
	{
		____mothership_13 = value;
		Il2CppCodeGenWriteBarrier(&____mothership_13, value);
	}

	inline static int32_t get_offset_of__laser_14() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ____laser_14)); }
	inline TargetedShot_t123373866 * get__laser_14() const { return ____laser_14; }
	inline TargetedShot_t123373866 ** get_address_of__laser_14() { return &____laser_14; }
	inline void set__laser_14(TargetedShot_t123373866 * value)
	{
		____laser_14 = value;
		Il2CppCodeGenWriteBarrier(&____laser_14, value);
	}

	inline static int32_t get_offset_of__heroSingleShot_15() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ____heroSingleShot_15)); }
	inline CenterDoubleShot_t2576597184 * get__heroSingleShot_15() const { return ____heroSingleShot_15; }
	inline CenterDoubleShot_t2576597184 ** get_address_of__heroSingleShot_15() { return &____heroSingleShot_15; }
	inline void set__heroSingleShot_15(CenterDoubleShot_t2576597184 * value)
	{
		____heroSingleShot_15 = value;
		Il2CppCodeGenWriteBarrier(&____heroSingleShot_15, value);
	}

	inline static int32_t get_offset_of_standAlone_16() { return static_cast<int32_t>(offsetof(TurretMine_t1863118211, ___standAlone_16)); }
	inline bool get_standAlone_16() const { return ___standAlone_16; }
	inline bool* get_address_of_standAlone_16() { return &___standAlone_16; }
	inline void set_standAlone_16(bool value)
	{
		___standAlone_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
