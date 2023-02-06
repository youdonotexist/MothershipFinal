#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Shield2475494281.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BouncyShield
struct  BouncyShield_t2791436613  : public Shield_t2475494281
{
public:
	// System.Single BouncyShield::moveSpeed
	float ___moveSpeed_10;

public:
	inline static int32_t get_offset_of_moveSpeed_10() { return static_cast<int32_t>(offsetof(BouncyShield_t2791436613, ___moveSpeed_10)); }
	inline float get_moveSpeed_10() const { return ___moveSpeed_10; }
	inline float* get_address_of_moveSpeed_10() { return &___moveSpeed_10; }
	inline void set_moveSpeed_10(float value)
	{
		___moveSpeed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
