#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t36593264;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t1094164877;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdIdentitySelector
struct  XsdIdentitySelector_t2774051127  : public Il2CppObject
{
public:
	// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::selectorPaths
	XsdIdentityPathU5BU5D_t36593264* ___selectorPaths_0;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdIdentitySelector::fields
	ArrayList_t2121638921 * ___fields_1;
	// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::cachedFields
	XsdIdentityFieldU5BU5D_t1094164877* ___cachedFields_2;

public:
	inline static int32_t get_offset_of_selectorPaths_0() { return static_cast<int32_t>(offsetof(XsdIdentitySelector_t2774051127, ___selectorPaths_0)); }
	inline XsdIdentityPathU5BU5D_t36593264* get_selectorPaths_0() const { return ___selectorPaths_0; }
	inline XsdIdentityPathU5BU5D_t36593264** get_address_of_selectorPaths_0() { return &___selectorPaths_0; }
	inline void set_selectorPaths_0(XsdIdentityPathU5BU5D_t36593264* value)
	{
		___selectorPaths_0 = value;
		Il2CppCodeGenWriteBarrier(&___selectorPaths_0, value);
	}

	inline static int32_t get_offset_of_fields_1() { return static_cast<int32_t>(offsetof(XsdIdentitySelector_t2774051127, ___fields_1)); }
	inline ArrayList_t2121638921 * get_fields_1() const { return ___fields_1; }
	inline ArrayList_t2121638921 ** get_address_of_fields_1() { return &___fields_1; }
	inline void set_fields_1(ArrayList_t2121638921 * value)
	{
		___fields_1 = value;
		Il2CppCodeGenWriteBarrier(&___fields_1, value);
	}

	inline static int32_t get_offset_of_cachedFields_2() { return static_cast<int32_t>(offsetof(XsdIdentitySelector_t2774051127, ___cachedFields_2)); }
	inline XsdIdentityFieldU5BU5D_t1094164877* get_cachedFields_2() const { return ___cachedFields_2; }
	inline XsdIdentityFieldU5BU5D_t1094164877** get_address_of_cachedFields_2() { return &___cachedFields_2; }
	inline void set_cachedFields_2(XsdIdentityFieldU5BU5D_t1094164877* value)
	{
		___cachedFields_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFields_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
