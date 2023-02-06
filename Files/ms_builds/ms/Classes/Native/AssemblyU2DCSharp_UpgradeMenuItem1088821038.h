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
// UISprite
struct UISprite_t661437049;
// UIButton
struct UIButton_t179429094;

#include "AssemblyU2DCSharp_UpgradeTree4118264762.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgradeMenuItem
struct  UpgradeMenuItem_t1088821038  : public UpgradeTree_t4118264762
{
public:
	// UILabel UpgradeMenuItem::_title
	UILabel_t291504320 * ____title_3;
	// UILabel UpgradeMenuItem::_state
	UILabel_t291504320 * ____state_4;
	// UISprite UpgradeMenuItem::_icon
	UISprite_t661437049 * ____icon_5;
	// UISprite UpgradeMenuItem::_background
	UISprite_t661437049 * ____background_6;
	// UIButton UpgradeMenuItem::_button
	UIButton_t179429094 * ____button_7;
	// PortState/MinionTypeDetails UpgradeMenuItem::cachedDetails
	MinionTypeDetails_t2901012274  ___cachedDetails_8;

public:
	inline static int32_t get_offset_of__title_3() { return static_cast<int32_t>(offsetof(UpgradeMenuItem_t1088821038, ____title_3)); }
	inline UILabel_t291504320 * get__title_3() const { return ____title_3; }
	inline UILabel_t291504320 ** get_address_of__title_3() { return &____title_3; }
	inline void set__title_3(UILabel_t291504320 * value)
	{
		____title_3 = value;
		Il2CppCodeGenWriteBarrier(&____title_3, value);
	}

	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(UpgradeMenuItem_t1088821038, ____state_4)); }
	inline UILabel_t291504320 * get__state_4() const { return ____state_4; }
	inline UILabel_t291504320 ** get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(UILabel_t291504320 * value)
	{
		____state_4 = value;
		Il2CppCodeGenWriteBarrier(&____state_4, value);
	}

	inline static int32_t get_offset_of__icon_5() { return static_cast<int32_t>(offsetof(UpgradeMenuItem_t1088821038, ____icon_5)); }
	inline UISprite_t661437049 * get__icon_5() const { return ____icon_5; }
	inline UISprite_t661437049 ** get_address_of__icon_5() { return &____icon_5; }
	inline void set__icon_5(UISprite_t661437049 * value)
	{
		____icon_5 = value;
		Il2CppCodeGenWriteBarrier(&____icon_5, value);
	}

	inline static int32_t get_offset_of__background_6() { return static_cast<int32_t>(offsetof(UpgradeMenuItem_t1088821038, ____background_6)); }
	inline UISprite_t661437049 * get__background_6() const { return ____background_6; }
	inline UISprite_t661437049 ** get_address_of__background_6() { return &____background_6; }
	inline void set__background_6(UISprite_t661437049 * value)
	{
		____background_6 = value;
		Il2CppCodeGenWriteBarrier(&____background_6, value);
	}

	inline static int32_t get_offset_of__button_7() { return static_cast<int32_t>(offsetof(UpgradeMenuItem_t1088821038, ____button_7)); }
	inline UIButton_t179429094 * get__button_7() const { return ____button_7; }
	inline UIButton_t179429094 ** get_address_of__button_7() { return &____button_7; }
	inline void set__button_7(UIButton_t179429094 * value)
	{
		____button_7 = value;
		Il2CppCodeGenWriteBarrier(&____button_7, value);
	}

	inline static int32_t get_offset_of_cachedDetails_8() { return static_cast<int32_t>(offsetof(UpgradeMenuItem_t1088821038, ___cachedDetails_8)); }
	inline MinionTypeDetails_t2901012274  get_cachedDetails_8() const { return ___cachedDetails_8; }
	inline MinionTypeDetails_t2901012274 * get_address_of_cachedDetails_8() { return &___cachedDetails_8; }
	inline void set_cachedDetails_8(MinionTypeDetails_t2901012274  value)
	{
		___cachedDetails_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
