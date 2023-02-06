﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DownloadTexture
struct  DownloadTexture_t2275226451  : public MonoBehaviour_t3012272455
{
public:
	// System.String DownloadTexture::url
	String_t* ___url_2;
	// System.Boolean DownloadTexture::pixelPerfect
	bool ___pixelPerfect_3;
	// UnityEngine.Texture2D DownloadTexture::mTex
	Texture2D_t2509538522 * ___mTex_4;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(DownloadTexture_t2275226451, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}

	inline static int32_t get_offset_of_pixelPerfect_3() { return static_cast<int32_t>(offsetof(DownloadTexture_t2275226451, ___pixelPerfect_3)); }
	inline bool get_pixelPerfect_3() const { return ___pixelPerfect_3; }
	inline bool* get_address_of_pixelPerfect_3() { return &___pixelPerfect_3; }
	inline void set_pixelPerfect_3(bool value)
	{
		___pixelPerfect_3 = value;
	}

	inline static int32_t get_offset_of_mTex_4() { return static_cast<int32_t>(offsetof(DownloadTexture_t2275226451, ___mTex_4)); }
	inline Texture2D_t2509538522 * get_mTex_4() const { return ___mTex_4; }
	inline Texture2D_t2509538522 ** get_address_of_mTex_4() { return &___mTex_4; }
	inline void set_mTex_4(Texture2D_t2509538522 * value)
	{
		___mTex_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTex_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
