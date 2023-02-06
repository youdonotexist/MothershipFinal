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
// UILabel
struct UILabel_t291504320;
// UISprite
struct UISprite_t661437049;
// UISprite[]
struct UISpriteU5BU5D_t3727562628;
// UIPanel
struct UIPanel_t295209936;
// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EncounterItem
struct  EncounterItem_t688699078  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject EncounterItem::cover
	GameObject_t4012695102 * ___cover_2;
	// UnityEngine.GameObject EncounterItem::additional
	GameObject_t4012695102 * ___additional_3;
	// UILabel EncounterItem::_title
	UILabel_t291504320 * ____title_4;
	// UILabel EncounterItem::_details
	UILabel_t291504320 * ____details_5;
	// UISprite EncounterItem::_shipSprite
	UISprite_t661437049 * ____shipSprite_6;
	// UISprite EncounterItem::_background
	UISprite_t661437049 * ____background_7;
	// UILabel EncounterItem::_highScore
	UILabel_t291504320 * ____highScore_8;
	// UILabel EncounterItem::_scrap
	UILabel_t291504320 * ____scrap_9;
	// UILabel EncounterItem::_play
	UILabel_t291504320 * ____play_10;
	// UISprite EncounterItem::_locked
	UISprite_t661437049 * ____locked_11;
	// UISprite[] EncounterItem::portraits
	UISpriteU5BU5D_t3727562628* ___portraits_12;
	// UIPanel EncounterItem::_additionalPanel
	UIPanel_t295209936 * ____additionalPanel_13;
	// UnityEngine.Transform EncounterItem::_rootTransform
	Transform_t284553113 * ____rootTransform_14;
	// UnityEngine.Transform EncounterItem::_coverTransform
	Transform_t284553113 * ____coverTransform_15;
	// System.String EncounterItem::type
	String_t* ___type_16;
	// System.String EncounterItem::id
	String_t* ___id_17;
	// UnityEngine.GameObject EncounterItem::basicDetails
	GameObject_t4012695102 * ___basicDetails_18;
	// UnityEngine.GameObject EncounterItem::juggernautDetails
	GameObject_t4012695102 * ___juggernautDetails_19;
	// UnityEngine.GameObject EncounterItem::scientistDetails
	GameObject_t4012695102 * ___scientistDetails_20;
	// System.Boolean EncounterItem::flipping
	bool ___flipping_21;
	// System.Boolean EncounterItem::frontFacing
	bool ___frontFacing_22;
	// System.Boolean EncounterItem::additionalMode
	bool ___additionalMode_23;

public:
	inline static int32_t get_offset_of_cover_2() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___cover_2)); }
	inline GameObject_t4012695102 * get_cover_2() const { return ___cover_2; }
	inline GameObject_t4012695102 ** get_address_of_cover_2() { return &___cover_2; }
	inline void set_cover_2(GameObject_t4012695102 * value)
	{
		___cover_2 = value;
		Il2CppCodeGenWriteBarrier(&___cover_2, value);
	}

	inline static int32_t get_offset_of_additional_3() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___additional_3)); }
	inline GameObject_t4012695102 * get_additional_3() const { return ___additional_3; }
	inline GameObject_t4012695102 ** get_address_of_additional_3() { return &___additional_3; }
	inline void set_additional_3(GameObject_t4012695102 * value)
	{
		___additional_3 = value;
		Il2CppCodeGenWriteBarrier(&___additional_3, value);
	}

	inline static int32_t get_offset_of__title_4() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____title_4)); }
	inline UILabel_t291504320 * get__title_4() const { return ____title_4; }
	inline UILabel_t291504320 ** get_address_of__title_4() { return &____title_4; }
	inline void set__title_4(UILabel_t291504320 * value)
	{
		____title_4 = value;
		Il2CppCodeGenWriteBarrier(&____title_4, value);
	}

	inline static int32_t get_offset_of__details_5() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____details_5)); }
	inline UILabel_t291504320 * get__details_5() const { return ____details_5; }
	inline UILabel_t291504320 ** get_address_of__details_5() { return &____details_5; }
	inline void set__details_5(UILabel_t291504320 * value)
	{
		____details_5 = value;
		Il2CppCodeGenWriteBarrier(&____details_5, value);
	}

	inline static int32_t get_offset_of__shipSprite_6() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____shipSprite_6)); }
	inline UISprite_t661437049 * get__shipSprite_6() const { return ____shipSprite_6; }
	inline UISprite_t661437049 ** get_address_of__shipSprite_6() { return &____shipSprite_6; }
	inline void set__shipSprite_6(UISprite_t661437049 * value)
	{
		____shipSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&____shipSprite_6, value);
	}

	inline static int32_t get_offset_of__background_7() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____background_7)); }
	inline UISprite_t661437049 * get__background_7() const { return ____background_7; }
	inline UISprite_t661437049 ** get_address_of__background_7() { return &____background_7; }
	inline void set__background_7(UISprite_t661437049 * value)
	{
		____background_7 = value;
		Il2CppCodeGenWriteBarrier(&____background_7, value);
	}

	inline static int32_t get_offset_of__highScore_8() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____highScore_8)); }
	inline UILabel_t291504320 * get__highScore_8() const { return ____highScore_8; }
	inline UILabel_t291504320 ** get_address_of__highScore_8() { return &____highScore_8; }
	inline void set__highScore_8(UILabel_t291504320 * value)
	{
		____highScore_8 = value;
		Il2CppCodeGenWriteBarrier(&____highScore_8, value);
	}

	inline static int32_t get_offset_of__scrap_9() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____scrap_9)); }
	inline UILabel_t291504320 * get__scrap_9() const { return ____scrap_9; }
	inline UILabel_t291504320 ** get_address_of__scrap_9() { return &____scrap_9; }
	inline void set__scrap_9(UILabel_t291504320 * value)
	{
		____scrap_9 = value;
		Il2CppCodeGenWriteBarrier(&____scrap_9, value);
	}

	inline static int32_t get_offset_of__play_10() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____play_10)); }
	inline UILabel_t291504320 * get__play_10() const { return ____play_10; }
	inline UILabel_t291504320 ** get_address_of__play_10() { return &____play_10; }
	inline void set__play_10(UILabel_t291504320 * value)
	{
		____play_10 = value;
		Il2CppCodeGenWriteBarrier(&____play_10, value);
	}

	inline static int32_t get_offset_of__locked_11() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____locked_11)); }
	inline UISprite_t661437049 * get__locked_11() const { return ____locked_11; }
	inline UISprite_t661437049 ** get_address_of__locked_11() { return &____locked_11; }
	inline void set__locked_11(UISprite_t661437049 * value)
	{
		____locked_11 = value;
		Il2CppCodeGenWriteBarrier(&____locked_11, value);
	}

	inline static int32_t get_offset_of_portraits_12() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___portraits_12)); }
	inline UISpriteU5BU5D_t3727562628* get_portraits_12() const { return ___portraits_12; }
	inline UISpriteU5BU5D_t3727562628** get_address_of_portraits_12() { return &___portraits_12; }
	inline void set_portraits_12(UISpriteU5BU5D_t3727562628* value)
	{
		___portraits_12 = value;
		Il2CppCodeGenWriteBarrier(&___portraits_12, value);
	}

	inline static int32_t get_offset_of__additionalPanel_13() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____additionalPanel_13)); }
	inline UIPanel_t295209936 * get__additionalPanel_13() const { return ____additionalPanel_13; }
	inline UIPanel_t295209936 ** get_address_of__additionalPanel_13() { return &____additionalPanel_13; }
	inline void set__additionalPanel_13(UIPanel_t295209936 * value)
	{
		____additionalPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&____additionalPanel_13, value);
	}

	inline static int32_t get_offset_of__rootTransform_14() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____rootTransform_14)); }
	inline Transform_t284553113 * get__rootTransform_14() const { return ____rootTransform_14; }
	inline Transform_t284553113 ** get_address_of__rootTransform_14() { return &____rootTransform_14; }
	inline void set__rootTransform_14(Transform_t284553113 * value)
	{
		____rootTransform_14 = value;
		Il2CppCodeGenWriteBarrier(&____rootTransform_14, value);
	}

	inline static int32_t get_offset_of__coverTransform_15() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ____coverTransform_15)); }
	inline Transform_t284553113 * get__coverTransform_15() const { return ____coverTransform_15; }
	inline Transform_t284553113 ** get_address_of__coverTransform_15() { return &____coverTransform_15; }
	inline void set__coverTransform_15(Transform_t284553113 * value)
	{
		____coverTransform_15 = value;
		Il2CppCodeGenWriteBarrier(&____coverTransform_15, value);
	}

	inline static int32_t get_offset_of_type_16() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___type_16)); }
	inline String_t* get_type_16() const { return ___type_16; }
	inline String_t** get_address_of_type_16() { return &___type_16; }
	inline void set_type_16(String_t* value)
	{
		___type_16 = value;
		Il2CppCodeGenWriteBarrier(&___type_16, value);
	}

	inline static int32_t get_offset_of_id_17() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___id_17)); }
	inline String_t* get_id_17() const { return ___id_17; }
	inline String_t** get_address_of_id_17() { return &___id_17; }
	inline void set_id_17(String_t* value)
	{
		___id_17 = value;
		Il2CppCodeGenWriteBarrier(&___id_17, value);
	}

	inline static int32_t get_offset_of_basicDetails_18() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___basicDetails_18)); }
	inline GameObject_t4012695102 * get_basicDetails_18() const { return ___basicDetails_18; }
	inline GameObject_t4012695102 ** get_address_of_basicDetails_18() { return &___basicDetails_18; }
	inline void set_basicDetails_18(GameObject_t4012695102 * value)
	{
		___basicDetails_18 = value;
		Il2CppCodeGenWriteBarrier(&___basicDetails_18, value);
	}

	inline static int32_t get_offset_of_juggernautDetails_19() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___juggernautDetails_19)); }
	inline GameObject_t4012695102 * get_juggernautDetails_19() const { return ___juggernautDetails_19; }
	inline GameObject_t4012695102 ** get_address_of_juggernautDetails_19() { return &___juggernautDetails_19; }
	inline void set_juggernautDetails_19(GameObject_t4012695102 * value)
	{
		___juggernautDetails_19 = value;
		Il2CppCodeGenWriteBarrier(&___juggernautDetails_19, value);
	}

	inline static int32_t get_offset_of_scientistDetails_20() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___scientistDetails_20)); }
	inline GameObject_t4012695102 * get_scientistDetails_20() const { return ___scientistDetails_20; }
	inline GameObject_t4012695102 ** get_address_of_scientistDetails_20() { return &___scientistDetails_20; }
	inline void set_scientistDetails_20(GameObject_t4012695102 * value)
	{
		___scientistDetails_20 = value;
		Il2CppCodeGenWriteBarrier(&___scientistDetails_20, value);
	}

	inline static int32_t get_offset_of_flipping_21() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___flipping_21)); }
	inline bool get_flipping_21() const { return ___flipping_21; }
	inline bool* get_address_of_flipping_21() { return &___flipping_21; }
	inline void set_flipping_21(bool value)
	{
		___flipping_21 = value;
	}

	inline static int32_t get_offset_of_frontFacing_22() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___frontFacing_22)); }
	inline bool get_frontFacing_22() const { return ___frontFacing_22; }
	inline bool* get_address_of_frontFacing_22() { return &___frontFacing_22; }
	inline void set_frontFacing_22(bool value)
	{
		___frontFacing_22 = value;
	}

	inline static int32_t get_offset_of_additionalMode_23() { return static_cast<int32_t>(offsetof(EncounterItem_t688699078, ___additionalMode_23)); }
	inline bool get_additionalMode_23() const { return ___additionalMode_23; }
	inline bool* get_address_of_additionalMode_23() { return &___additionalMode_23; }
	inline void set_additionalMode_23(bool value)
	{
		___additionalMode_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
