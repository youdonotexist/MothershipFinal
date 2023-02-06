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
// UnityEngine.Material
struct Material_t1886596500;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exBitmapFont/PageInfo
struct  PageInfo_t923779069  : public Il2CppObject
{
public:
	// UnityEngine.Texture2D exBitmapFont/PageInfo::texture
	Texture2D_t2509538522 * ___texture_0;
	// UnityEngine.Material exBitmapFont/PageInfo::material
	Material_t1886596500 * ___material_1;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(PageInfo_t923779069, ___texture_0)); }
	inline Texture2D_t2509538522 * get_texture_0() const { return ___texture_0; }
	inline Texture2D_t2509538522 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture2D_t2509538522 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_0, value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(PageInfo_t923779069, ___material_1)); }
	inline Material_t1886596500 * get_material_1() const { return ___material_1; }
	inline Material_t1886596500 ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_t1886596500 * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier(&___material_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
