#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exPlane
struct exPlane_t2956252521;
// UnityEngine.Material
struct Material_t1886596500;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exClipping/PlaneInfo
struct  PlaneInfo_t4110763274  : public Il2CppObject
{
public:
	// exPlane exClipping/PlaneInfo::plane
	exPlane_t2956252521 * ___plane_0;
	// UnityEngine.Material exClipping/PlaneInfo::material
	Material_t1886596500 * ___material_1;

public:
	inline static int32_t get_offset_of_plane_0() { return static_cast<int32_t>(offsetof(PlaneInfo_t4110763274, ___plane_0)); }
	inline exPlane_t2956252521 * get_plane_0() const { return ___plane_0; }
	inline exPlane_t2956252521 ** get_address_of_plane_0() { return &___plane_0; }
	inline void set_plane_0(exPlane_t2956252521 * value)
	{
		___plane_0 = value;
		Il2CppCodeGenWriteBarrier(&___plane_0, value);
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(PlaneInfo_t4110763274, ___material_1)); }
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
