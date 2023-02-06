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

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1568843613;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3026026325;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t219364891;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t939966970;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur2274547107.h"
#include "System_Configuration_System_Configuration_SectionG3026026325.h"

// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C"  void ConfigurationSectionGroup__ctor_m2772416843 (ConfigurationSectionGroup_t1568843613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern "C"  Configuration_t2274547107 * ConfigurationSectionGroup_get_Config_m2807832724 (ConfigurationSectionGroup_t1568843613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroup_Initialize_m816537495 (ConfigurationSectionGroup_t1568843613 * __this, Configuration_t2274547107 * ___config, SectionGroupInfo_t3026026325 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t219364891 * ConfigurationSectionGroup_get_SectionGroups_m3361189921 (ConfigurationSectionGroup_t1568843613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern "C"  ConfigurationSectionCollection_t939966970 * ConfigurationSectionGroup_get_Sections_m3835769119 (ConfigurationSectionGroup_t1568843613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
