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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t982150520;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Type
struct Type_t;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo1490548369.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C"  void ReflectionPropertyDescriptor__ctor_m2999028035 (ReflectionPropertyDescriptor_t982150520 * __this, PropertyInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C"  PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m3398814953 (ReflectionPropertyDescriptor_t982150520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_ComponentType_m2721876476 (ReflectionPropertyDescriptor_t982150520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C"  Type_t * ReflectionPropertyDescriptor_get_PropertyType_m483693196 (ReflectionPropertyDescriptor_t982150520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void ReflectionPropertyDescriptor_FillAttributes_m3651363557 (ReflectionPropertyDescriptor_t982150520 * __this, Il2CppObject * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
