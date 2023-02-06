#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<exSpriteAnimClip>
struct List_1_t1689845618;
// exSpriteAnimClip
struct exSpriteAnimClip_t892886649;
// System.Collections.Generic.Dictionary`2<System.String,exSpriteAnimState>
struct Dictionary_2_t3562387448;
// exSpriteAnimState
struct exSpriteAnimState_t1924689544;
// exSprite
struct exSprite_t1539598680;
// exAtlas
struct exAtlas_t2942648216;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteAnimation
struct  exSpriteAnimation_t1937626380  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<exSpriteAnimClip> exSpriteAnimation::animations
	List_1_t1689845618 * ___animations_2;
	// exSpriteAnimClip exSpriteAnimation::defaultAnimation
	exSpriteAnimClip_t892886649 * ___defaultAnimation_3;
	// System.Boolean exSpriteAnimation::playAutomatically
	bool ___playAutomatically_4;
	// System.Boolean exSpriteAnimation::initialized
	bool ___initialized_5;
	// System.Collections.Generic.Dictionary`2<System.String,exSpriteAnimState> exSpriteAnimation::nameToState
	Dictionary_2_t3562387448 * ___nameToState_6;
	// exSpriteAnimState exSpriteAnimation::curAnimation
	exSpriteAnimState_t1924689544 * ___curAnimation_7;
	// exSprite exSpriteAnimation::sprite
	exSprite_t1539598680 * ___sprite_8;
	// System.Boolean exSpriteAnimation::playing
	bool ___playing_9;
	// exAtlas exSpriteAnimation::defaultAtlas
	exAtlas_t2942648216 * ___defaultAtlas_10;
	// System.Int32 exSpriteAnimation::defaultIndex
	int32_t ___defaultIndex_11;
	// System.Int32 exSpriteAnimation::lastEventInfoIndex
	int32_t ___lastEventInfoIndex_12;
	// System.Single exSpriteAnimation::curWrappedTime
	float ___curWrappedTime_13;
	// System.Int32 exSpriteAnimation::curIndex
	int32_t ___curIndex_14;

public:
	inline static int32_t get_offset_of_animations_2() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___animations_2)); }
	inline List_1_t1689845618 * get_animations_2() const { return ___animations_2; }
	inline List_1_t1689845618 ** get_address_of_animations_2() { return &___animations_2; }
	inline void set_animations_2(List_1_t1689845618 * value)
	{
		___animations_2 = value;
		Il2CppCodeGenWriteBarrier(&___animations_2, value);
	}

	inline static int32_t get_offset_of_defaultAnimation_3() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___defaultAnimation_3)); }
	inline exSpriteAnimClip_t892886649 * get_defaultAnimation_3() const { return ___defaultAnimation_3; }
	inline exSpriteAnimClip_t892886649 ** get_address_of_defaultAnimation_3() { return &___defaultAnimation_3; }
	inline void set_defaultAnimation_3(exSpriteAnimClip_t892886649 * value)
	{
		___defaultAnimation_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAnimation_3, value);
	}

	inline static int32_t get_offset_of_playAutomatically_4() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___playAutomatically_4)); }
	inline bool get_playAutomatically_4() const { return ___playAutomatically_4; }
	inline bool* get_address_of_playAutomatically_4() { return &___playAutomatically_4; }
	inline void set_playAutomatically_4(bool value)
	{
		___playAutomatically_4 = value;
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}

	inline static int32_t get_offset_of_nameToState_6() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___nameToState_6)); }
	inline Dictionary_2_t3562387448 * get_nameToState_6() const { return ___nameToState_6; }
	inline Dictionary_2_t3562387448 ** get_address_of_nameToState_6() { return &___nameToState_6; }
	inline void set_nameToState_6(Dictionary_2_t3562387448 * value)
	{
		___nameToState_6 = value;
		Il2CppCodeGenWriteBarrier(&___nameToState_6, value);
	}

	inline static int32_t get_offset_of_curAnimation_7() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___curAnimation_7)); }
	inline exSpriteAnimState_t1924689544 * get_curAnimation_7() const { return ___curAnimation_7; }
	inline exSpriteAnimState_t1924689544 ** get_address_of_curAnimation_7() { return &___curAnimation_7; }
	inline void set_curAnimation_7(exSpriteAnimState_t1924689544 * value)
	{
		___curAnimation_7 = value;
		Il2CppCodeGenWriteBarrier(&___curAnimation_7, value);
	}

	inline static int32_t get_offset_of_sprite_8() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___sprite_8)); }
	inline exSprite_t1539598680 * get_sprite_8() const { return ___sprite_8; }
	inline exSprite_t1539598680 ** get_address_of_sprite_8() { return &___sprite_8; }
	inline void set_sprite_8(exSprite_t1539598680 * value)
	{
		___sprite_8 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_8, value);
	}

	inline static int32_t get_offset_of_playing_9() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___playing_9)); }
	inline bool get_playing_9() const { return ___playing_9; }
	inline bool* get_address_of_playing_9() { return &___playing_9; }
	inline void set_playing_9(bool value)
	{
		___playing_9 = value;
	}

	inline static int32_t get_offset_of_defaultAtlas_10() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___defaultAtlas_10)); }
	inline exAtlas_t2942648216 * get_defaultAtlas_10() const { return ___defaultAtlas_10; }
	inline exAtlas_t2942648216 ** get_address_of_defaultAtlas_10() { return &___defaultAtlas_10; }
	inline void set_defaultAtlas_10(exAtlas_t2942648216 * value)
	{
		___defaultAtlas_10 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAtlas_10, value);
	}

	inline static int32_t get_offset_of_defaultIndex_11() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___defaultIndex_11)); }
	inline int32_t get_defaultIndex_11() const { return ___defaultIndex_11; }
	inline int32_t* get_address_of_defaultIndex_11() { return &___defaultIndex_11; }
	inline void set_defaultIndex_11(int32_t value)
	{
		___defaultIndex_11 = value;
	}

	inline static int32_t get_offset_of_lastEventInfoIndex_12() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___lastEventInfoIndex_12)); }
	inline int32_t get_lastEventInfoIndex_12() const { return ___lastEventInfoIndex_12; }
	inline int32_t* get_address_of_lastEventInfoIndex_12() { return &___lastEventInfoIndex_12; }
	inline void set_lastEventInfoIndex_12(int32_t value)
	{
		___lastEventInfoIndex_12 = value;
	}

	inline static int32_t get_offset_of_curWrappedTime_13() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___curWrappedTime_13)); }
	inline float get_curWrappedTime_13() const { return ___curWrappedTime_13; }
	inline float* get_address_of_curWrappedTime_13() { return &___curWrappedTime_13; }
	inline void set_curWrappedTime_13(float value)
	{
		___curWrappedTime_13 = value;
	}

	inline static int32_t get_offset_of_curIndex_14() { return static_cast<int32_t>(offsetof(exSpriteAnimation_t1937626380, ___curIndex_14)); }
	inline int32_t get_curIndex_14() const { return ___curIndex_14; }
	inline int32_t* get_address_of_curIndex_14() { return &___curIndex_14; }
	inline void set_curIndex_14(int32_t value)
	{
		___curIndex_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
