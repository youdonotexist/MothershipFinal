#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exAtlas/Element[]
struct ElementU5BU5D_t1145349685;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exAtlas
struct  exAtlas_t2942648216  : public ScriptableObject_t184905905
{
public:
	// exAtlas/Element[] exAtlas::elements
	ElementU5BU5D_t1145349685* ___elements_2;
	// UnityEngine.Material exAtlas::material
	Material_t1886596500 * ___material_3;
	// UnityEngine.Texture2D exAtlas::texture
	Texture2D_t2509538522 * ___texture_4;

public:
	inline static int32_t get_offset_of_elements_2() { return static_cast<int32_t>(offsetof(exAtlas_t2942648216, ___elements_2)); }
	inline ElementU5BU5D_t1145349685* get_elements_2() const { return ___elements_2; }
	inline ElementU5BU5D_t1145349685** get_address_of_elements_2() { return &___elements_2; }
	inline void set_elements_2(ElementU5BU5D_t1145349685* value)
	{
		___elements_2 = value;
		Il2CppCodeGenWriteBarrier(&___elements_2, value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(exAtlas_t2942648216, ___material_3)); }
	inline Material_t1886596500 * get_material_3() const { return ___material_3; }
	inline Material_t1886596500 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t1886596500 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier(&___material_3, value);
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(exAtlas_t2942648216, ___texture_4)); }
	inline Texture2D_t2509538522 * get_texture_4() const { return ___texture_4; }
	inline Texture2D_t2509538522 ** get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(Texture2D_t2509538522 * value)
	{
		___texture_4 = value;
		Il2CppCodeGenWriteBarrier(&___texture_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
