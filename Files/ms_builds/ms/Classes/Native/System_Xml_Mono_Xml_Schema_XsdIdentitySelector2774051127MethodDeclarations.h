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

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t2774051127;
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t4094864978;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t36593264;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t4044704868;
// Mono.Xml.Schema.XsdIdentityField[]
struct XsdIdentityFieldU5BU5D_t1094164877;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaXPath4094864978.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField4044704868.h"

// System.Void Mono.Xml.Schema.XsdIdentitySelector::.ctor(System.Xml.Schema.XmlSchemaXPath)
extern "C"  void XsdIdentitySelector__ctor_m4035241194 (XsdIdentitySelector_t2774051127 * __this, XmlSchemaXPath_t4094864978 * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath[] Mono.Xml.Schema.XsdIdentitySelector::get_Paths()
extern "C"  XsdIdentityPathU5BU5D_t36593264* XsdIdentitySelector_get_Paths_m3765529913 (XsdIdentitySelector_t2774051127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIdentitySelector::AddField(Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdIdentitySelector_AddField_m3757938105 (XsdIdentitySelector_t2774051127 * __this, XsdIdentityField_t4044704868 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityField[] Mono.Xml.Schema.XsdIdentitySelector::get_Fields()
extern "C"  XsdIdentityFieldU5BU5D_t1094164877* XsdIdentitySelector_get_Fields_m962948175 (XsdIdentitySelector_t2774051127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
