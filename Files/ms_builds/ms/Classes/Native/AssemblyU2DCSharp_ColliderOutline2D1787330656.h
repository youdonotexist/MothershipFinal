#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// exSprite
struct exSprite_t1539598680;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColliderOutline2D
struct  ColliderOutline2D_t1787330656  : public MonoBehaviour_t3012272455
{
public:
	// Vectrosity.VectorLine ColliderOutline2D::outline
	VectorLine_t3065371647 * ___outline_2;
	// exSprite ColliderOutline2D::sprite
	exSprite_t1539598680 * ___sprite_3;
	// UnityEngine.Vector3[] ColliderOutline2D::continuous
	Vector3U5BU5D_t3227571696* ___continuous_4;

public:
	inline static int32_t get_offset_of_outline_2() { return static_cast<int32_t>(offsetof(ColliderOutline2D_t1787330656, ___outline_2)); }
	inline VectorLine_t3065371647 * get_outline_2() const { return ___outline_2; }
	inline VectorLine_t3065371647 ** get_address_of_outline_2() { return &___outline_2; }
	inline void set_outline_2(VectorLine_t3065371647 * value)
	{
		___outline_2 = value;
		Il2CppCodeGenWriteBarrier(&___outline_2, value);
	}

	inline static int32_t get_offset_of_sprite_3() { return static_cast<int32_t>(offsetof(ColliderOutline2D_t1787330656, ___sprite_3)); }
	inline exSprite_t1539598680 * get_sprite_3() const { return ___sprite_3; }
	inline exSprite_t1539598680 ** get_address_of_sprite_3() { return &___sprite_3; }
	inline void set_sprite_3(exSprite_t1539598680 * value)
	{
		___sprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_3, value);
	}

	inline static int32_t get_offset_of_continuous_4() { return static_cast<int32_t>(offsetof(ColliderOutline2D_t1787330656, ___continuous_4)); }
	inline Vector3U5BU5D_t3227571696* get_continuous_4() const { return ___continuous_4; }
	inline Vector3U5BU5D_t3227571696** get_address_of_continuous_4() { return &___continuous_4; }
	inline void set_continuous_4(Vector3U5BU5D_t3227571696* value)
	{
		___continuous_4 = value;
		Il2CppCodeGenWriteBarrier(&___continuous_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
