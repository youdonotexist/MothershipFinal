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

#include "System_Xml_Mono_Xml_DTDAutomata933015752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDElementAutomata
struct  DTDElementAutomata_t2158464444  : public DTDAutomata_t933015752
{
public:
	// System.String Mono.Xml.DTDElementAutomata::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DTDElementAutomata_t2158464444, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
