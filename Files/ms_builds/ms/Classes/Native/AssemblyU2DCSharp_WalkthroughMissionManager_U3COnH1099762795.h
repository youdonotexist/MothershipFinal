#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroVehicle
struct HeroVehicle_t3389256114;
// WalkthroughMissionManager
struct WalkthroughMissionManager_t2130911325;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WalkthroughMissionManager/<OnHeroDie>c__AnonStoreyB9
struct  U3COnHeroDieU3Ec__AnonStoreyB9_t1099762795  : public Il2CppObject
{
public:
	// HeroVehicle WalkthroughMissionManager/<OnHeroDie>c__AnonStoreyB9::hero
	HeroVehicle_t3389256114 * ___hero_0;
	// UnityEngine.Vector3 WalkthroughMissionManager/<OnHeroDie>c__AnonStoreyB9::pos
	Vector3_t3525329789  ___pos_1;
	// WalkthroughMissionManager WalkthroughMissionManager/<OnHeroDie>c__AnonStoreyB9::<>f__this
	WalkthroughMissionManager_t2130911325 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_hero_0() { return static_cast<int32_t>(offsetof(U3COnHeroDieU3Ec__AnonStoreyB9_t1099762795, ___hero_0)); }
	inline HeroVehicle_t3389256114 * get_hero_0() const { return ___hero_0; }
	inline HeroVehicle_t3389256114 ** get_address_of_hero_0() { return &___hero_0; }
	inline void set_hero_0(HeroVehicle_t3389256114 * value)
	{
		___hero_0 = value;
		Il2CppCodeGenWriteBarrier(&___hero_0, value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(U3COnHeroDieU3Ec__AnonStoreyB9_t1099762795, ___pos_1)); }
	inline Vector3_t3525329789  get_pos_1() const { return ___pos_1; }
	inline Vector3_t3525329789 * get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(Vector3_t3525329789  value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3COnHeroDieU3Ec__AnonStoreyB9_t1099762795, ___U3CU3Ef__this_2)); }
	inline WalkthroughMissionManager_t2130911325 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline WalkthroughMissionManager_t2130911325 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(WalkthroughMissionManager_t2130911325 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
