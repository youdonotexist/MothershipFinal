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

// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t2963160318;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t471922321;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement471922321.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdValidationContext::.ctor()
extern "C"  void XsdValidationContext__ctor_m2706169325 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_XsiType()
extern "C"  Il2CppObject * XsdValidationContext_get_XsiType_m4249349045 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::set_XsiType(System.Object)
extern "C"  void XsdValidationContext_set_XsiType_m650689086 (XsdValidationContext_t2963160318 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidationContext::get_Element()
extern "C"  XmlSchemaElement_t471922321 * XsdValidationContext_get_Element_m3679941576 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PushCurrentElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  void XsdValidationContext_PushCurrentElement_m1168932281 (XsdValidationContext_t2963160318 * __this, XmlSchemaElement_t471922321 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::PopCurrentElement()
extern "C"  void XsdValidationContext_PopCurrentElement_m4071326463 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::get_ActualType()
extern "C"  Il2CppObject * XsdValidationContext_get_ActualType_m2283229661 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::get_IsInvalid()
extern "C"  bool XsdValidationContext_get_IsInvalid_m2520990407 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidationContext::Clone()
extern "C"  Il2CppObject * XsdValidationContext_Clone_m1616271379 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationContext::EvaluateStartElement(System.String,System.String)
extern "C"  void XsdValidationContext_EvaluateStartElement_m917357844 (XsdValidationContext_t2963160318 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidationContext::EvaluateEndElement()
extern "C"  bool XsdValidationContext_EvaluateEndElement_m626427865 (XsdValidationContext_t2963160318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
