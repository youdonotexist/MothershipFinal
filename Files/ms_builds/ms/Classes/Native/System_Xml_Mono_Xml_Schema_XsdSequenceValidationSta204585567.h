﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3857081222;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t707140448;

#include "System_Xml_Mono_Xml_Schema_XsdValidationState707140448.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdSequenceValidationState
struct  XsdSequenceValidationState_t204585567  : public XsdValidationState_t707140448
{
public:
	// System.Xml.Schema.XmlSchemaSequence Mono.Xml.Schema.XsdSequenceValidationState::seq
	XmlSchemaSequence_t3857081222 * ___seq_3;
	// System.Int32 Mono.Xml.Schema.XsdSequenceValidationState::current
	int32_t ___current_4;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::currentAutomata
	XsdValidationState_t707140448 * ___currentAutomata_5;
	// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::emptiable
	bool ___emptiable_6;

public:
	inline static int32_t get_offset_of_seq_3() { return static_cast<int32_t>(offsetof(XsdSequenceValidationState_t204585567, ___seq_3)); }
	inline XmlSchemaSequence_t3857081222 * get_seq_3() const { return ___seq_3; }
	inline XmlSchemaSequence_t3857081222 ** get_address_of_seq_3() { return &___seq_3; }
	inline void set_seq_3(XmlSchemaSequence_t3857081222 * value)
	{
		___seq_3 = value;
		Il2CppCodeGenWriteBarrier(&___seq_3, value);
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(XsdSequenceValidationState_t204585567, ___current_4)); }
	inline int32_t get_current_4() const { return ___current_4; }
	inline int32_t* get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(int32_t value)
	{
		___current_4 = value;
	}

	inline static int32_t get_offset_of_currentAutomata_5() { return static_cast<int32_t>(offsetof(XsdSequenceValidationState_t204585567, ___currentAutomata_5)); }
	inline XsdValidationState_t707140448 * get_currentAutomata_5() const { return ___currentAutomata_5; }
	inline XsdValidationState_t707140448 ** get_address_of_currentAutomata_5() { return &___currentAutomata_5; }
	inline void set_currentAutomata_5(XsdValidationState_t707140448 * value)
	{
		___currentAutomata_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentAutomata_5, value);
	}

	inline static int32_t get_offset_of_emptiable_6() { return static_cast<int32_t>(offsetof(XsdSequenceValidationState_t204585567, ___emptiable_6)); }
	inline bool get_emptiable_6() const { return ___emptiable_6; }
	inline bool* get_address_of_emptiable_6() { return &___emptiable_6; }
	inline void set_emptiable_6(bool value)
	{
		___emptiable_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
