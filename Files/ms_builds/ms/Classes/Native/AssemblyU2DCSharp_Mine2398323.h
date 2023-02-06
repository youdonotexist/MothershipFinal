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
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "AssemblyU2DCSharp_Deployable3932624609.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mine
struct  Mine_t2398323  : public Deployable_t3932624609
{
public:
	// UnityEngine.AudioSource Mine::_source
	AudioSource_t3628549054 * ____source_4;
	// UnityEngine.AudioClip Mine::_deployClip
	AudioClip_t3714538611 * ____deployClip_5;
	// UnityEngine.AudioClip Mine::_DestroyClip
	AudioClip_t3714538611 * ____DestroyClip_6;
	// UnityEngine.AudioClip Mine::_grabClip
	AudioClip_t3714538611 * ____grabClip_7;
	// UnityEngine.GameObject Mine::explosionPrefab
	GameObject_t4012695102 * ___explosionPrefab_8;
	// System.Boolean Mine::animating
	bool ___animating_9;

public:
	inline static int32_t get_offset_of__source_4() { return static_cast<int32_t>(offsetof(Mine_t2398323, ____source_4)); }
	inline AudioSource_t3628549054 * get__source_4() const { return ____source_4; }
	inline AudioSource_t3628549054 ** get_address_of__source_4() { return &____source_4; }
	inline void set__source_4(AudioSource_t3628549054 * value)
	{
		____source_4 = value;
		Il2CppCodeGenWriteBarrier(&____source_4, value);
	}

	inline static int32_t get_offset_of__deployClip_5() { return static_cast<int32_t>(offsetof(Mine_t2398323, ____deployClip_5)); }
	inline AudioClip_t3714538611 * get__deployClip_5() const { return ____deployClip_5; }
	inline AudioClip_t3714538611 ** get_address_of__deployClip_5() { return &____deployClip_5; }
	inline void set__deployClip_5(AudioClip_t3714538611 * value)
	{
		____deployClip_5 = value;
		Il2CppCodeGenWriteBarrier(&____deployClip_5, value);
	}

	inline static int32_t get_offset_of__DestroyClip_6() { return static_cast<int32_t>(offsetof(Mine_t2398323, ____DestroyClip_6)); }
	inline AudioClip_t3714538611 * get__DestroyClip_6() const { return ____DestroyClip_6; }
	inline AudioClip_t3714538611 ** get_address_of__DestroyClip_6() { return &____DestroyClip_6; }
	inline void set__DestroyClip_6(AudioClip_t3714538611 * value)
	{
		____DestroyClip_6 = value;
		Il2CppCodeGenWriteBarrier(&____DestroyClip_6, value);
	}

	inline static int32_t get_offset_of__grabClip_7() { return static_cast<int32_t>(offsetof(Mine_t2398323, ____grabClip_7)); }
	inline AudioClip_t3714538611 * get__grabClip_7() const { return ____grabClip_7; }
	inline AudioClip_t3714538611 ** get_address_of__grabClip_7() { return &____grabClip_7; }
	inline void set__grabClip_7(AudioClip_t3714538611 * value)
	{
		____grabClip_7 = value;
		Il2CppCodeGenWriteBarrier(&____grabClip_7, value);
	}

	inline static int32_t get_offset_of_explosionPrefab_8() { return static_cast<int32_t>(offsetof(Mine_t2398323, ___explosionPrefab_8)); }
	inline GameObject_t4012695102 * get_explosionPrefab_8() const { return ___explosionPrefab_8; }
	inline GameObject_t4012695102 ** get_address_of_explosionPrefab_8() { return &___explosionPrefab_8; }
	inline void set_explosionPrefab_8(GameObject_t4012695102 * value)
	{
		___explosionPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_8, value);
	}

	inline static int32_t get_offset_of_animating_9() { return static_cast<int32_t>(offsetof(Mine_t2398323, ___animating_9)); }
	inline bool get_animating_9() const { return ___animating_9; }
	inline bool* get_address_of_animating_9() { return &___animating_9; }
	inline void set_animating_9(bool value)
	{
		___animating_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
