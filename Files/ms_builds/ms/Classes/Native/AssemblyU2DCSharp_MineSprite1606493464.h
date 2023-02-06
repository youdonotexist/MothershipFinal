#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mine
struct Mine_t2398323;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MineSprite
struct  MineSprite_t1606493464  : public MonoBehaviour_t3012272455
{
public:
	// Mine MineSprite::_mine
	Mine_t2398323 * ____mine_2;

public:
	inline static int32_t get_offset_of__mine_2() { return static_cast<int32_t>(offsetof(MineSprite_t1606493464, ____mine_2)); }
	inline Mine_t2398323 * get__mine_2() const { return ____mine_2; }
	inline Mine_t2398323 ** get_address_of__mine_2() { return &____mine_2; }
	inline void set__mine_2(Mine_t2398323 * value)
	{
		____mine_2 = value;
		Il2CppCodeGenWriteBarrier(&____mine_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
