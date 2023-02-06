#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Port[]
struct PortU5BU5D_t633647036;
// CoreStatus
struct CoreStatus_t3996308625;
// exSprite[]
struct exSpriteU5BU5D_t1268764233;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// PortState
struct PortState_t3108340848;

#include "AssemblyU2DCSharp_Vehicle2006722316.h"
#include "AssemblyU2DCSharp_MothershipVehicle_PortStatus1869286387.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MothershipVehicle
struct  MothershipVehicle_t3966619277  : public Vehicle_t2006722316
{
public:
	// Port[] MothershipVehicle::ports
	PortU5BU5D_t633647036* ___ports_3;
	// CoreStatus MothershipVehicle::_coreStatus
	CoreStatus_t3996308625 * ____coreStatus_4;
	// exSprite[] MothershipVehicle::_sprites
	exSpriteU5BU5D_t1268764233* ____sprites_5;
	// MothershipVehicle/PortStatus MothershipVehicle::portStatus
	int32_t ___portStatus_6;
	// System.Boolean MothershipVehicle::isDestroyed
	bool ___isDestroyed_7;
	// UnityEngine.Vector2 MothershipVehicle::nesColliderOffset
	Vector2_t3525329788  ___nesColliderOffset_8;
	// UnityEngine.GameObject[] MothershipVehicle::damageObjects
	GameObjectU5BU5D_t3499186955* ___damageObjects_9;
	// System.Int32 MothershipVehicle::damagePanelCount
	int32_t ___damagePanelCount_10;
	// System.Single MothershipVehicle::scrapCount
	float ___scrapCount_11;
	// PortState MothershipVehicle::portState
	PortState_t3108340848 * ___portState_12;

public:
	inline static int32_t get_offset_of_ports_3() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___ports_3)); }
	inline PortU5BU5D_t633647036* get_ports_3() const { return ___ports_3; }
	inline PortU5BU5D_t633647036** get_address_of_ports_3() { return &___ports_3; }
	inline void set_ports_3(PortU5BU5D_t633647036* value)
	{
		___ports_3 = value;
		Il2CppCodeGenWriteBarrier(&___ports_3, value);
	}

	inline static int32_t get_offset_of__coreStatus_4() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ____coreStatus_4)); }
	inline CoreStatus_t3996308625 * get__coreStatus_4() const { return ____coreStatus_4; }
	inline CoreStatus_t3996308625 ** get_address_of__coreStatus_4() { return &____coreStatus_4; }
	inline void set__coreStatus_4(CoreStatus_t3996308625 * value)
	{
		____coreStatus_4 = value;
		Il2CppCodeGenWriteBarrier(&____coreStatus_4, value);
	}

	inline static int32_t get_offset_of__sprites_5() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ____sprites_5)); }
	inline exSpriteU5BU5D_t1268764233* get__sprites_5() const { return ____sprites_5; }
	inline exSpriteU5BU5D_t1268764233** get_address_of__sprites_5() { return &____sprites_5; }
	inline void set__sprites_5(exSpriteU5BU5D_t1268764233* value)
	{
		____sprites_5 = value;
		Il2CppCodeGenWriteBarrier(&____sprites_5, value);
	}

	inline static int32_t get_offset_of_portStatus_6() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___portStatus_6)); }
	inline int32_t get_portStatus_6() const { return ___portStatus_6; }
	inline int32_t* get_address_of_portStatus_6() { return &___portStatus_6; }
	inline void set_portStatus_6(int32_t value)
	{
		___portStatus_6 = value;
	}

	inline static int32_t get_offset_of_isDestroyed_7() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___isDestroyed_7)); }
	inline bool get_isDestroyed_7() const { return ___isDestroyed_7; }
	inline bool* get_address_of_isDestroyed_7() { return &___isDestroyed_7; }
	inline void set_isDestroyed_7(bool value)
	{
		___isDestroyed_7 = value;
	}

	inline static int32_t get_offset_of_nesColliderOffset_8() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___nesColliderOffset_8)); }
	inline Vector2_t3525329788  get_nesColliderOffset_8() const { return ___nesColliderOffset_8; }
	inline Vector2_t3525329788 * get_address_of_nesColliderOffset_8() { return &___nesColliderOffset_8; }
	inline void set_nesColliderOffset_8(Vector2_t3525329788  value)
	{
		___nesColliderOffset_8 = value;
	}

	inline static int32_t get_offset_of_damageObjects_9() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___damageObjects_9)); }
	inline GameObjectU5BU5D_t3499186955* get_damageObjects_9() const { return ___damageObjects_9; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_damageObjects_9() { return &___damageObjects_9; }
	inline void set_damageObjects_9(GameObjectU5BU5D_t3499186955* value)
	{
		___damageObjects_9 = value;
		Il2CppCodeGenWriteBarrier(&___damageObjects_9, value);
	}

	inline static int32_t get_offset_of_damagePanelCount_10() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___damagePanelCount_10)); }
	inline int32_t get_damagePanelCount_10() const { return ___damagePanelCount_10; }
	inline int32_t* get_address_of_damagePanelCount_10() { return &___damagePanelCount_10; }
	inline void set_damagePanelCount_10(int32_t value)
	{
		___damagePanelCount_10 = value;
	}

	inline static int32_t get_offset_of_scrapCount_11() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___scrapCount_11)); }
	inline float get_scrapCount_11() const { return ___scrapCount_11; }
	inline float* get_address_of_scrapCount_11() { return &___scrapCount_11; }
	inline void set_scrapCount_11(float value)
	{
		___scrapCount_11 = value;
	}

	inline static int32_t get_offset_of_portState_12() { return static_cast<int32_t>(offsetof(MothershipVehicle_t3966619277, ___portState_12)); }
	inline PortState_t3108340848 * get_portState_12() const { return ___portState_12; }
	inline PortState_t3108340848 ** get_address_of_portState_12() { return &___portState_12; }
	inline void set_portState_12(PortState_t3108340848 * value)
	{
		___portState_12 = value;
		Il2CppCodeGenWriteBarrier(&___portState_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
