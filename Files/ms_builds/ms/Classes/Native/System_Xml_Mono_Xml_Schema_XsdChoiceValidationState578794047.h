﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t2562625382;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdChoiceValidationState
struct  XsdChoiceValidationState_t578794047  : public XsdValidationState_t707140448
{
public:
	// System.Xml.Schema.XmlSchemaChoice Mono.Xml.Schema.XsdChoiceValidationState::choice
	XmlSchemaChoice_t2562625382 * ___choice_3;
	// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::emptiable
	bool ___emptiable_4;
	// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::emptiableComputed
	bool ___emptiableComputed_5;

public:
	inline static int32_t get_offset_of_choice_3() { return static_cast<int32_t>(offsetof(XsdChoiceValidationState_t578794047, ___choice_3)); }
	inline XmlSchemaChoice_t2562625382 * get_choice_3() const { return ___choice_3; }
	inline XmlSchemaChoice_t2562625382 ** get_address_of_choice_3() { return &___choice_3; }
	inline void set_choice_3(XmlSchemaChoice_t2562625382 * value)
	{
		___choice_3 = value;
		Il2CppCodeGenWriteBarrier(&___choice_3, value);
	}

	inline static int32_t get_offset_of_emptiable_4() { return static_cast<int32_t>(offsetof(XsdChoiceValidationState_t578794047, ___emptiable_4)); }
	inline bool get_emptiable_4() const { return ___emptiable_4; }
	inline bool* get_address_of_emptiable_4() { return &___emptiable_4; }
	inline void set_emptiable_4(bool value)
	{
		___emptiable_4 = value;
	}

	inline static int32_t get_offset_of_emptiableComputed_5() { return static_cast<int32_t>(offsetof(XsdChoiceValidationState_t578794047, ___emptiableComputed_5)); }
	inline bool get_emptiableComputed_5() const { return ___emptiableComputed_5; }
	inline bool* get_address_of_emptiableComputed_5() { return &___emptiableComputed_5; }
	inline void set_emptiableComputed_5(bool value)
	{
		___emptiableComputed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
