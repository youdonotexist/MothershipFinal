#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIFont
struct UIFont_t2503090435;
// UIAtlas
struct UIAtlas_t281921111;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UISwitcher
struct  UISwitcher_t1655398805  : public MonoBehaviour_t3012272455
{
public:
	// UIFont UISwitcher::nesFont
	UIFont_t2503090435 * ___nesFont_2;
	// UIFont UISwitcher::msFont
	UIFont_t2503090435 * ___msFont_3;
	// UIFont UISwitcher::latestFont
	UIFont_t2503090435 * ___latestFont_4;
	// UIAtlas UISwitcher::_nesAtlas
	UIAtlas_t281921111 * ____nesAtlas_5;
	// UIAtlas UISwitcher::_msAtlas
	UIAtlas_t281921111 * ____msAtlas_6;
	// UIAtlas UISwitcher::_snesAtlas
	UIAtlas_t281921111 * ____snesAtlas_7;
	// UIAtlas UISwitcher::_psAtlas
	UIAtlas_t281921111 * ____psAtlas_8;
	// System.Boolean UISwitcher::switchSprites
	bool ___switchSprites_9;

public:
	inline static int32_t get_offset_of_nesFont_2() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ___nesFont_2)); }
	inline UIFont_t2503090435 * get_nesFont_2() const { return ___nesFont_2; }
	inline UIFont_t2503090435 ** get_address_of_nesFont_2() { return &___nesFont_2; }
	inline void set_nesFont_2(UIFont_t2503090435 * value)
	{
		___nesFont_2 = value;
		Il2CppCodeGenWriteBarrier(&___nesFont_2, value);
	}

	inline static int32_t get_offset_of_msFont_3() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ___msFont_3)); }
	inline UIFont_t2503090435 * get_msFont_3() const { return ___msFont_3; }
	inline UIFont_t2503090435 ** get_address_of_msFont_3() { return &___msFont_3; }
	inline void set_msFont_3(UIFont_t2503090435 * value)
	{
		___msFont_3 = value;
		Il2CppCodeGenWriteBarrier(&___msFont_3, value);
	}

	inline static int32_t get_offset_of_latestFont_4() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ___latestFont_4)); }
	inline UIFont_t2503090435 * get_latestFont_4() const { return ___latestFont_4; }
	inline UIFont_t2503090435 ** get_address_of_latestFont_4() { return &___latestFont_4; }
	inline void set_latestFont_4(UIFont_t2503090435 * value)
	{
		___latestFont_4 = value;
		Il2CppCodeGenWriteBarrier(&___latestFont_4, value);
	}

	inline static int32_t get_offset_of__nesAtlas_5() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ____nesAtlas_5)); }
	inline UIAtlas_t281921111 * get__nesAtlas_5() const { return ____nesAtlas_5; }
	inline UIAtlas_t281921111 ** get_address_of__nesAtlas_5() { return &____nesAtlas_5; }
	inline void set__nesAtlas_5(UIAtlas_t281921111 * value)
	{
		____nesAtlas_5 = value;
		Il2CppCodeGenWriteBarrier(&____nesAtlas_5, value);
	}

	inline static int32_t get_offset_of__msAtlas_6() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ____msAtlas_6)); }
	inline UIAtlas_t281921111 * get__msAtlas_6() const { return ____msAtlas_6; }
	inline UIAtlas_t281921111 ** get_address_of__msAtlas_6() { return &____msAtlas_6; }
	inline void set__msAtlas_6(UIAtlas_t281921111 * value)
	{
		____msAtlas_6 = value;
		Il2CppCodeGenWriteBarrier(&____msAtlas_6, value);
	}

	inline static int32_t get_offset_of__snesAtlas_7() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ____snesAtlas_7)); }
	inline UIAtlas_t281921111 * get__snesAtlas_7() const { return ____snesAtlas_7; }
	inline UIAtlas_t281921111 ** get_address_of__snesAtlas_7() { return &____snesAtlas_7; }
	inline void set__snesAtlas_7(UIAtlas_t281921111 * value)
	{
		____snesAtlas_7 = value;
		Il2CppCodeGenWriteBarrier(&____snesAtlas_7, value);
	}

	inline static int32_t get_offset_of__psAtlas_8() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ____psAtlas_8)); }
	inline UIAtlas_t281921111 * get__psAtlas_8() const { return ____psAtlas_8; }
	inline UIAtlas_t281921111 ** get_address_of__psAtlas_8() { return &____psAtlas_8; }
	inline void set__psAtlas_8(UIAtlas_t281921111 * value)
	{
		____psAtlas_8 = value;
		Il2CppCodeGenWriteBarrier(&____psAtlas_8, value);
	}

	inline static int32_t get_offset_of_switchSprites_9() { return static_cast<int32_t>(offsetof(UISwitcher_t1655398805, ___switchSprites_9)); }
	inline bool get_switchSprites_9() const { return ___switchSprites_9; }
	inline bool* get_address_of_switchSprites_9() { return &___switchSprites_9; }
	inline void set_switchSprites_9(bool value)
	{
		___switchSprites_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
