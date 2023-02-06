#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIAtlas
struct UIAtlas_t281921111;
// System.String
struct String_t;
// UISprite
struct UISprite_t661437049;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CurtainHelper
struct  CurtainHelper_t4100984000  : public MonoBehaviour_t3012272455
{
public:
	// UIAtlas CurtainHelper::uiAtlas
	UIAtlas_t281921111 * ___uiAtlas_2;
	// System.String CurtainHelper::spriteName
	String_t* ___spriteName_3;
	// UISprite CurtainHelper::_sprite
	UISprite_t661437049 * ____sprite_4;

public:
	inline static int32_t get_offset_of_uiAtlas_2() { return static_cast<int32_t>(offsetof(CurtainHelper_t4100984000, ___uiAtlas_2)); }
	inline UIAtlas_t281921111 * get_uiAtlas_2() const { return ___uiAtlas_2; }
	inline UIAtlas_t281921111 ** get_address_of_uiAtlas_2() { return &___uiAtlas_2; }
	inline void set_uiAtlas_2(UIAtlas_t281921111 * value)
	{
		___uiAtlas_2 = value;
		Il2CppCodeGenWriteBarrier(&___uiAtlas_2, value);
	}

	inline static int32_t get_offset_of_spriteName_3() { return static_cast<int32_t>(offsetof(CurtainHelper_t4100984000, ___spriteName_3)); }
	inline String_t* get_spriteName_3() const { return ___spriteName_3; }
	inline String_t** get_address_of_spriteName_3() { return &___spriteName_3; }
	inline void set_spriteName_3(String_t* value)
	{
		___spriteName_3 = value;
		Il2CppCodeGenWriteBarrier(&___spriteName_3, value);
	}

	inline static int32_t get_offset_of__sprite_4() { return static_cast<int32_t>(offsetof(CurtainHelper_t4100984000, ____sprite_4)); }
	inline UISprite_t661437049 * get__sprite_4() const { return ____sprite_4; }
	inline UISprite_t661437049 ** get_address_of__sprite_4() { return &____sprite_4; }
	inline void set__sprite_4(UISprite_t661437049 * value)
	{
		____sprite_4 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
