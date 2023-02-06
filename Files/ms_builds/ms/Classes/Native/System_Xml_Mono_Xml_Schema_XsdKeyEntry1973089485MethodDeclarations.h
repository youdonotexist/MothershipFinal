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

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t1973089485;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1986537513;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t570005944;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3696234203;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable1986537513.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry1973089485.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlNameTable3232213908.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry__ctor_m2466732136 (XsdKeyEntry_t1973089485 * __this, XsdKeyTable_t1986537513 * ___keyseq, int32_t ___depth, Il2CppObject * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
extern "C"  bool XsdKeyEntry_get_KeyFound_m3173730424 (XsdKeyEntry_t1973089485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry_Init_m3672102620 (XsdKeyEntry_t1973089485 * __this, XsdKeyTable_t1986537513 * ___keyseq, int32_t ___depth, Il2CppObject * ___li, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  bool XsdKeyEntry_CompareIdentity_m1024870280 (XsdKeyEntry_t1973089485 * __this, XsdKeyEntry_t1973089485 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
extern "C"  void XsdKeyEntry_ProcessMatch_m4242695872 (XsdKeyEntry_t1973089485 * __this, bool ___isAttribute, ArrayList_t2121638921 * ___qnameStack, Il2CppObject * ___sender, XmlNameTable_t3232213908 * ___nameTable, String_t* ___sourceUri, Il2CppObject * ___schemaType, Il2CppObject * ___nsResolver, Il2CppObject * ___li, int32_t ___depth, String_t* ___attrName, String_t* ___attrNS, Il2CppObject * ___attrValue, bool ___isXsiNil, ArrayList_t2121638921 * ___currentKeyFieldConsumers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
