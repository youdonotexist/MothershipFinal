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
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "System_Xml_Mono_Xml_Schema_XsdString1590891979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdBase64Binary
struct  XsdBase64Binary_t3314116906  : public XsdString_t1590891979
{
public:

public:
};

struct XsdBase64Binary_t3314116906_StaticFields
{
public:
	// System.String Mono.Xml.Schema.XsdBase64Binary::ALPHABET
	String_t* ___ALPHABET_61;
	// System.Byte[] Mono.Xml.Schema.XsdBase64Binary::decodeTable
	ByteU5BU5D_t58506160* ___decodeTable_62;

public:
	inline static int32_t get_offset_of_ALPHABET_61() { return static_cast<int32_t>(offsetof(XsdBase64Binary_t3314116906_StaticFields, ___ALPHABET_61)); }
	inline String_t* get_ALPHABET_61() const { return ___ALPHABET_61; }
	inline String_t** get_address_of_ALPHABET_61() { return &___ALPHABET_61; }
	inline void set_ALPHABET_61(String_t* value)
	{
		___ALPHABET_61 = value;
		Il2CppCodeGenWriteBarrier(&___ALPHABET_61, value);
	}

	inline static int32_t get_offset_of_decodeTable_62() { return static_cast<int32_t>(offsetof(XsdBase64Binary_t3314116906_StaticFields, ___decodeTable_62)); }
	inline ByteU5BU5D_t58506160* get_decodeTable_62() const { return ___decodeTable_62; }
	inline ByteU5BU5D_t58506160** get_address_of_decodeTable_62() { return &___decodeTable_62; }
	inline void set_decodeTable_62(ByteU5BU5D_t58506160* value)
	{
		___decodeTable_62 = value;
		Il2CppCodeGenWriteBarrier(&___decodeTable_62, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
