#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroAIManager
struct HeroAIManager_t825711499;
// HeroVehicle
struct HeroVehicle_t3389256114;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DirectivePack
struct  DirectivePack_t461000424  : public MonoBehaviour_t3012272455
{
public:
	// HeroAIManager DirectivePack::_aiManager
	HeroAIManager_t825711499 * ____aiManager_2;
	// HeroVehicle DirectivePack::_vehicle
	HeroVehicle_t3389256114 * ____vehicle_3;
	// UnityEngine.GameObject DirectivePack::_mothership
	GameObject_t4012695102 * ____mothership_4;
	// System.Boolean DirectivePack::PrimaryDirectivePack
	bool ___PrimaryDirectivePack_5;

public:
	inline static int32_t get_offset_of__aiManager_2() { return static_cast<int32_t>(offsetof(DirectivePack_t461000424, ____aiManager_2)); }
	inline HeroAIManager_t825711499 * get__aiManager_2() const { return ____aiManager_2; }
	inline HeroAIManager_t825711499 ** get_address_of__aiManager_2() { return &____aiManager_2; }
	inline void set__aiManager_2(HeroAIManager_t825711499 * value)
	{
		____aiManager_2 = value;
		Il2CppCodeGenWriteBarrier(&____aiManager_2, value);
	}

	inline static int32_t get_offset_of__vehicle_3() { return static_cast<int32_t>(offsetof(DirectivePack_t461000424, ____vehicle_3)); }
	inline HeroVehicle_t3389256114 * get__vehicle_3() const { return ____vehicle_3; }
	inline HeroVehicle_t3389256114 ** get_address_of__vehicle_3() { return &____vehicle_3; }
	inline void set__vehicle_3(HeroVehicle_t3389256114 * value)
	{
		____vehicle_3 = value;
		Il2CppCodeGenWriteBarrier(&____vehicle_3, value);
	}

	inline static int32_t get_offset_of__mothership_4() { return static_cast<int32_t>(offsetof(DirectivePack_t461000424, ____mothership_4)); }
	inline GameObject_t4012695102 * get__mothership_4() const { return ____mothership_4; }
	inline GameObject_t4012695102 ** get_address_of__mothership_4() { return &____mothership_4; }
	inline void set__mothership_4(GameObject_t4012695102 * value)
	{
		____mothership_4 = value;
		Il2CppCodeGenWriteBarrier(&____mothership_4, value);
	}

	inline static int32_t get_offset_of_PrimaryDirectivePack_5() { return static_cast<int32_t>(offsetof(DirectivePack_t461000424, ___PrimaryDirectivePack_5)); }
	inline bool get_PrimaryDirectivePack_5() const { return ___PrimaryDirectivePack_5; }
	inline bool* get_address_of_PrimaryDirectivePack_5() { return &___PrimaryDirectivePack_5; }
	inline void set_PrimaryDirectivePack_5(bool value)
	{
		___PrimaryDirectivePack_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
