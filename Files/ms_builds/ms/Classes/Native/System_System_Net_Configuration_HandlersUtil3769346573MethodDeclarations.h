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

// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t3592213601;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlNode3592213601.h"

// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode)
extern "C"  String_t* HandlersUtil_ExtractAttributeValue_m3662402895 (Il2CppObject * __this /* static, unused */, String_t* ___attKey, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Configuration.HandlersUtil::ExtractAttributeValue(System.String,System.Xml.XmlNode,System.Boolean)
extern "C"  String_t* HandlersUtil_ExtractAttributeValue_m3946010190 (Il2CppObject * __this /* static, unused */, String_t* ___attKey, XmlNode_t3592213601 * ___node, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.HandlersUtil::ThrowException(System.String,System.Xml.XmlNode)
extern "C"  void HandlersUtil_ThrowException_m2228140919 (Il2CppObject * __this /* static, unused */, String_t* ___msg, XmlNode_t3592213601 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
