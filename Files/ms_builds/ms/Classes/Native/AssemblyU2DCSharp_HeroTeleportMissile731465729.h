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
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// Damagable
struct Damagable_t4024817136;

#include "AssemblyU2DCSharp_Deployable3932624609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroTeleportMissile
struct  HeroTeleportMissile_t731465729  : public Deployable_t3932624609
{
public:
	// System.Single HeroTeleportMissile::speed
	float ___speed_4;
	// UnityEngine.GameObject HeroTeleportMissile::missileExplosionPrefab
	GameObject_t4012695102 * ___missileExplosionPrefab_5;
	// exSpriteAnimation HeroTeleportMissile::_animation
	exSpriteAnimation_t1937626380 * ____animation_6;
	// Damagable HeroTeleportMissile::_damagable
	Damagable_t4024817136 * ____damagable_7;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(HeroTeleportMissile_t731465729, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_missileExplosionPrefab_5() { return static_cast<int32_t>(offsetof(HeroTeleportMissile_t731465729, ___missileExplosionPrefab_5)); }
	inline GameObject_t4012695102 * get_missileExplosionPrefab_5() const { return ___missileExplosionPrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_missileExplosionPrefab_5() { return &___missileExplosionPrefab_5; }
	inline void set_missileExplosionPrefab_5(GameObject_t4012695102 * value)
	{
		___missileExplosionPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___missileExplosionPrefab_5, value);
	}

	inline static int32_t get_offset_of__animation_6() { return static_cast<int32_t>(offsetof(HeroTeleportMissile_t731465729, ____animation_6)); }
	inline exSpriteAnimation_t1937626380 * get__animation_6() const { return ____animation_6; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_6() { return &____animation_6; }
	inline void set__animation_6(exSpriteAnimation_t1937626380 * value)
	{
		____animation_6 = value;
		Il2CppCodeGenWriteBarrier(&____animation_6, value);
	}

	inline static int32_t get_offset_of__damagable_7() { return static_cast<int32_t>(offsetof(HeroTeleportMissile_t731465729, ____damagable_7)); }
	inline Damagable_t4024817136 * get__damagable_7() const { return ____damagable_7; }
	inline Damagable_t4024817136 ** get_address_of__damagable_7() { return &____damagable_7; }
	inline void set__damagable_7(Damagable_t4024817136 * value)
	{
		____damagable_7 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
