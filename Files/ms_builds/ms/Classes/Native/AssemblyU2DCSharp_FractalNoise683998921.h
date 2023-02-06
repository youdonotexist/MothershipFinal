#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Perlin
struct Perlin_t2387111028;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FractalNoise
struct  FractalNoise_t683998921  : public Il2CppObject
{
public:
	// Perlin FractalNoise::m_Noise
	Perlin_t2387111028 * ___m_Noise_0;
	// System.Single[] FractalNoise::m_Exponent
	SingleU5BU5D_t1219431280* ___m_Exponent_1;
	// System.Int32 FractalNoise::m_IntOctaves
	int32_t ___m_IntOctaves_2;
	// System.Single FractalNoise::m_Octaves
	float ___m_Octaves_3;
	// System.Single FractalNoise::m_Lacunarity
	float ___m_Lacunarity_4;

public:
	inline static int32_t get_offset_of_m_Noise_0() { return static_cast<int32_t>(offsetof(FractalNoise_t683998921, ___m_Noise_0)); }
	inline Perlin_t2387111028 * get_m_Noise_0() const { return ___m_Noise_0; }
	inline Perlin_t2387111028 ** get_address_of_m_Noise_0() { return &___m_Noise_0; }
	inline void set_m_Noise_0(Perlin_t2387111028 * value)
	{
		___m_Noise_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Noise_0, value);
	}

	inline static int32_t get_offset_of_m_Exponent_1() { return static_cast<int32_t>(offsetof(FractalNoise_t683998921, ___m_Exponent_1)); }
	inline SingleU5BU5D_t1219431280* get_m_Exponent_1() const { return ___m_Exponent_1; }
	inline SingleU5BU5D_t1219431280** get_address_of_m_Exponent_1() { return &___m_Exponent_1; }
	inline void set_m_Exponent_1(SingleU5BU5D_t1219431280* value)
	{
		___m_Exponent_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Exponent_1, value);
	}

	inline static int32_t get_offset_of_m_IntOctaves_2() { return static_cast<int32_t>(offsetof(FractalNoise_t683998921, ___m_IntOctaves_2)); }
	inline int32_t get_m_IntOctaves_2() const { return ___m_IntOctaves_2; }
	inline int32_t* get_address_of_m_IntOctaves_2() { return &___m_IntOctaves_2; }
	inline void set_m_IntOctaves_2(int32_t value)
	{
		___m_IntOctaves_2 = value;
	}

	inline static int32_t get_offset_of_m_Octaves_3() { return static_cast<int32_t>(offsetof(FractalNoise_t683998921, ___m_Octaves_3)); }
	inline float get_m_Octaves_3() const { return ___m_Octaves_3; }
	inline float* get_address_of_m_Octaves_3() { return &___m_Octaves_3; }
	inline void set_m_Octaves_3(float value)
	{
		___m_Octaves_3 = value;
	}

	inline static int32_t get_offset_of_m_Lacunarity_4() { return static_cast<int32_t>(offsetof(FractalNoise_t683998921, ___m_Lacunarity_4)); }
	inline float get_m_Lacunarity_4() const { return ___m_Lacunarity_4; }
	inline float* get_address_of_m_Lacunarity_4() { return &___m_Lacunarity_4; }
	inline void set_m_Lacunarity_4(float value)
	{
		___m_Lacunarity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
