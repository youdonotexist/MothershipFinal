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

// System.ComponentModel.ComponentConverter
struct ComponentConverter_t1185010668;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4233601286;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * ComponentConverter_GetProperties_m2333172470 (ComponentConverter_t1185010668 * __this, Il2CppObject * ___context, Il2CppObject * ___value, AttributeU5BU5D_t4076389004* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C"  bool ComponentConverter_GetPropertiesSupported_m3888260265 (ComponentConverter_t1185010668 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
