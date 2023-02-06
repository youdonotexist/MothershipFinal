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

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t573960898;
// System.Configuration.PropertyInformation
struct PropertyInformation_t4091064516;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Property4091064516.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C"  void PropertyInformationCollection__ctor_m112722822 (PropertyInformationCollection_t573960898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C"  PropertyInformation_t4091064516 * PropertyInformationCollection_get_Item_m3430369369 (PropertyInformationCollection_t573960898 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C"  Il2CppObject * PropertyInformationCollection_GetEnumerator_m941901092 (PropertyInformationCollection_t573960898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformationCollection_Add_m3035181765 (PropertyInformationCollection_t573960898 * __this, PropertyInformation_t4091064516 * ___pi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void PropertyInformationCollection_GetObjectData_m3034333220 (PropertyInformationCollection_t573960898 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
