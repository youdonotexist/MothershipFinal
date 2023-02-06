#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Camera
struct Camera_t3533968274;
// TimeKeeper
struct TimeKeeper_t2543482943;
// Path2
struct Path2_t76886157;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// MinionBaseVehicle
struct MinionBaseVehicle_t3259673765;
// MothershipVehicle
struct MothershipVehicle_t3966619277;
// exSprite
struct exSprite_t1539598680;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSpriteAnimClip
struct exSpriteAnimClip_t892886649;
// PortState
struct PortState_t3108340848;
// ColliderOutline2D
struct ColliderOutline2D_t1787330656;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Port
struct  Port_t2493601  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] Port::shipPrefabs
	GameObjectU5BU5D_t3499186955* ___shipPrefabs_2;
	// UnityEngine.GameObject[] Port::portSpawnLocations
	GameObjectU5BU5D_t3499186955* ___portSpawnLocations_3;
	// UnityEngine.AudioClip Port::_readyClip
	AudioClip_t3714538611 * ____readyClip_4;
	// UnityEngine.Camera Port::_gameCamera
	Camera_t3533968274 * ____gameCamera_5;
	// TimeKeeper Port::_keeper
	TimeKeeper_t2543482943 * ____keeper_6;
	// Path2 Port::currentPath
	Path2_t76886157 * ___currentPath_7;
	// UnityEngine.Vector3[] Port::__PATH
	Vector3U5BU5D_t3227571696* _____PATH_8;
	// UnityEngine.Vector3 Port::lastPositionWorld
	Vector3_t3525329789  ___lastPositionWorld_9;
	// Vectrosity.VectorLine Port::currentLine
	VectorLine_t3065371647 * ___currentLine_10;
	// UnityEngine.Material Port::lineMaterial
	Material_t1886596500 * ___lineMaterial_11;
	// System.Single Port::timeSinceLastMovement
	float ___timeSinceLastMovement_12;
	// System.Single Port::timeBetweenDeploy
	float ___timeBetweenDeploy_13;
	// System.Single Port::distanceBetweenPoints
	float ___distanceBetweenPoints_14;
	// System.Single Port::lastDeploy
	float ___lastDeploy_15;
	// System.Boolean Port::minionReady
	bool ___minionReady_16;
	// System.Boolean Port::portReady
	bool ___portReady_17;
	// UnityEngine.GameObject Port::portWorld
	GameObject_t4012695102 * ___portWorld_18;
	// UnityEngine.GameObject Port::portedMinion
	GameObject_t4012695102 * ___portedMinion_19;
	// MinionBaseVehicle Port::deployedVehicle
	MinionBaseVehicle_t3259673765 * ___deployedVehicle_20;
	// UnityEngine.Vector3 Port::portDirection
	Vector3_t3525329789  ___portDirection_21;
	// UnityEngine.Vector2 Port::nesPortOffset
	Vector2_t3525329788  ___nesPortOffset_22;
	// UnityEngine.Vector2 Port::msPortOffset
	Vector2_t3525329788  ___msPortOffset_23;
	// UnityEngine.Vector2 Port::latestPortOffset
	Vector2_t3525329788  ___latestPortOffset_24;
	// System.Boolean Port::disableOnStart
	bool ___disableOnStart_25;
	// System.Boolean Port::fauxPort
	bool ___fauxPort_26;
	// System.Int32 Port::portNumber
	int32_t ___portNumber_27;
	// MothershipVehicle Port::mothership
	MothershipVehicle_t3966619277 * ___mothership_28;
	// System.Int32 Port::maxPathNodes
	int32_t ___maxPathNodes_29;
	// exSprite Port::_sprite
	exSprite_t1539598680 * ____sprite_30;
	// exSpriteAnimation Port::_animation
	exSpriteAnimation_t1937626380 * ____animation_31;
	// exSpriteAnimClip Port::prepareAnimationName
	exSpriteAnimClip_t892886649 * ___prepareAnimationName_32;
	// exSpriteAnimClip Port::readyAnimationName
	exSpriteAnimClip_t892886649 * ___readyAnimationName_33;
	// PortState Port::portState
	PortState_t3108340848 * ___portState_34;
	// ColliderOutline2D Port::_outline
	ColliderOutline2D_t1787330656 * ____outline_35;

public:
	inline static int32_t get_offset_of_shipPrefabs_2() { return static_cast<int32_t>(offsetof(Port_t2493601, ___shipPrefabs_2)); }
	inline GameObjectU5BU5D_t3499186955* get_shipPrefabs_2() const { return ___shipPrefabs_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_shipPrefabs_2() { return &___shipPrefabs_2; }
	inline void set_shipPrefabs_2(GameObjectU5BU5D_t3499186955* value)
	{
		___shipPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___shipPrefabs_2, value);
	}

	inline static int32_t get_offset_of_portSpawnLocations_3() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portSpawnLocations_3)); }
	inline GameObjectU5BU5D_t3499186955* get_portSpawnLocations_3() const { return ___portSpawnLocations_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_portSpawnLocations_3() { return &___portSpawnLocations_3; }
	inline void set_portSpawnLocations_3(GameObjectU5BU5D_t3499186955* value)
	{
		___portSpawnLocations_3 = value;
		Il2CppCodeGenWriteBarrier(&___portSpawnLocations_3, value);
	}

	inline static int32_t get_offset_of__readyClip_4() { return static_cast<int32_t>(offsetof(Port_t2493601, ____readyClip_4)); }
	inline AudioClip_t3714538611 * get__readyClip_4() const { return ____readyClip_4; }
	inline AudioClip_t3714538611 ** get_address_of__readyClip_4() { return &____readyClip_4; }
	inline void set__readyClip_4(AudioClip_t3714538611 * value)
	{
		____readyClip_4 = value;
		Il2CppCodeGenWriteBarrier(&____readyClip_4, value);
	}

	inline static int32_t get_offset_of__gameCamera_5() { return static_cast<int32_t>(offsetof(Port_t2493601, ____gameCamera_5)); }
	inline Camera_t3533968274 * get__gameCamera_5() const { return ____gameCamera_5; }
	inline Camera_t3533968274 ** get_address_of__gameCamera_5() { return &____gameCamera_5; }
	inline void set__gameCamera_5(Camera_t3533968274 * value)
	{
		____gameCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&____gameCamera_5, value);
	}

	inline static int32_t get_offset_of__keeper_6() { return static_cast<int32_t>(offsetof(Port_t2493601, ____keeper_6)); }
	inline TimeKeeper_t2543482943 * get__keeper_6() const { return ____keeper_6; }
	inline TimeKeeper_t2543482943 ** get_address_of__keeper_6() { return &____keeper_6; }
	inline void set__keeper_6(TimeKeeper_t2543482943 * value)
	{
		____keeper_6 = value;
		Il2CppCodeGenWriteBarrier(&____keeper_6, value);
	}

	inline static int32_t get_offset_of_currentPath_7() { return static_cast<int32_t>(offsetof(Port_t2493601, ___currentPath_7)); }
	inline Path2_t76886157 * get_currentPath_7() const { return ___currentPath_7; }
	inline Path2_t76886157 ** get_address_of_currentPath_7() { return &___currentPath_7; }
	inline void set_currentPath_7(Path2_t76886157 * value)
	{
		___currentPath_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentPath_7, value);
	}

	inline static int32_t get_offset_of___PATH_8() { return static_cast<int32_t>(offsetof(Port_t2493601, _____PATH_8)); }
	inline Vector3U5BU5D_t3227571696* get___PATH_8() const { return _____PATH_8; }
	inline Vector3U5BU5D_t3227571696** get_address_of___PATH_8() { return &_____PATH_8; }
	inline void set___PATH_8(Vector3U5BU5D_t3227571696* value)
	{
		_____PATH_8 = value;
		Il2CppCodeGenWriteBarrier(&_____PATH_8, value);
	}

	inline static int32_t get_offset_of_lastPositionWorld_9() { return static_cast<int32_t>(offsetof(Port_t2493601, ___lastPositionWorld_9)); }
	inline Vector3_t3525329789  get_lastPositionWorld_9() const { return ___lastPositionWorld_9; }
	inline Vector3_t3525329789 * get_address_of_lastPositionWorld_9() { return &___lastPositionWorld_9; }
	inline void set_lastPositionWorld_9(Vector3_t3525329789  value)
	{
		___lastPositionWorld_9 = value;
	}

	inline static int32_t get_offset_of_currentLine_10() { return static_cast<int32_t>(offsetof(Port_t2493601, ___currentLine_10)); }
	inline VectorLine_t3065371647 * get_currentLine_10() const { return ___currentLine_10; }
	inline VectorLine_t3065371647 ** get_address_of_currentLine_10() { return &___currentLine_10; }
	inline void set_currentLine_10(VectorLine_t3065371647 * value)
	{
		___currentLine_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentLine_10, value);
	}

	inline static int32_t get_offset_of_lineMaterial_11() { return static_cast<int32_t>(offsetof(Port_t2493601, ___lineMaterial_11)); }
	inline Material_t1886596500 * get_lineMaterial_11() const { return ___lineMaterial_11; }
	inline Material_t1886596500 ** get_address_of_lineMaterial_11() { return &___lineMaterial_11; }
	inline void set_lineMaterial_11(Material_t1886596500 * value)
	{
		___lineMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___lineMaterial_11, value);
	}

	inline static int32_t get_offset_of_timeSinceLastMovement_12() { return static_cast<int32_t>(offsetof(Port_t2493601, ___timeSinceLastMovement_12)); }
	inline float get_timeSinceLastMovement_12() const { return ___timeSinceLastMovement_12; }
	inline float* get_address_of_timeSinceLastMovement_12() { return &___timeSinceLastMovement_12; }
	inline void set_timeSinceLastMovement_12(float value)
	{
		___timeSinceLastMovement_12 = value;
	}

	inline static int32_t get_offset_of_timeBetweenDeploy_13() { return static_cast<int32_t>(offsetof(Port_t2493601, ___timeBetweenDeploy_13)); }
	inline float get_timeBetweenDeploy_13() const { return ___timeBetweenDeploy_13; }
	inline float* get_address_of_timeBetweenDeploy_13() { return &___timeBetweenDeploy_13; }
	inline void set_timeBetweenDeploy_13(float value)
	{
		___timeBetweenDeploy_13 = value;
	}

	inline static int32_t get_offset_of_distanceBetweenPoints_14() { return static_cast<int32_t>(offsetof(Port_t2493601, ___distanceBetweenPoints_14)); }
	inline float get_distanceBetweenPoints_14() const { return ___distanceBetweenPoints_14; }
	inline float* get_address_of_distanceBetweenPoints_14() { return &___distanceBetweenPoints_14; }
	inline void set_distanceBetweenPoints_14(float value)
	{
		___distanceBetweenPoints_14 = value;
	}

	inline static int32_t get_offset_of_lastDeploy_15() { return static_cast<int32_t>(offsetof(Port_t2493601, ___lastDeploy_15)); }
	inline float get_lastDeploy_15() const { return ___lastDeploy_15; }
	inline float* get_address_of_lastDeploy_15() { return &___lastDeploy_15; }
	inline void set_lastDeploy_15(float value)
	{
		___lastDeploy_15 = value;
	}

	inline static int32_t get_offset_of_minionReady_16() { return static_cast<int32_t>(offsetof(Port_t2493601, ___minionReady_16)); }
	inline bool get_minionReady_16() const { return ___minionReady_16; }
	inline bool* get_address_of_minionReady_16() { return &___minionReady_16; }
	inline void set_minionReady_16(bool value)
	{
		___minionReady_16 = value;
	}

	inline static int32_t get_offset_of_portReady_17() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portReady_17)); }
	inline bool get_portReady_17() const { return ___portReady_17; }
	inline bool* get_address_of_portReady_17() { return &___portReady_17; }
	inline void set_portReady_17(bool value)
	{
		___portReady_17 = value;
	}

	inline static int32_t get_offset_of_portWorld_18() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portWorld_18)); }
	inline GameObject_t4012695102 * get_portWorld_18() const { return ___portWorld_18; }
	inline GameObject_t4012695102 ** get_address_of_portWorld_18() { return &___portWorld_18; }
	inline void set_portWorld_18(GameObject_t4012695102 * value)
	{
		___portWorld_18 = value;
		Il2CppCodeGenWriteBarrier(&___portWorld_18, value);
	}

	inline static int32_t get_offset_of_portedMinion_19() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portedMinion_19)); }
	inline GameObject_t4012695102 * get_portedMinion_19() const { return ___portedMinion_19; }
	inline GameObject_t4012695102 ** get_address_of_portedMinion_19() { return &___portedMinion_19; }
	inline void set_portedMinion_19(GameObject_t4012695102 * value)
	{
		___portedMinion_19 = value;
		Il2CppCodeGenWriteBarrier(&___portedMinion_19, value);
	}

	inline static int32_t get_offset_of_deployedVehicle_20() { return static_cast<int32_t>(offsetof(Port_t2493601, ___deployedVehicle_20)); }
	inline MinionBaseVehicle_t3259673765 * get_deployedVehicle_20() const { return ___deployedVehicle_20; }
	inline MinionBaseVehicle_t3259673765 ** get_address_of_deployedVehicle_20() { return &___deployedVehicle_20; }
	inline void set_deployedVehicle_20(MinionBaseVehicle_t3259673765 * value)
	{
		___deployedVehicle_20 = value;
		Il2CppCodeGenWriteBarrier(&___deployedVehicle_20, value);
	}

	inline static int32_t get_offset_of_portDirection_21() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portDirection_21)); }
	inline Vector3_t3525329789  get_portDirection_21() const { return ___portDirection_21; }
	inline Vector3_t3525329789 * get_address_of_portDirection_21() { return &___portDirection_21; }
	inline void set_portDirection_21(Vector3_t3525329789  value)
	{
		___portDirection_21 = value;
	}

	inline static int32_t get_offset_of_nesPortOffset_22() { return static_cast<int32_t>(offsetof(Port_t2493601, ___nesPortOffset_22)); }
	inline Vector2_t3525329788  get_nesPortOffset_22() const { return ___nesPortOffset_22; }
	inline Vector2_t3525329788 * get_address_of_nesPortOffset_22() { return &___nesPortOffset_22; }
	inline void set_nesPortOffset_22(Vector2_t3525329788  value)
	{
		___nesPortOffset_22 = value;
	}

	inline static int32_t get_offset_of_msPortOffset_23() { return static_cast<int32_t>(offsetof(Port_t2493601, ___msPortOffset_23)); }
	inline Vector2_t3525329788  get_msPortOffset_23() const { return ___msPortOffset_23; }
	inline Vector2_t3525329788 * get_address_of_msPortOffset_23() { return &___msPortOffset_23; }
	inline void set_msPortOffset_23(Vector2_t3525329788  value)
	{
		___msPortOffset_23 = value;
	}

	inline static int32_t get_offset_of_latestPortOffset_24() { return static_cast<int32_t>(offsetof(Port_t2493601, ___latestPortOffset_24)); }
	inline Vector2_t3525329788  get_latestPortOffset_24() const { return ___latestPortOffset_24; }
	inline Vector2_t3525329788 * get_address_of_latestPortOffset_24() { return &___latestPortOffset_24; }
	inline void set_latestPortOffset_24(Vector2_t3525329788  value)
	{
		___latestPortOffset_24 = value;
	}

	inline static int32_t get_offset_of_disableOnStart_25() { return static_cast<int32_t>(offsetof(Port_t2493601, ___disableOnStart_25)); }
	inline bool get_disableOnStart_25() const { return ___disableOnStart_25; }
	inline bool* get_address_of_disableOnStart_25() { return &___disableOnStart_25; }
	inline void set_disableOnStart_25(bool value)
	{
		___disableOnStart_25 = value;
	}

	inline static int32_t get_offset_of_fauxPort_26() { return static_cast<int32_t>(offsetof(Port_t2493601, ___fauxPort_26)); }
	inline bool get_fauxPort_26() const { return ___fauxPort_26; }
	inline bool* get_address_of_fauxPort_26() { return &___fauxPort_26; }
	inline void set_fauxPort_26(bool value)
	{
		___fauxPort_26 = value;
	}

	inline static int32_t get_offset_of_portNumber_27() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portNumber_27)); }
	inline int32_t get_portNumber_27() const { return ___portNumber_27; }
	inline int32_t* get_address_of_portNumber_27() { return &___portNumber_27; }
	inline void set_portNumber_27(int32_t value)
	{
		___portNumber_27 = value;
	}

	inline static int32_t get_offset_of_mothership_28() { return static_cast<int32_t>(offsetof(Port_t2493601, ___mothership_28)); }
	inline MothershipVehicle_t3966619277 * get_mothership_28() const { return ___mothership_28; }
	inline MothershipVehicle_t3966619277 ** get_address_of_mothership_28() { return &___mothership_28; }
	inline void set_mothership_28(MothershipVehicle_t3966619277 * value)
	{
		___mothership_28 = value;
		Il2CppCodeGenWriteBarrier(&___mothership_28, value);
	}

	inline static int32_t get_offset_of_maxPathNodes_29() { return static_cast<int32_t>(offsetof(Port_t2493601, ___maxPathNodes_29)); }
	inline int32_t get_maxPathNodes_29() const { return ___maxPathNodes_29; }
	inline int32_t* get_address_of_maxPathNodes_29() { return &___maxPathNodes_29; }
	inline void set_maxPathNodes_29(int32_t value)
	{
		___maxPathNodes_29 = value;
	}

	inline static int32_t get_offset_of__sprite_30() { return static_cast<int32_t>(offsetof(Port_t2493601, ____sprite_30)); }
	inline exSprite_t1539598680 * get__sprite_30() const { return ____sprite_30; }
	inline exSprite_t1539598680 ** get_address_of__sprite_30() { return &____sprite_30; }
	inline void set__sprite_30(exSprite_t1539598680 * value)
	{
		____sprite_30 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_30, value);
	}

	inline static int32_t get_offset_of__animation_31() { return static_cast<int32_t>(offsetof(Port_t2493601, ____animation_31)); }
	inline exSpriteAnimation_t1937626380 * get__animation_31() const { return ____animation_31; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_31() { return &____animation_31; }
	inline void set__animation_31(exSpriteAnimation_t1937626380 * value)
	{
		____animation_31 = value;
		Il2CppCodeGenWriteBarrier(&____animation_31, value);
	}

	inline static int32_t get_offset_of_prepareAnimationName_32() { return static_cast<int32_t>(offsetof(Port_t2493601, ___prepareAnimationName_32)); }
	inline exSpriteAnimClip_t892886649 * get_prepareAnimationName_32() const { return ___prepareAnimationName_32; }
	inline exSpriteAnimClip_t892886649 ** get_address_of_prepareAnimationName_32() { return &___prepareAnimationName_32; }
	inline void set_prepareAnimationName_32(exSpriteAnimClip_t892886649 * value)
	{
		___prepareAnimationName_32 = value;
		Il2CppCodeGenWriteBarrier(&___prepareAnimationName_32, value);
	}

	inline static int32_t get_offset_of_readyAnimationName_33() { return static_cast<int32_t>(offsetof(Port_t2493601, ___readyAnimationName_33)); }
	inline exSpriteAnimClip_t892886649 * get_readyAnimationName_33() const { return ___readyAnimationName_33; }
	inline exSpriteAnimClip_t892886649 ** get_address_of_readyAnimationName_33() { return &___readyAnimationName_33; }
	inline void set_readyAnimationName_33(exSpriteAnimClip_t892886649 * value)
	{
		___readyAnimationName_33 = value;
		Il2CppCodeGenWriteBarrier(&___readyAnimationName_33, value);
	}

	inline static int32_t get_offset_of_portState_34() { return static_cast<int32_t>(offsetof(Port_t2493601, ___portState_34)); }
	inline PortState_t3108340848 * get_portState_34() const { return ___portState_34; }
	inline PortState_t3108340848 ** get_address_of_portState_34() { return &___portState_34; }
	inline void set_portState_34(PortState_t3108340848 * value)
	{
		___portState_34 = value;
		Il2CppCodeGenWriteBarrier(&___portState_34, value);
	}

	inline static int32_t get_offset_of__outline_35() { return static_cast<int32_t>(offsetof(Port_t2493601, ____outline_35)); }
	inline ColliderOutline2D_t1787330656 * get__outline_35() const { return ____outline_35; }
	inline ColliderOutline2D_t1787330656 ** get_address_of__outline_35() { return &____outline_35; }
	inline void set__outline_35(ColliderOutline2D_t1787330656 * value)
	{
		____outline_35 = value;
		Il2CppCodeGenWriteBarrier(&____outline_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
