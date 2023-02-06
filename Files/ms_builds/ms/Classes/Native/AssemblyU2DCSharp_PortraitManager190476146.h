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
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t3306497491;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortraitManager
struct  PortraitManager_t190476146  : public Il2CppObject
{
public:
	// UIAtlas PortraitManager::_portraitAtlas
	UIAtlas_t281921111 * ____portraitAtlas_0;
	// UnityEngine.Texture2D PortraitManager::_atlasTexture
	Texture2D_t2509538522 * ____atlasTexture_1;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> PortraitManager::textures
	List_1_t3306497491 * ___textures_2;

public:
	inline static int32_t get_offset_of__portraitAtlas_0() { return static_cast<int32_t>(offsetof(PortraitManager_t190476146, ____portraitAtlas_0)); }
	inline UIAtlas_t281921111 * get__portraitAtlas_0() const { return ____portraitAtlas_0; }
	inline UIAtlas_t281921111 ** get_address_of__portraitAtlas_0() { return &____portraitAtlas_0; }
	inline void set__portraitAtlas_0(UIAtlas_t281921111 * value)
	{
		____portraitAtlas_0 = value;
		Il2CppCodeGenWriteBarrier(&____portraitAtlas_0, value);
	}

	inline static int32_t get_offset_of__atlasTexture_1() { return static_cast<int32_t>(offsetof(PortraitManager_t190476146, ____atlasTexture_1)); }
	inline Texture2D_t2509538522 * get__atlasTexture_1() const { return ____atlasTexture_1; }
	inline Texture2D_t2509538522 ** get_address_of__atlasTexture_1() { return &____atlasTexture_1; }
	inline void set__atlasTexture_1(Texture2D_t2509538522 * value)
	{
		____atlasTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&____atlasTexture_1, value);
	}

	inline static int32_t get_offset_of_textures_2() { return static_cast<int32_t>(offsetof(PortraitManager_t190476146, ___textures_2)); }
	inline List_1_t3306497491 * get_textures_2() const { return ___textures_2; }
	inline List_1_t3306497491 ** get_address_of_textures_2() { return &___textures_2; }
	inline void set_textures_2(List_1_t3306497491 * value)
	{
		___textures_2 = value;
		Il2CppCodeGenWriteBarrier(&___textures_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
