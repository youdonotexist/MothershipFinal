#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Single[,]
struct SingleU5BU2CU5D_t1219431281;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Perlin
struct  Perlin_t2387111028  : public Il2CppObject
{
public:
	// System.Int32[] Perlin::p
	Int32U5BU5D_t1809983122* ___p_3;
	// System.Single[,] Perlin::g3
	SingleU5BU2CU5D_t1219431281* ___g3_4;
	// System.Single[,] Perlin::g2
	SingleU5BU2CU5D_t1219431281* ___g2_5;
	// System.Single[] Perlin::g1
	SingleU5BU5D_t1219431280* ___g1_6;

public:
	inline static int32_t get_offset_of_p_3() { return static_cast<int32_t>(offsetof(Perlin_t2387111028, ___p_3)); }
	inline Int32U5BU5D_t1809983122* get_p_3() const { return ___p_3; }
	inline Int32U5BU5D_t1809983122** get_address_of_p_3() { return &___p_3; }
	inline void set_p_3(Int32U5BU5D_t1809983122* value)
	{
		___p_3 = value;
		Il2CppCodeGenWriteBarrier(&___p_3, value);
	}

	inline static int32_t get_offset_of_g3_4() { return static_cast<int32_t>(offsetof(Perlin_t2387111028, ___g3_4)); }
	inline SingleU5BU2CU5D_t1219431281* get_g3_4() const { return ___g3_4; }
	inline SingleU5BU2CU5D_t1219431281** get_address_of_g3_4() { return &___g3_4; }
	inline void set_g3_4(SingleU5BU2CU5D_t1219431281* value)
	{
		___g3_4 = value;
		Il2CppCodeGenWriteBarrier(&___g3_4, value);
	}

	inline static int32_t get_offset_of_g2_5() { return static_cast<int32_t>(offsetof(Perlin_t2387111028, ___g2_5)); }
	inline SingleU5BU2CU5D_t1219431281* get_g2_5() const { return ___g2_5; }
	inline SingleU5BU2CU5D_t1219431281** get_address_of_g2_5() { return &___g2_5; }
	inline void set_g2_5(SingleU5BU2CU5D_t1219431281* value)
	{
		___g2_5 = value;
		Il2CppCodeGenWriteBarrier(&___g2_5, value);
	}

	inline static int32_t get_offset_of_g1_6() { return static_cast<int32_t>(offsetof(Perlin_t2387111028, ___g1_6)); }
	inline SingleU5BU5D_t1219431280* get_g1_6() const { return ___g1_6; }
	inline SingleU5BU5D_t1219431280** get_address_of_g1_6() { return &___g1_6; }
	inline void set_g1_6(SingleU5BU5D_t1219431280* value)
	{
		___g1_6 = value;
		Il2CppCodeGenWriteBarrier(&___g1_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
