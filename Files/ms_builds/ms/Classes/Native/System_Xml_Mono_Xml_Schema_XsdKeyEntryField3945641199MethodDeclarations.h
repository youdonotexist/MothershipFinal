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

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t3945641199;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t1973089485;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t4044704868;
// System.Object
struct Il2CppObject;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t8663200;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t570005944;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t114296061;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3696234203;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry1973089485.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField4044704868.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType8663200.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdKeyEntryField__ctor_m1596920355 (XsdKeyEntryField_t3945641199 * __this, XsdKeyEntry_t1973089485 * ___entry, XsdIdentityField_t4044704868 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  bool XsdKeyEntryField_SetIdentityField_m3089473348 (XsdKeyEntryField_t3945641199 * __this, Il2CppObject * ___identity, bool ___isXsiNil, XsdAnySimpleType_t8663200 * ___type, int32_t ___depth, Il2CppObject * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
extern "C"  XsdIdentityPath_t114296061 * XsdKeyEntryField_Matches_m3855161845 (XsdKeyEntryField_t3945641199 * __this, bool ___matchesAttr, Il2CppObject * ___sender, XmlNameTable_t3232213908 * ___nameTable, ArrayList_t2121638921 * ___qnameStack, String_t* ___sourceUri, Il2CppObject * ___schemaType, Il2CppObject * ___nsResolver, Il2CppObject * ___lineInfo, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Il2CppObject * ___attrValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
extern "C"  void XsdKeyEntryField_FillAttributeFieldValue_m618592376 (XsdKeyEntryField_t3945641199 * __this, Il2CppObject * ___sender, XmlNameTable_t3232213908 * ___nameTable, String_t* ___sourceUri, Il2CppObject * ___schemaType, Il2CppObject * ___nsResolver, Il2CppObject * ___identity, Il2CppObject * ___lineInfo, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
