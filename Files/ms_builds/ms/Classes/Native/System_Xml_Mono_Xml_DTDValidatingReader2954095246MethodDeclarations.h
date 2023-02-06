﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t2954095246;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t2921250517;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t2921084216;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t2660249060;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t1258293171;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t3644820122;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Xml.XmlParserContext
struct XmlParserContext_t3629084577;
// System.Object
struct Il2CppObject;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlValidatingReader2921250517.h"
#include "System_Xml_System_Xml_EntityHandling2614841296.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_Schema_XmlSeverityType564452507.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaException2660249060.h"
#include "System_Xml_Mono_Xml_DTDAttListDeclaration1258293171.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_ReadState457987651.h"
#include "System_Xml_System_Xml_XmlResolver2502213349.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"

// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C"  void DTDValidatingReader__ctor_m2164651414 (DTDValidatingReader_t2954095246 * __this, XmlReader_t4229084514 * ___reader, XmlValidatingReader_t2921250517 * ___validatingReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C"  bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m1836088807 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
extern "C"  EntityResolvingXmlReader_t2921084216 * DTDValidatingReader_get_Source_m3770195336 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
extern "C"  DTDObjectModel_t709926554 * DTDValidatingReader_get_DTD_m2890575563 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
extern "C"  int32_t DTDValidatingReader_get_EntityHandling_m2347009485 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void DTDValidatingReader_set_EntityHandling_m346929096 (DTDValidatingReader_t2954095246 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
extern "C"  void DTDValidatingReader_Close_m1714221971 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
extern "C"  int32_t DTDValidatingReader_GetAttributeIndex_m1801951389 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
extern "C"  int32_t DTDValidatingReader_GetAttributeIndex_m1581705753 (DTDValidatingReader_t2954095246 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
extern "C"  String_t* DTDValidatingReader_GetAttribute_m3817570642 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_GetAttribute_m3180786190 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* DTDValidatingReader_LookupNamespace_m1672746697 (DTDValidatingReader_t2954095246 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void DTDValidatingReader_MoveToAttribute_m1796708796 (DTDValidatingReader_t2954095246 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
extern "C"  bool DTDValidatingReader_MoveToAttribute_m1022817791 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool DTDValidatingReader_MoveToAttribute_m3845010427 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
extern "C"  bool DTDValidatingReader_MoveToElement_m1162446787 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
extern "C"  bool DTDValidatingReader_MoveToFirstAttribute_m4096197191 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
extern "C"  bool DTDValidatingReader_MoveToNextAttribute_m3162101232 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
extern "C"  bool DTDValidatingReader_Read_m1586736453 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
extern "C"  bool DTDValidatingReader_ReadContent_m1652384342 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
extern "C"  bool DTDValidatingReader_ProcessContent_m1702774841 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
extern "C"  void DTDValidatingReader_FillAttributes_m2490626145 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
extern "C"  void DTDValidatingReader_ValidateText_m2179506122 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
extern "C"  void DTDValidatingReader_ValidateWhitespaceNode_m3246028092 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
extern "C"  void DTDValidatingReader_HandleError_m1011757180 (DTDValidatingReader_t2954095246 * __this, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C"  void DTDValidatingReader_HandleError_m3229122850 (DTDValidatingReader_t2954095246 * __this, XmlSchemaException_t2660249060 * ___ex, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C"  void DTDValidatingReader_ValidateAttributes_m746481622 (DTDValidatingReader_t2954095246 * __this, DTDAttListDeclaration_t1258293171 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
extern "C"  AttributeSlot_t3644820122 * DTDValidatingReader_GetAttributeSlot_m1739415337 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C"  void DTDValidatingReader_DtdValidateAttributes_m953948654 (DTDValidatingReader_t2954095246 * __this, DTDAttListDeclaration_t1258293171 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
extern "C"  void DTDValidatingReader_ReadDoctype_m3392891671 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
extern "C"  void DTDValidatingReader_ProcessStartElement_m2136937508 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
extern "C"  void DTDValidatingReader_ProcessEndElement_m3426979339 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
extern "C"  void DTDValidatingReader_VerifyDeclaredAttributes_m412018372 (DTDValidatingReader_t2954095246 * __this, DTDAttListDeclaration_t1258293171 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
extern "C"  bool DTDValidatingReader_ReadAttributeValue_m2994547034 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
extern "C"  void DTDValidatingReader_ResolveEntity_m203434698 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
extern "C"  int32_t DTDValidatingReader_get_AttributeCount_m2869179621 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
extern "C"  String_t* DTDValidatingReader_get_BaseURI_m3642326026 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
extern "C"  bool DTDValidatingReader_get_CanResolveEntity_m3016884215 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
extern "C"  int32_t DTDValidatingReader_get_Depth_m1947659027 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
extern "C"  bool DTDValidatingReader_get_EOF_m321311206 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_HasValue()
extern "C"  bool DTDValidatingReader_get_HasValue_m2504398063 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
extern "C"  bool DTDValidatingReader_get_IsDefault_m2833945889 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
extern "C"  bool DTDValidatingReader_get_IsEmptyElement_m2482129777 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
extern "C"  String_t* DTDValidatingReader_get_Item_m1302989724 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_get_Item_m1541976792 (DTDValidatingReader_t2954095246 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
extern "C"  int32_t DTDValidatingReader_get_LineNumber_m2608464751 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
extern "C"  int32_t DTDValidatingReader_get_LinePosition_m248316943 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
extern "C"  String_t* DTDValidatingReader_get_LocalName_m4246770053 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
extern "C"  String_t* DTDValidatingReader_get_Name_m3753976478 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
extern "C"  String_t* DTDValidatingReader_get_NamespaceURI_m1522736804 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * DTDValidatingReader_get_NameTable_m3869742820 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
extern "C"  int32_t DTDValidatingReader_get_NodeType_m2296248736 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C"  XmlParserContext_t3629084577 * DTDValidatingReader_get_ParserContext_m1401558142 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
extern "C"  String_t* DTDValidatingReader_get_Prefix_m966084709 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
extern "C"  int32_t DTDValidatingReader_get_ReadState_m2397206465 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
extern "C"  Il2CppObject * DTDValidatingReader_get_SchemaType_m3678976544 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
extern "C"  String_t* DTDValidatingReader_FilterNormalization_m1358656833 (DTDValidatingReader_t2954095246 * __this, String_t* ___attrName, String_t* ___rawValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
extern "C"  String_t* DTDValidatingReader_get_Value_m3213827744 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_XmlLang()
extern "C"  String_t* DTDValidatingReader_get_XmlLang_m3645546324 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void DTDValidatingReader_set_XmlResolver_m4183902036 (DTDValidatingReader_t2954095246 * __this, XmlResolver_t2502213349 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
extern "C"  int32_t DTDValidatingReader_get_XmlSpace_m800084653 (DTDValidatingReader_t2954095246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
