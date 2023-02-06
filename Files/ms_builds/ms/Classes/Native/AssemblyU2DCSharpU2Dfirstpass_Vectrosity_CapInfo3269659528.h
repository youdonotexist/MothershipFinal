#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_EndCap3133754655.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vectrosity.CapInfo
struct  CapInfo_t3269659528  : public Il2CppObject
{
public:
	// Vectrosity.EndCap Vectrosity.CapInfo::capType
	int32_t ___capType_0;
	// UnityEngine.Material Vectrosity.CapInfo::material
	Material_t1886596500 * ___material_1;
	// UnityEngine.Texture2D Vectrosity.CapInfo::texture
	Texture2D_t2509538522 * ___texture_2;
	// System.Single Vectrosity.CapInfo::ratio1
	float ___ratio1_3;
	// System.Single Vectrosity.CapInfo::ratio2
	float ___ratio2_4;
	// System.Single Vectrosity.CapInfo::offset
	float ___offset_5;

public:
	inline static int32_t get_offset_of_capType_0() { return static_cast<int32_t>(offsetof(CapInfo_t3269659528, ___capType_0)); }
	inline int32_t get_capType_0() const { return ___capType_0; }
	inline int32_t* get_address_of_capType_0() { return &___capType_0; }
	inline void set_capType_0(int32_t value)
	{
		___capType_0 = value;
	}

	inline static int32_t get_offset_of_material_1() { return static_cast<int32_t>(offsetof(CapInfo_t3269659528, ___material_1)); }
	inline Material_t1886596500 * get_material_1() const { return ___material_1; }
	inline Material_t1886596500 ** get_address_of_material_1() { return &___material_1; }
	inline void set_material_1(Material_t1886596500 * value)
	{
		___material_1 = value;
		Il2CppCodeGenWriteBarrier(&___material_1, value);
	}

	inline static int32_t get_offset_of_texture_2() { return static_cast<int32_t>(offsetof(CapInfo_t3269659528, ___texture_2)); }
	inline Texture2D_t2509538522 * get_texture_2() const { return ___texture_2; }
	inline Texture2D_t2509538522 ** get_address_of_texture_2() { return &___texture_2; }
	inline void set_texture_2(Texture2D_t2509538522 * value)
	{
		___texture_2 = value;
		Il2CppCodeGenWriteBarrier(&___texture_2, value);
	}

	inline static int32_t get_offset_of_ratio1_3() { return static_cast<int32_t>(offsetof(CapInfo_t3269659528, ___ratio1_3)); }
	inline float get_ratio1_3() const { return ___ratio1_3; }
	inline float* get_address_of_ratio1_3() { return &___ratio1_3; }
	inline void set_ratio1_3(float value)
	{
		___ratio1_3 = value;
	}

	inline static int32_t get_offset_of_ratio2_4() { return static_cast<int32_t>(offsetof(CapInfo_t3269659528, ___ratio2_4)); }
	inline float get_ratio2_4() const { return ___ratio2_4; }
	inline float* get_address_of_ratio2_4() { return &___ratio2_4; }
	inline void set_ratio2_4(float value)
	{
		___ratio2_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(CapInfo_t3269659528, ___offset_5)); }
	inline float get_offset_5() const { return ___offset_5; }
	inline float* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(float value)
	{
		___offset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
