#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroMissile
struct HeroMissile_t4116636588;
// HeroTeleportMissile
struct HeroTeleportMissile_t731465729;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissileSprite
struct  MissileSprite_t2598873963  : public MonoBehaviour_t3012272455
{
public:
	// HeroMissile MissileSprite::_missile
	HeroMissile_t4116636588 * ____missile_2;
	// HeroTeleportMissile MissileSprite::_teleportMissile
	HeroTeleportMissile_t731465729 * ____teleportMissile_3;

public:
	inline static int32_t get_offset_of__missile_2() { return static_cast<int32_t>(offsetof(MissileSprite_t2598873963, ____missile_2)); }
	inline HeroMissile_t4116636588 * get__missile_2() const { return ____missile_2; }
	inline HeroMissile_t4116636588 ** get_address_of__missile_2() { return &____missile_2; }
	inline void set__missile_2(HeroMissile_t4116636588 * value)
	{
		____missile_2 = value;
		Il2CppCodeGenWriteBarrier(&____missile_2, value);
	}

	inline static int32_t get_offset_of__teleportMissile_3() { return static_cast<int32_t>(offsetof(MissileSprite_t2598873963, ____teleportMissile_3)); }
	inline HeroTeleportMissile_t731465729 * get__teleportMissile_3() const { return ____teleportMissile_3; }
	inline HeroTeleportMissile_t731465729 ** get_address_of__teleportMissile_3() { return &____teleportMissile_3; }
	inline void set__teleportMissile_3(HeroTeleportMissile_t731465729 * value)
	{
		____teleportMissile_3 = value;
		Il2CppCodeGenWriteBarrier(&____teleportMissile_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
