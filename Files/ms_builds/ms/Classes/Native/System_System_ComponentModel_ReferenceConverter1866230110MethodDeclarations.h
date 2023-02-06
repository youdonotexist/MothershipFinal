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

// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t1866230110;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4233601286;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1122570845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Object837106420.h"

// System.Boolean System.ComponentModel.ReferenceConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool ReferenceConverter_CanConvertFrom_m721774294 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  Il2CppObject * ReferenceConverter_ConvertFrom_m3736581690 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * ReferenceConverter_ConvertTo_m1982493436 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, CultureInfo_t3603717042 * ___culture, Il2CppObject * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.ReferenceConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C"  StandardValuesCollection_t1122570845 * ReferenceConverter_GetStandardValues_m3669313 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ReferenceConverter_GetStandardValuesExclusive_m3048678527 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ReferenceConverter_GetStandardValuesSupported_m3043827343 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C"  bool ReferenceConverter_IsValueAllowed_m3029388005 (ReferenceConverter_t1866230110 * __this, Il2CppObject * ___context, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
