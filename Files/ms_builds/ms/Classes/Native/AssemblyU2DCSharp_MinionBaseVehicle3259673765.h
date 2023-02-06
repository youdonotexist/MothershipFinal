#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// Path2
struct Path2_t76886157;
// Port
struct Port_t2493601;
// MinionTypeBase
struct MinionTypeBase_t2690101217;

#include "AssemblyU2DCSharp_Vehicle2006722316.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinionBaseVehicle
struct  MinionBaseVehicle_t3259673765  : public Vehicle_t2006722316
{
public:
	// UnityEngine.GameObject MinionBaseVehicle::explosionPrefab
	GameObject_t4012695102 * ___explosionPrefab_3;
	// UnityEngine.AudioClip MinionBaseVehicle::_launchEffect
	AudioClip_t3714538611 * ____launchEffect_4;
	// UnityEngine.AudioClip MinionBaseVehicle::_flyEffect
	AudioClip_t3714538611 * ____flyEffect_5;
	// Path2 MinionBaseVehicle::path
	Path2_t76886157 * ___path_6;
	// Port MinionBaseVehicle::parentPort
	Port_t2493601 * ___parentPort_7;
	// System.Single MinionBaseVehicle::maxSpeed
	float ___maxSpeed_8;
	// System.Boolean MinionBaseVehicle::FollowPath
	bool ___FollowPath_9;
	// System.Boolean MinionBaseVehicle::useSmoothPath
	bool ___useSmoothPath_10;
	// System.Int32 MinionBaseVehicle::portIndex
	int32_t ___portIndex_11;
	// MinionTypeBase MinionBaseVehicle::_baseType
	MinionTypeBase_t2690101217 * ____baseType_12;

public:
	inline static int32_t get_offset_of_explosionPrefab_3() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___explosionPrefab_3)); }
	inline GameObject_t4012695102 * get_explosionPrefab_3() const { return ___explosionPrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_explosionPrefab_3() { return &___explosionPrefab_3; }
	inline void set_explosionPrefab_3(GameObject_t4012695102 * value)
	{
		___explosionPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosionPrefab_3, value);
	}

	inline static int32_t get_offset_of__launchEffect_4() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ____launchEffect_4)); }
	inline AudioClip_t3714538611 * get__launchEffect_4() const { return ____launchEffect_4; }
	inline AudioClip_t3714538611 ** get_address_of__launchEffect_4() { return &____launchEffect_4; }
	inline void set__launchEffect_4(AudioClip_t3714538611 * value)
	{
		____launchEffect_4 = value;
		Il2CppCodeGenWriteBarrier(&____launchEffect_4, value);
	}

	inline static int32_t get_offset_of__flyEffect_5() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ____flyEffect_5)); }
	inline AudioClip_t3714538611 * get__flyEffect_5() const { return ____flyEffect_5; }
	inline AudioClip_t3714538611 ** get_address_of__flyEffect_5() { return &____flyEffect_5; }
	inline void set__flyEffect_5(AudioClip_t3714538611 * value)
	{
		____flyEffect_5 = value;
		Il2CppCodeGenWriteBarrier(&____flyEffect_5, value);
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___path_6)); }
	inline Path2_t76886157 * get_path_6() const { return ___path_6; }
	inline Path2_t76886157 ** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(Path2_t76886157 * value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier(&___path_6, value);
	}

	inline static int32_t get_offset_of_parentPort_7() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___parentPort_7)); }
	inline Port_t2493601 * get_parentPort_7() const { return ___parentPort_7; }
	inline Port_t2493601 ** get_address_of_parentPort_7() { return &___parentPort_7; }
	inline void set_parentPort_7(Port_t2493601 * value)
	{
		___parentPort_7 = value;
		Il2CppCodeGenWriteBarrier(&___parentPort_7, value);
	}

	inline static int32_t get_offset_of_maxSpeed_8() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___maxSpeed_8)); }
	inline float get_maxSpeed_8() const { return ___maxSpeed_8; }
	inline float* get_address_of_maxSpeed_8() { return &___maxSpeed_8; }
	inline void set_maxSpeed_8(float value)
	{
		___maxSpeed_8 = value;
	}

	inline static int32_t get_offset_of_FollowPath_9() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___FollowPath_9)); }
	inline bool get_FollowPath_9() const { return ___FollowPath_9; }
	inline bool* get_address_of_FollowPath_9() { return &___FollowPath_9; }
	inline void set_FollowPath_9(bool value)
	{
		___FollowPath_9 = value;
	}

	inline static int32_t get_offset_of_useSmoothPath_10() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___useSmoothPath_10)); }
	inline bool get_useSmoothPath_10() const { return ___useSmoothPath_10; }
	inline bool* get_address_of_useSmoothPath_10() { return &___useSmoothPath_10; }
	inline void set_useSmoothPath_10(bool value)
	{
		___useSmoothPath_10 = value;
	}

	inline static int32_t get_offset_of_portIndex_11() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ___portIndex_11)); }
	inline int32_t get_portIndex_11() const { return ___portIndex_11; }
	inline int32_t* get_address_of_portIndex_11() { return &___portIndex_11; }
	inline void set_portIndex_11(int32_t value)
	{
		___portIndex_11 = value;
	}

	inline static int32_t get_offset_of__baseType_12() { return static_cast<int32_t>(offsetof(MinionBaseVehicle_t3259673765, ____baseType_12)); }
	inline MinionTypeBase_t2690101217 * get__baseType_12() const { return ____baseType_12; }
	inline MinionTypeBase_t2690101217 ** get_address_of__baseType_12() { return &____baseType_12; }
	inline void set__baseType_12(MinionTypeBase_t2690101217 * value)
	{
		____baseType_12 = value;
		Il2CppCodeGenWriteBarrier(&____baseType_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
