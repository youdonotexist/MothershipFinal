#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIPopupList
struct UIPopupList_t1804933942;
// UIAtlas
struct UIAtlas_t281921111;
// UIFont
struct UIFont_t2503090435;
// UnityEngine.Font
struct Font_t1525081276;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t506415896;
// UIPanel
struct UIPanel_t295209936;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UISprite
struct UISprite_t661437049;
// UILabel
struct UILabel_t291504320;
// System.Collections.Generic.List`1<UILabel>
struct List_1_t1088463289;
// UIPopupList/LegacyEvent
struct LegacyEvent_t3762302001;

#include "AssemblyU2DCSharp_UIWidgetContainer1520767337.h"
#include "UnityEngine_UnityEngine_FontStyle1975910095.h"
#include "AssemblyU2DCSharp_UIPopupList_Position812449097.h"
#include "AssemblyU2DCSharp_NGUIText_Alignment3771843011.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharp_UIPopupList_OpenOn2368254441.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPopupList
struct  UIPopupList_t1804933942  : public UIWidgetContainer_t1520767337
{
public:
	// UIAtlas UIPopupList::atlas
	UIAtlas_t281921111 * ___atlas_4;
	// UIFont UIPopupList::bitmapFont
	UIFont_t2503090435 * ___bitmapFont_5;
	// UnityEngine.Font UIPopupList::trueTypeFont
	Font_t1525081276 * ___trueTypeFont_6;
	// System.Int32 UIPopupList::fontSize
	int32_t ___fontSize_7;
	// UnityEngine.FontStyle UIPopupList::fontStyle
	int32_t ___fontStyle_8;
	// System.String UIPopupList::backgroundSprite
	String_t* ___backgroundSprite_9;
	// System.String UIPopupList::highlightSprite
	String_t* ___highlightSprite_10;
	// UIPopupList/Position UIPopupList::position
	int32_t ___position_11;
	// NGUIText/Alignment UIPopupList::alignment
	int32_t ___alignment_12;
	// System.Collections.Generic.List`1<System.String> UIPopupList::items
	List_1_t1765447871 * ___items_13;
	// System.Collections.Generic.List`1<System.Object> UIPopupList::itemData
	List_1_t1634065389 * ___itemData_14;
	// UnityEngine.Vector2 UIPopupList::padding
	Vector2_t3525329788  ___padding_15;
	// UnityEngine.Color UIPopupList::textColor
	Color_t1588175760  ___textColor_16;
	// UnityEngine.Color UIPopupList::backgroundColor
	Color_t1588175760  ___backgroundColor_17;
	// UnityEngine.Color UIPopupList::highlightColor
	Color_t1588175760  ___highlightColor_18;
	// System.Boolean UIPopupList::isAnimated
	bool ___isAnimated_19;
	// System.Boolean UIPopupList::isLocalized
	bool ___isLocalized_20;
	// UIPopupList/OpenOn UIPopupList::openOn
	int32_t ___openOn_21;
	// System.Collections.Generic.List`1<EventDelegate> UIPopupList::onChange
	List_1_t506415896 * ___onChange_22;
	// System.String UIPopupList::mSelectedItem
	String_t* ___mSelectedItem_23;
	// UIPanel UIPopupList::mPanel
	UIPanel_t295209936 * ___mPanel_24;
	// UnityEngine.GameObject UIPopupList::mChild
	GameObject_t4012695102 * ___mChild_25;
	// UISprite UIPopupList::mBackground
	UISprite_t661437049 * ___mBackground_26;
	// UISprite UIPopupList::mHighlight
	UISprite_t661437049 * ___mHighlight_27;
	// UILabel UIPopupList::mHighlightedLabel
	UILabel_t291504320 * ___mHighlightedLabel_28;
	// System.Collections.Generic.List`1<UILabel> UIPopupList::mLabelList
	List_1_t1088463289 * ___mLabelList_29;
	// System.Single UIPopupList::mBgBorder
	float ___mBgBorder_30;
	// UnityEngine.GameObject UIPopupList::eventReceiver
	GameObject_t4012695102 * ___eventReceiver_31;
	// System.String UIPopupList::functionName
	String_t* ___functionName_32;
	// System.Single UIPopupList::textScale
	float ___textScale_33;
	// UIFont UIPopupList::font
	UIFont_t2503090435 * ___font_34;
	// UILabel UIPopupList::textLabel
	UILabel_t291504320 * ___textLabel_35;
	// UIPopupList/LegacyEvent UIPopupList::mLegacyEvent
	LegacyEvent_t3762302001 * ___mLegacyEvent_36;
	// System.Boolean UIPopupList::mUseDynamicFont
	bool ___mUseDynamicFont_37;
	// System.Boolean UIPopupList::mTweening
	bool ___mTweening_38;

public:
	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___atlas_4)); }
	inline UIAtlas_t281921111 * get_atlas_4() const { return ___atlas_4; }
	inline UIAtlas_t281921111 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(UIAtlas_t281921111 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}

	inline static int32_t get_offset_of_bitmapFont_5() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___bitmapFont_5)); }
	inline UIFont_t2503090435 * get_bitmapFont_5() const { return ___bitmapFont_5; }
	inline UIFont_t2503090435 ** get_address_of_bitmapFont_5() { return &___bitmapFont_5; }
	inline void set_bitmapFont_5(UIFont_t2503090435 * value)
	{
		___bitmapFont_5 = value;
		Il2CppCodeGenWriteBarrier(&___bitmapFont_5, value);
	}

	inline static int32_t get_offset_of_trueTypeFont_6() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___trueTypeFont_6)); }
	inline Font_t1525081276 * get_trueTypeFont_6() const { return ___trueTypeFont_6; }
	inline Font_t1525081276 ** get_address_of_trueTypeFont_6() { return &___trueTypeFont_6; }
	inline void set_trueTypeFont_6(Font_t1525081276 * value)
	{
		___trueTypeFont_6 = value;
		Il2CppCodeGenWriteBarrier(&___trueTypeFont_6, value);
	}

	inline static int32_t get_offset_of_fontSize_7() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___fontSize_7)); }
	inline int32_t get_fontSize_7() const { return ___fontSize_7; }
	inline int32_t* get_address_of_fontSize_7() { return &___fontSize_7; }
	inline void set_fontSize_7(int32_t value)
	{
		___fontSize_7 = value;
	}

	inline static int32_t get_offset_of_fontStyle_8() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___fontStyle_8)); }
	inline int32_t get_fontStyle_8() const { return ___fontStyle_8; }
	inline int32_t* get_address_of_fontStyle_8() { return &___fontStyle_8; }
	inline void set_fontStyle_8(int32_t value)
	{
		___fontStyle_8 = value;
	}

	inline static int32_t get_offset_of_backgroundSprite_9() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___backgroundSprite_9)); }
	inline String_t* get_backgroundSprite_9() const { return ___backgroundSprite_9; }
	inline String_t** get_address_of_backgroundSprite_9() { return &___backgroundSprite_9; }
	inline void set_backgroundSprite_9(String_t* value)
	{
		___backgroundSprite_9 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprite_9, value);
	}

	inline static int32_t get_offset_of_highlightSprite_10() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___highlightSprite_10)); }
	inline String_t* get_highlightSprite_10() const { return ___highlightSprite_10; }
	inline String_t** get_address_of_highlightSprite_10() { return &___highlightSprite_10; }
	inline void set_highlightSprite_10(String_t* value)
	{
		___highlightSprite_10 = value;
		Il2CppCodeGenWriteBarrier(&___highlightSprite_10, value);
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___position_11)); }
	inline int32_t get_position_11() const { return ___position_11; }
	inline int32_t* get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(int32_t value)
	{
		___position_11 = value;
	}

	inline static int32_t get_offset_of_alignment_12() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___alignment_12)); }
	inline int32_t get_alignment_12() const { return ___alignment_12; }
	inline int32_t* get_address_of_alignment_12() { return &___alignment_12; }
	inline void set_alignment_12(int32_t value)
	{
		___alignment_12 = value;
	}

	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___items_13)); }
	inline List_1_t1765447871 * get_items_13() const { return ___items_13; }
	inline List_1_t1765447871 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(List_1_t1765447871 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier(&___items_13, value);
	}

	inline static int32_t get_offset_of_itemData_14() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___itemData_14)); }
	inline List_1_t1634065389 * get_itemData_14() const { return ___itemData_14; }
	inline List_1_t1634065389 ** get_address_of_itemData_14() { return &___itemData_14; }
	inline void set_itemData_14(List_1_t1634065389 * value)
	{
		___itemData_14 = value;
		Il2CppCodeGenWriteBarrier(&___itemData_14, value);
	}

	inline static int32_t get_offset_of_padding_15() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___padding_15)); }
	inline Vector2_t3525329788  get_padding_15() const { return ___padding_15; }
	inline Vector2_t3525329788 * get_address_of_padding_15() { return &___padding_15; }
	inline void set_padding_15(Vector2_t3525329788  value)
	{
		___padding_15 = value;
	}

	inline static int32_t get_offset_of_textColor_16() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___textColor_16)); }
	inline Color_t1588175760  get_textColor_16() const { return ___textColor_16; }
	inline Color_t1588175760 * get_address_of_textColor_16() { return &___textColor_16; }
	inline void set_textColor_16(Color_t1588175760  value)
	{
		___textColor_16 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_17() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___backgroundColor_17)); }
	inline Color_t1588175760  get_backgroundColor_17() const { return ___backgroundColor_17; }
	inline Color_t1588175760 * get_address_of_backgroundColor_17() { return &___backgroundColor_17; }
	inline void set_backgroundColor_17(Color_t1588175760  value)
	{
		___backgroundColor_17 = value;
	}

	inline static int32_t get_offset_of_highlightColor_18() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___highlightColor_18)); }
	inline Color_t1588175760  get_highlightColor_18() const { return ___highlightColor_18; }
	inline Color_t1588175760 * get_address_of_highlightColor_18() { return &___highlightColor_18; }
	inline void set_highlightColor_18(Color_t1588175760  value)
	{
		___highlightColor_18 = value;
	}

	inline static int32_t get_offset_of_isAnimated_19() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___isAnimated_19)); }
	inline bool get_isAnimated_19() const { return ___isAnimated_19; }
	inline bool* get_address_of_isAnimated_19() { return &___isAnimated_19; }
	inline void set_isAnimated_19(bool value)
	{
		___isAnimated_19 = value;
	}

	inline static int32_t get_offset_of_isLocalized_20() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___isLocalized_20)); }
	inline bool get_isLocalized_20() const { return ___isLocalized_20; }
	inline bool* get_address_of_isLocalized_20() { return &___isLocalized_20; }
	inline void set_isLocalized_20(bool value)
	{
		___isLocalized_20 = value;
	}

	inline static int32_t get_offset_of_openOn_21() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___openOn_21)); }
	inline int32_t get_openOn_21() const { return ___openOn_21; }
	inline int32_t* get_address_of_openOn_21() { return &___openOn_21; }
	inline void set_openOn_21(int32_t value)
	{
		___openOn_21 = value;
	}

	inline static int32_t get_offset_of_onChange_22() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___onChange_22)); }
	inline List_1_t506415896 * get_onChange_22() const { return ___onChange_22; }
	inline List_1_t506415896 ** get_address_of_onChange_22() { return &___onChange_22; }
	inline void set_onChange_22(List_1_t506415896 * value)
	{
		___onChange_22 = value;
		Il2CppCodeGenWriteBarrier(&___onChange_22, value);
	}

	inline static int32_t get_offset_of_mSelectedItem_23() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mSelectedItem_23)); }
	inline String_t* get_mSelectedItem_23() const { return ___mSelectedItem_23; }
	inline String_t** get_address_of_mSelectedItem_23() { return &___mSelectedItem_23; }
	inline void set_mSelectedItem_23(String_t* value)
	{
		___mSelectedItem_23 = value;
		Il2CppCodeGenWriteBarrier(&___mSelectedItem_23, value);
	}

	inline static int32_t get_offset_of_mPanel_24() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mPanel_24)); }
	inline UIPanel_t295209936 * get_mPanel_24() const { return ___mPanel_24; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_24() { return &___mPanel_24; }
	inline void set_mPanel_24(UIPanel_t295209936 * value)
	{
		___mPanel_24 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_24, value);
	}

	inline static int32_t get_offset_of_mChild_25() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mChild_25)); }
	inline GameObject_t4012695102 * get_mChild_25() const { return ___mChild_25; }
	inline GameObject_t4012695102 ** get_address_of_mChild_25() { return &___mChild_25; }
	inline void set_mChild_25(GameObject_t4012695102 * value)
	{
		___mChild_25 = value;
		Il2CppCodeGenWriteBarrier(&___mChild_25, value);
	}

	inline static int32_t get_offset_of_mBackground_26() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mBackground_26)); }
	inline UISprite_t661437049 * get_mBackground_26() const { return ___mBackground_26; }
	inline UISprite_t661437049 ** get_address_of_mBackground_26() { return &___mBackground_26; }
	inline void set_mBackground_26(UISprite_t661437049 * value)
	{
		___mBackground_26 = value;
		Il2CppCodeGenWriteBarrier(&___mBackground_26, value);
	}

	inline static int32_t get_offset_of_mHighlight_27() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mHighlight_27)); }
	inline UISprite_t661437049 * get_mHighlight_27() const { return ___mHighlight_27; }
	inline UISprite_t661437049 ** get_address_of_mHighlight_27() { return &___mHighlight_27; }
	inline void set_mHighlight_27(UISprite_t661437049 * value)
	{
		___mHighlight_27 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlight_27, value);
	}

	inline static int32_t get_offset_of_mHighlightedLabel_28() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mHighlightedLabel_28)); }
	inline UILabel_t291504320 * get_mHighlightedLabel_28() const { return ___mHighlightedLabel_28; }
	inline UILabel_t291504320 ** get_address_of_mHighlightedLabel_28() { return &___mHighlightedLabel_28; }
	inline void set_mHighlightedLabel_28(UILabel_t291504320 * value)
	{
		___mHighlightedLabel_28 = value;
		Il2CppCodeGenWriteBarrier(&___mHighlightedLabel_28, value);
	}

	inline static int32_t get_offset_of_mLabelList_29() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mLabelList_29)); }
	inline List_1_t1088463289 * get_mLabelList_29() const { return ___mLabelList_29; }
	inline List_1_t1088463289 ** get_address_of_mLabelList_29() { return &___mLabelList_29; }
	inline void set_mLabelList_29(List_1_t1088463289 * value)
	{
		___mLabelList_29 = value;
		Il2CppCodeGenWriteBarrier(&___mLabelList_29, value);
	}

	inline static int32_t get_offset_of_mBgBorder_30() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mBgBorder_30)); }
	inline float get_mBgBorder_30() const { return ___mBgBorder_30; }
	inline float* get_address_of_mBgBorder_30() { return &___mBgBorder_30; }
	inline void set_mBgBorder_30(float value)
	{
		___mBgBorder_30 = value;
	}

	inline static int32_t get_offset_of_eventReceiver_31() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___eventReceiver_31)); }
	inline GameObject_t4012695102 * get_eventReceiver_31() const { return ___eventReceiver_31; }
	inline GameObject_t4012695102 ** get_address_of_eventReceiver_31() { return &___eventReceiver_31; }
	inline void set_eventReceiver_31(GameObject_t4012695102 * value)
	{
		___eventReceiver_31 = value;
		Il2CppCodeGenWriteBarrier(&___eventReceiver_31, value);
	}

	inline static int32_t get_offset_of_functionName_32() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___functionName_32)); }
	inline String_t* get_functionName_32() const { return ___functionName_32; }
	inline String_t** get_address_of_functionName_32() { return &___functionName_32; }
	inline void set_functionName_32(String_t* value)
	{
		___functionName_32 = value;
		Il2CppCodeGenWriteBarrier(&___functionName_32, value);
	}

	inline static int32_t get_offset_of_textScale_33() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___textScale_33)); }
	inline float get_textScale_33() const { return ___textScale_33; }
	inline float* get_address_of_textScale_33() { return &___textScale_33; }
	inline void set_textScale_33(float value)
	{
		___textScale_33 = value;
	}

	inline static int32_t get_offset_of_font_34() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___font_34)); }
	inline UIFont_t2503090435 * get_font_34() const { return ___font_34; }
	inline UIFont_t2503090435 ** get_address_of_font_34() { return &___font_34; }
	inline void set_font_34(UIFont_t2503090435 * value)
	{
		___font_34 = value;
		Il2CppCodeGenWriteBarrier(&___font_34, value);
	}

	inline static int32_t get_offset_of_textLabel_35() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___textLabel_35)); }
	inline UILabel_t291504320 * get_textLabel_35() const { return ___textLabel_35; }
	inline UILabel_t291504320 ** get_address_of_textLabel_35() { return &___textLabel_35; }
	inline void set_textLabel_35(UILabel_t291504320 * value)
	{
		___textLabel_35 = value;
		Il2CppCodeGenWriteBarrier(&___textLabel_35, value);
	}

	inline static int32_t get_offset_of_mLegacyEvent_36() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mLegacyEvent_36)); }
	inline LegacyEvent_t3762302001 * get_mLegacyEvent_36() const { return ___mLegacyEvent_36; }
	inline LegacyEvent_t3762302001 ** get_address_of_mLegacyEvent_36() { return &___mLegacyEvent_36; }
	inline void set_mLegacyEvent_36(LegacyEvent_t3762302001 * value)
	{
		___mLegacyEvent_36 = value;
		Il2CppCodeGenWriteBarrier(&___mLegacyEvent_36, value);
	}

	inline static int32_t get_offset_of_mUseDynamicFont_37() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mUseDynamicFont_37)); }
	inline bool get_mUseDynamicFont_37() const { return ___mUseDynamicFont_37; }
	inline bool* get_address_of_mUseDynamicFont_37() { return &___mUseDynamicFont_37; }
	inline void set_mUseDynamicFont_37(bool value)
	{
		___mUseDynamicFont_37 = value;
	}

	inline static int32_t get_offset_of_mTweening_38() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942, ___mTweening_38)); }
	inline bool get_mTweening_38() const { return ___mTweening_38; }
	inline bool* get_address_of_mTweening_38() { return &___mTweening_38; }
	inline void set_mTweening_38(bool value)
	{
		___mTweening_38 = value;
	}
};

struct UIPopupList_t1804933942_StaticFields
{
public:
	// UIPopupList UIPopupList::current
	UIPopupList_t1804933942 * ___current_3;

public:
	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(UIPopupList_t1804933942_StaticFields, ___current_3)); }
	inline UIPopupList_t1804933942 * get_current_3() const { return ___current_3; }
	inline UIPopupList_t1804933942 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIPopupList_t1804933942 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
