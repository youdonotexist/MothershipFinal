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

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml2.XmlTextReader/TagName
struct  TagName_t115468581 
{
public:
	// System.String Mono.Xml2.XmlTextReader/TagName::Name
	String_t* ___Name_0;
	// System.String Mono.Xml2.XmlTextReader/TagName::LocalName
	String_t* ___LocalName_1;
	// System.String Mono.Xml2.XmlTextReader/TagName::Prefix
	String_t* ___Prefix_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TagName_t115468581, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_LocalName_1() { return static_cast<int32_t>(offsetof(TagName_t115468581, ___LocalName_1)); }
	inline String_t* get_LocalName_1() const { return ___LocalName_1; }
	inline String_t** get_address_of_LocalName_1() { return &___LocalName_1; }
	inline void set_LocalName_1(String_t* value)
	{
		___LocalName_1 = value;
		Il2CppCodeGenWriteBarrier(&___LocalName_1, value);
	}

	inline static int32_t get_offset_of_Prefix_2() { return static_cast<int32_t>(offsetof(TagName_t115468581, ___Prefix_2)); }
	inline String_t* get_Prefix_2() const { return ___Prefix_2; }
	inline String_t** get_address_of_Prefix_2() { return &___Prefix_2; }
	inline void set_Prefix_2(String_t* value)
	{
		___Prefix_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefix_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Mono.Xml2.XmlTextReader/TagName
struct TagName_t115468581_marshaled_pinvoke
{
	char* ___Name_0;
	char* ___LocalName_1;
	char* ___Prefix_2;
};
// Native definition for marshalling of: Mono.Xml2.XmlTextReader/TagName
struct TagName_t115468581_marshaled_com
{
	uint16_t* ___Name_0;
	uint16_t* ___LocalName_1;
	uint16_t* ___Prefix_2;
};
