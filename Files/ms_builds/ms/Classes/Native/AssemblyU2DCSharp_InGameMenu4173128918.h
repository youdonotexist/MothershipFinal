#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CurtainHelper
struct CurtainHelper_t4100984000;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UISprite
struct UISprite_t661437049;
// UILabel
struct UILabel_t291504320;
// UIButton
struct UIButton_t179429094;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameMenu
struct  InGameMenu_t4173128918  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean InGameMenu::paused
	bool ___paused_2;
	// System.Single InGameMenu::pausedTimeScale
	float ___pausedTimeScale_3;
	// CurtainHelper InGameMenu::_curtainHelper
	CurtainHelper_t4100984000 * ____curtainHelper_4;
	// UnityEngine.GameObject InGameMenu::musicVolumeGO
	GameObject_t4012695102 * ___musicVolumeGO_5;
	// UnityEngine.GameObject InGameMenu::soundVolumeGO
	GameObject_t4012695102 * ___soundVolumeGO_6;
	// UISprite InGameMenu::_mainMenuBackground
	UISprite_t661437049 * ____mainMenuBackground_7;
	// UILabel InGameMenu::_deathScreen
	UILabel_t291504320 * ____deathScreen_8;
	// UIButton InGameMenu::_deathButton
	UIButton_t179429094 * ____deathButton_9;
	// UIButton InGameMenu::_mainMenuButton
	UIButton_t179429094 * ____mainMenuButton_10;

public:
	inline static int32_t get_offset_of_paused_2() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ___paused_2)); }
	inline bool get_paused_2() const { return ___paused_2; }
	inline bool* get_address_of_paused_2() { return &___paused_2; }
	inline void set_paused_2(bool value)
	{
		___paused_2 = value;
	}

	inline static int32_t get_offset_of_pausedTimeScale_3() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ___pausedTimeScale_3)); }
	inline float get_pausedTimeScale_3() const { return ___pausedTimeScale_3; }
	inline float* get_address_of_pausedTimeScale_3() { return &___pausedTimeScale_3; }
	inline void set_pausedTimeScale_3(float value)
	{
		___pausedTimeScale_3 = value;
	}

	inline static int32_t get_offset_of__curtainHelper_4() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ____curtainHelper_4)); }
	inline CurtainHelper_t4100984000 * get__curtainHelper_4() const { return ____curtainHelper_4; }
	inline CurtainHelper_t4100984000 ** get_address_of__curtainHelper_4() { return &____curtainHelper_4; }
	inline void set__curtainHelper_4(CurtainHelper_t4100984000 * value)
	{
		____curtainHelper_4 = value;
		Il2CppCodeGenWriteBarrier(&____curtainHelper_4, value);
	}

	inline static int32_t get_offset_of_musicVolumeGO_5() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ___musicVolumeGO_5)); }
	inline GameObject_t4012695102 * get_musicVolumeGO_5() const { return ___musicVolumeGO_5; }
	inline GameObject_t4012695102 ** get_address_of_musicVolumeGO_5() { return &___musicVolumeGO_5; }
	inline void set_musicVolumeGO_5(GameObject_t4012695102 * value)
	{
		___musicVolumeGO_5 = value;
		Il2CppCodeGenWriteBarrier(&___musicVolumeGO_5, value);
	}

	inline static int32_t get_offset_of_soundVolumeGO_6() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ___soundVolumeGO_6)); }
	inline GameObject_t4012695102 * get_soundVolumeGO_6() const { return ___soundVolumeGO_6; }
	inline GameObject_t4012695102 ** get_address_of_soundVolumeGO_6() { return &___soundVolumeGO_6; }
	inline void set_soundVolumeGO_6(GameObject_t4012695102 * value)
	{
		___soundVolumeGO_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundVolumeGO_6, value);
	}

	inline static int32_t get_offset_of__mainMenuBackground_7() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ____mainMenuBackground_7)); }
	inline UISprite_t661437049 * get__mainMenuBackground_7() const { return ____mainMenuBackground_7; }
	inline UISprite_t661437049 ** get_address_of__mainMenuBackground_7() { return &____mainMenuBackground_7; }
	inline void set__mainMenuBackground_7(UISprite_t661437049 * value)
	{
		____mainMenuBackground_7 = value;
		Il2CppCodeGenWriteBarrier(&____mainMenuBackground_7, value);
	}

	inline static int32_t get_offset_of__deathScreen_8() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ____deathScreen_8)); }
	inline UILabel_t291504320 * get__deathScreen_8() const { return ____deathScreen_8; }
	inline UILabel_t291504320 ** get_address_of__deathScreen_8() { return &____deathScreen_8; }
	inline void set__deathScreen_8(UILabel_t291504320 * value)
	{
		____deathScreen_8 = value;
		Il2CppCodeGenWriteBarrier(&____deathScreen_8, value);
	}

	inline static int32_t get_offset_of__deathButton_9() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ____deathButton_9)); }
	inline UIButton_t179429094 * get__deathButton_9() const { return ____deathButton_9; }
	inline UIButton_t179429094 ** get_address_of__deathButton_9() { return &____deathButton_9; }
	inline void set__deathButton_9(UIButton_t179429094 * value)
	{
		____deathButton_9 = value;
		Il2CppCodeGenWriteBarrier(&____deathButton_9, value);
	}

	inline static int32_t get_offset_of__mainMenuButton_10() { return static_cast<int32_t>(offsetof(InGameMenu_t4173128918, ____mainMenuButton_10)); }
	inline UIButton_t179429094 * get__mainMenuButton_10() const { return ____mainMenuButton_10; }
	inline UIButton_t179429094 ** get_address_of__mainMenuButton_10() { return &____mainMenuButton_10; }
	inline void set__mainMenuButton_10(UIButton_t179429094 * value)
	{
		____mainMenuButton_10 = value;
		Il2CppCodeGenWriteBarrier(&____mainMenuButton_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
