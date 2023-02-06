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
// DebrisParticleEffect
struct DebrisParticleEffect_t1220480562;
// Damagable
struct Damagable_t4024817136;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSprite
struct exSprite_t1539598680;

#include "AssemblyU2DCSharp_Deployable3932624609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shield
struct  Shield_t2475494281  : public Deployable_t3932624609
{
public:
	// UnityEngine.AudioSource Shield::_audioSource
	AudioSource_t3628549054 * ____audioSource_4;
	// UnityEngine.AudioClip Shield::_deployClip
	AudioClip_t3714538611 * ____deployClip_5;
	// DebrisParticleEffect Shield::_debrisPrefab
	DebrisParticleEffect_t1220480562 * ____debrisPrefab_6;
	// Damagable Shield::_damagable
	Damagable_t4024817136 * ____damagable_7;
	// exSpriteAnimation Shield::_animation
	exSpriteAnimation_t1937626380 * ____animation_8;
	// exSprite Shield::_sprite
	exSprite_t1539598680 * ____sprite_9;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(Shield_t2475494281, ____audioSource_4)); }
	inline AudioSource_t3628549054 * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_t3628549054 ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_t3628549054 * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier(&____audioSource_4, value);
	}

	inline static int32_t get_offset_of__deployClip_5() { return static_cast<int32_t>(offsetof(Shield_t2475494281, ____deployClip_5)); }
	inline AudioClip_t3714538611 * get__deployClip_5() const { return ____deployClip_5; }
	inline AudioClip_t3714538611 ** get_address_of__deployClip_5() { return &____deployClip_5; }
	inline void set__deployClip_5(AudioClip_t3714538611 * value)
	{
		____deployClip_5 = value;
		Il2CppCodeGenWriteBarrier(&____deployClip_5, value);
	}

	inline static int32_t get_offset_of__debrisPrefab_6() { return static_cast<int32_t>(offsetof(Shield_t2475494281, ____debrisPrefab_6)); }
	inline DebrisParticleEffect_t1220480562 * get__debrisPrefab_6() const { return ____debrisPrefab_6; }
	inline DebrisParticleEffect_t1220480562 ** get_address_of__debrisPrefab_6() { return &____debrisPrefab_6; }
	inline void set__debrisPrefab_6(DebrisParticleEffect_t1220480562 * value)
	{
		____debrisPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&____debrisPrefab_6, value);
	}

	inline static int32_t get_offset_of__damagable_7() { return static_cast<int32_t>(offsetof(Shield_t2475494281, ____damagable_7)); }
	inline Damagable_t4024817136 * get__damagable_7() const { return ____damagable_7; }
	inline Damagable_t4024817136 ** get_address_of__damagable_7() { return &____damagable_7; }
	inline void set__damagable_7(Damagable_t4024817136 * value)
	{
		____damagable_7 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_7, value);
	}

	inline static int32_t get_offset_of__animation_8() { return static_cast<int32_t>(offsetof(Shield_t2475494281, ____animation_8)); }
	inline exSpriteAnimation_t1937626380 * get__animation_8() const { return ____animation_8; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_8() { return &____animation_8; }
	inline void set__animation_8(exSpriteAnimation_t1937626380 * value)
	{
		____animation_8 = value;
		Il2CppCodeGenWriteBarrier(&____animation_8, value);
	}

	inline static int32_t get_offset_of__sprite_9() { return static_cast<int32_t>(offsetof(Shield_t2475494281, ____sprite_9)); }
	inline exSprite_t1539598680 * get__sprite_9() const { return ____sprite_9; }
	inline exSprite_t1539598680 ** get_address_of__sprite_9() { return &____sprite_9; }
	inline void set__sprite_9(exSprite_t1539598680 * value)
	{
		____sprite_9 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
