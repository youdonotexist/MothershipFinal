﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlInputStream
struct XmlInputStream_t2835792187;
// System.Xml.XmlException
struct XmlException_t3490696160;

#include "System_Xml_System_Xml_NonBlockingStreamReader19630413.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStreamReader
struct  XmlStreamReader_t1190433730  : public NonBlockingStreamReader_t19630413
{
public:
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_t2835792187 * ___input_13;

public:
	inline static int32_t get_offset_of_input_13() { return static_cast<int32_t>(offsetof(XmlStreamReader_t1190433730, ___input_13)); }
	inline XmlInputStream_t2835792187 * get_input_13() const { return ___input_13; }
	inline XmlInputStream_t2835792187 ** get_address_of_input_13() { return &___input_13; }
	inline void set_input_13(XmlInputStream_t2835792187 * value)
	{
		___input_13 = value;
		Il2CppCodeGenWriteBarrier(&___input_13, value);
	}
};

struct XmlStreamReader_t1190433730_StaticFields
{
public:
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_t3490696160 * ___invalidDataException_14;

public:
	inline static int32_t get_offset_of_invalidDataException_14() { return static_cast<int32_t>(offsetof(XmlStreamReader_t1190433730_StaticFields, ___invalidDataException_14)); }
	inline XmlException_t3490696160 * get_invalidDataException_14() const { return ___invalidDataException_14; }
	inline XmlException_t3490696160 ** get_address_of_invalidDataException_14() { return &___invalidDataException_14; }
	inline void set_invalidDataException_14(XmlException_t3490696160 * value)
	{
		___invalidDataException_14 = value;
		Il2CppCodeGenWriteBarrier(&___invalidDataException_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
