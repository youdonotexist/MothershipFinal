#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// exAtlas
struct exAtlas_t2942648216;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteAnimClip/FrameInfo
struct  FrameInfo_t2548769691  : public Il2CppObject
{
public:
	// System.String exSpriteAnimClip/FrameInfo::textureGUID
	String_t* ___textureGUID_0;
	// System.Single exSpriteAnimClip/FrameInfo::length
	float ___length_1;
	// exAtlas exSpriteAnimClip/FrameInfo::atlas
	exAtlas_t2942648216 * ___atlas_2;
	// System.Int32 exSpriteAnimClip/FrameInfo::index
	int32_t ___index_3;

public:
	inline static int32_t get_offset_of_textureGUID_0() { return static_cast<int32_t>(offsetof(FrameInfo_t2548769691, ___textureGUID_0)); }
	inline String_t* get_textureGUID_0() const { return ___textureGUID_0; }
	inline String_t** get_address_of_textureGUID_0() { return &___textureGUID_0; }
	inline void set_textureGUID_0(String_t* value)
	{
		___textureGUID_0 = value;
		Il2CppCodeGenWriteBarrier(&___textureGUID_0, value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FrameInfo_t2548769691, ___length_1)); }
	inline float get_length_1() const { return ___length_1; }
	inline float* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(float value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_atlas_2() { return static_cast<int32_t>(offsetof(FrameInfo_t2548769691, ___atlas_2)); }
	inline exAtlas_t2942648216 * get_atlas_2() const { return ___atlas_2; }
	inline exAtlas_t2942648216 ** get_address_of_atlas_2() { return &___atlas_2; }
	inline void set_atlas_2(exAtlas_t2942648216 * value)
	{
		___atlas_2 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(FrameInfo_t2548769691, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
