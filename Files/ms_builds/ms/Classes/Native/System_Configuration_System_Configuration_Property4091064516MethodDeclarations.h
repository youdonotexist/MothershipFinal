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

// System.Configuration.PropertyInformation
struct PropertyInformation_t4091064516;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3905177107;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t646701464;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3905177107.h"
#include "System_Configuration_System_Configuration_Configura646701464.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Configuration_System_Configuration_Property4091064516.h"
#include "System_Configuration_System_Configuration_PropertyV581226383.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C"  void PropertyInformation__ctor_m2995128161 (PropertyInformation_t4091064516 * __this, ConfigurationElement_t3905177107 * ___owner, ConfigurationProperty_t646701464 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C"  Il2CppObject * PropertyInformation_get_DefaultValue_m905528750 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C"  bool PropertyInformation_get_IsKey_m1021649896 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C"  bool PropertyInformation_get_IsModified_m1510427202 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C"  void PropertyInformation_set_IsModified_m4292920263 (PropertyInformation_t4091064516 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C"  bool PropertyInformation_get_IsRequired_m463574424 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C"  String_t* PropertyInformation_get_Name_m1695013175 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C"  Type_t * PropertyInformation_get_Type_m1418850141 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.PropertyInformation::get_Value()
extern "C"  Il2CppObject * PropertyInformation_get_Value_m2894172117 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C"  void PropertyInformation_set_Value_m492965022 (PropertyInformation_t4091064516 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformation_Reset_m3588812145 (PropertyInformation_t4091064516 * __this, PropertyInformation_t4091064516 * ___parentProperty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C"  bool PropertyInformation_get_IsElement_m4046556485 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C"  int32_t PropertyInformation_get_ValueOrigin_m3595531756 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C"  String_t* PropertyInformation_GetStringValue_m1585019661 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C"  void PropertyInformation_SetStringValue_m1853091044 (PropertyInformation_t4091064516 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C"  ConfigurationProperty_t646701464 * PropertyInformation_get_Property_m1040359481 (PropertyInformation_t4091064516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
