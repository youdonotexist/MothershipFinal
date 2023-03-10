#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlTextReader
struct XmlTextReader_t3719122287;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t1190777955;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t2954095246;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t728010009;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;

#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_EntityHandling2614841296.h"
#include "System_Xml_System_Xml_ValidationType2591842619.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlValidatingReader
struct  XmlValidatingReader_t2921250517  : public XmlReader_t4229084514
{
public:
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling_2;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t4229084514 * ___sourceReader_3;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t3719122287 * ___xmlTextReader_4;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t4229084514 * ___validatingReader_5;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t2502213349 * ___resolver_6;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified_7;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType_8;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t1190777955 * ___schemas_9;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t2954095246 * ___dtdReader_10;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Il2CppObject * ___schemaInfo_11;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t3822575854 * ___storedCharacters_12;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t2777264566 * ___ValidationEventHandler_13;

public:
	inline static int32_t get_offset_of_entityHandling_2() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___entityHandling_2)); }
	inline int32_t get_entityHandling_2() const { return ___entityHandling_2; }
	inline int32_t* get_address_of_entityHandling_2() { return &___entityHandling_2; }
	inline void set_entityHandling_2(int32_t value)
	{
		___entityHandling_2 = value;
	}

	inline static int32_t get_offset_of_sourceReader_3() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___sourceReader_3)); }
	inline XmlReader_t4229084514 * get_sourceReader_3() const { return ___sourceReader_3; }
	inline XmlReader_t4229084514 ** get_address_of_sourceReader_3() { return &___sourceReader_3; }
	inline void set_sourceReader_3(XmlReader_t4229084514 * value)
	{
		___sourceReader_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceReader_3, value);
	}

	inline static int32_t get_offset_of_xmlTextReader_4() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___xmlTextReader_4)); }
	inline XmlTextReader_t3719122287 * get_xmlTextReader_4() const { return ___xmlTextReader_4; }
	inline XmlTextReader_t3719122287 ** get_address_of_xmlTextReader_4() { return &___xmlTextReader_4; }
	inline void set_xmlTextReader_4(XmlTextReader_t3719122287 * value)
	{
		___xmlTextReader_4 = value;
		Il2CppCodeGenWriteBarrier(&___xmlTextReader_4, value);
	}

	inline static int32_t get_offset_of_validatingReader_5() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___validatingReader_5)); }
	inline XmlReader_t4229084514 * get_validatingReader_5() const { return ___validatingReader_5; }
	inline XmlReader_t4229084514 ** get_address_of_validatingReader_5() { return &___validatingReader_5; }
	inline void set_validatingReader_5(XmlReader_t4229084514 * value)
	{
		___validatingReader_5 = value;
		Il2CppCodeGenWriteBarrier(&___validatingReader_5, value);
	}

	inline static int32_t get_offset_of_resolver_6() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___resolver_6)); }
	inline XmlResolver_t2502213349 * get_resolver_6() const { return ___resolver_6; }
	inline XmlResolver_t2502213349 ** get_address_of_resolver_6() { return &___resolver_6; }
	inline void set_resolver_6(XmlResolver_t2502213349 * value)
	{
		___resolver_6 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_6, value);
	}

	inline static int32_t get_offset_of_resolverSpecified_7() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___resolverSpecified_7)); }
	inline bool get_resolverSpecified_7() const { return ___resolverSpecified_7; }
	inline bool* get_address_of_resolverSpecified_7() { return &___resolverSpecified_7; }
	inline void set_resolverSpecified_7(bool value)
	{
		___resolverSpecified_7 = value;
	}

	inline static int32_t get_offset_of_validationType_8() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___validationType_8)); }
	inline int32_t get_validationType_8() const { return ___validationType_8; }
	inline int32_t* get_address_of_validationType_8() { return &___validationType_8; }
	inline void set_validationType_8(int32_t value)
	{
		___validationType_8 = value;
	}

	inline static int32_t get_offset_of_schemas_9() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___schemas_9)); }
	inline XmlSchemaCollection_t1190777955 * get_schemas_9() const { return ___schemas_9; }
	inline XmlSchemaCollection_t1190777955 ** get_address_of_schemas_9() { return &___schemas_9; }
	inline void set_schemas_9(XmlSchemaCollection_t1190777955 * value)
	{
		___schemas_9 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_9, value);
	}

	inline static int32_t get_offset_of_dtdReader_10() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___dtdReader_10)); }
	inline DTDValidatingReader_t2954095246 * get_dtdReader_10() const { return ___dtdReader_10; }
	inline DTDValidatingReader_t2954095246 ** get_address_of_dtdReader_10() { return &___dtdReader_10; }
	inline void set_dtdReader_10(DTDValidatingReader_t2954095246 * value)
	{
		___dtdReader_10 = value;
		Il2CppCodeGenWriteBarrier(&___dtdReader_10, value);
	}

	inline static int32_t get_offset_of_schemaInfo_11() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___schemaInfo_11)); }
	inline Il2CppObject * get_schemaInfo_11() const { return ___schemaInfo_11; }
	inline Il2CppObject ** get_address_of_schemaInfo_11() { return &___schemaInfo_11; }
	inline void set_schemaInfo_11(Il2CppObject * value)
	{
		___schemaInfo_11 = value;
		Il2CppCodeGenWriteBarrier(&___schemaInfo_11, value);
	}

	inline static int32_t get_offset_of_storedCharacters_12() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___storedCharacters_12)); }
	inline StringBuilder_t3822575854 * get_storedCharacters_12() const { return ___storedCharacters_12; }
	inline StringBuilder_t3822575854 ** get_address_of_storedCharacters_12() { return &___storedCharacters_12; }
	inline void set_storedCharacters_12(StringBuilder_t3822575854 * value)
	{
		___storedCharacters_12 = value;
		Il2CppCodeGenWriteBarrier(&___storedCharacters_12, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_13() { return static_cast<int32_t>(offsetof(XmlValidatingReader_t2921250517, ___ValidationEventHandler_13)); }
	inline ValidationEventHandler_t2777264566 * get_ValidationEventHandler_13() const { return ___ValidationEventHandler_13; }
	inline ValidationEventHandler_t2777264566 ** get_address_of_ValidationEventHandler_13() { return &___ValidationEventHandler_13; }
	inline void set_ValidationEventHandler_13(ValidationEventHandler_t2777264566 * value)
	{
		___ValidationEventHandler_13 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
