﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1191708721;

#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated2513933869.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaForm3432383625.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaUse3827175708.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAttribute
struct  XmlSchemaAttribute_t1191708721  : public XmlSchemaAnnotated_t2513933869
{
public:
	// System.Object System.Xml.Schema.XmlSchemaAttribute::attributeType
	Il2CppObject * ___attributeType_16;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::attributeSchemaType
	XmlSchemaSimpleType_t1500525009 * ___attributeSchemaType_17;
	// System.String System.Xml.Schema.XmlSchemaAttribute::defaultValue
	String_t* ___defaultValue_18;
	// System.String System.Xml.Schema.XmlSchemaAttribute::fixedValue
	String_t* ___fixedValue_19;
	// System.String System.Xml.Schema.XmlSchemaAttribute::validatedDefaultValue
	String_t* ___validatedDefaultValue_20;
	// System.String System.Xml.Schema.XmlSchemaAttribute::validatedFixedValue
	String_t* ___validatedFixedValue_21;
	// System.Object System.Xml.Schema.XmlSchemaAttribute::validatedFixedTypedValue
	Il2CppObject * ___validatedFixedTypedValue_22;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::form
	int32_t ___form_23;
	// System.String System.Xml.Schema.XmlSchemaAttribute::name
	String_t* ___name_24;
	// System.String System.Xml.Schema.XmlSchemaAttribute::targetNamespace
	String_t* ___targetNamespace_25;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::qualifiedName
	XmlQualifiedName_t176365656 * ___qualifiedName_26;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::refName
	XmlQualifiedName_t176365656 * ___refName_27;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::schemaType
	XmlSchemaSimpleType_t1500525009 * ___schemaType_28;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::schemaTypeName
	XmlQualifiedName_t176365656 * ___schemaTypeName_29;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::use
	int32_t ___use_30;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::validatedUse
	int32_t ___validatedUse_31;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaAttribute::referencedAttribute
	XmlSchemaAttribute_t1191708721 * ___referencedAttribute_32;

public:
	inline static int32_t get_offset_of_attributeType_16() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___attributeType_16)); }
	inline Il2CppObject * get_attributeType_16() const { return ___attributeType_16; }
	inline Il2CppObject ** get_address_of_attributeType_16() { return &___attributeType_16; }
	inline void set_attributeType_16(Il2CppObject * value)
	{
		___attributeType_16 = value;
		Il2CppCodeGenWriteBarrier(&___attributeType_16, value);
	}

	inline static int32_t get_offset_of_attributeSchemaType_17() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___attributeSchemaType_17)); }
	inline XmlSchemaSimpleType_t1500525009 * get_attributeSchemaType_17() const { return ___attributeSchemaType_17; }
	inline XmlSchemaSimpleType_t1500525009 ** get_address_of_attributeSchemaType_17() { return &___attributeSchemaType_17; }
	inline void set_attributeSchemaType_17(XmlSchemaSimpleType_t1500525009 * value)
	{
		___attributeSchemaType_17 = value;
		Il2CppCodeGenWriteBarrier(&___attributeSchemaType_17, value);
	}

	inline static int32_t get_offset_of_defaultValue_18() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___defaultValue_18)); }
	inline String_t* get_defaultValue_18() const { return ___defaultValue_18; }
	inline String_t** get_address_of_defaultValue_18() { return &___defaultValue_18; }
	inline void set_defaultValue_18(String_t* value)
	{
		___defaultValue_18 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_18, value);
	}

	inline static int32_t get_offset_of_fixedValue_19() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___fixedValue_19)); }
	inline String_t* get_fixedValue_19() const { return ___fixedValue_19; }
	inline String_t** get_address_of_fixedValue_19() { return &___fixedValue_19; }
	inline void set_fixedValue_19(String_t* value)
	{
		___fixedValue_19 = value;
		Il2CppCodeGenWriteBarrier(&___fixedValue_19, value);
	}

	inline static int32_t get_offset_of_validatedDefaultValue_20() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___validatedDefaultValue_20)); }
	inline String_t* get_validatedDefaultValue_20() const { return ___validatedDefaultValue_20; }
	inline String_t** get_address_of_validatedDefaultValue_20() { return &___validatedDefaultValue_20; }
	inline void set_validatedDefaultValue_20(String_t* value)
	{
		___validatedDefaultValue_20 = value;
		Il2CppCodeGenWriteBarrier(&___validatedDefaultValue_20, value);
	}

	inline static int32_t get_offset_of_validatedFixedValue_21() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___validatedFixedValue_21)); }
	inline String_t* get_validatedFixedValue_21() const { return ___validatedFixedValue_21; }
	inline String_t** get_address_of_validatedFixedValue_21() { return &___validatedFixedValue_21; }
	inline void set_validatedFixedValue_21(String_t* value)
	{
		___validatedFixedValue_21 = value;
		Il2CppCodeGenWriteBarrier(&___validatedFixedValue_21, value);
	}

	inline static int32_t get_offset_of_validatedFixedTypedValue_22() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___validatedFixedTypedValue_22)); }
	inline Il2CppObject * get_validatedFixedTypedValue_22() const { return ___validatedFixedTypedValue_22; }
	inline Il2CppObject ** get_address_of_validatedFixedTypedValue_22() { return &___validatedFixedTypedValue_22; }
	inline void set_validatedFixedTypedValue_22(Il2CppObject * value)
	{
		___validatedFixedTypedValue_22 = value;
		Il2CppCodeGenWriteBarrier(&___validatedFixedTypedValue_22, value);
	}

	inline static int32_t get_offset_of_form_23() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___form_23)); }
	inline int32_t get_form_23() const { return ___form_23; }
	inline int32_t* get_address_of_form_23() { return &___form_23; }
	inline void set_form_23(int32_t value)
	{
		___form_23 = value;
	}

	inline static int32_t get_offset_of_name_24() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___name_24)); }
	inline String_t* get_name_24() const { return ___name_24; }
	inline String_t** get_address_of_name_24() { return &___name_24; }
	inline void set_name_24(String_t* value)
	{
		___name_24 = value;
		Il2CppCodeGenWriteBarrier(&___name_24, value);
	}

	inline static int32_t get_offset_of_targetNamespace_25() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___targetNamespace_25)); }
	inline String_t* get_targetNamespace_25() const { return ___targetNamespace_25; }
	inline String_t** get_address_of_targetNamespace_25() { return &___targetNamespace_25; }
	inline void set_targetNamespace_25(String_t* value)
	{
		___targetNamespace_25 = value;
		Il2CppCodeGenWriteBarrier(&___targetNamespace_25, value);
	}

	inline static int32_t get_offset_of_qualifiedName_26() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___qualifiedName_26)); }
	inline XmlQualifiedName_t176365656 * get_qualifiedName_26() const { return ___qualifiedName_26; }
	inline XmlQualifiedName_t176365656 ** get_address_of_qualifiedName_26() { return &___qualifiedName_26; }
	inline void set_qualifiedName_26(XmlQualifiedName_t176365656 * value)
	{
		___qualifiedName_26 = value;
		Il2CppCodeGenWriteBarrier(&___qualifiedName_26, value);
	}

	inline static int32_t get_offset_of_refName_27() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___refName_27)); }
	inline XmlQualifiedName_t176365656 * get_refName_27() const { return ___refName_27; }
	inline XmlQualifiedName_t176365656 ** get_address_of_refName_27() { return &___refName_27; }
	inline void set_refName_27(XmlQualifiedName_t176365656 * value)
	{
		___refName_27 = value;
		Il2CppCodeGenWriteBarrier(&___refName_27, value);
	}

	inline static int32_t get_offset_of_schemaType_28() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___schemaType_28)); }
	inline XmlSchemaSimpleType_t1500525009 * get_schemaType_28() const { return ___schemaType_28; }
	inline XmlSchemaSimpleType_t1500525009 ** get_address_of_schemaType_28() { return &___schemaType_28; }
	inline void set_schemaType_28(XmlSchemaSimpleType_t1500525009 * value)
	{
		___schemaType_28 = value;
		Il2CppCodeGenWriteBarrier(&___schemaType_28, value);
	}

	inline static int32_t get_offset_of_schemaTypeName_29() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___schemaTypeName_29)); }
	inline XmlQualifiedName_t176365656 * get_schemaTypeName_29() const { return ___schemaTypeName_29; }
	inline XmlQualifiedName_t176365656 ** get_address_of_schemaTypeName_29() { return &___schemaTypeName_29; }
	inline void set_schemaTypeName_29(XmlQualifiedName_t176365656 * value)
	{
		___schemaTypeName_29 = value;
		Il2CppCodeGenWriteBarrier(&___schemaTypeName_29, value);
	}

	inline static int32_t get_offset_of_use_30() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___use_30)); }
	inline int32_t get_use_30() const { return ___use_30; }
	inline int32_t* get_address_of_use_30() { return &___use_30; }
	inline void set_use_30(int32_t value)
	{
		___use_30 = value;
	}

	inline static int32_t get_offset_of_validatedUse_31() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___validatedUse_31)); }
	inline int32_t get_validatedUse_31() const { return ___validatedUse_31; }
	inline int32_t* get_address_of_validatedUse_31() { return &___validatedUse_31; }
	inline void set_validatedUse_31(int32_t value)
	{
		___validatedUse_31 = value;
	}

	inline static int32_t get_offset_of_referencedAttribute_32() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t1191708721, ___referencedAttribute_32)); }
	inline XmlSchemaAttribute_t1191708721 * get_referencedAttribute_32() const { return ___referencedAttribute_32; }
	inline XmlSchemaAttribute_t1191708721 ** get_address_of_referencedAttribute_32() { return &___referencedAttribute_32; }
	inline void set_referencedAttribute_32(XmlSchemaAttribute_t1191708721 * value)
	{
		___referencedAttribute_32 = value;
		Il2CppCodeGenWriteBarrier(&___referencedAttribute_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
