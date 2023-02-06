#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Damagable
struct Damagable_t4024817136;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vehicle
struct  Vehicle_t2006722316  : public MonoBehaviour_t3012272455
{
public:
	// Damagable Vehicle::_damagable
	Damagable_t4024817136 * ____damagable_2;

public:
	inline static int32_t get_offset_of__damagable_2() { return static_cast<int32_t>(offsetof(Vehicle_t2006722316, ____damagable_2)); }
	inline Damagable_t4024817136 * get__damagable_2() const { return ____damagable_2; }
	inline Damagable_t4024817136 ** get_address_of__damagable_2() { return &____damagable_2; }
	inline void set__damagable_2(Damagable_t4024817136 * value)
	{
		____damagable_2 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
