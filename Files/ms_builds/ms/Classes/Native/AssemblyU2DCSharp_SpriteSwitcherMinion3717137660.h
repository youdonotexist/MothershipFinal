#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MinionTypeBase
struct MinionTypeBase_t2690101217;

#include "AssemblyU2DCSharp_SpriteSwitcher1110467814.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteSwitcherMinion
struct  SpriteSwitcherMinion_t3717137660  : public SpriteSwitcher_t1110467814
{
public:
	// MinionTypeBase SpriteSwitcherMinion::_type
	MinionTypeBase_t2690101217 * ____type_25;

public:
	inline static int32_t get_offset_of__type_25() { return static_cast<int32_t>(offsetof(SpriteSwitcherMinion_t3717137660, ____type_25)); }
	inline MinionTypeBase_t2690101217 * get__type_25() const { return ____type_25; }
	inline MinionTypeBase_t2690101217 ** get_address_of__type_25() { return &____type_25; }
	inline void set__type_25(MinionTypeBase_t2690101217 * value)
	{
		____type_25 = value;
		Il2CppCodeGenWriteBarrier(&____type_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
