#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exSpriteAnimation
struct exSpriteAnimation_t1937626380;

#include "AssemblyU2DCSharp_Mine2398323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GravityMine
struct  GravityMine_t2735266721  : public Mine_t2398323
{
public:
	// exSpriteAnimation GravityMine::_animation
	exSpriteAnimation_t1937626380 * ____animation_10;

public:
	inline static int32_t get_offset_of__animation_10() { return static_cast<int32_t>(offsetof(GravityMine_t2735266721, ____animation_10)); }
	inline exSpriteAnimation_t1937626380 * get__animation_10() const { return ____animation_10; }
	inline exSpriteAnimation_t1937626380 ** get_address_of__animation_10() { return &____animation_10; }
	inline void set__animation_10(exSpriteAnimation_t1937626380 * value)
	{
		____animation_10 = value;
		Il2CppCodeGenWriteBarrier(&____animation_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
