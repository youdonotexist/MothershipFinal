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

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager/NsScope
struct  NsScope_t3877874543 
{
public:
	// System.Int32 System.Xml.XmlNamespaceManager/NsScope::DeclCount
	int32_t ___DeclCount_0;
	// System.String System.Xml.XmlNamespaceManager/NsScope::DefaultNamespace
	String_t* ___DefaultNamespace_1;

public:
	inline static int32_t get_offset_of_DeclCount_0() { return static_cast<int32_t>(offsetof(NsScope_t3877874543, ___DeclCount_0)); }
	inline int32_t get_DeclCount_0() const { return ___DeclCount_0; }
	inline int32_t* get_address_of_DeclCount_0() { return &___DeclCount_0; }
	inline void set_DeclCount_0(int32_t value)
	{
		___DeclCount_0 = value;
	}

	inline static int32_t get_offset_of_DefaultNamespace_1() { return static_cast<int32_t>(offsetof(NsScope_t3877874543, ___DefaultNamespace_1)); }
	inline String_t* get_DefaultNamespace_1() const { return ___DefaultNamespace_1; }
	inline String_t** get_address_of_DefaultNamespace_1() { return &___DefaultNamespace_1; }
	inline void set_DefaultNamespace_1(String_t* value)
	{
		___DefaultNamespace_1 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultNamespace_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Xml.XmlNamespaceManager/NsScope
struct NsScope_t3877874543_marshaled_pinvoke
{
	int32_t ___DeclCount_0;
	char* ___DefaultNamespace_1;
};
// Native definition for marshalling of: System.Xml.XmlNamespaceManager/NsScope
struct NsScope_t3877874543_marshaled_com
{
	int32_t ___DeclCount_0;
	uint16_t* ___DefaultNamespace_1;
};
