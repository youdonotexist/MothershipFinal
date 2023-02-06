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

// System.Xml.XmlElement
struct XmlElement_t3562928333;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3253021914;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t571717291;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t886430410;
// System.Xml.XmlAttribute
struct XmlAttribute_t2022155821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlDocument3705263098.h"
#include "System_Xml_System_Xml_XmlLinkedNode3253021914.h"
#include "System_Xml_System_Xml_XmlNodeType3966624571.h"
#include "System_Xml_System_Xml_XmlAttribute2022155821.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C"  void XmlElement__ctor_m1054306151 (XmlElement_t3562928333 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t3705263098 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C"  XmlLinkedNode_t3253021914 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m737144701 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C"  void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m2196767736 (XmlElement_t3562928333 * __this, XmlLinkedNode_t3253021914 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C"  XmlAttributeCollection_t571717291 * XmlElement_get_Attributes_m925376964 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C"  String_t* XmlElement_get_InnerText_m535347169 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
extern "C"  bool XmlElement_get_IsEmpty_m1811931046 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C"  void XmlElement_set_IsEmpty_m3658279841 (XmlElement_t3562928333 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C"  String_t* XmlElement_get_LocalName_m2357904148 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C"  String_t* XmlElement_get_Name_m1366553519 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C"  String_t* XmlElement_get_NamespaceURI_m2980073141 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C"  XmlNode_t3592213601 * XmlElement_get_NextSibling_m114548824 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C"  int32_t XmlElement_get_NodeType_m1843892847 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C"  XmlDocument_t3705263098 * XmlElement_get_OwnerDocument_m3486800766 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C"  String_t* XmlElement_get_Prefix_m165157174 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C"  XmlNode_t3592213601 * XmlElement_get_ParentNode_m686319621 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::get_SchemaInfo()
extern "C"  Il2CppObject * XmlElement_get_SchemaInfo_m952006649 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C"  void XmlElement_set_SchemaInfo_m260485366 (XmlElement_t3562928333 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C"  XmlNode_t3592213601 * XmlElement_CloneNode_m252539560 (XmlElement_t3562928333 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C"  void XmlElement_RemoveAll_m891345345 (XmlElement_t3562928333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C"  void XmlElement_SetAttribute_m3688654406 (XmlElement_t3562928333 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t2022155821 * XmlElement_SetAttributeNode_m2917993461 (XmlElement_t3562928333 * __this, XmlAttribute_t2022155821 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
