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

// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4233601286;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1122570845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C"  void TypeConverter__ctor_m822402727 (TypeConverter_t3398830607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m1936585069 (TypeConverter_t3398830607 * __this, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertFrom_m2831256967 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool TypeConverter_CanConvertTo_m2871458648 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C"  Il2CppObject * TypeConverter_ConvertFrom_m4152138469 (TypeConverter_t3398830607 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * TypeConverter_ConvertFrom_m2983973965 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromInvariantString_m556598462 (TypeConverter_t3398830607 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromInvariantString_m3367749752 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C"  Il2CppObject * TypeConverter_ConvertFromString_m1826822058 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * TypeConverter_ConvertTo_m2251969871 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m232733647 (TypeConverter_t3398830607 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  String_t* TypeConverter_ConvertToInvariantString_m451735275 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  String_t* TypeConverter_ConvertToString_m3798919965 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C"  Exception_t1967233988 * TypeConverter_GetConvertFromException_m2409232696 (TypeConverter_t3398830607 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C"  Exception_t1967233988 * TypeConverter_GetConvertToException_m269920572 (TypeConverter_t3398830607 * __this, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetCreateInstanceSupported_m820991374 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * TypeConverter_GetProperties_m374885713 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, Il2CppObject * ___value, AttributeU5BU5D_t4076389004* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetPropertiesSupported_m3583767500 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t1122570845 * TypeConverter_GetStandardValues_m1051889776 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesExclusive_m863193904 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool TypeConverter_GetStandardValuesSupported_m858342720 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool TypeConverter_IsValid_m156616059 (TypeConverter_t3398830607 * __this, Il2CppObject * ___context, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
