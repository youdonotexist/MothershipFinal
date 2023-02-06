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

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t939966970;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3026026325;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3664159698;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3243288060;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur2274547107.h"
#include "System_Configuration_System_Configuration_SectionG3026026325.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionCollection__ctor_m3417541132 (ConfigurationSectionCollection_t939966970 * __this, Configuration_t2274547107 * ___config, SectionGroupInfo_t3026026325 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C"  KeysCollection_t3664159698 * ConfigurationSectionCollection_get_Keys_m4007738911 (ConfigurationSectionCollection_t939966970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C"  int32_t ConfigurationSectionCollection_get_Count_m2797096994 (ConfigurationSectionCollection_t939966970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C"  ConfigurationSection_t3243288060 * ConfigurationSectionCollection_get_Item_m1008055693 (ConfigurationSectionCollection_t939966970 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionCollection_GetEnumerator_m116552048 (ConfigurationSectionCollection_t939966970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionCollection_GetObjectData_m1708760124 (ConfigurationSectionCollection_t939966970 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
