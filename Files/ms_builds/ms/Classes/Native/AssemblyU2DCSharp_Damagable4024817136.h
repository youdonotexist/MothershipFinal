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
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// System.Collections.Generic.List`1<Callback`1<System.Single>>
struct List_1_t3422306049;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "AssemblyU2DCSharp_Damagable_COLLISION_TYPE1811711047.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Damagable
struct  Damagable_t4024817136  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Damagable::currentHealth
	float ___currentHealth_2;
	// System.Single Damagable::maxHealth
	float ___maxHealth_3;
	// System.Single Damagable::outDamageAmount
	float ___outDamageAmount_4;
	// UnityEngine.LayerMask Damagable::damageLayers
	LayerMask_t1862190090  ___damageLayers_5;
	// UnityEngine.AudioClip Damagable::_destroySound
	AudioClip_t3714538611 * ____destroySound_6;
	// UnityEngine.Color32[] Damagable::colors
	Color32U5BU5D_t1677970742* ___colors_7;
	// Damagable/COLLISION_TYPE Damagable::collisionType
	int32_t ___collisionType_8;
	// System.Collections.Generic.List`1<Callback`1<System.Single>> Damagable::DamageCallback
	List_1_t3422306049 * ___DamageCallback_9;
	// System.Collections.Generic.List`1<Callback`1<System.Single>> Damagable::HealCallback
	List_1_t3422306049 * ___HealCallback_10;

public:
	inline static int32_t get_offset_of_currentHealth_2() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___currentHealth_2)); }
	inline float get_currentHealth_2() const { return ___currentHealth_2; }
	inline float* get_address_of_currentHealth_2() { return &___currentHealth_2; }
	inline void set_currentHealth_2(float value)
	{
		___currentHealth_2 = value;
	}

	inline static int32_t get_offset_of_maxHealth_3() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___maxHealth_3)); }
	inline float get_maxHealth_3() const { return ___maxHealth_3; }
	inline float* get_address_of_maxHealth_3() { return &___maxHealth_3; }
	inline void set_maxHealth_3(float value)
	{
		___maxHealth_3 = value;
	}

	inline static int32_t get_offset_of_outDamageAmount_4() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___outDamageAmount_4)); }
	inline float get_outDamageAmount_4() const { return ___outDamageAmount_4; }
	inline float* get_address_of_outDamageAmount_4() { return &___outDamageAmount_4; }
	inline void set_outDamageAmount_4(float value)
	{
		___outDamageAmount_4 = value;
	}

	inline static int32_t get_offset_of_damageLayers_5() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___damageLayers_5)); }
	inline LayerMask_t1862190090  get_damageLayers_5() const { return ___damageLayers_5; }
	inline LayerMask_t1862190090 * get_address_of_damageLayers_5() { return &___damageLayers_5; }
	inline void set_damageLayers_5(LayerMask_t1862190090  value)
	{
		___damageLayers_5 = value;
	}

	inline static int32_t get_offset_of__destroySound_6() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ____destroySound_6)); }
	inline AudioClip_t3714538611 * get__destroySound_6() const { return ____destroySound_6; }
	inline AudioClip_t3714538611 ** get_address_of__destroySound_6() { return &____destroySound_6; }
	inline void set__destroySound_6(AudioClip_t3714538611 * value)
	{
		____destroySound_6 = value;
		Il2CppCodeGenWriteBarrier(&____destroySound_6, value);
	}

	inline static int32_t get_offset_of_colors_7() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___colors_7)); }
	inline Color32U5BU5D_t1677970742* get_colors_7() const { return ___colors_7; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_7() { return &___colors_7; }
	inline void set_colors_7(Color32U5BU5D_t1677970742* value)
	{
		___colors_7 = value;
		Il2CppCodeGenWriteBarrier(&___colors_7, value);
	}

	inline static int32_t get_offset_of_collisionType_8() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___collisionType_8)); }
	inline int32_t get_collisionType_8() const { return ___collisionType_8; }
	inline int32_t* get_address_of_collisionType_8() { return &___collisionType_8; }
	inline void set_collisionType_8(int32_t value)
	{
		___collisionType_8 = value;
	}

	inline static int32_t get_offset_of_DamageCallback_9() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___DamageCallback_9)); }
	inline List_1_t3422306049 * get_DamageCallback_9() const { return ___DamageCallback_9; }
	inline List_1_t3422306049 ** get_address_of_DamageCallback_9() { return &___DamageCallback_9; }
	inline void set_DamageCallback_9(List_1_t3422306049 * value)
	{
		___DamageCallback_9 = value;
		Il2CppCodeGenWriteBarrier(&___DamageCallback_9, value);
	}

	inline static int32_t get_offset_of_HealCallback_10() { return static_cast<int32_t>(offsetof(Damagable_t4024817136, ___HealCallback_10)); }
	inline List_1_t3422306049 * get_HealCallback_10() const { return ___HealCallback_10; }
	inline List_1_t3422306049 ** get_address_of_HealCallback_10() { return &___HealCallback_10; }
	inline void set_HealCallback_10(List_1_t3422306049 * value)
	{
		___HealCallback_10 = value;
		Il2CppCodeGenWriteBarrier(&___HealCallback_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
