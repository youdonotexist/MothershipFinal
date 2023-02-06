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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UIPanel
struct UIPanel_t295209936;
// CurtainHelper
struct CurtainHelper_t4100984000;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Splash
struct  Splash_t2482968199  : public MonoBehaviour_t3012272455
{
public:
	// MinionBaseVehicle Splash::_minion1
	MinionBaseVehicle_t3259673765 * ____minion1_2;
	// MinionBaseVehicle Splash::_minion2
	MinionBaseVehicle_t3259673765 * ____minion2_3;
	// MinionBaseVehicle Splash::_minion3
	MinionBaseVehicle_t3259673765 * ____minion3_4;
	// UnityEngine.GameObject Splash::logo
	GameObject_t4012695102 * ___logo_5;
	// UIPanel Splash::cwText
	UIPanel_t295209936 * ___cwText_6;
	// System.Boolean Splash::fadeStarted
	bool ___fadeStarted_7;
	// System.Boolean Splash::goingToMenu
	bool ___goingToMenu_8;
	// CurtainHelper Splash::_curtainHelper
	CurtainHelper_t4100984000 * ____curtainHelper_9;

public:
	inline static int32_t get_offset_of__minion1_2() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ____minion1_2)); }
	inline MinionBaseVehicle_t3259673765 * get__minion1_2() const { return ____minion1_2; }
	inline MinionBaseVehicle_t3259673765 ** get_address_of__minion1_2() { return &____minion1_2; }
	inline void set__minion1_2(MinionBaseVehicle_t3259673765 * value)
	{
		____minion1_2 = value;
		Il2CppCodeGenWriteBarrier(&____minion1_2, value);
	}

	inline static int32_t get_offset_of__minion2_3() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ____minion2_3)); }
	inline MinionBaseVehicle_t3259673765 * get__minion2_3() const { return ____minion2_3; }
	inline MinionBaseVehicle_t3259673765 ** get_address_of__minion2_3() { return &____minion2_3; }
	inline void set__minion2_3(MinionBaseVehicle_t3259673765 * value)
	{
		____minion2_3 = value;
		Il2CppCodeGenWriteBarrier(&____minion2_3, value);
	}

	inline static int32_t get_offset_of__minion3_4() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ____minion3_4)); }
	inline MinionBaseVehicle_t3259673765 * get__minion3_4() const { return ____minion3_4; }
	inline MinionBaseVehicle_t3259673765 ** get_address_of__minion3_4() { return &____minion3_4; }
	inline void set__minion3_4(MinionBaseVehicle_t3259673765 * value)
	{
		____minion3_4 = value;
		Il2CppCodeGenWriteBarrier(&____minion3_4, value);
	}

	inline static int32_t get_offset_of_logo_5() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ___logo_5)); }
	inline GameObject_t4012695102 * get_logo_5() const { return ___logo_5; }
	inline GameObject_t4012695102 ** get_address_of_logo_5() { return &___logo_5; }
	inline void set_logo_5(GameObject_t4012695102 * value)
	{
		___logo_5 = value;
		Il2CppCodeGenWriteBarrier(&___logo_5, value);
	}

	inline static int32_t get_offset_of_cwText_6() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ___cwText_6)); }
	inline UIPanel_t295209936 * get_cwText_6() const { return ___cwText_6; }
	inline UIPanel_t295209936 ** get_address_of_cwText_6() { return &___cwText_6; }
	inline void set_cwText_6(UIPanel_t295209936 * value)
	{
		___cwText_6 = value;
		Il2CppCodeGenWriteBarrier(&___cwText_6, value);
	}

	inline static int32_t get_offset_of_fadeStarted_7() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ___fadeStarted_7)); }
	inline bool get_fadeStarted_7() const { return ___fadeStarted_7; }
	inline bool* get_address_of_fadeStarted_7() { return &___fadeStarted_7; }
	inline void set_fadeStarted_7(bool value)
	{
		___fadeStarted_7 = value;
	}

	inline static int32_t get_offset_of_goingToMenu_8() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ___goingToMenu_8)); }
	inline bool get_goingToMenu_8() const { return ___goingToMenu_8; }
	inline bool* get_address_of_goingToMenu_8() { return &___goingToMenu_8; }
	inline void set_goingToMenu_8(bool value)
	{
		___goingToMenu_8 = value;
	}

	inline static int32_t get_offset_of__curtainHelper_9() { return static_cast<int32_t>(offsetof(Splash_t2482968199, ____curtainHelper_9)); }
	inline CurtainHelper_t4100984000 * get__curtainHelper_9() const { return ____curtainHelper_9; }
	inline CurtainHelper_t4100984000 ** get_address_of__curtainHelper_9() { return &____curtainHelper_9; }
	inline void set__curtainHelper_9(CurtainHelper_t4100984000 * value)
	{
		____curtainHelper_9 = value;
		Il2CppCodeGenWriteBarrier(&____curtainHelper_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
