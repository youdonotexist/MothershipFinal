#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DamagableHitCount
struct DamagableHitCount_t3741473612;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// exSprite[]
struct exSpriteU5BU5D_t1268764233;

#include "AssemblyU2DCSharp_MinionTypeBase2690101217.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShieldMinion
struct  ShieldMinion_t3002000735  : public MinionTypeBase_t2690101217
{
public:
	// DamagableHitCount ShieldMinion::_damagable
	DamagableHitCount_t3741473612 * ____damagable_6;
	// UnityEngine.GameObject ShieldMinion::leftShield
	GameObject_t4012695102 * ___leftShield_7;
	// UnityEngine.GameObject ShieldMinion::rightShield
	GameObject_t4012695102 * ___rightShield_8;
	// exSprite[] ShieldMinion::sprites
	exSpriteU5BU5D_t1268764233* ___sprites_9;

public:
	inline static int32_t get_offset_of__damagable_6() { return static_cast<int32_t>(offsetof(ShieldMinion_t3002000735, ____damagable_6)); }
	inline DamagableHitCount_t3741473612 * get__damagable_6() const { return ____damagable_6; }
	inline DamagableHitCount_t3741473612 ** get_address_of__damagable_6() { return &____damagable_6; }
	inline void set__damagable_6(DamagableHitCount_t3741473612 * value)
	{
		____damagable_6 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_6, value);
	}

	inline static int32_t get_offset_of_leftShield_7() { return static_cast<int32_t>(offsetof(ShieldMinion_t3002000735, ___leftShield_7)); }
	inline GameObject_t4012695102 * get_leftShield_7() const { return ___leftShield_7; }
	inline GameObject_t4012695102 ** get_address_of_leftShield_7() { return &___leftShield_7; }
	inline void set_leftShield_7(GameObject_t4012695102 * value)
	{
		___leftShield_7 = value;
		Il2CppCodeGenWriteBarrier(&___leftShield_7, value);
	}

	inline static int32_t get_offset_of_rightShield_8() { return static_cast<int32_t>(offsetof(ShieldMinion_t3002000735, ___rightShield_8)); }
	inline GameObject_t4012695102 * get_rightShield_8() const { return ___rightShield_8; }
	inline GameObject_t4012695102 ** get_address_of_rightShield_8() { return &___rightShield_8; }
	inline void set_rightShield_8(GameObject_t4012695102 * value)
	{
		___rightShield_8 = value;
		Il2CppCodeGenWriteBarrier(&___rightShield_8, value);
	}

	inline static int32_t get_offset_of_sprites_9() { return static_cast<int32_t>(offsetof(ShieldMinion_t3002000735, ___sprites_9)); }
	inline exSpriteU5BU5D_t1268764233* get_sprites_9() const { return ___sprites_9; }
	inline exSpriteU5BU5D_t1268764233** get_address_of_sprites_9() { return &___sprites_9; }
	inline void set_sprites_9(exSpriteU5BU5D_t1268764233* value)
	{
		___sprites_9 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
