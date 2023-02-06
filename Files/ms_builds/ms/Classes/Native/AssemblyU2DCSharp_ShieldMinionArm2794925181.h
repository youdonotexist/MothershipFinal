#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MinionPhysicsVehicle
struct MinionPhysicsVehicle_t2819122459;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShieldMinionArm
struct  ShieldMinionArm_t2794925181  : public MonoBehaviour_t3012272455
{
public:
	// MinionPhysicsVehicle ShieldMinionArm::_physicsVehicle
	MinionPhysicsVehicle_t2819122459 * ____physicsVehicle_2;

public:
	inline static int32_t get_offset_of__physicsVehicle_2() { return static_cast<int32_t>(offsetof(ShieldMinionArm_t2794925181, ____physicsVehicle_2)); }
	inline MinionPhysicsVehicle_t2819122459 * get__physicsVehicle_2() const { return ____physicsVehicle_2; }
	inline MinionPhysicsVehicle_t2819122459 ** get_address_of__physicsVehicle_2() { return &____physicsVehicle_2; }
	inline void set__physicsVehicle_2(MinionPhysicsVehicle_t2819122459 * value)
	{
		____physicsVehicle_2 = value;
		Il2CppCodeGenWriteBarrier(&____physicsVehicle_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
