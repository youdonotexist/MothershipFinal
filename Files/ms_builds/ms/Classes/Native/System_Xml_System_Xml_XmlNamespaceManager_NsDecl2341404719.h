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

// System.Xml.XmlNamespaceManager/NsDecl
struct  NsDecl_t2341404719 
{
public:
	// System.String System.Xml.XmlNamespaceManager/NsDecl::Prefix
	String_t* ___Prefix_0;
	// System.String System.Xml.XmlNamespaceManager/NsDecl::Uri
	String_t* ___Uri_1;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(NsDecl_t2341404719, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier(&___Prefix_0, value);
	}

	inline static int32_t get_offset_of_Uri_1() { return static_cast<int32_t>(offsetof(NsDecl_t2341404719, ___Uri_1)); }
	inline String_t* get_Uri_1() const { return ___Uri_1; }
	inline String_t** get_address_of_Uri_1() { return &___Uri_1; }
	inline void set_Uri_1(String_t* value)
	{
		___Uri_1 = value;
		Il2CppCodeGenWriteBarrier(&___Uri_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Xml.XmlNamespaceManager/NsDecl
struct NsDecl_t2341404719_marshaled_pinvoke
{
	char* ___Prefix_0;
	char* ___Uri_1;
};
// Native definition for marshalling of: System.Xml.XmlNamespaceManager/NsDecl
struct NsDecl_t2341404719_marshaled_com
{
	uint16_t* ___Prefix_0;
	uint16_t* ___Uri_1;
};
