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
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// UnityEngine.Material
struct Material_t1886596500;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSprite
struct exSprite_t1539598680;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2265160319;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// DarkTonic.MasterAudio.PlaySoundResult
struct PlaySoundResult_t3653206983;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserMissile
struct  LaserMissile_t3567223803  : public MonoBehaviour_t3012272455
{
public:
	// System.Single LaserMissile::chargeDuration
	float ___chargeDuration_2;
	// System.Single LaserMissile::timeCharging
	float ___timeCharging_3;
	// System.Boolean LaserMissile::firing
	bool ___firing_4;
	// System.Single LaserMissile::fireDuration
	float ___fireDuration_5;
	// System.Single LaserMissile::timeFiring
	float ___timeFiring_6;
	// System.Single LaserMissile::damagePerSecond
	float ___damagePerSecond_7;
	// System.Boolean LaserMissile::isCoolingDown
	bool ___isCoolingDown_8;
	// System.Single LaserMissile::cooldownDuration
	float ___cooldownDuration_9;
	// System.Single LaserMissile::timeCoolingDown
	float ___timeCoolingDown_10;
	// UnityEngine.GameObject LaserMissile::_minionBlocker
	GameObject_t4012695102 * ____minionBlocker_11;
	// Vectrosity.VectorLine LaserMissile::currentLine
	VectorLine_t3065371647 * ___currentLine_12;
	// UnityEngine.Material LaserMissile::lineMaterial
	Material_t1886596500 * ___lineMaterial_13;
	// UnityEngine.GameObject LaserMissile::chargeAnimationPrefab
	GameObject_t4012695102 * ___chargeAnimationPrefab_14;
	// exSpriteAnimation LaserMissile::_chargeAnimation
	exSpriteAnimation_t1937626380 * ____chargeAnimation_15;
	// exSprite LaserMissile::_chargeSprite
	exSprite_t1539598680 * ____chargeSprite_16;
	// UnityEngine.GameObject LaserMissile::chargeAnimationParent
	GameObject_t4012695102 * ___chargeAnimationParent_17;
	// UnityEngine.GameObject LaserMissile::chargeExplosionPrefab
	GameObject_t4012695102 * ___chargeExplosionPrefab_18;
	// UnityEngine.GameObject LaserMissile::chargeExplosion
	GameObject_t4012695102 * ___chargeExplosion_19;
	// exSpriteAnimation LaserMissile::chargeExplosionAnimation
	exSpriteAnimation_t1937626380 * ___chargeExplosionAnimation_20;
	// UnityEngine.Texture2D[] LaserMissile::animationTextures
	Texture2DU5BU5D_t2265160319* ___animationTextures_21;
	// UnityEngine.Texture2D[] LaserMissile::msAnimationTextures
	Texture2DU5BU5D_t2265160319* ___msAnimationTextures_22;
	// UnityEngine.Texture2D[] LaserMissile::latestAnimationTextures
	Texture2DU5BU5D_t2265160319* ___latestAnimationTextures_23;
	// UnityEngine.AudioClip LaserMissile::chargeLaserBuildup
	AudioClip_t3714538611 * ___chargeLaserBuildup_24;
	// UnityEngine.AudioClip LaserMissile::chargeLaserHitMothership
	AudioClip_t3714538611 * ___chargeLaserHitMothership_25;
	// UnityEngine.GameObject LaserMissile::_mothership
	GameObject_t4012695102 * ____mothership_26;
	// DarkTonic.MasterAudio.PlaySoundResult LaserMissile::_chargeHitMothership
	PlaySoundResult_t3653206983 * ____chargeHitMothership_27;
	// DarkTonic.MasterAudio.PlaySoundResult LaserMissile::_chargeHitMinion
	PlaySoundResult_t3653206983 * ____chargeHitMinion_28;

public:
	inline static int32_t get_offset_of_chargeDuration_2() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeDuration_2)); }
	inline float get_chargeDuration_2() const { return ___chargeDuration_2; }
	inline float* get_address_of_chargeDuration_2() { return &___chargeDuration_2; }
	inline void set_chargeDuration_2(float value)
	{
		___chargeDuration_2 = value;
	}

	inline static int32_t get_offset_of_timeCharging_3() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___timeCharging_3)); }
	inline float get_timeCharging_3() const { return ___timeCharging_3; }
	inline float* get_address_of_timeCharging_3() { return &___timeCharging_3; }
	inline void set_timeCharging_3(float value)
	{
		___timeCharging_3 = value;
	}

	inline static int32_t get_offset_of_firing_4() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___firing_4)); }
	inline bool get_firing_4() const { return ___firing_4; }
	inline bool* get_address_of_firing_4() { return &___firing_4; }
	inline void set_firing_4(bool value)
	{
		___firing_4 = value;
	}

	inline static int32_t get_offset_of_fireDuration_5() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___fireDuration_5)); }
	inline float get_fireDuration_5() const { return ___fireDuration_5; }
	inline float* get_address_of_fireDuration_5() { return &___fireDuration_5; }
	inline void set_fireDuration_5(float value)
	{
		___fireDuration_5 = value;
	}

	inline static int32_t get_offset_of_timeFiring_6() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___timeFiring_6)); }
	inline float get_timeFiring_6() const { return ___timeFiring_6; }
	inline float* get_address_of_timeFiring_6() { return &___timeFiring_6; }
	inline void set_timeFiring_6(float value)
	{
		___timeFiring_6 = value;
	}

	inline static int32_t get_offset_of_damagePerSecond_7() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___damagePerSecond_7)); }
	inline float get_damagePerSecond_7() const { return ___damagePerSecond_7; }
	inline float* get_address_of_damagePerSecond_7() { return &___damagePerSecond_7; }
	inline void set_damagePerSecond_7(float value)
	{
		___damagePerSecond_7 = value;
	}

	inline static int32_t get_offset_of_isCoolingDown_8() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___isCoolingDown_8)); }
	inline bool get_isCoolingDown_8() const { return ___isCoolingDown_8; }
	inline bool* get_address_of_isCoolingDown_8() { return &___isCoolingDown_8; }
	inline void set_isCoolingDown_8(bool value)
	{
		___isCoolingDown_8 = value;
	}

	inline static int32_t get_offset_of_cooldownDuration_9() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___cooldownDuration_9)); }
	inline float get_cooldownDuration_9() const { return ___cooldownDuration_9; }
	inline float* get_address_of_cooldownDuration_9() { return &___cooldownDuration_9; }
	inline void set_cooldownDuration_9(float value)
	{
		___cooldownDuration_9 = value;
	}

	inline static int32_t get_offset_of_timeCoolingDown_10() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___timeCoolingDown_10)); }
	inline float get_timeCoolingDown_10() const { return ___timeCoolingDown_10; }
	inline float* get_address_of_timeCoolingDown_10() { return &___timeCoolingDown_10; }
	inline void set_timeCoolingDown_10(float value)
	{
		___timeCoolingDown_10 = value;
	}

	inline static int32_t get_offset_of__minionBlocker_11() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ____minionBlocker_11)); }
	inline GameObject_t4012695102 * get__minionBlocker_11() const { return ____minionBlocker_11; }
	inline GameObject_t4012695102 ** get_address_of__minionBlocker_11() { return &____minionBlocker_11; }
	inline void set__minionBlocker_11(GameObject_t4012695102 * value)
	{
		____minionBlocker_11 = value;
		Il2CppCodeGenWriteBarrier(&____minionBlocker_11, value);
	}

	inline static int32_t get_offset_of_currentLine_12() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___currentLine_12)); }
	inline VectorLine_t3065371647 * get_currentLine_12() const { return ___currentLine_12; }
	inline VectorLine_t3065371647 ** get_address_of_currentLine_12() { return &___currentLine_12; }
	inline void set_currentLine_12(VectorLine_t3065371647 * value)
	{
		___currentLine_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentLine_12, value);
	}

	inline static int32_t get_offset_of_lineMaterial_13() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___lineMaterial_13)); }
	inline Material_t1886596500 * get_lineMaterial_13() const { return ___lineMaterial_13; }
	inline Material_t1886596500 ** get_address_of_lineMaterial_13() { return &___lineMaterial_13; }
	inline void set_lineMaterial_13(Material_t1886596500 * value)
	{
		___lineMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___lineMaterial_13, value);
	}

	inline static int32_t get_offset_of_chargeAnimationPrefab_14() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeAnimationPrefab_14)); }
	inline GameObject_t4012695102 * get_chargeAnimationPrefab_14() const { return ___chargeAnimationPrefab_14; }
	inline GameObject_t4012695102 ** get_address_of_chargeAnimationPrefab_14() { return &___chargeAnimationPrefab_14; }
	inline void set_chargeAnimationPrefab_14(GameObject_t4012695102 * value)
	{
		___chargeAnimationPrefab_14 = value;
		Il2CppCodeGenWriteBarrier(&___chargeAnimationPrefab_14, value);
	}

	inline static int32_t get_offset_of__chargeAnimation_15() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ____chargeAnimation_15)); }
	inline exSpriteAnimation_t1937626380 * get__chargeAnimation_15() const { return ____chargeAnimation_15; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__chargeAnimation_15() { return &____chargeAnimation_15; }
	inline void set__chargeAnimation_15(exSpriteAnimation_t1937626380 * value)
	{
		____chargeAnimation_15 = value;
		Il2CppCodeGenWriteBarrier(&____chargeAnimation_15, value);
	}

	inline static int32_t get_offset_of__chargeSprite_16() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ____chargeSprite_16)); }
	inline exSprite_t1539598680 * get__chargeSprite_16() const { return ____chargeSprite_16; }
	inline exSprite_t1539598680 ** get_address_of__chargeSprite_16() { return &____chargeSprite_16; }
	inline void set__chargeSprite_16(exSprite_t1539598680 * value)
	{
		____chargeSprite_16 = value;
		Il2CppCodeGenWriteBarrier(&____chargeSprite_16, value);
	}

	inline static int32_t get_offset_of_chargeAnimationParent_17() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeAnimationParent_17)); }
	inline GameObject_t4012695102 * get_chargeAnimationParent_17() const { return ___chargeAnimationParent_17; }
	inline GameObject_t4012695102 ** get_address_of_chargeAnimationParent_17() { return &___chargeAnimationParent_17; }
	inline void set_chargeAnimationParent_17(GameObject_t4012695102 * value)
	{
		___chargeAnimationParent_17 = value;
		Il2CppCodeGenWriteBarrier(&___chargeAnimationParent_17, value);
	}

	inline static int32_t get_offset_of_chargeExplosionPrefab_18() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeExplosionPrefab_18)); }
	inline GameObject_t4012695102 * get_chargeExplosionPrefab_18() const { return ___chargeExplosionPrefab_18; }
	inline GameObject_t4012695102 ** get_address_of_chargeExplosionPrefab_18() { return &___chargeExplosionPrefab_18; }
	inline void set_chargeExplosionPrefab_18(GameObject_t4012695102 * value)
	{
		___chargeExplosionPrefab_18 = value;
		Il2CppCodeGenWriteBarrier(&___chargeExplosionPrefab_18, value);
	}

	inline static int32_t get_offset_of_chargeExplosion_19() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeExplosion_19)); }
	inline GameObject_t4012695102 * get_chargeExplosion_19() const { return ___chargeExplosion_19; }
	inline GameObject_t4012695102 ** get_address_of_chargeExplosion_19() { return &___chargeExplosion_19; }
	inline void set_chargeExplosion_19(GameObject_t4012695102 * value)
	{
		___chargeExplosion_19 = value;
		Il2CppCodeGenWriteBarrier(&___chargeExplosion_19, value);
	}

	inline static int32_t get_offset_of_chargeExplosionAnimation_20() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeExplosionAnimation_20)); }
	inline exSpriteAnimation_t1937626380 * get_chargeExplosionAnimation_20() const { return ___chargeExplosionAnimation_20; }
	inline exSpriteAnimation_t1937626380 ** get_address_of_chargeExplosionAnimation_20() { return &___chargeExplosionAnimation_20; }
	inline void set_chargeExplosionAnimation_20(exSpriteAnimation_t1937626380 * value)
	{
		___chargeExplosionAnimation_20 = value;
		Il2CppCodeGenWriteBarrier(&___chargeExplosionAnimation_20, value);
	}

	inline static int32_t get_offset_of_animationTextures_21() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___animationTextures_21)); }
	inline Texture2DU5BU5D_t2265160319* get_animationTextures_21() const { return ___animationTextures_21; }
	inline Texture2DU5BU5D_t2265160319** get_address_of_animationTextures_21() { return &___animationTextures_21; }
	inline void set_animationTextures_21(Texture2DU5BU5D_t2265160319* value)
	{
		___animationTextures_21 = value;
		Il2CppCodeGenWriteBarrier(&___animationTextures_21, value);
	}

	inline static int32_t get_offset_of_msAnimationTextures_22() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___msAnimationTextures_22)); }
	inline Texture2DU5BU5D_t2265160319* get_msAnimationTextures_22() const { return ___msAnimationTextures_22; }
	inline Texture2DU5BU5D_t2265160319** get_address_of_msAnimationTextures_22() { return &___msAnimationTextures_22; }
	inline void set_msAnimationTextures_22(Texture2DU5BU5D_t2265160319* value)
	{
		___msAnimationTextures_22 = value;
		Il2CppCodeGenWriteBarrier(&___msAnimationTextures_22, value);
	}

	inline static int32_t get_offset_of_latestAnimationTextures_23() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___latestAnimationTextures_23)); }
	inline Texture2DU5BU5D_t2265160319* get_latestAnimationTextures_23() const { return ___latestAnimationTextures_23; }
	inline Texture2DU5BU5D_t2265160319** get_address_of_latestAnimationTextures_23() { return &___latestAnimationTextures_23; }
	inline void set_latestAnimationTextures_23(Texture2DU5BU5D_t2265160319* value)
	{
		___latestAnimationTextures_23 = value;
		Il2CppCodeGenWriteBarrier(&___latestAnimationTextures_23, value);
	}

	inline static int32_t get_offset_of_chargeLaserBuildup_24() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeLaserBuildup_24)); }
	inline AudioClip_t3714538611 * get_chargeLaserBuildup_24() const { return ___chargeLaserBuildup_24; }
	inline AudioClip_t3714538611 ** get_address_of_chargeLaserBuildup_24() { return &___chargeLaserBuildup_24; }
	inline void set_chargeLaserBuildup_24(AudioClip_t3714538611 * value)
	{
		___chargeLaserBuildup_24 = value;
		Il2CppCodeGenWriteBarrier(&___chargeLaserBuildup_24, value);
	}

	inline static int32_t get_offset_of_chargeLaserHitMothership_25() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ___chargeLaserHitMothership_25)); }
	inline AudioClip_t3714538611 * get_chargeLaserHitMothership_25() const { return ___chargeLaserHitMothership_25; }
	inline AudioClip_t3714538611 ** get_address_of_chargeLaserHitMothership_25() { return &___chargeLaserHitMothership_25; }
	inline void set_chargeLaserHitMothership_25(AudioClip_t3714538611 * value)
	{
		___chargeLaserHitMothership_25 = value;
		Il2CppCodeGenWriteBarrier(&___chargeLaserHitMothership_25, value);
	}

	inline static int32_t get_offset_of__mothership_26() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ____mothership_26)); }
	inline GameObject_t4012695102 * get__mothership_26() const { return ____mothership_26; }
	inline GameObject_t4012695102 ** get_address_of__mothership_26() { return &____mothership_26; }
	inline void set__mothership_26(GameObject_t4012695102 * value)
	{
		____mothership_26 = value;
		Il2CppCodeGenWriteBarrier(&____mothership_26, value);
	}

	inline static int32_t get_offset_of__chargeHitMothership_27() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ____chargeHitMothership_27)); }
	inline PlaySoundResult_t3653206983 * get__chargeHitMothership_27() const { return ____chargeHitMothership_27; }
	inline PlaySoundResult_t3653206983 ** get_address_of__chargeHitMothership_27() { return &____chargeHitMothership_27; }
	inline void set__chargeHitMothership_27(PlaySoundResult_t3653206983 * value)
	{
		____chargeHitMothership_27 = value;
		Il2CppCodeGenWriteBarrier(&____chargeHitMothership_27, value);
	}

	inline static int32_t get_offset_of__chargeHitMinion_28() { return static_cast<int32_t>(offsetof(LaserMissile_t3567223803, ____chargeHitMinion_28)); }
	inline PlaySoundResult_t3653206983 * get__chargeHitMinion_28() const { return ____chargeHitMinion_28; }
	inline PlaySoundResult_t3653206983 ** get_address_of__chargeHitMinion_28() { return &____chargeHitMinion_28; }
	inline void set__chargeHitMinion_28(PlaySoundResult_t3653206983 * value)
	{
		____chargeHitMinion_28 = value;
		Il2CppCodeGenWriteBarrier(&____chargeHitMinion_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
