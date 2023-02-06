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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgraderPortButton
struct  UpgraderPortButton_t3184260521  : public MonoBehaviour_t3012272455
{
public:
	// UISprite UpgraderPortButton::_portSprite
	UISprite_t661437049 * ____portSprite_2;
	// UILabel UpgraderPortButton::_portLabel
	UILabel_t291504320 * ____portLabel_3;
	// UISprite UpgraderPortButton::_background
	UISprite_t661437049 * ____background_4;
	// System.Int32 UpgraderPortButton::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of__portSprite_2() { return static_cast<int32_t>(offsetof(UpgraderPortButton_t3184260521, ____portSprite_2)); }
	inline UISprite_t661437049 * get__portSprite_2() const { return ____portSprite_2; }
	inline UISprite_t661437049 ** get_address_of__portSprite_2() { return &____portSprite_2; }
	inline void set__portSprite_2(UISprite_t661437049 * value)
	{
		____portSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&____portSprite_2, value);
	}

	inline static int32_t get_offset_of__portLabel_3() { return static_cast<int32_t>(offsetof(UpgraderPortButton_t3184260521, ____portLabel_3)); }
	inline UILabel_t291504320 * get__portLabel_3() const { return ____portLabel_3; }
	inline UILabel_t291504320 ** get_address_of__portLabel_3() { return &____portLabel_3; }
	inline void set__portLabel_3(UILabel_t291504320 * value)
	{
		____portLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&____portLabel_3, value);
	}

	inline static int32_t get_offset_of__background_4() { return static_cast<int32_t>(offsetof(UpgraderPortButton_t3184260521, ____background_4)); }
	inline UISprite_t661437049 * get__background_4() const { return ____background_4; }
	inline UISprite_t661437049 ** get_address_of__background_4() { return &____background_4; }
	inline void set__background_4(UISprite_t661437049 * value)
	{
		____background_4 = value;
		Il2CppCodeGenWriteBarrier(&____background_4, value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(UpgraderPortButton_t3184260521, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
