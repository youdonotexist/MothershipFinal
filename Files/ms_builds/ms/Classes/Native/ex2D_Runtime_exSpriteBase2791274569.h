#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "ex2D_Runtime_exPlane2956252521.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteBase
struct  exSpriteBase_t2791274569  : public exPlane_t2956252521
{
public:
	// UnityEngine.Vector2 exSpriteBase::scale_
	Vector2_t3525329788  ___scale__12;
	// UnityEngine.Vector2 exSpriteBase::shear_
	Vector2_t3525329788  ___shear__13;
	// UnityEngine.Vector2 exSpriteBase::ppfScale_
	Vector2_t3525329788  ___ppfScale__14;

public:
	inline static int32_t get_offset_of_scale__12() { return static_cast<int32_t>(offsetof(exSpriteBase_t2791274569, ___scale__12)); }
	inline Vector2_t3525329788  get_scale__12() const { return ___scale__12; }
	inline Vector2_t3525329788 * get_address_of_scale__12() { return &___scale__12; }
	inline void set_scale__12(Vector2_t3525329788  value)
	{
		___scale__12 = value;
	}

	inline static int32_t get_offset_of_shear__13() { return static_cast<int32_t>(offsetof(exSpriteBase_t2791274569, ___shear__13)); }
	inline Vector2_t3525329788  get_shear__13() const { return ___shear__13; }
	inline Vector2_t3525329788 * get_address_of_shear__13() { return &___shear__13; }
	inline void set_shear__13(Vector2_t3525329788  value)
	{
		___shear__13 = value;
	}

	inline static int32_t get_offset_of_ppfScale__14() { return static_cast<int32_t>(offsetof(exSpriteBase_t2791274569, ___ppfScale__14)); }
	inline Vector2_t3525329788  get_ppfScale__14() const { return ___ppfScale__14; }
	inline Vector2_t3525329788 * get_address_of_ppfScale__14() { return &___ppfScale__14; }
	inline void set_ppfScale__14(Vector2_t3525329788  value)
	{
		___ppfScale__14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
