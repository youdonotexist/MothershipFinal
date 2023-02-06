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

// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3066586409;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.IO.Stream
struct Stream_t219029575;
// System.Xml.XmlParserContext
struct XmlParserContext_t3629084577;
// System.String
struct String_t;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3693321125;
// System.Xml.XmlResolver
struct XmlResolver_t2502213349;
// System.Char[]
struct CharU5BU5D_t3416858730;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;
// System.Xml.XmlException
struct XmlException_t3490696160;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t2571680784;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlParserContext3629084577.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_EntityHandling2614841296.h"
#include "System_Xml_System_Xml_ReadState457987651.h"
#include "System_Xml_System_Xml_WhitespaceHandling3134486634.h"
#include "System_Xml_System_Xml_XmlResolver2502213349.h"
#include "System_Xml_System_Xml_XmlSpace3747690775.h"
#include "System_Xml_System_Xml_ConformanceLevel2571527895.h"
#include "System_Xml_Mono_Xml2_XmlTextReader_XmlTokenInfo2571680784.h"
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState3379700667.h"

// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2112230387 (XmlTextReader_t3066586409 * __this, TextReader_t1534522647 * ___input, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m2476688333 (XmlTextReader_t3066586409 * __this, Stream_t219029575 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t3629084577 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m2102759687 (XmlTextReader_t3066586409 * __this, String_t* ___url, Stream_t219029575 * ___input, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C"  void XmlTextReader__ctor_m3279129655 (XmlTextReader_t3066586409 * __this, String_t* ___url, TextReader_t1534522647 * ___input, XmlNameTable_t3232213908 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m4251487366 (XmlTextReader_t3066586409 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t3629084577 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C"  void XmlTextReader__ctor_m4093855193 (XmlTextReader_t3066586409 * __this, String_t* ___url, TextReader_t1534522647 * ___fragment, int32_t ___fragType, XmlParserContext_t3629084577 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t3629084577 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m3669041097 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C"  int32_t XmlTextReader_get_AttributeCount_m1193113500 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C"  String_t* XmlTextReader_get_BaseURI_m323459221 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C"  bool XmlTextReader_get_CharacterChecking_m3210588674 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C"  void XmlTextReader_set_CharacterChecking_m243948029 (XmlTextReader_t3066586409 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C"  bool XmlTextReader_get_CloseInput_m4285730133 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C"  void XmlTextReader_set_CloseInput_m534161544 (XmlTextReader_t3066586409 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C"  int32_t XmlTextReader_get_Depth_m958426748 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C"  int32_t XmlTextReader_get_EntityHandling_m33030270 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C"  bool XmlTextReader_get_EOF_m564876571 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_HasValue()
extern "C"  bool XmlTextReader_get_HasValue_m3733736154 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C"  bool XmlTextReader_get_IsDefault_m2288721046 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C"  bool XmlTextReader_get_IsEmptyElement_m2320835868 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C"  int32_t XmlTextReader_get_LineNumber_m3524737446 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C"  int32_t XmlTextReader_get_LinePosition_m318081158 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C"  String_t* XmlTextReader_get_LocalName_m1681504080 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C"  String_t* XmlTextReader_get_Name_m1653885427 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Namespaces()
extern "C"  bool XmlTextReader_get_Namespaces_m2422637979 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C"  String_t* XmlTextReader_get_NamespaceURI_m37232889 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C"  XmlNameTable_t3232213908 * XmlTextReader_get_NameTable_m3993144075 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C"  int32_t XmlTextReader_get_NodeType_m3377542899 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C"  bool XmlTextReader_get_Normalization_m717792252 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C"  void XmlTextReader_set_Normalization_m1554575479 (XmlTextReader_t3066586409 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C"  String_t* XmlTextReader_get_Prefix_m1413213818 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C"  int32_t XmlTextReader_get_ReadState_m734148670 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C"  XmlReaderSettings_t3693321125 * XmlTextReader_get_Settings_m2317908772 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern "C"  String_t* XmlTextReader_get_Value_m2535514603 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C"  int32_t XmlTextReader_get_WhitespaceHandling_m2742811570 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C"  void XmlTextReader_set_WhitespaceHandling_m1022196025 (XmlTextReader_t3066586409 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_XmlLang()
extern "C"  String_t* XmlTextReader_get_XmlLang_m326679519 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C"  void XmlTextReader_set_XmlResolver_m2681221305 (XmlTextReader_t3066586409 * __this, XmlResolver_t2502213349 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C"  int32_t XmlTextReader_get_XmlSpace_m3700762060 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C"  void XmlTextReader_Close_m1957867768 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m2130398877 (XmlTextReader_t3066586409 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
extern "C"  int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m328924107 (XmlTextReader_t3066586409 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlTextReader_GetAttribute_m841228313 (XmlTextReader_t3066586409 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C"  TextReader_t1534522647 * XmlTextReader_GetRemainder_m318592377 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::HasLineInfo()
extern "C"  bool XmlTextReader_HasLineInfo_m1586124356 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String)
extern "C"  String_t* XmlTextReader_LookupNamespace_m3140960670 (XmlTextReader_t3066586409 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern "C"  String_t* XmlTextReader_LookupNamespace_m3699761695 (XmlTextReader_t3066586409 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
extern "C"  void XmlTextReader_MoveToAttribute_m2073234785 (XmlTextReader_t3066586409 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m1898051050 (XmlTextReader_t3066586409 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlTextReader_MoveToAttribute_m2467921062 (XmlTextReader_t3066586409 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C"  bool XmlTextReader_MoveToElement_m617221944 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C"  bool XmlTextReader_MoveToFirstAttribute_m3711573298 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C"  bool XmlTextReader_MoveToNextAttribute_m2456957349 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::Read()
extern "C"  bool XmlTextReader_Read_m777518640 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C"  bool XmlTextReader_ReadAttributeValue_m2833253125 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlTextReader_ReadChars_m2077762994 (XmlTextReader_t3066586409 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
extern "C"  void XmlTextReader_ResolveEntity_m3399004975 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C"  void XmlTextReader_Skip_m2182684385 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C"  DTDObjectModel_t709926554 * XmlTextReader_get_DTD_m3845091782 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C"  XmlResolver_t2502213349 * XmlTextReader_get_Resolver_m3248241095 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
extern "C"  XmlException_t3490696160 * XmlTextReader_NotWFError_m304583423 (XmlTextReader_t3066586409 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Init()
extern "C"  void XmlTextReader_Init_m1899167282 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Clear()
extern "C"  void XmlTextReader_Clear_m1948108813 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
extern "C"  void XmlTextReader_InitializeContext_m4274125212 (XmlTextReader_t3066586409 * __this, String_t* ___url, XmlParserContext_t3629084577 * ___context, TextReader_t1534522647 * ___fragment, int32_t ___fragType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C"  int32_t XmlTextReader_get_Conformance_m1190844346 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C"  void XmlTextReader_set_Conformance_m2859698101 (XmlTextReader_t3066586409 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C"  void XmlTextReader_SetProperties_m3034003792 (XmlTextReader_t3066586409 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C"  void XmlTextReader_SetTokenProperties_m237691509 (XmlTextReader_t3066586409 * __this, XmlTokenInfo_t2571680784 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C"  void XmlTextReader_ClearAttributes_m2951900356 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C"  int32_t XmlTextReader_PeekSurrogate_m3783663408 (XmlTextReader_t3066586409 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C"  int32_t XmlTextReader_PeekChar_m254641297 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C"  int32_t XmlTextReader_ReadChar_m3857716364 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C"  void XmlTextReader_Advance_m673767315 (XmlTextReader_t3066586409 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
extern "C"  bool XmlTextReader_ReadTextReader_m1148791089 (XmlTextReader_t3066586409 * __this, int32_t ___remained, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern "C"  bool XmlTextReader_ReadContent_m3354608395 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
extern "C"  void XmlTextReader_SetEntityReferenceProperties_m614061979 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
extern "C"  void XmlTextReader_ReadStartTag_m721786928 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
extern "C"  void XmlTextReader_PushElementName_m1658182381 (XmlTextReader_t3066586409 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern "C"  void XmlTextReader_ReadEndTag_m3759677719 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C"  void XmlTextReader_CheckCurrentStateUpdate_m2095539625 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C"  void XmlTextReader_AppendValueChar_m3744790334 (XmlTextReader_t3066586409 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C"  void XmlTextReader_AppendSurrogatePairValueChar_m704355490 (XmlTextReader_t3066586409 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern "C"  String_t* XmlTextReader_CreateValueString_m2171097961 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C"  void XmlTextReader_ClearValueBuffer_m495962918 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern "C"  void XmlTextReader_ReadText_m502843516 (XmlTextReader_t3066586409 * __this, bool ___notWhitespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C"  int32_t XmlTextReader_ReadReference_m2020451886 (XmlTextReader_t3066586409 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
extern "C"  int32_t XmlTextReader_ReadCharacterReference_m3777658776 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern "C"  int32_t XmlTextReader_ReadEntityReference_m1180838731 (XmlTextReader_t3066586409 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern "C"  void XmlTextReader_ReadAttributes_m1335987046 (XmlTextReader_t3066586409 * __this, bool ___isXmlDecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern "C"  void XmlTextReader_AddAttributeWithValue_m1675559726 (XmlTextReader_t3066586409 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern "C"  void XmlTextReader_IncrementAttributeToken_m639649356 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern "C"  void XmlTextReader_IncrementAttributeValueToken_m3026969527 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern "C"  void XmlTextReader_ReadAttributeValueTokens_m3644060952 (XmlTextReader_t3066586409 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern "C"  void XmlTextReader_CheckAttributeEntityReferenceWFC_m1075790688 (XmlTextReader_t3066586409 * __this, String_t* ___entName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern "C"  void XmlTextReader_ReadProcessingInstruction_m4247906757 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
extern "C"  void XmlTextReader_VerifyXmlDeclaration_m4289163742 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern "C"  bool XmlTextReader_SkipWhitespaceInString_m1769166187 (XmlTextReader_t3066586409 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern "C"  void XmlTextReader_ParseAttributeFromString_m132975569 (XmlTextReader_t3066586409 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C"  void XmlTextReader_SkipTextDeclaration_m3278219726 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern "C"  void XmlTextReader_ReadDeclaration_m3359070020 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern "C"  void XmlTextReader_ReadComment_m1765947241 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern "C"  void XmlTextReader_ReadCDATA_m2376290903 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern "C"  void XmlTextReader_ReadDoctypeDecl_m1334696326 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C"  DTDObjectModel_t709926554 * XmlTextReader_GenerateDTDObjectModel_m991330180 (XmlTextReader_t3066586409 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
extern "C"  DTDObjectModel_t709926554 * XmlTextReader_GenerateDTDObjectModel_m2497984484 (XmlTextReader_t3066586409 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C"  int32_t XmlTextReader_get_State_m4205986576 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C"  int32_t XmlTextReader_ReadValueChar_m579850003 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C"  void XmlTextReader_ExpectAndAppend_m2206132810 (XmlTextReader_t3066586409 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern "C"  void XmlTextReader_ReadInternalSubset_m934179991 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern "C"  String_t* XmlTextReader_ReadSystemLiteral_m287448164 (XmlTextReader_t3066586409 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern "C"  String_t* XmlTextReader_ReadPubidLiteral_m3836022092 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C"  String_t* XmlTextReader_ReadName_m2874594848 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern "C"  String_t* XmlTextReader_ReadName_m2367194790 (XmlTextReader_t3066586409 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern "C"  void XmlTextReader_Expect_m2788845516 (XmlTextReader_t3066586409 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern "C"  void XmlTextReader_Expect_m1011563495 (XmlTextReader_t3066586409 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
extern "C"  void XmlTextReader_ExpectAfterWhitespace_m3276297213 (XmlTextReader_t3066586409 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C"  bool XmlTextReader_SkipWhitespace_m1854637366 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern "C"  bool XmlTextReader_ReadWhitespace_m885165773 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t XmlTextReader_ReadCharsInternal_m2404589429 (XmlTextReader_t3066586409 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern "C"  bool XmlTextReader_ReadUntilEndTag_m2571482831 (XmlTextReader_t3066586409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
