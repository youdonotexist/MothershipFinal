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
// exSprite
struct exSprite_t1539598680;
// Callback`1<PortState/MinionTypeLevelDetail>
struct Callback_1_t1737389040;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeLevelDetail70250981.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinionTypeBase
struct  MinionTypeBase_t2690101217  : public MonoBehaviour_t3012272455
{
public:
	// PortState/MinionTypeLevelDetail MinionTypeBase::levelDetails
	MinionTypeLevelDetail_t70250981  ___levelDetails_2;
	// MinionPhysicsVehicle MinionTypeBase::_vehicle
	MinionPhysicsVehicle_t2819122459 * ____vehicle_3;
	// exSprite MinionTypeBase::_sprite
	exSprite_t1539598680 * ____sprite_4;
	// Callback`1<PortState/MinionTypeLevelDetail> MinionTypeBase::onDetailsChange
	Callback_1_t1737389040 * ___onDetailsChange_5;

public:
	inline static int32_t get_offset_of_levelDetails_2() { return static_cast<int32_t>(offsetof(MinionTypeBase_t2690101217, ___levelDetails_2)); }
	inline MinionTypeLevelDetail_t70250981  get_levelDetails_2() const { return ___levelDetails_2; }
	inline MinionTypeLevelDetail_t70250981 * get_address_of_levelDetails_2() { return &___levelDetails_2; }
	inline void set_levelDetails_2(MinionTypeLevelDetail_t70250981  value)
	{
		___levelDetails_2 = value;
	}

	inline static int32_t get_offset_of__vehicle_3() { return static_cast<int32_t>(offsetof(MinionTypeBase_t2690101217, ____vehicle_3)); }
	inline MinionPhysicsVehicle_t2819122459 * get__vehicle_3() const { return ____vehicle_3; }
	inline MinionPhysicsVehicle_t2819122459 ** get_address_of__vehicle_3() { return &____vehicle_3; }
	inline void set__vehicle_3(MinionPhysicsVehicle_t2819122459 * value)
	{
		____vehicle_3 = value;
		Il2CppCodeGenWriteBarrier(&____vehicle_3, value);
	}

	inline static int32_t get_offset_of__sprite_4() { return static_cast<int32_t>(offsetof(MinionTypeBase_t2690101217, ____sprite_4)); }
	inline exSprite_t1539598680 * get__sprite_4() const { return ____sprite_4; }
	inline exSprite_t1539598680 ** get_address_of__sprite_4() { return &____sprite_4; }
	inline void set__sprite_4(exSprite_t1539598680 * value)
	{
		____sprite_4 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_4, value);
	}

	inline static int32_t get_offset_of_onDetailsChange_5() { return static_cast<int32_t>(offsetof(MinionTypeBase_t2690101217, ___onDetailsChange_5)); }
	inline Callback_1_t1737389040 * get_onDetailsChange_5() const { return ___onDetailsChange_5; }
	inline Callback_1_t1737389040 ** get_address_of_onDetailsChange_5() { return &___onDetailsChange_5; }
	inline void set_onDetailsChange_5(Callback_1_t1737389040 * value)
	{
		___onDetailsChange_5 = value;
		Il2CppCodeGenWriteBarrier(&___onDetailsChange_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
