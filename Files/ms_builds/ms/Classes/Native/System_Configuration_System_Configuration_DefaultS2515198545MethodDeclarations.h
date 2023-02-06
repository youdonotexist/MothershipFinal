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

// System.Configuration.DefaultSection
struct DefaultSection_t2515198545;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.String
struct String_t;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Configur3861998723.h"

// System.Void System.Configuration.DefaultSection::.ctor()
extern "C"  void DefaultSection__ctor_m3355962663 (DefaultSection_t2515198545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::.cctor()
extern "C"  void DefaultSection__cctor_m473531238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C"  void DefaultSection_DeserializeSection_m2013795743 (DefaultSection_t2515198545 * __this, XmlReader_t4229084514 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C"  bool DefaultSection_IsModified_m2687275626 (DefaultSection_t2515198545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C"  void DefaultSection_Reset_m638952737 (DefaultSection_t2515198545 * __this, ConfigurationElement_t3905177107 * ___parentSection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C"  void DefaultSection_ResetModified_m3940623741 (DefaultSection_t2515198545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C"  String_t* DefaultSection_SerializeSection_m2589391221 (DefaultSection_t2515198545 * __this, ConfigurationElement_t3905177107 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t1125014 * DefaultSection_get_Properties_m1817206396 (DefaultSection_t2515198545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
