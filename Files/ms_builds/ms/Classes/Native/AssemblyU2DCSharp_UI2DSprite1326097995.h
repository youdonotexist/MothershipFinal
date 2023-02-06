#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Shader
struct Shader_t3998140498;

#include "AssemblyU2DCSharp_UIBasicSprite2501337439.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI2DSprite
struct  UI2DSprite_t1326097995  : public UIBasicSprite_t2501337439
{
public:
	// UnityEngine.Sprite UI2DSprite::mSprite
	Sprite_t4006040370 * ___mSprite_66;
	// UnityEngine.Material UI2DSprite::mMat
	Material_t1886596500 * ___mMat_67;
	// UnityEngine.Shader UI2DSprite::mShader
	Shader_t3998140498 * ___mShader_68;
	// UnityEngine.Vector4 UI2DSprite::mBorder
	Vector4_t3525329790  ___mBorder_69;
	// System.Boolean UI2DSprite::mFixedAspect
	bool ___mFixedAspect_70;
	// System.Single UI2DSprite::mPixelSize
	float ___mPixelSize_71;
	// UnityEngine.Sprite UI2DSprite::nextSprite
	Sprite_t4006040370 * ___nextSprite_72;
	// System.Int32 UI2DSprite::mPMA
	int32_t ___mPMA_73;

public:
	inline static int32_t get_offset_of_mSprite_66() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mSprite_66)); }
	inline Sprite_t4006040370 * get_mSprite_66() const { return ___mSprite_66; }
	inline Sprite_t4006040370 ** get_address_of_mSprite_66() { return &___mSprite_66; }
	inline void set_mSprite_66(Sprite_t4006040370 * value)
	{
		___mSprite_66 = value;
		Il2CppCodeGenWriteBarrier(&___mSprite_66, value);
	}

	inline static int32_t get_offset_of_mMat_67() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mMat_67)); }
	inline Material_t1886596500 * get_mMat_67() const { return ___mMat_67; }
	inline Material_t1886596500 ** get_address_of_mMat_67() { return &___mMat_67; }
	inline void set_mMat_67(Material_t1886596500 * value)
	{
		___mMat_67 = value;
		Il2CppCodeGenWriteBarrier(&___mMat_67, value);
	}

	inline static int32_t get_offset_of_mShader_68() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mShader_68)); }
	inline Shader_t3998140498 * get_mShader_68() const { return ___mShader_68; }
	inline Shader_t3998140498 ** get_address_of_mShader_68() { return &___mShader_68; }
	inline void set_mShader_68(Shader_t3998140498 * value)
	{
		___mShader_68 = value;
		Il2CppCodeGenWriteBarrier(&___mShader_68, value);
	}

	inline static int32_t get_offset_of_mBorder_69() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mBorder_69)); }
	inline Vector4_t3525329790  get_mBorder_69() const { return ___mBorder_69; }
	inline Vector4_t3525329790 * get_address_of_mBorder_69() { return &___mBorder_69; }
	inline void set_mBorder_69(Vector4_t3525329790  value)
	{
		___mBorder_69 = value;
	}

	inline static int32_t get_offset_of_mFixedAspect_70() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mFixedAspect_70)); }
	inline bool get_mFixedAspect_70() const { return ___mFixedAspect_70; }
	inline bool* get_address_of_mFixedAspect_70() { return &___mFixedAspect_70; }
	inline void set_mFixedAspect_70(bool value)
	{
		___mFixedAspect_70 = value;
	}

	inline static int32_t get_offset_of_mPixelSize_71() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mPixelSize_71)); }
	inline float get_mPixelSize_71() const { return ___mPixelSize_71; }
	inline float* get_address_of_mPixelSize_71() { return &___mPixelSize_71; }
	inline void set_mPixelSize_71(float value)
	{
		___mPixelSize_71 = value;
	}

	inline static int32_t get_offset_of_nextSprite_72() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___nextSprite_72)); }
	inline Sprite_t4006040370 * get_nextSprite_72() const { return ___nextSprite_72; }
	inline Sprite_t4006040370 ** get_address_of_nextSprite_72() { return &___nextSprite_72; }
	inline void set_nextSprite_72(Sprite_t4006040370 * value)
	{
		___nextSprite_72 = value;
		Il2CppCodeGenWriteBarrier(&___nextSprite_72, value);
	}

	inline static int32_t get_offset_of_mPMA_73() { return static_cast<int32_t>(offsetof(UI2DSprite_t1326097995, ___mPMA_73)); }
	inline int32_t get_mPMA_73() const { return ___mPMA_73; }
	inline int32_t* get_address_of_mPMA_73() { return &___mPMA_73; }
	inline void set_mPMA_73(int32_t value)
	{
		___mPMA_73 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
