#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_SpriteSwitcher1110467814.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MinionSpriteSwitcher
struct  MinionSpriteSwitcher_t1067584252  : public SpriteSwitcher_t1110467814
{
public:
	// System.String MinionSpriteSwitcher::spritePostfix
	String_t* ___spritePostfix_25;

public:
	inline static int32_t get_offset_of_spritePostfix_25() { return static_cast<int32_t>(offsetof(MinionSpriteSwitcher_t1067584252, ___spritePostfix_25)); }
	inline String_t* get_spritePostfix_25() const { return ___spritePostfix_25; }
	inline String_t** get_address_of_spritePostfix_25() { return &___spritePostfix_25; }
	inline void set_spritePostfix_25(String_t* value)
	{
		___spritePostfix_25 = value;
		Il2CppCodeGenWriteBarrier(&___spritePostfix_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
