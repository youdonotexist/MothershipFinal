#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UISprite
struct UISprite_t661437049;
// UILabel
struct UILabel_t291504320;

#include "AssemblyU2DCSharp_PostEncounterView3799458200.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RepairView
struct  RepairView_t4125236210  : public PostEncounterView_t3799458200
{
public:
	// UISprite RepairView::_mothershipHealthBar
	UISprite_t661437049 * ____mothershipHealthBar_6;
	// UISprite RepairView::_wireframeSprite
	UISprite_t661437049 * ____wireframeSprite_7;
	// UILabel RepairView::_scrapCount
	UILabel_t291504320 * ____scrapCount_8;
	// UILabel RepairView::_upgraderMessage
	UILabel_t291504320 * ____upgraderMessage_9;
	// UILabel RepairView::_healthAmount
	UILabel_t291504320 * ____healthAmount_10;
	// UISprite RepairView::_nextPortraitSprite
	UISprite_t661437049 * ____nextPortraitSprite_11;
	// System.Single RepairView::startWidth
	float ___startWidth_12;
	// System.Single RepairView::fromWidth
	float ___fromWidth_13;
	// System.Single RepairView::toWidth
	float ___toWidth_14;
	// UnityEngine.Color RepairView::targetHealthColor
	Color_t1588175760  ___targetHealthColor_15;

public:
	inline static int32_t get_offset_of__mothershipHealthBar_6() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ____mothershipHealthBar_6)); }
	inline UISprite_t661437049 * get__mothershipHealthBar_6() const { return ____mothershipHealthBar_6; }
	inline UISprite_t661437049 ** get_address_of__mothershipHealthBar_6() { return &____mothershipHealthBar_6; }
	inline void set__mothershipHealthBar_6(UISprite_t661437049 * value)
	{
		____mothershipHealthBar_6 = value;
		Il2CppCodeGenWriteBarrier(&____mothershipHealthBar_6, value);
	}

	inline static int32_t get_offset_of__wireframeSprite_7() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ____wireframeSprite_7)); }
	inline UISprite_t661437049 * get__wireframeSprite_7() const { return ____wireframeSprite_7; }
	inline UISprite_t661437049 ** get_address_of__wireframeSprite_7() { return &____wireframeSprite_7; }
	inline void set__wireframeSprite_7(UISprite_t661437049 * value)
	{
		____wireframeSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&____wireframeSprite_7, value);
	}

	inline static int32_t get_offset_of__scrapCount_8() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ____scrapCount_8)); }
	inline UILabel_t291504320 * get__scrapCount_8() const { return ____scrapCount_8; }
	inline UILabel_t291504320 ** get_address_of__scrapCount_8() { return &____scrapCount_8; }
	inline void set__scrapCount_8(UILabel_t291504320 * value)
	{
		____scrapCount_8 = value;
		Il2CppCodeGenWriteBarrier(&____scrapCount_8, value);
	}

	inline static int32_t get_offset_of__upgraderMessage_9() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ____upgraderMessage_9)); }
	inline UILabel_t291504320 * get__upgraderMessage_9() const { return ____upgraderMessage_9; }
	inline UILabel_t291504320 ** get_address_of__upgraderMessage_9() { return &____upgraderMessage_9; }
	inline void set__upgraderMessage_9(UILabel_t291504320 * value)
	{
		____upgraderMessage_9 = value;
		Il2CppCodeGenWriteBarrier(&____upgraderMessage_9, value);
	}

	inline static int32_t get_offset_of__healthAmount_10() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ____healthAmount_10)); }
	inline UILabel_t291504320 * get__healthAmount_10() const { return ____healthAmount_10; }
	inline UILabel_t291504320 ** get_address_of__healthAmount_10() { return &____healthAmount_10; }
	inline void set__healthAmount_10(UILabel_t291504320 * value)
	{
		____healthAmount_10 = value;
		Il2CppCodeGenWriteBarrier(&____healthAmount_10, value);
	}

	inline static int32_t get_offset_of__nextPortraitSprite_11() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ____nextPortraitSprite_11)); }
	inline UISprite_t661437049 * get__nextPortraitSprite_11() const { return ____nextPortraitSprite_11; }
	inline UISprite_t661437049 ** get_address_of__nextPortraitSprite_11() { return &____nextPortraitSprite_11; }
	inline void set__nextPortraitSprite_11(UISprite_t661437049 * value)
	{
		____nextPortraitSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&____nextPortraitSprite_11, value);
	}

	inline static int32_t get_offset_of_startWidth_12() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ___startWidth_12)); }
	inline float get_startWidth_12() const { return ___startWidth_12; }
	inline float* get_address_of_startWidth_12() { return &___startWidth_12; }
	inline void set_startWidth_12(float value)
	{
		___startWidth_12 = value;
	}

	inline static int32_t get_offset_of_fromWidth_13() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ___fromWidth_13)); }
	inline float get_fromWidth_13() const { return ___fromWidth_13; }
	inline float* get_address_of_fromWidth_13() { return &___fromWidth_13; }
	inline void set_fromWidth_13(float value)
	{
		___fromWidth_13 = value;
	}

	inline static int32_t get_offset_of_toWidth_14() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ___toWidth_14)); }
	inline float get_toWidth_14() const { return ___toWidth_14; }
	inline float* get_address_of_toWidth_14() { return &___toWidth_14; }
	inline void set_toWidth_14(float value)
	{
		___toWidth_14 = value;
	}

	inline static int32_t get_offset_of_targetHealthColor_15() { return static_cast<int32_t>(offsetof(RepairView_t4125236210, ___targetHealthColor_15)); }
	inline Color_t1588175760  get_targetHealthColor_15() const { return ___targetHealthColor_15; }
	inline Color_t1588175760 * get_address_of_targetHealthColor_15() { return &___targetHealthColor_15; }
	inline void set_targetHealthColor_15(Color_t1588175760  value)
	{
		___targetHealthColor_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
