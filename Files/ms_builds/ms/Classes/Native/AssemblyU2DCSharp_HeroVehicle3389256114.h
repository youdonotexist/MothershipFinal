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
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSprite
struct exSprite_t1539598680;
// exSprite[]
struct exSpriteU5BU5D_t1268764233;
// HeroAIManager
struct HeroAIManager_t825711499;
// HeroConfig
struct HeroConfig_t3731208188;
// DirectivePack[]
struct DirectivePackU5BU5D_t1444958329;
// SpatialNode
struct SpatialNode_t3293136134;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Vehicle2006722316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroVehicle
struct  HeroVehicle_t3389256114  : public Vehicle_t2006722316
{
public:
	// UnityEngine.GameObject HeroVehicle::missileProjectile
	GameObject_t4012695102 * ___missileProjectile_3;
	// UnityEngine.GameObject HeroVehicle::muzzlePoint
	GameObject_t4012695102 * ___muzzlePoint_4;
	// UnityEngine.GameObject HeroVehicle::explosionPrefab
	GameObject_t4012695102 * ___explosionPrefab_5;
	// UnityEngine.AudioClip HeroVehicle::_spawnClip
	AudioClip_t3714538611 * ____spawnClip_6;
	// exSpriteAnimation HeroVehicle::_anim
	exSpriteAnimation_t1937626380 * ____anim_7;
	// exSprite HeroVehicle::_sprite
	exSprite_t1539598680 * ____sprite_8;
	// exSprite[] HeroVehicle::_sprites
	exSpriteU5BU5D_t1268764233* ____sprites_9;
	// HeroAIManager HeroVehicle::_aiManager
	HeroAIManager_t825711499 * ____aiManager_10;
	// HeroConfig HeroVehicle::_config
	HeroConfig_t3731208188 * ____config_11;
	// DirectivePack[] HeroVehicle::_directivePacks
	DirectivePackU5BU5D_t1444958329* ____directivePacks_12;
	// SpatialNode HeroVehicle::_currentNode
	SpatialNode_t3293136134 * ____currentNode_13;
	// System.Single HeroVehicle::moveDirection
	float ___moveDirection_14;
	// System.String HeroVehicle::animationPrefix
	String_t* ___animationPrefix_15;
	// System.Boolean HeroVehicle::preventMovementAnimations
	bool ___preventMovementAnimations_16;
	// System.Boolean HeroVehicle::effectivelyDead
	bool ___effectivelyDead_17;
	// System.Boolean HeroVehicle::bulletHellHero
	bool ___bulletHellHero_18;

public:
	inline static int32_t get_offset_of_missileProjectile_3() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___missileProjectile_3)); }
	inline GameObject_t4012695102 * get_missileProjectile_3() const { return ___missileProjectile_3; }
	inline GameObject_t4012695102 ** get_address_of_missileProjectile_3() { return &___missileProjectile_3; }
	inline void set_missileProjectile_3(GameObject_t4012695102 * value)
	{
		___missileProjectile_3 = value;
		Il2CppCodeGenWriteBarrier(&___missileProjectile_3, value);
	}

	inline static int32_t get_offset_of_muzzlePoint_4() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___muzzlePoint_4)); }
	inline GameObject_t4012695102 * get_muzzlePoint_4() const { return ___muzzlePoint_4; }
	inline GameObject_t4012695102 ** get_address_of_muzzlePoint_4() { return &___muzzlePoint_4; }
	inline void set_muzzlePoint_4(GameObject_t4012695102 * value)
	{
		___muzzlePoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___muzzlePoint_4, value);
	}

	inline static int32_t get_offset_of_explosionPrefab_5() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___explosionPrefab_5)); }
	inline GameObject_t4012695102 * get_explosionPrefab_5() const { return ___explosionPrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_explosionPrefab_5() { return &___explosionPrefab_5; }
	inline void set_explosionPrefab_5(GameObject_t4012695102 * value)
	{
		___explosionPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_5, value);
	}

	inline static int32_t get_offset_of__spawnClip_6() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____spawnClip_6)); }
	inline AudioClip_t3714538611 * get__spawnClip_6() const { return ____spawnClip_6; }
	inline AudioClip_t3714538611 ** get_address_of__spawnClip_6() { return &____spawnClip_6; }
	inline void set__spawnClip_6(AudioClip_t3714538611 * value)
	{
		____spawnClip_6 = value;
		Il2CppCodeGenWriteBarrier(&____spawnClip_6, value);
	}

	inline static int32_t get_offset_of__anim_7() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____anim_7)); }
	inline exSpriteAnimation_t1937626380 * get__anim_7() const { return ____anim_7; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__anim_7() { return &____anim_7; }
	inline void set__anim_7(exSpriteAnimation_t1937626380 * value)
	{
		____anim_7 = value;
		Il2CppCodeGenWriteBarrier(&____anim_7, value);
	}

	inline static int32_t get_offset_of__sprite_8() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____sprite_8)); }
	inline exSprite_t1539598680 * get__sprite_8() const { return ____sprite_8; }
	inline exSprite_t1539598680 ** get_address_of__sprite_8() { return &____sprite_8; }
	inline void set__sprite_8(exSprite_t1539598680 * value)
	{
		____sprite_8 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_8, value);
	}

	inline static int32_t get_offset_of__sprites_9() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____sprites_9)); }
	inline exSpriteU5BU5D_t1268764233* get__sprites_9() const { return ____sprites_9; }
	inline exSpriteU5BU5D_t1268764233** get_address_of__sprites_9() { return &____sprites_9; }
	inline void set__sprites_9(exSpriteU5BU5D_t1268764233* value)
	{
		____sprites_9 = value;
		Il2CppCodeGenWriteBarrier(&____sprites_9, value);
	}

	inline static int32_t get_offset_of__aiManager_10() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____aiManager_10)); }
	inline HeroAIManager_t825711499 * get__aiManager_10() const { return ____aiManager_10; }
	inline HeroAIManager_t825711499 ** get_address_of__aiManager_10() { return &____aiManager_10; }
	inline void set__aiManager_10(HeroAIManager_t825711499 * value)
	{
		____aiManager_10 = value;
		Il2CppCodeGenWriteBarrier(&____aiManager_10, value);
	}

	inline static int32_t get_offset_of__config_11() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____config_11)); }
	inline HeroConfig_t3731208188 * get__config_11() const { return ____config_11; }
	inline HeroConfig_t3731208188 ** get_address_of__config_11() { return &____config_11; }
	inline void set__config_11(HeroConfig_t3731208188 * value)
	{
		____config_11 = value;
		Il2CppCodeGenWriteBarrier(&____config_11, value);
	}

	inline static int32_t get_offset_of__directivePacks_12() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____directivePacks_12)); }
	inline DirectivePackU5BU5D_t1444958329* get__directivePacks_12() const { return ____directivePacks_12; }
	inline DirectivePackU5BU5D_t1444958329** get_address_of__directivePacks_12() { return &____directivePacks_12; }
	inline void set__directivePacks_12(DirectivePackU5BU5D_t1444958329* value)
	{
		____directivePacks_12 = value;
		Il2CppCodeGenWriteBarrier(&____directivePacks_12, value);
	}

	inline static int32_t get_offset_of__currentNode_13() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ____currentNode_13)); }
	inline SpatialNode_t3293136134 * get__currentNode_13() const { return ____currentNode_13; }
	inline SpatialNode_t3293136134 ** get_address_of__currentNode_13() { return &____currentNode_13; }
	inline void set__currentNode_13(SpatialNode_t3293136134 * value)
	{
		____currentNode_13 = value;
		Il2CppCodeGenWriteBarrier(&____currentNode_13, value);
	}

	inline static int32_t get_offset_of_moveDirection_14() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___moveDirection_14)); }
	inline float get_moveDirection_14() const { return ___moveDirection_14; }
	inline float* get_address_of_moveDirection_14() { return &___moveDirection_14; }
	inline void set_moveDirection_14(float value)
	{
		___moveDirection_14 = value;
	}

	inline static int32_t get_offset_of_animationPrefix_15() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___animationPrefix_15)); }
	inline String_t* get_animationPrefix_15() const { return ___animationPrefix_15; }
	inline String_t** get_address_of_animationPrefix_15() { return &___animationPrefix_15; }
	inline void set_animationPrefix_15(String_t* value)
	{
		___animationPrefix_15 = value;
		Il2CppCodeGenWriteBarrier(&___animationPrefix_15, value);
	}

	inline static int32_t get_offset_of_preventMovementAnimations_16() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___preventMovementAnimations_16)); }
	inline bool get_preventMovementAnimations_16() const { return ___preventMovementAnimations_16; }
	inline bool* get_address_of_preventMovementAnimations_16() { return &___preventMovementAnimations_16; }
	inline void set_preventMovementAnimations_16(bool value)
	{
		___preventMovementAnimations_16 = value;
	}

	inline static int32_t get_offset_of_effectivelyDead_17() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___effectivelyDead_17)); }
	inline bool get_effectivelyDead_17() const { return ___effectivelyDead_17; }
	inline bool* get_address_of_effectivelyDead_17() { return &___effectivelyDead_17; }
	inline void set_effectivelyDead_17(bool value)
	{
		___effectivelyDead_17 = value;
	}

	inline static int32_t get_offset_of_bulletHellHero_18() { return static_cast<int32_t>(offsetof(HeroVehicle_t3389256114, ___bulletHellHero_18)); }
	inline bool get_bulletHellHero_18() const { return ___bulletHellHero_18; }
	inline bool* get_address_of_bulletHellHero_18() { return &___bulletHellHero_18; }
	inline void set_bulletHellHero_18(bool value)
	{
		___bulletHellHero_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
