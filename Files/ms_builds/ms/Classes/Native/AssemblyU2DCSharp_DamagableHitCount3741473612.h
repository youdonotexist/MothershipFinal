#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Damagable4024817136.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DamagableHitCount
struct  DamagableHitCount_t3741473612  : public Damagable_t4024817136
{
public:
	// System.Int32 DamagableHitCount::hitCount
	int32_t ___hitCount_11;
	// System.Int32 DamagableHitCount::hitsRemaining
	int32_t ___hitsRemaining_12;
	// System.Single DamagableHitCount::hitRatio
	float ___hitRatio_13;

public:
	inline static int32_t get_offset_of_hitCount_11() { return static_cast<int32_t>(offsetof(DamagableHitCount_t3741473612, ___hitCount_11)); }
	inline int32_t get_hitCount_11() const { return ___hitCount_11; }
	inline int32_t* get_address_of_hitCount_11() { return &___hitCount_11; }
	inline void set_hitCount_11(int32_t value)
	{
		___hitCount_11 = value;
	}

	inline static int32_t get_offset_of_hitsRemaining_12() { return static_cast<int32_t>(offsetof(DamagableHitCount_t3741473612, ___hitsRemaining_12)); }
	inline int32_t get_hitsRemaining_12() const { return ___hitsRemaining_12; }
	inline int32_t* get_address_of_hitsRemaining_12() { return &___hitsRemaining_12; }
	inline void set_hitsRemaining_12(int32_t value)
	{
		___hitsRemaining_12 = value;
	}

	inline static int32_t get_offset_of_hitRatio_13() { return static_cast<int32_t>(offsetof(DamagableHitCount_t3741473612, ___hitRatio_13)); }
	inline float get_hitRatio_13() const { return ___hitRatio_13; }
	inline float* get_address_of_hitRatio_13() { return &___hitRatio_13; }
	inline void set_hitRatio_13(float value)
	{
		___hitRatio_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
