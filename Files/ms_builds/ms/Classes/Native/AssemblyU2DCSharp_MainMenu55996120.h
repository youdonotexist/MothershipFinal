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
// CurtainHelper
struct CurtainHelper_t4100984000;
// MainMenuEncounterSelect
struct MainMenuEncounterSelect_t1330468375;
// UILabel
struct UILabel_t291504320;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// CurtainHelper/CurtainChangeCallback
struct CurtainChangeCallback_t728740647;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t55996120  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MainMenu::port
	GameObject_t4012695102 * ___port_2;
	// UnityEngine.GameObject MainMenu::menu
	GameObject_t4012695102 * ___menu_3;
	// CurtainHelper MainMenu::_curtainHelper
	CurtainHelper_t4100984000 * ____curtainHelper_4;
	// UnityEngine.GameObject MainMenu::encounterSelect
	GameObject_t4012695102 * ___encounterSelect_5;
	// MainMenuEncounterSelect MainMenu::mmes
	MainMenuEncounterSelect_t1330468375 * ___mmes_6;
	// UILabel MainMenu::bundleDebug
	UILabel_t291504320 * ___bundleDebug_7;
	// UnityEngine.GameObject[] MainMenu::frames
	GameObjectU5BU5D_t3499186955* ___frames_8;
	// System.Single MainMenu::verticalHeight
	float ___verticalHeight_9;
	// System.Boolean MainMenu::animating
	bool ___animating_10;
	// System.Int32 MainMenu::debugTap
	int32_t ___debugTap_11;

public:
	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___port_2)); }
	inline GameObject_t4012695102 * get_port_2() const { return ___port_2; }
	inline GameObject_t4012695102 ** get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(GameObject_t4012695102 * value)
	{
		___port_2 = value;
		Il2CppCodeGenWriteBarrier(&___port_2, value);
	}

	inline static int32_t get_offset_of_menu_3() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___menu_3)); }
	inline GameObject_t4012695102 * get_menu_3() const { return ___menu_3; }
	inline GameObject_t4012695102 ** get_address_of_menu_3() { return &___menu_3; }
	inline void set_menu_3(GameObject_t4012695102 * value)
	{
		___menu_3 = value;
		Il2CppCodeGenWriteBarrier(&___menu_3, value);
	}

	inline static int32_t get_offset_of__curtainHelper_4() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ____curtainHelper_4)); }
	inline CurtainHelper_t4100984000 * get__curtainHelper_4() const { return ____curtainHelper_4; }
	inline CurtainHelper_t4100984000 ** get_address_of__curtainHelper_4() { return &____curtainHelper_4; }
	inline void set__curtainHelper_4(CurtainHelper_t4100984000 * value)
	{
		____curtainHelper_4 = value;
		Il2CppCodeGenWriteBarrier(&____curtainHelper_4, value);
	}

	inline static int32_t get_offset_of_encounterSelect_5() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___encounterSelect_5)); }
	inline GameObject_t4012695102 * get_encounterSelect_5() const { return ___encounterSelect_5; }
	inline GameObject_t4012695102 ** get_address_of_encounterSelect_5() { return &___encounterSelect_5; }
	inline void set_encounterSelect_5(GameObject_t4012695102 * value)
	{
		___encounterSelect_5 = value;
		Il2CppCodeGenWriteBarrier(&___encounterSelect_5, value);
	}

	inline static int32_t get_offset_of_mmes_6() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___mmes_6)); }
	inline MainMenuEncounterSelect_t1330468375 * get_mmes_6() const { return ___mmes_6; }
	inline MainMenuEncounterSelect_t1330468375 ** get_address_of_mmes_6() { return &___mmes_6; }
	inline void set_mmes_6(MainMenuEncounterSelect_t1330468375 * value)
	{
		___mmes_6 = value;
		Il2CppCodeGenWriteBarrier(&___mmes_6, value);
	}

	inline static int32_t get_offset_of_bundleDebug_7() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___bundleDebug_7)); }
	inline UILabel_t291504320 * get_bundleDebug_7() const { return ___bundleDebug_7; }
	inline UILabel_t291504320 ** get_address_of_bundleDebug_7() { return &___bundleDebug_7; }
	inline void set_bundleDebug_7(UILabel_t291504320 * value)
	{
		___bundleDebug_7 = value;
		Il2CppCodeGenWriteBarrier(&___bundleDebug_7, value);
	}

	inline static int32_t get_offset_of_frames_8() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___frames_8)); }
	inline GameObjectU5BU5D_t3499186955* get_frames_8() const { return ___frames_8; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_frames_8() { return &___frames_8; }
	inline void set_frames_8(GameObjectU5BU5D_t3499186955* value)
	{
		___frames_8 = value;
		Il2CppCodeGenWriteBarrier(&___frames_8, value);
	}

	inline static int32_t get_offset_of_verticalHeight_9() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___verticalHeight_9)); }
	inline float get_verticalHeight_9() const { return ___verticalHeight_9; }
	inline float* get_address_of_verticalHeight_9() { return &___verticalHeight_9; }
	inline void set_verticalHeight_9(float value)
	{
		___verticalHeight_9 = value;
	}

	inline static int32_t get_offset_of_animating_10() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___animating_10)); }
	inline bool get_animating_10() const { return ___animating_10; }
	inline bool* get_address_of_animating_10() { return &___animating_10; }
	inline void set_animating_10(bool value)
	{
		___animating_10 = value;
	}

	inline static int32_t get_offset_of_debugTap_11() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___debugTap_11)); }
	inline int32_t get_debugTap_11() const { return ___debugTap_11; }
	inline int32_t* get_address_of_debugTap_11() { return &___debugTap_11; }
	inline void set_debugTap_11(int32_t value)
	{
		___debugTap_11 = value;
	}
};

struct MainMenu_t55996120_StaticFields
{
public:
	// CurtainHelper/CurtainChangeCallback MainMenu::<>f__am$cacheA
	CurtainChangeCallback_t728740647 * ___U3CU3Ef__amU24cacheA_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_12() { return static_cast<int32_t>(offsetof(MainMenu_t55996120_StaticFields, ___U3CU3Ef__amU24cacheA_12)); }
	inline CurtainChangeCallback_t728740647 * get_U3CU3Ef__amU24cacheA_12() const { return ___U3CU3Ef__amU24cacheA_12; }
	inline CurtainChangeCallback_t728740647 ** get_address_of_U3CU3Ef__amU24cacheA_12() { return &___U3CU3Ef__amU24cacheA_12; }
	inline void set_U3CU3Ef__amU24cacheA_12(CurtainChangeCallback_t728740647 * value)
	{
		___U3CU3Ef__amU24cacheA_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
