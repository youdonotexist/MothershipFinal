#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TimestampPoint
struct TimestampPoint_t2272609850;
// UnityEngine.Collider
struct Collider_t955670625;
// exSprite
struct exSprite_t1539598680;
// exSprite[]
struct exSpriteU5BU5D_t1268764233;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// DebrisParticleEffect
struct DebrisParticleEffect_t1220480562;

#include "AssemblyU2DCSharp_MinionBaseVehicle3259673765.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_Damagable_COLLISION_TYPE1811711047.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinionPhysicsVehicle
struct  MinionPhysicsVehicle_t2819122459  : public MinionBaseVehicle_t3259673765
{
public:
	// System.Single MinionPhysicsVehicle::lastPointTime
	float ___lastPointTime_13;
	// System.Single MinionPhysicsVehicle::lastVelocity
	float ___lastVelocity_14;
	// UnityEngine.Vector3 MinionPhysicsVehicle::lastForward
	Vector3_t3525329789  ___lastForward_15;
	// TimestampPoint MinionPhysicsVehicle::fromPoint
	TimestampPoint_t2272609850 * ___fromPoint_16;
	// TimestampPoint MinionPhysicsVehicle::goToPoint
	TimestampPoint_t2272609850 * ___goToPoint_17;
	// UnityEngine.Collider MinionPhysicsVehicle::_collider
	Collider_t955670625 * ____collider_18;
	// System.Boolean MinionPhysicsVehicle::launched
	bool ___launched_19;
	// exSprite MinionPhysicsVehicle::_sprite
	exSprite_t1539598680 * ____sprite_20;
	// exSprite[] MinionPhysicsVehicle::_childrenSprites
	exSpriteU5BU5D_t1268764233* ____childrenSprites_21;
	// System.Single MinionPhysicsVehicle::smoothPathElapsed
	float ___smoothPathElapsed_22;
	// Vectrosity.VectorLine MinionPhysicsVehicle::spline
	VectorLine_t3065371647 * ___spline_23;
	// System.Boolean MinionPhysicsVehicle::constantForward
	bool ___constantForward_24;
	// System.Boolean MinionPhysicsVehicle::pathEnded
	bool ___pathEnded_25;
	// System.Boolean MinionPhysicsVehicle::online
	bool ___online_26;
	// System.Single MinionPhysicsVehicle::damageMultiplier
	float ___damageMultiplier_27;
	// DebrisParticleEffect MinionPhysicsVehicle::_debrisPrefabDirectional
	DebrisParticleEffect_t1220480562 * ____debrisPrefabDirectional_28;
	// DebrisParticleEffect MinionPhysicsVehicle::_debrisPrefabRadial
	DebrisParticleEffect_t1220480562 * ____debrisPrefabRadial_29;
	// Damagable/COLLISION_TYPE MinionPhysicsVehicle::lastCollisionType
	int32_t ___lastCollisionType_30;

public:
	inline static int32_t get_offset_of_lastPointTime_13() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___lastPointTime_13)); }
	inline float get_lastPointTime_13() const { return ___lastPointTime_13; }
	inline float* get_address_of_lastPointTime_13() { return &___lastPointTime_13; }
	inline void set_lastPointTime_13(float value)
	{
		___lastPointTime_13 = value;
	}

	inline static int32_t get_offset_of_lastVelocity_14() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___lastVelocity_14)); }
	inline float get_lastVelocity_14() const { return ___lastVelocity_14; }
	inline float* get_address_of_lastVelocity_14() { return &___lastVelocity_14; }
	inline void set_lastVelocity_14(float value)
	{
		___lastVelocity_14 = value;
	}

	inline static int32_t get_offset_of_lastForward_15() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___lastForward_15)); }
	inline Vector3_t3525329789  get_lastForward_15() const { return ___lastForward_15; }
	inline Vector3_t3525329789 * get_address_of_lastForward_15() { return &___lastForward_15; }
	inline void set_lastForward_15(Vector3_t3525329789  value)
	{
		___lastForward_15 = value;
	}

	inline static int32_t get_offset_of_fromPoint_16() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___fromPoint_16)); }
	inline TimestampPoint_t2272609850 * get_fromPoint_16() const { return ___fromPoint_16; }
	inline TimestampPoint_t2272609850 ** get_address_of_fromPoint_16() { return &___fromPoint_16; }
	inline void set_fromPoint_16(TimestampPoint_t2272609850 * value)
	{
		___fromPoint_16 = value;
		Il2CppCodeGenWriteBarrier(&___fromPoint_16, value);
	}

	inline static int32_t get_offset_of_goToPoint_17() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___goToPoint_17)); }
	inline TimestampPoint_t2272609850 * get_goToPoint_17() const { return ___goToPoint_17; }
	inline TimestampPoint_t2272609850 ** get_address_of_goToPoint_17() { return &___goToPoint_17; }
	inline void set_goToPoint_17(TimestampPoint_t2272609850 * value)
	{
		___goToPoint_17 = value;
		Il2CppCodeGenWriteBarrier(&___goToPoint_17, value);
	}

	inline static int32_t get_offset_of__collider_18() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ____collider_18)); }
	inline Collider_t955670625 * get__collider_18() const { return ____collider_18; }
	inline Collider_t955670625 ** get_address_of__collider_18() { return &____collider_18; }
	inline void set__collider_18(Collider_t955670625 * value)
	{
		____collider_18 = value;
		Il2CppCodeGenWriteBarrier(&____collider_18, value);
	}

	inline static int32_t get_offset_of_launched_19() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___launched_19)); }
	inline bool get_launched_19() const { return ___launched_19; }
	inline bool* get_address_of_launched_19() { return &___launched_19; }
	inline void set_launched_19(bool value)
	{
		___launched_19 = value;
	}

	inline static int32_t get_offset_of__sprite_20() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ____sprite_20)); }
	inline exSprite_t1539598680 * get__sprite_20() const { return ____sprite_20; }
	inline exSprite_t1539598680 ** get_address_of__sprite_20() { return &____sprite_20; }
	inline void set__sprite_20(exSprite_t1539598680 * value)
	{
		____sprite_20 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_20, value);
	}

	inline static int32_t get_offset_of__childrenSprites_21() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ____childrenSprites_21)); }
	inline exSpriteU5BU5D_t1268764233* get__childrenSprites_21() const { return ____childrenSprites_21; }
	inline exSpriteU5BU5D_t1268764233** get_address_of__childrenSprites_21() { return &____childrenSprites_21; }
	inline void set__childrenSprites_21(exSpriteU5BU5D_t1268764233* value)
	{
		____childrenSprites_21 = value;
		Il2CppCodeGenWriteBarrier(&____childrenSprites_21, value);
	}

	inline static int32_t get_offset_of_smoothPathElapsed_22() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___smoothPathElapsed_22)); }
	inline float get_smoothPathElapsed_22() const { return ___smoothPathElapsed_22; }
	inline float* get_address_of_smoothPathElapsed_22() { return &___smoothPathElapsed_22; }
	inline void set_smoothPathElapsed_22(float value)
	{
		___smoothPathElapsed_22 = value;
	}

	inline static int32_t get_offset_of_spline_23() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___spline_23)); }
	inline VectorLine_t3065371647 * get_spline_23() const { return ___spline_23; }
	inline VectorLine_t3065371647 ** get_address_of_spline_23() { return &___spline_23; }
	inline void set_spline_23(VectorLine_t3065371647 * value)
	{
		___spline_23 = value;
		Il2CppCodeGenWriteBarrier(&___spline_23, value);
	}

	inline static int32_t get_offset_of_constantForward_24() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___constantForward_24)); }
	inline bool get_constantForward_24() const { return ___constantForward_24; }
	inline bool* get_address_of_constantForward_24() { return &___constantForward_24; }
	inline void set_constantForward_24(bool value)
	{
		___constantForward_24 = value;
	}

	inline static int32_t get_offset_of_pathEnded_25() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___pathEnded_25)); }
	inline bool get_pathEnded_25() const { return ___pathEnded_25; }
	inline bool* get_address_of_pathEnded_25() { return &___pathEnded_25; }
	inline void set_pathEnded_25(bool value)
	{
		___pathEnded_25 = value;
	}

	inline static int32_t get_offset_of_online_26() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___online_26)); }
	inline bool get_online_26() const { return ___online_26; }
	inline bool* get_address_of_online_26() { return &___online_26; }
	inline void set_online_26(bool value)
	{
		___online_26 = value;
	}

	inline static int32_t get_offset_of_damageMultiplier_27() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___damageMultiplier_27)); }
	inline float get_damageMultiplier_27() const { return ___damageMultiplier_27; }
	inline float* get_address_of_damageMultiplier_27() { return &___damageMultiplier_27; }
	inline void set_damageMultiplier_27(float value)
	{
		___damageMultiplier_27 = value;
	}

	inline static int32_t get_offset_of__debrisPrefabDirectional_28() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ____debrisPrefabDirectional_28)); }
	inline DebrisParticleEffect_t1220480562 * get__debrisPrefabDirectional_28() const { return ____debrisPrefabDirectional_28; }
	inline DebrisParticleEffect_t1220480562 ** get_address_of__debrisPrefabDirectional_28() { return &____debrisPrefabDirectional_28; }
	inline void set__debrisPrefabDirectional_28(DebrisParticleEffect_t1220480562 * value)
	{
		____debrisPrefabDirectional_28 = value;
		Il2CppCodeGenWriteBarrier(&____debrisPrefabDirectional_28, value);
	}

	inline static int32_t get_offset_of__debrisPrefabRadial_29() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ____debrisPrefabRadial_29)); }
	inline DebrisParticleEffect_t1220480562 * get__debrisPrefabRadial_29() const { return ____debrisPrefabRadial_29; }
	inline DebrisParticleEffect_t1220480562 ** get_address_of__debrisPrefabRadial_29() { return &____debrisPrefabRadial_29; }
	inline void set__debrisPrefabRadial_29(DebrisParticleEffect_t1220480562 * value)
	{
		____debrisPrefabRadial_29 = value;
		Il2CppCodeGenWriteBarrier(&____debrisPrefabRadial_29, value);
	}

	inline static int32_t get_offset_of_lastCollisionType_30() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459, ___lastCollisionType_30)); }
	inline int32_t get_lastCollisionType_30() const { return ___lastCollisionType_30; }
	inline int32_t* get_address_of_lastCollisionType_30() { return &___lastCollisionType_30; }
	inline void set_lastCollisionType_30(int32_t value)
	{
		___lastCollisionType_30 = value;
	}
};

struct MinionPhysicsVehicle_t2819122459_StaticFields
{
public:
	// UnityEngine.Color MinionPhysicsVehicle::LASER_COLOR
	Color_t1588175760  ___LASER_COLOR_31;

public:
	inline static int32_t get_offset_of_LASER_COLOR_31() { return static_cast<int32_t>(offsetof(MinionPhysicsVehicle_t2819122459_StaticFields, ___LASER_COLOR_31)); }
	inline Color_t1588175760  get_LASER_COLOR_31() const { return ___LASER_COLOR_31; }
	inline Color_t1588175760 * get_address_of_LASER_COLOR_31() { return &___LASER_COLOR_31; }
	inline void set_LASER_COLOR_31(Color_t1588175760  value)
	{
		___LASER_COLOR_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
