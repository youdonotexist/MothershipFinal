﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "System_System_Uri2776692961.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XmlSchemaUri
struct  XmlSchemaUri_t113002885  : public Uri_t2776692961
{
public:
	// System.String Mono.Xml.Schema.XmlSchemaUri::value
	String_t* ___value_36;

public:
	inline static int32_t get_offset_of_value_36() { return static_cast<int32_t>(offsetof(XmlSchemaUri_t113002885, ___value_36)); }
	inline String_t* get_value_36() const { return ___value_36; }
	inline String_t** get_address_of_value_36() { return &___value_36; }
	inline void set_value_36(String_t* value)
	{
		___value_36 = value;
		Il2CppCodeGenWriteBarrier(&___value_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
