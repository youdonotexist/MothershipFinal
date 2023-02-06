#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDAutomata
struct DTDAutomata_t933015752;

#include "System_Xml_Mono_Xml_DTDAutomata933015752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDOneOrMoreAutomata
struct  DTDOneOrMoreAutomata_t2952526750  : public DTDAutomata_t933015752
{
public:
	// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::children
	DTDAutomata_t933015752 * ___children_1;

public:
	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(DTDOneOrMoreAutomata_t2952526750, ___children_1)); }
	inline DTDAutomata_t933015752 * get_children_1() const { return ___children_1; }
	inline DTDAutomata_t933015752 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(DTDAutomata_t933015752 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier(&___children_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
