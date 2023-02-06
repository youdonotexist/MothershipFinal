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

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t3889095482;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t2590121;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype2590121.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
extern "C"  void XsdIDManager__ctor_m2232844849 (XsdIDManager_t3889095482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
extern "C"  ArrayList_t2121638921 * XsdIDManager_get_MissingIDReferences_m2645699709 (XsdIDManager_t3889095482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
extern "C"  void XsdIDManager_OnStartElement_m3711630316 (XsdIDManager_t3889095482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
extern "C"  String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m3631391673 (XsdIDManager_t3889095482 * __this, XmlSchemaDatatype_t2590121 * ___dt, Il2CppObject * ___parsedValue, String_t* ___elementName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
extern "C"  bool XsdIDManager_HasMissingIDReferences_m321071658 (XsdIDManager_t3889095482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
extern "C"  String_t* XsdIDManager_GetMissingIDString_m256768658 (XsdIDManager_t3889095482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
