#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t291504320;
// UIPanel
struct UIPanel_t295209936;
// UnityEngine.Collider
struct Collider_t955670625;
// UISprite
struct UISprite_t661437049;
// CurtainHelper
struct CurtainHelper_t4100984000;
// StoryManager/OnContinueDelegate
struct OnContinueDelegate_t3982509931;
// StoryManager
struct StoryManager_t2533029144;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoryManager
struct  StoryManager_t2533029144  : public MonoBehaviour_t3012272455
{
public:
	// UILabel StoryManager::_tutorialStoryLabel
	UILabel_t291504320 * ____tutorialStoryLabel_2;
	// UIPanel StoryManager::_prologuePanel
	UIPanel_t295209936 * ____prologuePanel_3;
	// UnityEngine.Collider StoryManager::blocker
	Collider_t955670625 * ___blocker_4;
	// UILabel StoryManager::_dialogLabel
	UILabel_t291504320 * ____dialogLabel_5;
	// UILabel StoryManager::_heroLabel
	UILabel_t291504320 * ____heroLabel_6;
	// UILabel StoryManager::_continueLabel
	UILabel_t291504320 * ____continueLabel_7;
	// UISprite StoryManager::_leaderPortrait
	UISprite_t661437049 * ____leaderPortrait_8;
	// UISprite StoryManager::_mothershipPortrait
	UISprite_t661437049 * ____mothershipPortrait_9;
	// UISprite StoryManager::_thisSprite
	UISprite_t661437049 * ____thisSprite_10;
	// UIPanel StoryManager::_thisPanel
	UIPanel_t295209936 * ____thisPanel_11;
	// CurtainHelper StoryManager::_curtainHelper
	CurtainHelper_t4100984000 * ____curtainHelper_12;
	// System.Boolean StoryManager::readyToContinue
	bool ___readyToContinue_13;
	// System.Boolean StoryManager::continuePressed
	bool ___continuePressed_14;
	// UnityEngine.Vector3 StoryManager::showPosition
	Vector3_t3525329789  ___showPosition_15;
	// UnityEngine.Vector3 StoryManager::hidePosition
	Vector3_t3525329789  ___hidePosition_16;
	// System.Boolean StoryManager::widthGotten
	bool ___widthGotten_17;
	// StoryManager/OnContinueDelegate StoryManager::onContinue
	OnContinueDelegate_t3982509931 * ___onContinue_18;

public:
	inline static int32_t get_offset_of__tutorialStoryLabel_2() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____tutorialStoryLabel_2)); }
	inline UILabel_t291504320 * get__tutorialStoryLabel_2() const { return ____tutorialStoryLabel_2; }
	inline UILabel_t291504320 ** get_address_of__tutorialStoryLabel_2() { return &____tutorialStoryLabel_2; }
	inline void set__tutorialStoryLabel_2(UILabel_t291504320 * value)
	{
		____tutorialStoryLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&____tutorialStoryLabel_2, value);
	}

	inline static int32_t get_offset_of__prologuePanel_3() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____prologuePanel_3)); }
	inline UIPanel_t295209936 * get__prologuePanel_3() const { return ____prologuePanel_3; }
	inline UIPanel_t295209936 ** get_address_of__prologuePanel_3() { return &____prologuePanel_3; }
	inline void set__prologuePanel_3(UIPanel_t295209936 * value)
	{
		____prologuePanel_3 = value;
		Il2CppCodeGenWriteBarrier(&____prologuePanel_3, value);
	}

	inline static int32_t get_offset_of_blocker_4() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___blocker_4)); }
	inline Collider_t955670625 * get_blocker_4() const { return ___blocker_4; }
	inline Collider_t955670625 ** get_address_of_blocker_4() { return &___blocker_4; }
	inline void set_blocker_4(Collider_t955670625 * value)
	{
		___blocker_4 = value;
		Il2CppCodeGenWriteBarrier(&___blocker_4, value);
	}

	inline static int32_t get_offset_of__dialogLabel_5() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____dialogLabel_5)); }
	inline UILabel_t291504320 * get__dialogLabel_5() const { return ____dialogLabel_5; }
	inline UILabel_t291504320 ** get_address_of__dialogLabel_5() { return &____dialogLabel_5; }
	inline void set__dialogLabel_5(UILabel_t291504320 * value)
	{
		____dialogLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&____dialogLabel_5, value);
	}

	inline static int32_t get_offset_of__heroLabel_6() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____heroLabel_6)); }
	inline UILabel_t291504320 * get__heroLabel_6() const { return ____heroLabel_6; }
	inline UILabel_t291504320 ** get_address_of__heroLabel_6() { return &____heroLabel_6; }
	inline void set__heroLabel_6(UILabel_t291504320 * value)
	{
		____heroLabel_6 = value;
		Il2CppCodeGenWriteBarrier(&____heroLabel_6, value);
	}

	inline static int32_t get_offset_of__continueLabel_7() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____continueLabel_7)); }
	inline UILabel_t291504320 * get__continueLabel_7() const { return ____continueLabel_7; }
	inline UILabel_t291504320 ** get_address_of__continueLabel_7() { return &____continueLabel_7; }
	inline void set__continueLabel_7(UILabel_t291504320 * value)
	{
		____continueLabel_7 = value;
		Il2CppCodeGenWriteBarrier(&____continueLabel_7, value);
	}

	inline static int32_t get_offset_of__leaderPortrait_8() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____leaderPortrait_8)); }
	inline UISprite_t661437049 * get__leaderPortrait_8() const { return ____leaderPortrait_8; }
	inline UISprite_t661437049 ** get_address_of__leaderPortrait_8() { return &____leaderPortrait_8; }
	inline void set__leaderPortrait_8(UISprite_t661437049 * value)
	{
		____leaderPortrait_8 = value;
		Il2CppCodeGenWriteBarrier(&____leaderPortrait_8, value);
	}

	inline static int32_t get_offset_of__mothershipPortrait_9() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____mothershipPortrait_9)); }
	inline UISprite_t661437049 * get__mothershipPortrait_9() const { return ____mothershipPortrait_9; }
	inline UISprite_t661437049 ** get_address_of__mothershipPortrait_9() { return &____mothershipPortrait_9; }
	inline void set__mothershipPortrait_9(UISprite_t661437049 * value)
	{
		____mothershipPortrait_9 = value;
		Il2CppCodeGenWriteBarrier(&____mothershipPortrait_9, value);
	}

	inline static int32_t get_offset_of__thisSprite_10() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____thisSprite_10)); }
	inline UISprite_t661437049 * get__thisSprite_10() const { return ____thisSprite_10; }
	inline UISprite_t661437049 ** get_address_of__thisSprite_10() { return &____thisSprite_10; }
	inline void set__thisSprite_10(UISprite_t661437049 * value)
	{
		____thisSprite_10 = value;
		Il2CppCodeGenWriteBarrier(&____thisSprite_10, value);
	}

	inline static int32_t get_offset_of__thisPanel_11() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____thisPanel_11)); }
	inline UIPanel_t295209936 * get__thisPanel_11() const { return ____thisPanel_11; }
	inline UIPanel_t295209936 ** get_address_of__thisPanel_11() { return &____thisPanel_11; }
	inline void set__thisPanel_11(UIPanel_t295209936 * value)
	{
		____thisPanel_11 = value;
		Il2CppCodeGenWriteBarrier(&____thisPanel_11, value);
	}

	inline static int32_t get_offset_of__curtainHelper_12() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ____curtainHelper_12)); }
	inline CurtainHelper_t4100984000 * get__curtainHelper_12() const { return ____curtainHelper_12; }
	inline CurtainHelper_t4100984000 ** get_address_of__curtainHelper_12() { return &____curtainHelper_12; }
	inline void set__curtainHelper_12(CurtainHelper_t4100984000 * value)
	{
		____curtainHelper_12 = value;
		Il2CppCodeGenWriteBarrier(&____curtainHelper_12, value);
	}

	inline static int32_t get_offset_of_readyToContinue_13() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___readyToContinue_13)); }
	inline bool get_readyToContinue_13() const { return ___readyToContinue_13; }
	inline bool* get_address_of_readyToContinue_13() { return &___readyToContinue_13; }
	inline void set_readyToContinue_13(bool value)
	{
		___readyToContinue_13 = value;
	}

	inline static int32_t get_offset_of_continuePressed_14() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___continuePressed_14)); }
	inline bool get_continuePressed_14() const { return ___continuePressed_14; }
	inline bool* get_address_of_continuePressed_14() { return &___continuePressed_14; }
	inline void set_continuePressed_14(bool value)
	{
		___continuePressed_14 = value;
	}

	inline static int32_t get_offset_of_showPosition_15() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___showPosition_15)); }
	inline Vector3_t3525329789  get_showPosition_15() const { return ___showPosition_15; }
	inline Vector3_t3525329789 * get_address_of_showPosition_15() { return &___showPosition_15; }
	inline void set_showPosition_15(Vector3_t3525329789  value)
	{
		___showPosition_15 = value;
	}

	inline static int32_t get_offset_of_hidePosition_16() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___hidePosition_16)); }
	inline Vector3_t3525329789  get_hidePosition_16() const { return ___hidePosition_16; }
	inline Vector3_t3525329789 * get_address_of_hidePosition_16() { return &___hidePosition_16; }
	inline void set_hidePosition_16(Vector3_t3525329789  value)
	{
		___hidePosition_16 = value;
	}

	inline static int32_t get_offset_of_widthGotten_17() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___widthGotten_17)); }
	inline bool get_widthGotten_17() const { return ___widthGotten_17; }
	inline bool* get_address_of_widthGotten_17() { return &___widthGotten_17; }
	inline void set_widthGotten_17(bool value)
	{
		___widthGotten_17 = value;
	}

	inline static int32_t get_offset_of_onContinue_18() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144, ___onContinue_18)); }
	inline OnContinueDelegate_t3982509931 * get_onContinue_18() const { return ___onContinue_18; }
	inline OnContinueDelegate_t3982509931 ** get_address_of_onContinue_18() { return &___onContinue_18; }
	inline void set_onContinue_18(OnContinueDelegate_t3982509931 * value)
	{
		___onContinue_18 = value;
		Il2CppCodeGenWriteBarrier(&___onContinue_18, value);
	}
};

struct StoryManager_t2533029144_StaticFields
{
public:
	// StoryManager StoryManager::_Instance
	StoryManager_t2533029144 * ____Instance_19;

public:
	inline static int32_t get_offset_of__Instance_19() { return static_cast<int32_t>(offsetof(StoryManager_t2533029144_StaticFields, ____Instance_19)); }
	inline StoryManager_t2533029144 * get__Instance_19() const { return ____Instance_19; }
	inline StoryManager_t2533029144 ** get_address_of__Instance_19() { return &____Instance_19; }
	inline void set__Instance_19(StoryManager_t2533029144 * value)
	{
		____Instance_19 = value;
		Il2CppCodeGenWriteBarrier(&____Instance_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
