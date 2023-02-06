#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdElementValidationState
struct  XsdElementValidationState_t3540038838  : public XsdValidationState_t707140448
{
public:
	// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdElementValidationState::element
	XmlSchemaElement_t471922321 * ___element_3;

public:
	inline static int32_t get_offset_of_element_3() { return static_cast<int32_t>(offsetof(XsdElementValidationState_t3540038838, ___element_3)); }
	inline XmlSchemaElement_t471922321 * get_element_3() const { return ___element_3; }
	inline XmlSchemaElement_t471922321 ** get_address_of_element_3() { return &___element_3; }
	inline void set_element_3(XmlSchemaElement_t471922321 * value)
	{
		___element_3 = value;
		Il2CppCodeGenWriteBarrier(&___element_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
