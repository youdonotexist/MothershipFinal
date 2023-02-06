﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchemaAttribute[]
struct XmlSchemaAttributeU5BU5D_t887620588;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t728010009;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t570005944;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;
// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t3889095482;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t2915428732;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_ValidationType2591842619.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdValidatingReader
struct  XsdValidatingReader_t1549156720  : public XmlReader_t4229084514
{
public:
	// System.Xml.XmlReader Mono.Xml.Schema.XsdValidatingReader::reader
	XmlReader_t4229084514 * ___reader_3;
	// System.Xml.XmlResolver Mono.Xml.Schema.XsdValidatingReader::resolver
	XmlResolver_t2502213349 * ___resolver_4;
	// Mono.Xml.IHasXmlSchemaInfo Mono.Xml.Schema.XsdValidatingReader::sourceReaderSchemaInfo
	Il2CppObject * ___sourceReaderSchemaInfo_5;
	// System.Xml.IXmlLineInfo Mono.Xml.Schema.XsdValidatingReader::readerLineInfo
	Il2CppObject * ___readerLineInfo_6;
	// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::validationType
	int32_t ___validationType_7;
	// System.Xml.Schema.XmlSchemaSet Mono.Xml.Schema.XsdValidatingReader::schemas
	XmlSchemaSet_t3827173367 * ___schemas_8;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::namespaces
	bool ___namespaces_9;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::validationStarted
	bool ___validationStarted_10;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkIdentity
	bool ___checkIdentity_11;
	// Mono.Xml.Schema.XsdIDManager Mono.Xml.Schema.XsdValidatingReader::idManager
	XsdIDManager_t3889095482 * ___idManager_12;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::checkKeyConstraints
	bool ___checkKeyConstraints_13;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::keyTables
	ArrayList_t2121638921 * ___keyTables_14;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::currentKeyFieldConsumers
	ArrayList_t2121638921 * ___currentKeyFieldConsumers_15;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::tmpKeyrefPool
	ArrayList_t2121638921 * ___tmpKeyrefPool_16;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::elementQNameStack
	ArrayList_t2121638921 * ___elementQNameStack_17;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidatingReader::state
	XsdParticleStateManager_t2915428732 * ___state_18;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::skipValidationDepth
	int32_t ___skipValidationDepth_19;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::xsiNilDepth
	int32_t ___xsiNilDepth_20;
	// System.Text.StringBuilder Mono.Xml.Schema.XsdValidatingReader::storedCharacters
	StringBuilder_t3822575854 * ___storedCharacters_21;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::shouldValidateCharacters
	bool ___shouldValidateCharacters_22;
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::defaultAttributes
	XmlSchemaAttributeU5BU5D_t887620588* ___defaultAttributes_23;
	// System.Int32 Mono.Xml.Schema.XsdValidatingReader::currentDefaultAttribute
	int32_t ___currentDefaultAttribute_24;
	// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::defaultAttributesCache
	ArrayList_t2121638921 * ___defaultAttributesCache_25;
	// System.Boolean Mono.Xml.Schema.XsdValidatingReader::defaultAttributeConsumed
	bool ___defaultAttributeConsumed_26;
	// System.Object Mono.Xml.Schema.XsdValidatingReader::currentAttrType
	Il2CppObject * ___currentAttrType_27;
	// System.Xml.Schema.ValidationEventHandler Mono.Xml.Schema.XsdValidatingReader::ValidationEventHandler
	ValidationEventHandler_t2777264566 * ___ValidationEventHandler_28;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___reader_3)); }
	inline XmlReader_t4229084514 * get_reader_3() const { return ___reader_3; }
	inline XmlReader_t4229084514 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(XmlReader_t4229084514 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier(&___reader_3, value);
	}

	inline static int32_t get_offset_of_resolver_4() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___resolver_4)); }
	inline XmlResolver_t2502213349 * get_resolver_4() const { return ___resolver_4; }
	inline XmlResolver_t2502213349 ** get_address_of_resolver_4() { return &___resolver_4; }
	inline void set_resolver_4(XmlResolver_t2502213349 * value)
	{
		___resolver_4 = value;
		Il2CppCodeGenWriteBarrier(&___resolver_4, value);
	}

	inline static int32_t get_offset_of_sourceReaderSchemaInfo_5() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___sourceReaderSchemaInfo_5)); }
	inline Il2CppObject * get_sourceReaderSchemaInfo_5() const { return ___sourceReaderSchemaInfo_5; }
	inline Il2CppObject ** get_address_of_sourceReaderSchemaInfo_5() { return &___sourceReaderSchemaInfo_5; }
	inline void set_sourceReaderSchemaInfo_5(Il2CppObject * value)
	{
		___sourceReaderSchemaInfo_5 = value;
		Il2CppCodeGenWriteBarrier(&___sourceReaderSchemaInfo_5, value);
	}

	inline static int32_t get_offset_of_readerLineInfo_6() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___readerLineInfo_6)); }
	inline Il2CppObject * get_readerLineInfo_6() const { return ___readerLineInfo_6; }
	inline Il2CppObject ** get_address_of_readerLineInfo_6() { return &___readerLineInfo_6; }
	inline void set_readerLineInfo_6(Il2CppObject * value)
	{
		___readerLineInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___readerLineInfo_6, value);
	}

	inline static int32_t get_offset_of_validationType_7() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___validationType_7)); }
	inline int32_t get_validationType_7() const { return ___validationType_7; }
	inline int32_t* get_address_of_validationType_7() { return &___validationType_7; }
	inline void set_validationType_7(int32_t value)
	{
		___validationType_7 = value;
	}

	inline static int32_t get_offset_of_schemas_8() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___schemas_8)); }
	inline XmlSchemaSet_t3827173367 * get_schemas_8() const { return ___schemas_8; }
	inline XmlSchemaSet_t3827173367 ** get_address_of_schemas_8() { return &___schemas_8; }
	inline void set_schemas_8(XmlSchemaSet_t3827173367 * value)
	{
		___schemas_8 = value;
		Il2CppCodeGenWriteBarrier(&___schemas_8, value);
	}

	inline static int32_t get_offset_of_namespaces_9() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___namespaces_9)); }
	inline bool get_namespaces_9() const { return ___namespaces_9; }
	inline bool* get_address_of_namespaces_9() { return &___namespaces_9; }
	inline void set_namespaces_9(bool value)
	{
		___namespaces_9 = value;
	}

	inline static int32_t get_offset_of_validationStarted_10() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___validationStarted_10)); }
	inline bool get_validationStarted_10() const { return ___validationStarted_10; }
	inline bool* get_address_of_validationStarted_10() { return &___validationStarted_10; }
	inline void set_validationStarted_10(bool value)
	{
		___validationStarted_10 = value;
	}

	inline static int32_t get_offset_of_checkIdentity_11() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___checkIdentity_11)); }
	inline bool get_checkIdentity_11() const { return ___checkIdentity_11; }
	inline bool* get_address_of_checkIdentity_11() { return &___checkIdentity_11; }
	inline void set_checkIdentity_11(bool value)
	{
		___checkIdentity_11 = value;
	}

	inline static int32_t get_offset_of_idManager_12() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___idManager_12)); }
	inline XsdIDManager_t3889095482 * get_idManager_12() const { return ___idManager_12; }
	inline XsdIDManager_t3889095482 ** get_address_of_idManager_12() { return &___idManager_12; }
	inline void set_idManager_12(XsdIDManager_t3889095482 * value)
	{
		___idManager_12 = value;
		Il2CppCodeGenWriteBarrier(&___idManager_12, value);
	}

	inline static int32_t get_offset_of_checkKeyConstraints_13() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___checkKeyConstraints_13)); }
	inline bool get_checkKeyConstraints_13() const { return ___checkKeyConstraints_13; }
	inline bool* get_address_of_checkKeyConstraints_13() { return &___checkKeyConstraints_13; }
	inline void set_checkKeyConstraints_13(bool value)
	{
		___checkKeyConstraints_13 = value;
	}

	inline static int32_t get_offset_of_keyTables_14() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___keyTables_14)); }
	inline ArrayList_t2121638921 * get_keyTables_14() const { return ___keyTables_14; }
	inline ArrayList_t2121638921 ** get_address_of_keyTables_14() { return &___keyTables_14; }
	inline void set_keyTables_14(ArrayList_t2121638921 * value)
	{
		___keyTables_14 = value;
		Il2CppCodeGenWriteBarrier(&___keyTables_14, value);
	}

	inline static int32_t get_offset_of_currentKeyFieldConsumers_15() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___currentKeyFieldConsumers_15)); }
	inline ArrayList_t2121638921 * get_currentKeyFieldConsumers_15() const { return ___currentKeyFieldConsumers_15; }
	inline ArrayList_t2121638921 ** get_address_of_currentKeyFieldConsumers_15() { return &___currentKeyFieldConsumers_15; }
	inline void set_currentKeyFieldConsumers_15(ArrayList_t2121638921 * value)
	{
		___currentKeyFieldConsumers_15 = value;
		Il2CppCodeGenWriteBarrier(&___currentKeyFieldConsumers_15, value);
	}

	inline static int32_t get_offset_of_tmpKeyrefPool_16() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___tmpKeyrefPool_16)); }
	inline ArrayList_t2121638921 * get_tmpKeyrefPool_16() const { return ___tmpKeyrefPool_16; }
	inline ArrayList_t2121638921 ** get_address_of_tmpKeyrefPool_16() { return &___tmpKeyrefPool_16; }
	inline void set_tmpKeyrefPool_16(ArrayList_t2121638921 * value)
	{
		___tmpKeyrefPool_16 = value;
		Il2CppCodeGenWriteBarrier(&___tmpKeyrefPool_16, value);
	}

	inline static int32_t get_offset_of_elementQNameStack_17() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___elementQNameStack_17)); }
	inline ArrayList_t2121638921 * get_elementQNameStack_17() const { return ___elementQNameStack_17; }
	inline ArrayList_t2121638921 ** get_address_of_elementQNameStack_17() { return &___elementQNameStack_17; }
	inline void set_elementQNameStack_17(ArrayList_t2121638921 * value)
	{
		___elementQNameStack_17 = value;
		Il2CppCodeGenWriteBarrier(&___elementQNameStack_17, value);
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___state_18)); }
	inline XsdParticleStateManager_t2915428732 * get_state_18() const { return ___state_18; }
	inline XsdParticleStateManager_t2915428732 ** get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(XsdParticleStateManager_t2915428732 * value)
	{
		___state_18 = value;
		Il2CppCodeGenWriteBarrier(&___state_18, value);
	}

	inline static int32_t get_offset_of_skipValidationDepth_19() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___skipValidationDepth_19)); }
	inline int32_t get_skipValidationDepth_19() const { return ___skipValidationDepth_19; }
	inline int32_t* get_address_of_skipValidationDepth_19() { return &___skipValidationDepth_19; }
	inline void set_skipValidationDepth_19(int32_t value)
	{
		___skipValidationDepth_19 = value;
	}

	inline static int32_t get_offset_of_xsiNilDepth_20() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___xsiNilDepth_20)); }
	inline int32_t get_xsiNilDepth_20() const { return ___xsiNilDepth_20; }
	inline int32_t* get_address_of_xsiNilDepth_20() { return &___xsiNilDepth_20; }
	inline void set_xsiNilDepth_20(int32_t value)
	{
		___xsiNilDepth_20 = value;
	}

	inline static int32_t get_offset_of_storedCharacters_21() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___storedCharacters_21)); }
	inline StringBuilder_t3822575854 * get_storedCharacters_21() const { return ___storedCharacters_21; }
	inline StringBuilder_t3822575854 ** get_address_of_storedCharacters_21() { return &___storedCharacters_21; }
	inline void set_storedCharacters_21(StringBuilder_t3822575854 * value)
	{
		___storedCharacters_21 = value;
		Il2CppCodeGenWriteBarrier(&___storedCharacters_21, value);
	}

	inline static int32_t get_offset_of_shouldValidateCharacters_22() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___shouldValidateCharacters_22)); }
	inline bool get_shouldValidateCharacters_22() const { return ___shouldValidateCharacters_22; }
	inline bool* get_address_of_shouldValidateCharacters_22() { return &___shouldValidateCharacters_22; }
	inline void set_shouldValidateCharacters_22(bool value)
	{
		___shouldValidateCharacters_22 = value;
	}

	inline static int32_t get_offset_of_defaultAttributes_23() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___defaultAttributes_23)); }
	inline XmlSchemaAttributeU5BU5D_t887620588* get_defaultAttributes_23() const { return ___defaultAttributes_23; }
	inline XmlSchemaAttributeU5BU5D_t887620588** get_address_of_defaultAttributes_23() { return &___defaultAttributes_23; }
	inline void set_defaultAttributes_23(XmlSchemaAttributeU5BU5D_t887620588* value)
	{
		___defaultAttributes_23 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributes_23, value);
	}

	inline static int32_t get_offset_of_currentDefaultAttribute_24() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___currentDefaultAttribute_24)); }
	inline int32_t get_currentDefaultAttribute_24() const { return ___currentDefaultAttribute_24; }
	inline int32_t* get_address_of_currentDefaultAttribute_24() { return &___currentDefaultAttribute_24; }
	inline void set_currentDefaultAttribute_24(int32_t value)
	{
		___currentDefaultAttribute_24 = value;
	}

	inline static int32_t get_offset_of_defaultAttributesCache_25() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___defaultAttributesCache_25)); }
	inline ArrayList_t2121638921 * get_defaultAttributesCache_25() const { return ___defaultAttributesCache_25; }
	inline ArrayList_t2121638921 ** get_address_of_defaultAttributesCache_25() { return &___defaultAttributesCache_25; }
	inline void set_defaultAttributesCache_25(ArrayList_t2121638921 * value)
	{
		___defaultAttributesCache_25 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAttributesCache_25, value);
	}

	inline static int32_t get_offset_of_defaultAttributeConsumed_26() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___defaultAttributeConsumed_26)); }
	inline bool get_defaultAttributeConsumed_26() const { return ___defaultAttributeConsumed_26; }
	inline bool* get_address_of_defaultAttributeConsumed_26() { return &___defaultAttributeConsumed_26; }
	inline void set_defaultAttributeConsumed_26(bool value)
	{
		___defaultAttributeConsumed_26 = value;
	}

	inline static int32_t get_offset_of_currentAttrType_27() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___currentAttrType_27)); }
	inline Il2CppObject * get_currentAttrType_27() const { return ___currentAttrType_27; }
	inline Il2CppObject ** get_address_of_currentAttrType_27() { return &___currentAttrType_27; }
	inline void set_currentAttrType_27(Il2CppObject * value)
	{
		___currentAttrType_27 = value;
		Il2CppCodeGenWriteBarrier(&___currentAttrType_27, value);
	}

	inline static int32_t get_offset_of_ValidationEventHandler_28() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720, ___ValidationEventHandler_28)); }
	inline ValidationEventHandler_t2777264566 * get_ValidationEventHandler_28() const { return ___ValidationEventHandler_28; }
	inline ValidationEventHandler_t2777264566 ** get_address_of_ValidationEventHandler_28() { return &___ValidationEventHandler_28; }
	inline void set_ValidationEventHandler_28(ValidationEventHandler_t2777264566 * value)
	{
		___ValidationEventHandler_28 = value;
		Il2CppCodeGenWriteBarrier(&___ValidationEventHandler_28, value);
	}
};

struct XsdValidatingReader_t1549156720_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaAttribute[] Mono.Xml.Schema.XsdValidatingReader::emptyAttributeArray
	XmlSchemaAttributeU5BU5D_t887620588* ___emptyAttributeArray_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map3
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map3_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map4
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map4_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.Schema.XsdValidatingReader::<>f__switch$map5
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map5_31;

public:
	inline static int32_t get_offset_of_emptyAttributeArray_2() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720_StaticFields, ___emptyAttributeArray_2)); }
	inline XmlSchemaAttributeU5BU5D_t887620588* get_emptyAttributeArray_2() const { return ___emptyAttributeArray_2; }
	inline XmlSchemaAttributeU5BU5D_t887620588** get_address_of_emptyAttributeArray_2() { return &___emptyAttributeArray_2; }
	inline void set_emptyAttributeArray_2(XmlSchemaAttributeU5BU5D_t887620588* value)
	{
		___emptyAttributeArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___emptyAttributeArray_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_29() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720_StaticFields, ___U3CU3Ef__switchU24map3_29)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map3_29() const { return ___U3CU3Ef__switchU24map3_29; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map3_29() { return &___U3CU3Ef__switchU24map3_29; }
	inline void set_U3CU3Ef__switchU24map3_29(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map3_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_30() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720_StaticFields, ___U3CU3Ef__switchU24map4_30)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map4_30() const { return ___U3CU3Ef__switchU24map4_30; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map4_30() { return &___U3CU3Ef__switchU24map4_30; }
	inline void set_U3CU3Ef__switchU24map4_30(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map4_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_31() { return static_cast<int32_t>(offsetof(XsdValidatingReader_t1549156720_StaticFields, ___U3CU3Ef__switchU24map5_31)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map5_31() const { return ___U3CU3Ef__switchU24map5_31; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map5_31() { return &___U3CU3Ef__switchU24map5_31; }
	inline void set_U3CU3Ef__switchU24map5_31(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map5_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
