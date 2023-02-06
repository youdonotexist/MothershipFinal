#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Damagable
struct Damagable_t4024817136;

#include "AssemblyU2DCSharp_Damagable4024817136.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DamagableBubbler
struct  DamagableBubbler_t2189431126  : public Damagable_t4024817136
{
public:
	// Damagable DamagableBubbler::_bubblerTarget
	Damagable_t4024817136 * ____bubblerTarget_11;

public:
	inline static int32_t get_offset_of__bubblerTarget_11() { return static_cast<int32_t>(offsetof(DamagableBubbler_t2189431126, ____bubblerTarget_11)); }
	inline Damagable_t4024817136 * get__bubblerTarget_11() const { return ____bubblerTarget_11; }
	inline Damagable_t4024817136 ** get_address_of__bubblerTarget_11() { return &____bubblerTarget_11; }
	inline void set__bubblerTarget_11(Damagable_t4024817136 * value)
	{
		____bubblerTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&____bubblerTarget_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
