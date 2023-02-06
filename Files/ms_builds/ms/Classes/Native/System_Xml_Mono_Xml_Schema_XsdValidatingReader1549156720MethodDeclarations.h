#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t1549156720;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t2963160318;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3827173367;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.XmlParserContext
struct XmlParserContext_t3629084577;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t1861067185;
// System.Exception
struct Exception_t1967233988;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t1535155051;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3432810239;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t1500525009;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2590121;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t1860629407;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t1191708721;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t1973089485;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1986537513;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3473808128;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlResolver2502213349.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSet3827173367.h"
#include "System_Xml_System_Xml_ValidationType2591842619.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_ReadState457987651.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "mscorlib_System_Exception1967233988.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationEx1535155051.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleType1500525009.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype2590121.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMe4042409021.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaComplexType1860629407.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAttribute1191708721.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry1973089485.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityCons3473808128.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable1986537513.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XsdValidatingReader__ctor_m3940422697 (XsdValidatingReader_t1549156720 * __this, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
extern "C"  void XsdValidatingReader__cctor_m1001944736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
extern "C"  XsdValidationContext_t2963160318 * XsdValidatingReader_get_Context_m3059726186 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
extern "C"  ArrayList_t2121638921 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m4049736215 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
extern "C"  int32_t XsdValidatingReader_get_XsiNilDepth_m1240332964 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XsdValidatingReader_set_XmlResolver_m1087497092 (XsdValidatingReader_t1549156720 * __this, XmlResolver_t2502213349 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C"  void XsdValidatingReader_set_Schemas_m308878399 (XsdValidatingReader_t1549156720 * __this, XmlSchemaSet_t3827173367 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
extern "C"  Il2CppObject * XsdValidatingReader_get_SchemaType_m3907047782 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
extern "C"  Il2CppObject * XsdValidatingReader_get_SourceReaderSchemaType_m3493017156 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
extern "C"  int32_t XsdValidatingReader_get_ValidationType_m3711697769 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XsdValidatingReader_set_ValidationType_m2189422498 (XsdValidatingReader_t1549156720 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
extern "C"  int32_t XsdValidatingReader_get_AttributeCount_m3024838065 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
extern "C"  String_t* XsdValidatingReader_get_BaseURI_m1249523360 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
extern "C"  bool XsdValidatingReader_get_CanResolveEntity_m4061198519 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
extern "C"  int32_t XsdValidatingReader_get_Depth_m4245974215 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
extern "C"  bool XsdValidatingReader_get_EOF_m3326255398 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_HasValue()
extern "C"  bool XsdValidatingReader_get_HasValue_m1131007407 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
extern "C"  bool XsdValidatingReader_get_IsDefault_m3208508513 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
extern "C"  bool XsdValidatingReader_get_IsEmptyElement_m51934257 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m4008379058 (XsdValidatingReader_t1549156720 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_get_Item_m965249902 (XsdValidatingReader_t1549156720 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
extern "C"  int32_t XsdValidatingReader_get_LineNumber_m2095936059 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
extern "C"  int32_t XsdValidatingReader_get_LinePosition_m1629482971 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
extern "C"  String_t* XsdValidatingReader_get_LocalName_m2570911387 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
extern "C"  String_t* XsdValidatingReader_get_Name_m2869845960 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
extern "C"  String_t* XsdValidatingReader_get_NamespaceURI_m717066702 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * XsdValidatingReader_get_NameTable_m1047194966 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
extern "C"  int32_t XsdValidatingReader_get_NodeType_m4175588296 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t3629084577 * XsdValidatingReader_get_ParserContext_m3424389302 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
extern "C"  XmlNamespaceManager_t1861067185 * XsdValidatingReader_get_NamespaceManager_m1178443572 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
extern "C"  String_t* XsdValidatingReader_get_Prefix_m1720181519 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
extern "C"  int32_t XsdValidatingReader_get_ReadState_m1361611273 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
extern "C"  String_t* XsdValidatingReader_get_Value_m1575585462 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_XmlLang()
extern "C"  String_t* XsdValidatingReader_get_XmlLang_m1252743658 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
extern "C"  int32_t XsdValidatingReader_get_XmlSpace_m3919929761 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
extern "C"  void XsdValidatingReader_HandleError_m3628415959 (XsdValidatingReader_t1549156720 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
extern "C"  void XsdValidatingReader_HandleError_m3803238975 (XsdValidatingReader_t1549156720 * __this, String_t* ___error, Exception_t1967233988 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m2641812318 (XsdValidatingReader_t1549156720 * __this, String_t* ___error, Exception_t1967233988 * ___innerException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C"  void XsdValidatingReader_HandleError_m3506524662 (XsdValidatingReader_t1549156720 * __this, XmlSchemaValidationException_t1535155051 * ___schemaException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C"  void XsdValidatingReader_HandleError_m3783136967 (XsdValidatingReader_t1549156720 * __this, XmlSchemaValidationException_t1535155051 * ___schemaException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
extern "C"  XmlSchemaElement_t471922321 * XsdValidatingReader_FindElement_m1417503194 (XsdValidatingReader_t1549156720 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaType_t3432810239 * XsdValidatingReader_FindType_m1847654522 (XsdValidatingReader_t1549156720 * __this, XmlQualifiedName_t176365656 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
extern "C"  void XsdValidatingReader_ValidateStartElementParticle_m475826317 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
extern "C"  void XsdValidatingReader_ValidateEndElementParticle_m3092963380 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
extern "C"  void XsdValidatingReader_ValidateCharacters_m3856762519 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContent_m476220409 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
extern "C"  void XsdValidatingReader_ValidateEndSimpleContentCore_m33325048 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_AssessStringValid_m1581096182 (XsdValidatingReader_t1549156720 * __this, XmlSchemaSimpleType_t1500525009 * ___st, XmlSchemaDatatype_t2590121 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C"  void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m1536825691 (XsdValidatingReader_t1549156720 * __this, XmlSchemaSimpleType_t1500525009 * ___st, XmlSchemaDatatype_t2590121 ** ___dt, String_t* ___normalized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
extern "C"  Il2CppObject * XsdValidatingReader_GetXsiType_m4140084526 (XsdValidatingReader_t1549156720 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C"  void XsdValidatingReader_AssessLocalTypeDerivationOK_m687748310 (XsdValidatingReader_t1549156720 * __this, Il2CppObject * ___xsiType, Il2CppObject * ___baseType, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessStartElementSchemaValidity_m4119950600 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidElement_m2654932171 (XsdValidatingReader_t1549156720 * __this, String_t* ___xsiNilValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
extern "C"  void XsdValidatingReader_AssessStartElementLocallyValidType_m3658797345 (XsdValidatingReader_t1549156720 * __this, Il2CppObject * ___schemaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
extern "C"  void XsdValidatingReader_AssessElementLocallyValidComplexType_m2751238876 (XsdValidatingReader_t1549156720 * __this, XmlSchemaComplexType_t1860629407 * ___cType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValid_m263583308 (XsdValidatingReader_t1549156720 * __this, XmlSchemaAttribute_t1191708721 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C"  void XsdValidatingReader_AssessAttributeLocallyValidUse_m2612113767 (XsdValidatingReader_t1549156720 * __this, XmlSchemaAttribute_t1191708721 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
extern "C"  void XsdValidatingReader_AssessEndElementSchemaValidity_m642289391 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
extern "C"  void XsdValidatingReader_ValidateEndElementKeyConstraints_m2314140165 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
extern "C"  void XsdValidatingReader_ValidateKeySelectors_m1926821698 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
extern "C"  void XsdValidatingReader_ValidateKeyFields_m3521592781 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  void XsdValidatingReader_ProcessKeyEntry_m1991273780 (XsdValidatingReader_t1549156720 * __this, XsdKeyEntry_t1973089485 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  XsdKeyTable_t1986537513 * XsdValidatingReader_CreateNewKeyTable_m3170861586 (XsdValidatingReader_t1549156720 * __this, XmlSchemaIdentityConstraint_t3473808128 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C"  void XsdValidatingReader_ValidateSimpleContentIdentity_m3835413135 (XsdValidatingReader_t1549156720 * __this, XmlSchemaDatatype_t2590121 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
extern "C"  void XsdValidatingReader_EndIdentityValidation_m881844136 (XsdValidatingReader_t1549156720 * __this, XsdKeyTable_t1986537513 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C"  void XsdValidatingReader_EndKeyrefValidation_m1248389250 (XsdValidatingReader_t1549156720 * __this, XsdKeyTable_t1986537513 * ___seq, XmlSchemaIdentityConstraint_t3473808128 * ___targetIdent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
extern "C"  void XsdValidatingReader_Close_m2174373827 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m2125397352 (XsdValidatingReader_t1549156720 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
extern "C"  XmlQualifiedName_t176365656 * XsdValidatingReader_SplitQName_m4248057782 (XsdValidatingReader_t1549156720 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetAttribute_m2680983460 (XsdValidatingReader_t1549156720 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C"  String_t* XsdValidatingReader_GetDefaultAttribute_m1040686751 (XsdValidatingReader_t1549156720 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C"  int32_t XsdValidatingReader_FindDefaultAttribute_m2962380309 (XsdValidatingReader_t1549156720 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
extern "C"  bool XsdValidatingReader_HasLineInfo_m255239375 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XsdValidatingReader_LookupNamespace_m169417459 (XsdValidatingReader_t1549156720 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XsdValidatingReader_MoveToAttribute_m1126478316 (XsdValidatingReader_t1549156720 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m3692113599 (XsdValidatingReader_t1549156720 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToAttribute_m1922440379 (XsdValidatingReader_t1549156720 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C"  bool XsdValidatingReader_MoveToDefaultAttribute_m3255859624 (XsdValidatingReader_t1549156720 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
extern "C"  bool XsdValidatingReader_MoveToElement_m1537009411 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
extern "C"  bool XsdValidatingReader_MoveToFirstAttribute_m845544199 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
extern "C"  bool XsdValidatingReader_MoveToNextAttribute_m840484144 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
extern "C"  XmlSchema_t1932230565 * XsdValidatingReader_ReadExternalSchema_m2611281275 (XsdValidatingReader_t1549156720 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
extern "C"  void XsdValidatingReader_ExamineAdditionalSchema_m2182694196 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
extern "C"  bool XsdValidatingReader_Read_m224142853 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
extern "C"  bool XsdValidatingReader_ReadAttributeValue_m564351514 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
extern "C"  void XsdValidatingReader_ResolveEntity_m3477493498 (XsdValidatingReader_t1549156720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
