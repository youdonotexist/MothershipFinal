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

// System.Configuration.ProviderSettings
struct ProviderSettings_t1469913633;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3455488335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"
#include "System_Configuration_System_Configuration_Configur3861998723.h"

// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C"  void ProviderSettings__ctor_m4285379927 (ProviderSettings_t1469913633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::.cctor()
extern "C"  void ProviderSettings__cctor_m3515662646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C"  bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m3817369066 (ProviderSettings_t1469913633 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C"  bool ProviderSettings_IsModified_m2983729594 (ProviderSettings_t1469913633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern "C"  void ProviderSettings_Reset_m952816369 (ProviderSettings_t1469913633 * __this, ConfigurationElement_t3905177107 * ___parentElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C"  void ProviderSettings_Unmerge_m3458508855 (ProviderSettings_t1469913633 * __this, ConfigurationElement_t3905177107 * ___source, ConfigurationElement_t3905177107 * ___parent, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Name()
extern "C"  String_t* ProviderSettings_get_Name_m2089129438 (ProviderSettings_t1469913633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ProviderSettings::get_Type()
extern "C"  String_t* ProviderSettings_get_Type_m2283158221 (ProviderSettings_t1469913633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern "C"  ConfigurationPropertyCollection_t1125014 * ProviderSettings_get_Properties_m1762981772 (ProviderSettings_t1469913633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern "C"  NameValueCollection_t3455488335 * ProviderSettings_get_Parameters_m3338168344 (ProviderSettings_t1469913633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
