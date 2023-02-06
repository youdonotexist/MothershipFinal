#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DebrisParticleEffect
struct  DebrisParticleEffect_t1220480562  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color DebrisParticleEffect::debrisColor
	Color_t1588175760  ___debrisColor_2;
	// System.Single DebrisParticleEffect::debrisRadius
	float ___debrisRadius_3;
	// UnityEngine.ParticleSystem DebrisParticleEffect::_system
	ParticleSystem_t56787138 * ____system_4;
	// UnityEngine.Color32[] DebrisParticleEffect::colors
	Color32U5BU5D_t1677970742* ___colors_5;
	// System.Boolean DebrisParticleEffect::fixColors
	bool ___fixColors_6;

public:
	inline static int32_t get_offset_of_debrisColor_2() { return static_cast<int32_t>(offsetof(DebrisParticleEffect_t1220480562, ___debrisColor_2)); }
	inline Color_t1588175760  get_debrisColor_2() const { return ___debrisColor_2; }
	inline Color_t1588175760 * get_address_of_debrisColor_2() { return &___debrisColor_2; }
	inline void set_debrisColor_2(Color_t1588175760  value)
	{
		___debrisColor_2 = value;
	}

	inline static int32_t get_offset_of_debrisRadius_3() { return static_cast<int32_t>(offsetof(DebrisParticleEffect_t1220480562, ___debrisRadius_3)); }
	inline float get_debrisRadius_3() const { return ___debrisRadius_3; }
	inline float* get_address_of_debrisRadius_3() { return &___debrisRadius_3; }
	inline void set_debrisRadius_3(float value)
	{
		___debrisRadius_3 = value;
	}

	inline static int32_t get_offset_of__system_4() { return static_cast<int32_t>(offsetof(DebrisParticleEffect_t1220480562, ____system_4)); }
	inline ParticleSystem_t56787138 * get__system_4() const { return ____system_4; }
	inline ParticleSystem_t56787138 ** get_address_of__system_4() { return &____system_4; }
	inline void set__system_4(ParticleSystem_t56787138 * value)
	{
		____system_4 = value;
		Il2CppCodeGenWriteBarrier(&____system_4, value);
	}

	inline static int32_t get_offset_of_colors_5() { return static_cast<int32_t>(offsetof(DebrisParticleEffect_t1220480562, ___colors_5)); }
	inline Color32U5BU5D_t1677970742* get_colors_5() const { return ___colors_5; }
	inline Color32U5BU5D_t1677970742** get_address_of_colors_5() { return &___colors_5; }
	inline void set_colors_5(Color32U5BU5D_t1677970742* value)
	{
		___colors_5 = value;
		Il2CppCodeGenWriteBarrier(&___colors_5, value);
	}

	inline static int32_t get_offset_of_fixColors_6() { return static_cast<int32_t>(offsetof(DebrisParticleEffect_t1220480562, ___fixColors_6)); }
	inline bool get_fixColors_6() const { return ___fixColors_6; }
	inline bool* get_address_of_fixColors_6() { return &___fixColors_6; }
	inline void set_fixColors_6(bool value)
	{
		___fixColors_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
