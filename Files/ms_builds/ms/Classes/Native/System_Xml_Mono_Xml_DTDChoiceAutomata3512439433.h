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

// Mono.Xml.DTDChoiceAutomata
struct  DTDChoiceAutomata_t3512439433  : public DTDAutomata_t933015752
{
public:
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::left
	DTDAutomata_t933015752 * ___left_1;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDChoiceAutomata::right
	DTDAutomata_t933015752 * ___right_2;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::hasComputedEmptiable
	bool ___hasComputedEmptiable_3;
	// System.Boolean Mono.Xml.DTDChoiceAutomata::cachedEmptiable
	bool ___cachedEmptiable_4;

public:
	inline static int32_t get_offset_of_left_1() { return static_cast<int32_t>(offsetof(DTDChoiceAutomata_t3512439433, ___left_1)); }
	inline DTDAutomata_t933015752 * get_left_1() const { return ___left_1; }
	inline DTDAutomata_t933015752 ** get_address_of_left_1() { return &___left_1; }
	inline void set_left_1(DTDAutomata_t933015752 * value)
	{
		___left_1 = value;
		Il2CppCodeGenWriteBarrier(&___left_1, value);
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(DTDChoiceAutomata_t3512439433, ___right_2)); }
	inline DTDAutomata_t933015752 * get_right_2() const { return ___right_2; }
	inline DTDAutomata_t933015752 ** get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(DTDAutomata_t933015752 * value)
	{
		___right_2 = value;
		Il2CppCodeGenWriteBarrier(&___right_2, value);
	}

	inline static int32_t get_offset_of_hasComputedEmptiable_3() { return static_cast<int32_t>(offsetof(DTDChoiceAutomata_t3512439433, ___hasComputedEmptiable_3)); }
	inline bool get_hasComputedEmptiable_3() const { return ___hasComputedEmptiable_3; }
	inline bool* get_address_of_hasComputedEmptiable_3() { return &___hasComputedEmptiable_3; }
	inline void set_hasComputedEmptiable_3(bool value)
	{
		___hasComputedEmptiable_3 = value;
	}

	inline static int32_t get_offset_of_cachedEmptiable_4() { return static_cast<int32_t>(offsetof(DTDChoiceAutomata_t3512439433, ___cachedEmptiable_4)); }
	inline bool get_cachedEmptiable_4() const { return ___cachedEmptiable_4; }
	inline bool* get_address_of_cachedEmptiable_4() { return &___cachedEmptiable_4; }
	inline void set_cachedEmptiable_4(bool value)
	{
		___cachedEmptiable_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
