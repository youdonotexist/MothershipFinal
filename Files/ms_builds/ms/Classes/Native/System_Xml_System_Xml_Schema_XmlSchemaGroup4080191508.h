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
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3990058885;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated2513933869.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaGroup
struct  XmlSchemaGroup_t4080191508  : public XmlSchemaAnnotated_t2513933869
{
public:
	// System.String System.Xml.Schema.XmlSchemaGroup::name
	String_t* ___name_16;
	// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::particle
	XmlSchemaGroupBase_t3990058885 * ___particle_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::qualifiedName
	XmlQualifiedName_t176365656 * ___qualifiedName_18;
	// System.Boolean System.Xml.Schema.XmlSchemaGroup::isCircularDefinition
	bool ___isCircularDefinition_19;

public:
	inline static int32_t get_offset_of_name_16() { return static_cast<int32_t>(offsetof(XmlSchemaGroup_t4080191508, ___name_16)); }
	inline String_t* get_name_16() const { return ___name_16; }
	inline String_t** get_address_of_name_16() { return &___name_16; }
	inline void set_name_16(String_t* value)
	{
		___name_16 = value;
		Il2CppCodeGenWriteBarrier(&___name_16, value);
	}

	inline static int32_t get_offset_of_particle_17() { return static_cast<int32_t>(offsetof(XmlSchemaGroup_t4080191508, ___particle_17)); }
	inline XmlSchemaGroupBase_t3990058885 * get_particle_17() const { return ___particle_17; }
	inline XmlSchemaGroupBase_t3990058885 ** get_address_of_particle_17() { return &___particle_17; }
	inline void set_particle_17(XmlSchemaGroupBase_t3990058885 * value)
	{
		___particle_17 = value;
		Il2CppCodeGenWriteBarrier(&___particle_17, value);
	}

	inline static int32_t get_offset_of_qualifiedName_18() { return static_cast<int32_t>(offsetof(XmlSchemaGroup_t4080191508, ___qualifiedName_18)); }
	inline XmlQualifiedName_t176365656 * get_qualifiedName_18() const { return ___qualifiedName_18; }
	inline XmlQualifiedName_t176365656 ** get_address_of_qualifiedName_18() { return &___qualifiedName_18; }
	inline void set_qualifiedName_18(XmlQualifiedName_t176365656 * value)
	{
		___qualifiedName_18 = value;
		Il2CppCodeGenWriteBarrier(&___qualifiedName_18, value);
	}

	inline static int32_t get_offset_of_isCircularDefinition_19() { return static_cast<int32_t>(offsetof(XmlSchemaGroup_t4080191508, ___isCircularDefinition_19)); }
	inline bool get_isCircularDefinition_19() const { return ___isCircularDefinition_19; }
	inline bool* get_address_of_isCircularDefinition_19() { return &___isCircularDefinition_19; }
	inline void set_isCircularDefinition_19(bool value)
	{
		___isCircularDefinition_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
