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

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3696234203;
// System.Xml.XmlReader
struct XmlReader_t4229084514;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_XmlQualifiedName176365656.h"

// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C"  void XmlQualifiedName__ctor_m860454331 (XmlQualifiedName_t176365656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C"  void XmlQualifiedName__ctor_m1244498215 (XmlQualifiedName_t176365656 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C"  void XmlQualifiedName__ctor_m2754617635 (XmlQualifiedName_t176365656 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C"  void XmlQualifiedName__cctor_m422184274 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C"  bool XmlQualifiedName_get_IsEmpty_m107427003 (XmlQualifiedName_t176365656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C"  String_t* XmlQualifiedName_get_Name_m607016698 (XmlQualifiedName_t176365656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C"  String_t* XmlQualifiedName_get_Namespace_m2987642414 (XmlQualifiedName_t176365656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C"  bool XmlQualifiedName_Equals_m129870964 (XmlQualifiedName_t176365656 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C"  int32_t XmlQualifiedName_GetHashCode_m166934412 (XmlQualifiedName_t176365656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C"  String_t* XmlQualifiedName_ToString_m4263709074 (XmlQualifiedName_t176365656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
extern "C"  XmlQualifiedName_t176365656 * XmlQualifiedName_Parse_m2435950237 (Il2CppObject * __this /* static, unused */, String_t* ___name, Il2CppObject * ___resolver, bool ___considerDefaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.XmlReader)
extern "C"  XmlQualifiedName_t176365656 * XmlQualifiedName_Parse_m2976205369 (Il2CppObject * __this /* static, unused */, String_t* ___name, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Equality_m273752697 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___a, XmlQualifiedName_t176365656 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C"  bool XmlQualifiedName_op_Inequality_m188426612 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t176365656 * ___a, XmlQualifiedName_t176365656 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
