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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3839011043;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3398830607;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;
// System.Object
struct Il2CppObject;
// System.Attribute[]
struct AttributeU5BU5D_t4076389004;
// System.EventArgs
struct EventArgs_t516466188;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t2454691284;
// System.ComponentModel.IComponent
struct IComponent_t3388063069;
// System.ComponentModel.TypeInfo
struct TypeInfo_t3632586193;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m3479835389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t3839011043 * TypeDescriptor_GetAttributes_m76214042 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t2121638921 * TypeDescriptor_get_DefaultConverters_m2146028793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t3398830607 * TypeDescriptor_GetConverter_m3690153075 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1892798521 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C"  PropertyDescriptorCollection_t3591325611 * TypeDescriptor_GetProperties_m1457495824 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, AttributeU5BU5D_t4076389004* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C"  PropertyDescriptorCollection_t3591325611 * TypeDescriptor_GetProperties_m3966546541 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, AttributeU5BU5D_t4076389004* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C"  void TypeDescriptor_OnComponentDisposed_m3490261899 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender, EventArgs_t516466188 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C"  ComponentInfo_t2454691284 * TypeDescriptor_GetComponentInfo_m2720622557 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t3632586193 * TypeDescriptor_GetTypeInfo_m3750021697 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m554158078 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
