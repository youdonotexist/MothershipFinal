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
// UISprite
struct UISprite_t661437049;
// UILabel
struct UILabel_t291504320;
// CurtainHelper
struct CurtainHelper_t4100984000;
// UIPanel
struct UIPanel_t295209936;
// GamePlayHUD
struct GamePlayHUD_t1040732337;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePlayHUD
struct  GamePlayHUD_t1040732337  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject GamePlayHUD::_heroHealthContainer
	GameObject_t4012695102 * ____heroHealthContainer_2;
	// UISprite GamePlayHUD::_heroPortrait
	UISprite_t661437049 * ____heroPortrait_3;
	// UILabel GamePlayHUD::_heroNameLabel
	UILabel_t291504320 * ____heroNameLabel_4;
	// UILabel GamePlayHUD::_heroLivesLabel
	UILabel_t291504320 * ____heroLivesLabel_5;
	// UISprite GamePlayHUD::_heroLifeSprite
	UISprite_t661437049 * ____heroLifeSprite_6;
	// UISprite GamePlayHUD::_curtain
	UISprite_t661437049 * ____curtain_7;
	// UISprite GamePlayHUD::_heroHealthBar
	UISprite_t661437049 * ____heroHealthBar_8;
	// UISprite GamePlayHUD::_heroHealthBarBg
	UISprite_t661437049 * ____heroHealthBarBg_9;
	// System.Single GamePlayHUD::heroLastHealth
	float ___heroLastHealth_10;
	// System.Single GamePlayHUD::heroColorRevertTime
	float ___heroColorRevertTime_11;
	// System.Single GamePlayHUD::heroColorRevertElapsed
	float ___heroColorRevertElapsed_12;
	// UnityEngine.Color GamePlayHUD::heroHealthStartColor
	Color_t1588175760  ___heroHealthStartColor_13;
	// UnityEngine.Color GamePlayHUD::heroHealthEffectColor
	Color_t1588175760  ___heroHealthEffectColor_14;
	// UILabel GamePlayHUD::_newLowScoreMessage
	UILabel_t291504320 * ____newLowScoreMessage_15;
	// UISprite GamePlayHUD::_mothershipHealthBar
	UISprite_t661437049 * ____mothershipHealthBar_16;
	// System.Single GamePlayHUD::damageFlashDuration
	float ___damageFlashDuration_17;
	// System.Single GamePlayHUD::mothershipLastHealth
	float ___mothershipLastHealth_18;
	// System.Single GamePlayHUD::mothershipColorRevertTime
	float ___mothershipColorRevertTime_19;
	// System.Single GamePlayHUD::mothershipColorRevertElapsed
	float ___mothershipColorRevertElapsed_20;
	// System.Single GamePlayHUD::mothershipHealthStartWidth
	float ___mothershipHealthStartWidth_21;
	// UnityEngine.Color GamePlayHUD::mothershipHealthStartColor
	Color_t1588175760  ___mothershipHealthStartColor_22;
	// UnityEngine.Color GamePlayHUD::mothershipHealthEffectColor
	Color_t1588175760  ___mothershipHealthEffectColor_23;
	// UILabel GamePlayHUD::_heroScoreLabel
	UILabel_t291504320 * ____heroScoreLabel_24;
	// CurtainHelper GamePlayHUD::_curtainHelper
	CurtainHelper_t4100984000 * ____curtainHelper_25;
	// UISprite GamePlayHUD::scrapCounterBackground
	UISprite_t661437049 * ___scrapCounterBackground_26;
	// UnityEngine.GameObject GamePlayHUD::scrapCounterContainer
	GameObject_t4012695102 * ___scrapCounterContainer_27;
	// UILabel GamePlayHUD::scrapCounterLabel
	UILabel_t291504320 * ___scrapCounterLabel_28;
	// System.Boolean GamePlayHUD::counterIsOut
	bool ___counterIsOut_29;
	// UIPanel GamePlayHUD::_gameplayHudPanel
	UIPanel_t295209936 * ____gameplayHudPanel_30;
	// System.Single GamePlayHUD::score
	float ___score_31;

public:
	inline static int32_t get_offset_of__heroHealthContainer_2() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroHealthContainer_2)); }
	inline GameObject_t4012695102 * get__heroHealthContainer_2() const { return ____heroHealthContainer_2; }
	inline GameObject_t4012695102 ** get_address_of__heroHealthContainer_2() { return &____heroHealthContainer_2; }
	inline void set__heroHealthContainer_2(GameObject_t4012695102 * value)
	{
		____heroHealthContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&____heroHealthContainer_2, value);
	}

	inline static int32_t get_offset_of__heroPortrait_3() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroPortrait_3)); }
	inline UISprite_t661437049 * get__heroPortrait_3() const { return ____heroPortrait_3; }
	inline UISprite_t661437049 ** get_address_of__heroPortrait_3() { return &____heroPortrait_3; }
	inline void set__heroPortrait_3(UISprite_t661437049 * value)
	{
		____heroPortrait_3 = value;
		Il2CppCodeGenWriteBarrier(&____heroPortrait_3, value);
	}

	inline static int32_t get_offset_of__heroNameLabel_4() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroNameLabel_4)); }
	inline UILabel_t291504320 * get__heroNameLabel_4() const { return ____heroNameLabel_4; }
	inline UILabel_t291504320 ** get_address_of__heroNameLabel_4() { return &____heroNameLabel_4; }
	inline void set__heroNameLabel_4(UILabel_t291504320 * value)
	{
		____heroNameLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&____heroNameLabel_4, value);
	}

	inline static int32_t get_offset_of__heroLivesLabel_5() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroLivesLabel_5)); }
	inline UILabel_t291504320 * get__heroLivesLabel_5() const { return ____heroLivesLabel_5; }
	inline UILabel_t291504320 ** get_address_of__heroLivesLabel_5() { return &____heroLivesLabel_5; }
	inline void set__heroLivesLabel_5(UILabel_t291504320 * value)
	{
		____heroLivesLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&____heroLivesLabel_5, value);
	}

	inline static int32_t get_offset_of__heroLifeSprite_6() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroLifeSprite_6)); }
	inline UISprite_t661437049 * get__heroLifeSprite_6() const { return ____heroLifeSprite_6; }
	inline UISprite_t661437049 ** get_address_of__heroLifeSprite_6() { return &____heroLifeSprite_6; }
	inline void set__heroLifeSprite_6(UISprite_t661437049 * value)
	{
		____heroLifeSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&____heroLifeSprite_6, value);
	}

	inline static int32_t get_offset_of__curtain_7() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____curtain_7)); }
	inline UISprite_t661437049 * get__curtain_7() const { return ____curtain_7; }
	inline UISprite_t661437049 ** get_address_of__curtain_7() { return &____curtain_7; }
	inline void set__curtain_7(UISprite_t661437049 * value)
	{
		____curtain_7 = value;
		Il2CppCodeGenWriteBarrier(&____curtain_7, value);
	}

	inline static int32_t get_offset_of__heroHealthBar_8() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroHealthBar_8)); }
	inline UISprite_t661437049 * get__heroHealthBar_8() const { return ____heroHealthBar_8; }
	inline UISprite_t661437049 ** get_address_of__heroHealthBar_8() { return &____heroHealthBar_8; }
	inline void set__heroHealthBar_8(UISprite_t661437049 * value)
	{
		____heroHealthBar_8 = value;
		Il2CppCodeGenWriteBarrier(&____heroHealthBar_8, value);
	}

	inline static int32_t get_offset_of__heroHealthBarBg_9() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroHealthBarBg_9)); }
	inline UISprite_t661437049 * get__heroHealthBarBg_9() const { return ____heroHealthBarBg_9; }
	inline UISprite_t661437049 ** get_address_of__heroHealthBarBg_9() { return &____heroHealthBarBg_9; }
	inline void set__heroHealthBarBg_9(UISprite_t661437049 * value)
	{
		____heroHealthBarBg_9 = value;
		Il2CppCodeGenWriteBarrier(&____heroHealthBarBg_9, value);
	}

	inline static int32_t get_offset_of_heroLastHealth_10() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___heroLastHealth_10)); }
	inline float get_heroLastHealth_10() const { return ___heroLastHealth_10; }
	inline float* get_address_of_heroLastHealth_10() { return &___heroLastHealth_10; }
	inline void set_heroLastHealth_10(float value)
	{
		___heroLastHealth_10 = value;
	}

	inline static int32_t get_offset_of_heroColorRevertTime_11() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___heroColorRevertTime_11)); }
	inline float get_heroColorRevertTime_11() const { return ___heroColorRevertTime_11; }
	inline float* get_address_of_heroColorRevertTime_11() { return &___heroColorRevertTime_11; }
	inline void set_heroColorRevertTime_11(float value)
	{
		___heroColorRevertTime_11 = value;
	}

	inline static int32_t get_offset_of_heroColorRevertElapsed_12() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___heroColorRevertElapsed_12)); }
	inline float get_heroColorRevertElapsed_12() const { return ___heroColorRevertElapsed_12; }
	inline float* get_address_of_heroColorRevertElapsed_12() { return &___heroColorRevertElapsed_12; }
	inline void set_heroColorRevertElapsed_12(float value)
	{
		___heroColorRevertElapsed_12 = value;
	}

	inline static int32_t get_offset_of_heroHealthStartColor_13() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___heroHealthStartColor_13)); }
	inline Color_t1588175760  get_heroHealthStartColor_13() const { return ___heroHealthStartColor_13; }
	inline Color_t1588175760 * get_address_of_heroHealthStartColor_13() { return &___heroHealthStartColor_13; }
	inline void set_heroHealthStartColor_13(Color_t1588175760  value)
	{
		___heroHealthStartColor_13 = value;
	}

	inline static int32_t get_offset_of_heroHealthEffectColor_14() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___heroHealthEffectColor_14)); }
	inline Color_t1588175760  get_heroHealthEffectColor_14() const { return ___heroHealthEffectColor_14; }
	inline Color_t1588175760 * get_address_of_heroHealthEffectColor_14() { return &___heroHealthEffectColor_14; }
	inline void set_heroHealthEffectColor_14(Color_t1588175760  value)
	{
		___heroHealthEffectColor_14 = value;
	}

	inline static int32_t get_offset_of__newLowScoreMessage_15() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____newLowScoreMessage_15)); }
	inline UILabel_t291504320 * get__newLowScoreMessage_15() const { return ____newLowScoreMessage_15; }
	inline UILabel_t291504320 ** get_address_of__newLowScoreMessage_15() { return &____newLowScoreMessage_15; }
	inline void set__newLowScoreMessage_15(UILabel_t291504320 * value)
	{
		____newLowScoreMessage_15 = value;
		Il2CppCodeGenWriteBarrier(&____newLowScoreMessage_15, value);
	}

	inline static int32_t get_offset_of__mothershipHealthBar_16() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____mothershipHealthBar_16)); }
	inline UISprite_t661437049 * get__mothershipHealthBar_16() const { return ____mothershipHealthBar_16; }
	inline UISprite_t661437049 ** get_address_of__mothershipHealthBar_16() { return &____mothershipHealthBar_16; }
	inline void set__mothershipHealthBar_16(UISprite_t661437049 * value)
	{
		____mothershipHealthBar_16 = value;
		Il2CppCodeGenWriteBarrier(&____mothershipHealthBar_16, value);
	}

	inline static int32_t get_offset_of_damageFlashDuration_17() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___damageFlashDuration_17)); }
	inline float get_damageFlashDuration_17() const { return ___damageFlashDuration_17; }
	inline float* get_address_of_damageFlashDuration_17() { return &___damageFlashDuration_17; }
	inline void set_damageFlashDuration_17(float value)
	{
		___damageFlashDuration_17 = value;
	}

	inline static int32_t get_offset_of_mothershipLastHealth_18() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___mothershipLastHealth_18)); }
	inline float get_mothershipLastHealth_18() const { return ___mothershipLastHealth_18; }
	inline float* get_address_of_mothershipLastHealth_18() { return &___mothershipLastHealth_18; }
	inline void set_mothershipLastHealth_18(float value)
	{
		___mothershipLastHealth_18 = value;
	}

	inline static int32_t get_offset_of_mothershipColorRevertTime_19() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___mothershipColorRevertTime_19)); }
	inline float get_mothershipColorRevertTime_19() const { return ___mothershipColorRevertTime_19; }
	inline float* get_address_of_mothershipColorRevertTime_19() { return &___mothershipColorRevertTime_19; }
	inline void set_mothershipColorRevertTime_19(float value)
	{
		___mothershipColorRevertTime_19 = value;
	}

	inline static int32_t get_offset_of_mothershipColorRevertElapsed_20() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___mothershipColorRevertElapsed_20)); }
	inline float get_mothershipColorRevertElapsed_20() const { return ___mothershipColorRevertElapsed_20; }
	inline float* get_address_of_mothershipColorRevertElapsed_20() { return &___mothershipColorRevertElapsed_20; }
	inline void set_mothershipColorRevertElapsed_20(float value)
	{
		___mothershipColorRevertElapsed_20 = value;
	}

	inline static int32_t get_offset_of_mothershipHealthStartWidth_21() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___mothershipHealthStartWidth_21)); }
	inline float get_mothershipHealthStartWidth_21() const { return ___mothershipHealthStartWidth_21; }
	inline float* get_address_of_mothershipHealthStartWidth_21() { return &___mothershipHealthStartWidth_21; }
	inline void set_mothershipHealthStartWidth_21(float value)
	{
		___mothershipHealthStartWidth_21 = value;
	}

	inline static int32_t get_offset_of_mothershipHealthStartColor_22() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___mothershipHealthStartColor_22)); }
	inline Color_t1588175760  get_mothershipHealthStartColor_22() const { return ___mothershipHealthStartColor_22; }
	inline Color_t1588175760 * get_address_of_mothershipHealthStartColor_22() { return &___mothershipHealthStartColor_22; }
	inline void set_mothershipHealthStartColor_22(Color_t1588175760  value)
	{
		___mothershipHealthStartColor_22 = value;
	}

	inline static int32_t get_offset_of_mothershipHealthEffectColor_23() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___mothershipHealthEffectColor_23)); }
	inline Color_t1588175760  get_mothershipHealthEffectColor_23() const { return ___mothershipHealthEffectColor_23; }
	inline Color_t1588175760 * get_address_of_mothershipHealthEffectColor_23() { return &___mothershipHealthEffectColor_23; }
	inline void set_mothershipHealthEffectColor_23(Color_t1588175760  value)
	{
		___mothershipHealthEffectColor_23 = value;
	}

	inline static int32_t get_offset_of__heroScoreLabel_24() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____heroScoreLabel_24)); }
	inline UILabel_t291504320 * get__heroScoreLabel_24() const { return ____heroScoreLabel_24; }
	inline UILabel_t291504320 ** get_address_of__heroScoreLabel_24() { return &____heroScoreLabel_24; }
	inline void set__heroScoreLabel_24(UILabel_t291504320 * value)
	{
		____heroScoreLabel_24 = value;
		Il2CppCodeGenWriteBarrier(&____heroScoreLabel_24, value);
	}

	inline static int32_t get_offset_of__curtainHelper_25() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____curtainHelper_25)); }
	inline CurtainHelper_t4100984000 * get__curtainHelper_25() const { return ____curtainHelper_25; }
	inline CurtainHelper_t4100984000 ** get_address_of__curtainHelper_25() { return &____curtainHelper_25; }
	inline void set__curtainHelper_25(CurtainHelper_t4100984000 * value)
	{
		____curtainHelper_25 = value;
		Il2CppCodeGenWriteBarrier(&____curtainHelper_25, value);
	}

	inline static int32_t get_offset_of_scrapCounterBackground_26() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___scrapCounterBackground_26)); }
	inline UISprite_t661437049 * get_scrapCounterBackground_26() const { return ___scrapCounterBackground_26; }
	inline UISprite_t661437049 ** get_address_of_scrapCounterBackground_26() { return &___scrapCounterBackground_26; }
	inline void set_scrapCounterBackground_26(UISprite_t661437049 * value)
	{
		___scrapCounterBackground_26 = value;
		Il2CppCodeGenWriteBarrier(&___scrapCounterBackground_26, value);
	}

	inline static int32_t get_offset_of_scrapCounterContainer_27() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___scrapCounterContainer_27)); }
	inline GameObject_t4012695102 * get_scrapCounterContainer_27() const { return ___scrapCounterContainer_27; }
	inline GameObject_t4012695102 ** get_address_of_scrapCounterContainer_27() { return &___scrapCounterContainer_27; }
	inline void set_scrapCounterContainer_27(GameObject_t4012695102 * value)
	{
		___scrapCounterContainer_27 = value;
		Il2CppCodeGenWriteBarrier(&___scrapCounterContainer_27, value);
	}

	inline static int32_t get_offset_of_scrapCounterLabel_28() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___scrapCounterLabel_28)); }
	inline UILabel_t291504320 * get_scrapCounterLabel_28() const { return ___scrapCounterLabel_28; }
	inline UILabel_t291504320 ** get_address_of_scrapCounterLabel_28() { return &___scrapCounterLabel_28; }
	inline void set_scrapCounterLabel_28(UILabel_t291504320 * value)
	{
		___scrapCounterLabel_28 = value;
		Il2CppCodeGenWriteBarrier(&___scrapCounterLabel_28, value);
	}

	inline static int32_t get_offset_of_counterIsOut_29() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___counterIsOut_29)); }
	inline bool get_counterIsOut_29() const { return ___counterIsOut_29; }
	inline bool* get_address_of_counterIsOut_29() { return &___counterIsOut_29; }
	inline void set_counterIsOut_29(bool value)
	{
		___counterIsOut_29 = value;
	}

	inline static int32_t get_offset_of__gameplayHudPanel_30() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ____gameplayHudPanel_30)); }
	inline UIPanel_t295209936 * get__gameplayHudPanel_30() const { return ____gameplayHudPanel_30; }
	inline UIPanel_t295209936 ** get_address_of__gameplayHudPanel_30() { return &____gameplayHudPanel_30; }
	inline void set__gameplayHudPanel_30(UIPanel_t295209936 * value)
	{
		____gameplayHudPanel_30 = value;
		Il2CppCodeGenWriteBarrier(&____gameplayHudPanel_30, value);
	}

	inline static int32_t get_offset_of_score_31() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337, ___score_31)); }
	inline float get_score_31() const { return ___score_31; }
	inline float* get_address_of_score_31() { return &___score_31; }
	inline void set_score_31(float value)
	{
		___score_31 = value;
	}
};

struct GamePlayHUD_t1040732337_StaticFields
{
public:
	// GamePlayHUD GamePlayHUD::_Instance
	GamePlayHUD_t1040732337 * ____Instance_32;

public:
	inline static int32_t get_offset_of__Instance_32() { return static_cast<int32_t>(offsetof(GamePlayHUD_t1040732337_StaticFields, ____Instance_32)); }
	inline GamePlayHUD_t1040732337 * get__Instance_32() const { return ____Instance_32; }
	inline GamePlayHUD_t1040732337 ** get_address_of__Instance_32() { return &____Instance_32; }
	inline void set__Instance_32(GamePlayHUD_t1040732337 * value)
	{
		____Instance_32 = value;
		Il2CppCodeGenWriteBarrier(&____Instance_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
