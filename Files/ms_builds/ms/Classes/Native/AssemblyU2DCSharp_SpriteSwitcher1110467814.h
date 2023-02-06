#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSpriteAnimClip[]
struct exSpriteAnimClipU5BU5D_t2972410756;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// exSpriteAnimation
struct exSpriteAnimation_t1937626380;
// exSprite
struct exSprite_t1539598680;
// Damagable
struct Damagable_t4024817136;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteSwitcher
struct  SpriteSwitcher_t1110467814  : public MonoBehaviour_t3012272455
{
public:
	// exSpriteAnimClip[] SpriteSwitcher::nesAnimations
	exSpriteAnimClipU5BU5D_t2972410756* ___nesAnimations_2;
	// System.String SpriteSwitcher::nesSpriteName
	String_t* ___nesSpriteName_3;
	// UnityEngine.Vector2 SpriteSwitcher::nesSpriteOffset
	Vector2_t3525329788  ___nesSpriteOffset_4;
	// exSpriteAnimClip[] SpriteSwitcher::msAnimations
	exSpriteAnimClipU5BU5D_t2972410756* ___msAnimations_5;
	// System.String SpriteSwitcher::msSpriteName
	String_t* ___msSpriteName_6;
	// UnityEngine.Vector2 SpriteSwitcher::msSpriteOffset
	Vector2_t3525329788  ___msSpriteOffset_7;
	// exSpriteAnimClip[] SpriteSwitcher::snesAnimations
	exSpriteAnimClipU5BU5D_t2972410756* ___snesAnimations_8;
	// System.String SpriteSwitcher::snesSpriteName
	String_t* ___snesSpriteName_9;
	// UnityEngine.Vector2 SpriteSwitcher::snesSpriteOffset
	Vector2_t3525329788  ___snesSpriteOffset_10;
	// exSpriteAnimClip[] SpriteSwitcher::psAnimations
	exSpriteAnimClipU5BU5D_t2972410756* ___psAnimations_11;
	// System.String SpriteSwitcher::psSpriteName
	String_t* ___psSpriteName_12;
	// UnityEngine.Vector2 SpriteSwitcher::psSpriteOffset
	Vector2_t3525329788  ___psSpriteOffset_13;
	// UnityEngine.Color32[] SpriteSwitcher::nesColors
	Color32U5BU5D_t1677970742* ___nesColors_14;
	// UnityEngine.Color32[] SpriteSwitcher::msColors
	Color32U5BU5D_t1677970742* ___msColors_15;
	// UnityEngine.Color32[] SpriteSwitcher::snesColors
	Color32U5BU5D_t1677970742* ___snesColors_16;
	// UnityEngine.Color32[] SpriteSwitcher::psColors
	Color32U5BU5D_t1677970742* ___psColors_17;
	// System.Int32 SpriteSwitcher::defaultAnimationIndex
	int32_t ___defaultAnimationIndex_18;
	// System.Boolean SpriteSwitcher::useDamagableColors
	bool ___useDamagableColors_19;
	// System.String SpriteSwitcher::qualityLevel
	String_t* ___qualityLevel_20;
	// exSpriteAnimation SpriteSwitcher::_animation
	exSpriteAnimation_t1937626380 * ____animation_21;
	// exSprite SpriteSwitcher::_sprite
	exSprite_t1539598680 * ____sprite_22;
	// Damagable SpriteSwitcher::_damagable
	Damagable_t4024817136 * ____damagable_23;

public:
	inline static int32_t get_offset_of_nesAnimations_2() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___nesAnimations_2)); }
	inline exSpriteAnimClipU5BU5D_t2972410756* get_nesAnimations_2() const { return ___nesAnimations_2; }
	inline exSpriteAnimClipU5BU5D_t2972410756** get_address_of_nesAnimations_2() { return &___nesAnimations_2; }
	inline void set_nesAnimations_2(exSpriteAnimClipU5BU5D_t2972410756* value)
	{
		___nesAnimations_2 = value;
		Il2CppCodeGenWriteBarrier(&___nesAnimations_2, value);
	}

	inline static int32_t get_offset_of_nesSpriteName_3() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___nesSpriteName_3)); }
	inline String_t* get_nesSpriteName_3() const { return ___nesSpriteName_3; }
	inline String_t** get_address_of_nesSpriteName_3() { return &___nesSpriteName_3; }
	inline void set_nesSpriteName_3(String_t* value)
	{
		___nesSpriteName_3 = value;
		Il2CppCodeGenWriteBarrier(&___nesSpriteName_3, value);
	}

	inline static int32_t get_offset_of_nesSpriteOffset_4() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___nesSpriteOffset_4)); }
	inline Vector2_t3525329788  get_nesSpriteOffset_4() const { return ___nesSpriteOffset_4; }
	inline Vector2_t3525329788 * get_address_of_nesSpriteOffset_4() { return &___nesSpriteOffset_4; }
	inline void set_nesSpriteOffset_4(Vector2_t3525329788  value)
	{
		___nesSpriteOffset_4 = value;
	}

	inline static int32_t get_offset_of_msAnimations_5() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___msAnimations_5)); }
	inline exSpriteAnimClipU5BU5D_t2972410756* get_msAnimations_5() const { return ___msAnimations_5; }
	inline exSpriteAnimClipU5BU5D_t2972410756** get_address_of_msAnimations_5() { return &___msAnimations_5; }
	inline void set_msAnimations_5(exSpriteAnimClipU5BU5D_t2972410756* value)
	{
		___msAnimations_5 = value;
		Il2CppCodeGenWriteBarrier(&___msAnimations_5, value);
	}

	inline static int32_t get_offset_of_msSpriteName_6() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___msSpriteName_6)); }
	inline String_t* get_msSpriteName_6() const { return ___msSpriteName_6; }
	inline String_t** get_address_of_msSpriteName_6() { return &___msSpriteName_6; }
	inline void set_msSpriteName_6(String_t* value)
	{
		___msSpriteName_6 = value;
		Il2CppCodeGenWriteBarrier(&___msSpriteName_6, value);
	}

	inline static int32_t get_offset_of_msSpriteOffset_7() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___msSpriteOffset_7)); }
	inline Vector2_t3525329788  get_msSpriteOffset_7() const { return ___msSpriteOffset_7; }
	inline Vector2_t3525329788 * get_address_of_msSpriteOffset_7() { return &___msSpriteOffset_7; }
	inline void set_msSpriteOffset_7(Vector2_t3525329788  value)
	{
		___msSpriteOffset_7 = value;
	}

	inline static int32_t get_offset_of_snesAnimations_8() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___snesAnimations_8)); }
	inline exSpriteAnimClipU5BU5D_t2972410756* get_snesAnimations_8() const { return ___snesAnimations_8; }
	inline exSpriteAnimClipU5BU5D_t2972410756** get_address_of_snesAnimations_8() { return &___snesAnimations_8; }
	inline void set_snesAnimations_8(exSpriteAnimClipU5BU5D_t2972410756* value)
	{
		___snesAnimations_8 = value;
		Il2CppCodeGenWriteBarrier(&___snesAnimations_8, value);
	}

	inline static int32_t get_offset_of_snesSpriteName_9() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___snesSpriteName_9)); }
	inline String_t* get_snesSpriteName_9() const { return ___snesSpriteName_9; }
	inline String_t** get_address_of_snesSpriteName_9() { return &___snesSpriteName_9; }
	inline void set_snesSpriteName_9(String_t* value)
	{
		___snesSpriteName_9 = value;
		Il2CppCodeGenWriteBarrier(&___snesSpriteName_9, value);
	}

	inline static int32_t get_offset_of_snesSpriteOffset_10() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___snesSpriteOffset_10)); }
	inline Vector2_t3525329788  get_snesSpriteOffset_10() const { return ___snesSpriteOffset_10; }
	inline Vector2_t3525329788 * get_address_of_snesSpriteOffset_10() { return &___snesSpriteOffset_10; }
	inline void set_snesSpriteOffset_10(Vector2_t3525329788  value)
	{
		___snesSpriteOffset_10 = value;
	}

	inline static int32_t get_offset_of_psAnimations_11() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___psAnimations_11)); }
	inline exSpriteAnimClipU5BU5D_t2972410756* get_psAnimations_11() const { return ___psAnimations_11; }
	inline exSpriteAnimClipU5BU5D_t2972410756** get_address_of_psAnimations_11() { return &___psAnimations_11; }
	inline void set_psAnimations_11(exSpriteAnimClipU5BU5D_t2972410756* value)
	{
		___psAnimations_11 = value;
		Il2CppCodeGenWriteBarrier(&___psAnimations_11, value);
	}

	inline static int32_t get_offset_of_psSpriteName_12() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___psSpriteName_12)); }
	inline String_t* get_psSpriteName_12() const { return ___psSpriteName_12; }
	inline String_t** get_address_of_psSpriteName_12() { return &___psSpriteName_12; }
	inline void set_psSpriteName_12(String_t* value)
	{
		___psSpriteName_12 = value;
		Il2CppCodeGenWriteBarrier(&___psSpriteName_12, value);
	}

	inline static int32_t get_offset_of_psSpriteOffset_13() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___psSpriteOffset_13)); }
	inline Vector2_t3525329788  get_psSpriteOffset_13() const { return ___psSpriteOffset_13; }
	inline Vector2_t3525329788 * get_address_of_psSpriteOffset_13() { return &___psSpriteOffset_13; }
	inline void set_psSpriteOffset_13(Vector2_t3525329788  value)
	{
		___psSpriteOffset_13 = value;
	}

	inline static int32_t get_offset_of_nesColors_14() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___nesColors_14)); }
	inline Color32U5BU5D_t1677970742* get_nesColors_14() const { return ___nesColors_14; }
	inline Color32U5BU5D_t1677970742** get_address_of_nesColors_14() { return &___nesColors_14; }
	inline void set_nesColors_14(Color32U5BU5D_t1677970742* value)
	{
		___nesColors_14 = value;
		Il2CppCodeGenWriteBarrier(&___nesColors_14, value);
	}

	inline static int32_t get_offset_of_msColors_15() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___msColors_15)); }
	inline Color32U5BU5D_t1677970742* get_msColors_15() const { return ___msColors_15; }
	inline Color32U5BU5D_t1677970742** get_address_of_msColors_15() { return &___msColors_15; }
	inline void set_msColors_15(Color32U5BU5D_t1677970742* value)
	{
		___msColors_15 = value;
		Il2CppCodeGenWriteBarrier(&___msColors_15, value);
	}

	inline static int32_t get_offset_of_snesColors_16() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___snesColors_16)); }
	inline Color32U5BU5D_t1677970742* get_snesColors_16() const { return ___snesColors_16; }
	inline Color32U5BU5D_t1677970742** get_address_of_snesColors_16() { return &___snesColors_16; }
	inline void set_snesColors_16(Color32U5BU5D_t1677970742* value)
	{
		___snesColors_16 = value;
		Il2CppCodeGenWriteBarrier(&___snesColors_16, value);
	}

	inline static int32_t get_offset_of_psColors_17() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___psColors_17)); }
	inline Color32U5BU5D_t1677970742* get_psColors_17() const { return ___psColors_17; }
	inline Color32U5BU5D_t1677970742** get_address_of_psColors_17() { return &___psColors_17; }
	inline void set_psColors_17(Color32U5BU5D_t1677970742* value)
	{
		___psColors_17 = value;
		Il2CppCodeGenWriteBarrier(&___psColors_17, value);
	}

	inline static int32_t get_offset_of_defaultAnimationIndex_18() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___defaultAnimationIndex_18)); }
	inline int32_t get_defaultAnimationIndex_18() const { return ___defaultAnimationIndex_18; }
	inline int32_t* get_address_of_defaultAnimationIndex_18() { return &___defaultAnimationIndex_18; }
	inline void set_defaultAnimationIndex_18(int32_t value)
	{
		___defaultAnimationIndex_18 = value;
	}

	inline static int32_t get_offset_of_useDamagableColors_19() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___useDamagableColors_19)); }
	inline bool get_useDamagableColors_19() const { return ___useDamagableColors_19; }
	inline bool* get_address_of_useDamagableColors_19() { return &___useDamagableColors_19; }
	inline void set_useDamagableColors_19(bool value)
	{
		___useDamagableColors_19 = value;
	}

	inline static int32_t get_offset_of_qualityLevel_20() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ___qualityLevel_20)); }
	inline String_t* get_qualityLevel_20() const { return ___qualityLevel_20; }
	inline String_t** get_address_of_qualityLevel_20() { return &___qualityLevel_20; }
	inline void set_qualityLevel_20(String_t* value)
	{
		___qualityLevel_20 = value;
		Il2CppCodeGenWriteBarrier(&___qualityLevel_20, value);
	}

	inline static int32_t get_offset_of__animation_21() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ____animation_21)); }
	inline exSpriteAnimation_t1937626380 * get__animation_21() const { return ____animation_21; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_21() { return &____animation_21; }
	inline void set__animation_21(exSpriteAnimation_t1937626380 * value)
	{
		____animation_21 = value;
		Il2CppCodeGenWriteBarrier(&____animation_21, value);
	}

	inline static int32_t get_offset_of__sprite_22() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ____sprite_22)); }
	inline exSprite_t1539598680 * get__sprite_22() const { return ____sprite_22; }
	inline exSprite_t1539598680 ** get_address_of__sprite_22() { return &____sprite_22; }
	inline void set__sprite_22(exSprite_t1539598680 * value)
	{
		____sprite_22 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_22, value);
	}

	inline static int32_t get_offset_of__damagable_23() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814, ____damagable_23)); }
	inline Damagable_t4024817136 * get__damagable_23() const { return ____damagable_23; }
	inline Damagable_t4024817136 ** get_address_of__damagable_23() { return &____damagable_23; }
	inline void set__damagable_23(Damagable_t4024817136 * value)
	{
		____damagable_23 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_23, value);
	}
};

struct SpriteSwitcher_t1110467814_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SpriteSwitcher::<>f__switch$map7
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map7_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_24() { return static_cast<int32_t>(offsetof(SpriteSwitcher_t1110467814_StaticFields, ___U3CU3Ef__switchU24map7_24)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map7_24() const { return ___U3CU3Ef__switchU24map7_24; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map7_24() { return &___U3CU3Ef__switchU24map7_24; }
	inline void set_U3CU3Ef__switchU24map7_24(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map7_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map7_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
