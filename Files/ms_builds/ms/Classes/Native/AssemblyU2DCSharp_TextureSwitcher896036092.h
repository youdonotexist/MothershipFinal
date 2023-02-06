#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextureSwitcher
struct  TextureSwitcher_t896036092  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Texture2D TextureSwitcher::nesTexture
	Texture2D_t2509538522 * ___nesTexture_2;
	// UnityEngine.Texture2D TextureSwitcher::msTexture
	Texture2D_t2509538522 * ___msTexture_3;
	// UnityEngine.Texture2D TextureSwitcher::latestTexture
	Texture2D_t2509538522 * ___latestTexture_4;

public:
	inline static int32_t get_offset_of_nesTexture_2() { return static_cast<int32_t>(offsetof(TextureSwitcher_t896036092, ___nesTexture_2)); }
	inline Texture2D_t2509538522 * get_nesTexture_2() const { return ___nesTexture_2; }
	inline Texture2D_t2509538522 ** get_address_of_nesTexture_2() { return &___nesTexture_2; }
	inline void set_nesTexture_2(Texture2D_t2509538522 * value)
	{
		___nesTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___nesTexture_2, value);
	}

	inline static int32_t get_offset_of_msTexture_3() { return static_cast<int32_t>(offsetof(TextureSwitcher_t896036092, ___msTexture_3)); }
	inline Texture2D_t2509538522 * get_msTexture_3() const { return ___msTexture_3; }
	inline Texture2D_t2509538522 ** get_address_of_msTexture_3() { return &___msTexture_3; }
	inline void set_msTexture_3(Texture2D_t2509538522 * value)
	{
		___msTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___msTexture_3, value);
	}

	inline static int32_t get_offset_of_latestTexture_4() { return static_cast<int32_t>(offsetof(TextureSwitcher_t896036092, ___latestTexture_4)); }
	inline Texture2D_t2509538522 * get_latestTexture_4() const { return ___latestTexture_4; }
	inline Texture2D_t2509538522 ** get_address_of_latestTexture_4() { return &___latestTexture_4; }
	inline void set_latestTexture_4(Texture2D_t2509538522 * value)
	{
		___latestTexture_4 = value;
		Il2CppCodeGenWriteBarrier(&___latestTexture_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
