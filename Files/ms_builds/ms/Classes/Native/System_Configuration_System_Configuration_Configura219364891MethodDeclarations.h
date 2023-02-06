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

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t219364891;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3026026325;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3664159698;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1568843613;
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

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroupCollection__ctor_m2539860411 (ConfigurationSectionGroupCollection_t219364891 * __this, Configuration_t2274547107 * ___config, SectionGroupInfo_t3026026325 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C"  KeysCollection_t3664159698 * ConfigurationSectionGroupCollection_get_Keys_m1573863704 (ConfigurationSectionGroupCollection_t219364891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C"  int32_t ConfigurationSectionGroupCollection_get_Count_m3734034513 (ConfigurationSectionGroupCollection_t219364891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C"  ConfigurationSectionGroup_t1568843613 * ConfigurationSectionGroupCollection_get_Item_m732451449 (ConfigurationSectionGroupCollection_t219364891 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionGroupCollection_GetEnumerator_m2304591979 (ConfigurationSectionGroupCollection_t219364891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionGroupCollection_GetObjectData_m1085667179 (ConfigurationSectionGroupCollection_t219364891 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
