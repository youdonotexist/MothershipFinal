#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Damagable
struct Damagable_t4024817136;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "AssemblyU2DCSharp_LaserProjectile3210566388.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroSingleShot
struct  HeroSingleShot_t1235072796  : public LaserProjectile_t3210566388
{
public:
	// UnityEngine.AudioClip HeroSingleShot::_shotClip
	AudioClip_t3714538611 * ____shotClip_6;
	// UnityEngine.AudioClip HeroSingleShot::_blowupClip
	AudioClip_t3714538611 * ____blowupClip_7;
	// UnityEngine.GameObject HeroSingleShot::_explodeEffect
	GameObject_t4012695102 * ____explodeEffect_8;
	// Damagable HeroSingleShot::_damagable
	Damagable_t4024817136 * ____damagable_9;
	// UnityEngine.AudioSource HeroSingleShot::_shotAudio
	AudioSource_t3628549054 * ____shotAudio_10;

public:
	inline static int32_t get_offset_of__shotClip_6() { return static_cast<int32_t>(offsetof(HeroSingleShot_t1235072796, ____shotClip_6)); }
	inline AudioClip_t3714538611 * get__shotClip_6() const { return ____shotClip_6; }
	inline AudioClip_t3714538611 ** get_address_of__shotClip_6() { return &____shotClip_6; }
	inline void set__shotClip_6(AudioClip_t3714538611 * value)
	{
		____shotClip_6 = value;
		Il2CppCodeGenWriteBarrier(&____shotClip_6, value);
	}

	inline static int32_t get_offset_of__blowupClip_7() { return static_cast<int32_t>(offsetof(HeroSingleShot_t1235072796, ____blowupClip_7)); }
	inline AudioClip_t3714538611 * get__blowupClip_7() const { return ____blowupClip_7; }
	inline AudioClip_t3714538611 ** get_address_of__blowupClip_7() { return &____blowupClip_7; }
	inline void set__blowupClip_7(AudioClip_t3714538611 * value)
	{
		____blowupClip_7 = value;
		Il2CppCodeGenWriteBarrier(&____blowupClip_7, value);
	}

	inline static int32_t get_offset_of__explodeEffect_8() { return static_cast<int32_t>(offsetof(HeroSingleShot_t1235072796, ____explodeEffect_8)); }
	inline GameObject_t4012695102 * get__explodeEffect_8() const { return ____explodeEffect_8; }
	inline GameObject_t4012695102 ** get_address_of__explodeEffect_8() { return &____explodeEffect_8; }
	inline void set__explodeEffect_8(GameObject_t4012695102 * value)
	{
		____explodeEffect_8 = value;
		Il2CppCodeGenWriteBarrier(&____explodeEffect_8, value);
	}

	inline static int32_t get_offset_of__damagable_9() { return static_cast<int32_t>(offsetof(HeroSingleShot_t1235072796, ____damagable_9)); }
	inline Damagable_t4024817136 * get__damagable_9() const { return ____damagable_9; }
	inline Damagable_t4024817136 ** get_address_of__damagable_9() { return &____damagable_9; }
	inline void set__damagable_9(Damagable_t4024817136 * value)
	{
		____damagable_9 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_9, value);
	}

	inline static int32_t get_offset_of__shotAudio_10() { return static_cast<int32_t>(offsetof(HeroSingleShot_t1235072796, ____shotAudio_10)); }
	inline AudioSource_t3628549054 * get__shotAudio_10() const { return ____shotAudio_10; }
	inline AudioSource_t3628549054 ** get_address_of__shotAudio_10() { return &____shotAudio_10; }
	inline void set__shotAudio_10(AudioSource_t3628549054 * value)
	{
		____shotAudio_10 = value;
		Il2CppCodeGenWriteBarrier(&____shotAudio_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
