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

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t646701464;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t3688715482;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1910224309;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "System_Configuration_System_Configuration_Configur1606169632.h"
#include "System_System_ComponentModel_TypeConverter3398830607.h"
#include "System_Configuration_System_Configuration_Configur3688715482.h"
#include "System_Configuration_System_Configuration_Configur1910224309.h"

// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern "C"  void ConfigurationProperty__ctor_m3986062277 (ConfigurationProperty_t646701464 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern "C"  void ConfigurationProperty__ctor_m515000787 (ConfigurationProperty_t646701464 * __this, String_t* ___name, Type_t * ___type, Il2CppObject * ___default_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern "C"  void ConfigurationProperty__ctor_m3527050069 (ConfigurationProperty_t646701464 * __this, String_t* ___name, Type_t * ___type, Il2CppObject * ___default_value, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C"  void ConfigurationProperty__ctor_m1859680230 (ConfigurationProperty_t646701464 * __this, String_t* ___name, Type_t * ___type, Il2CppObject * ___default_value, TypeConverter_t3398830607 * ___converter, ConfigurationValidatorBase_t3688715482 * ___validation, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern "C"  void ConfigurationProperty__ctor_m1591137698 (ConfigurationProperty_t646701464 * __this, String_t* ___name, Type_t * ___type, Il2CppObject * ___default_value, TypeConverter_t3398830607 * ___converter, ConfigurationValidatorBase_t3688715482 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern "C"  void ConfigurationProperty__cctor_m1268661309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C"  Il2CppObject * ConfigurationProperty_get_DefaultValue_m4022235458 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C"  bool ConfigurationProperty_get_IsKey_m1860200212 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C"  bool ConfigurationProperty_get_IsRequired_m2387439084 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C"  bool ConfigurationProperty_get_IsDefaultCollection_m1180572020 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C"  String_t* ConfigurationProperty_get_Name_m1552741707 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C"  Type_t * ConfigurationProperty_get_Type_m864000433 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C"  ConfigurationValidatorBase_t3688715482 * ConfigurationProperty_get_Validator_m3872693608 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern "C"  Il2CppObject * ConfigurationProperty_ConvertFromString_m3996274171 (ConfigurationProperty_t646701464 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern "C"  String_t* ConfigurationProperty_ConvertToString_m2975372170 (ConfigurationProperty_t646701464 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern "C"  bool ConfigurationProperty_get_IsElement_m1614764657 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C"  ConfigurationCollectionAttribute_t1910224309 * ConfigurationProperty_get_CollectionAttribute_m544307023 (ConfigurationProperty_t646701464 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C"  void ConfigurationProperty_set_CollectionAttribute_m2272975908 (ConfigurationProperty_t646701464 * __this, ConfigurationCollectionAttribute_t1910224309 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C"  void ConfigurationProperty_Validate_m1133339114 (ConfigurationProperty_t646701464 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
