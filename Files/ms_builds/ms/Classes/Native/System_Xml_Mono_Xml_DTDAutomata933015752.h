#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAutomata
struct  DTDAutomata_t933015752  : public Il2CppObject
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::root
	DTDObjectModel_t709926554 * ___root_0;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(DTDAutomata_t933015752, ___root_0)); }
	inline DTDObjectModel_t709926554 * get_root_0() const { return ___root_0; }
	inline DTDObjectModel_t709926554 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(DTDObjectModel_t709926554 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier(&___root_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
