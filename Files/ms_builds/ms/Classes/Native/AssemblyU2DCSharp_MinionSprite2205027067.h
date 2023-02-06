#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MinionBaseVehicle
struct MinionBaseVehicle_t3259673765;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinionSprite
struct  MinionSprite_t2205027067  : public MonoBehaviour_t3012272455
{
public:
	// MinionBaseVehicle MinionSprite::_vehicle
	MinionBaseVehicle_t3259673765 * ____vehicle_2;

public:
	inline static int32_t get_offset_of__vehicle_2() { return static_cast<int32_t>(offsetof(MinionSprite_t2205027067, ____vehicle_2)); }
	inline MinionBaseVehicle_t3259673765 * get__vehicle_2() const { return ____vehicle_2; }
	inline MinionBaseVehicle_t3259673765 ** get_address_of__vehicle_2() { return &____vehicle_2; }
	inline void set__vehicle_2(MinionBaseVehicle_t3259673765 * value)
	{
		____vehicle_2 = value;
		Il2CppCodeGenWriteBarrier(&____vehicle_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
