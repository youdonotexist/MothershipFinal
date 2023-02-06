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

// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.String
struct String_t;
// System.Configuration.InternalConfigurationSystem
struct InternalConfigurationSystem_t3100008821;
// System.Configuration.Internal.IConfigSystem
struct IConfigSystem_t2387954486;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t4010632972;
// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1915884662;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t1568843613;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t219364891;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t939966970;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3243288060;
// System.Configuration.SectionInfo
struct SectionInfo_t1785214432;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3026026325;
// System.Xml.XmlReader
struct XmlReader_t4229084514;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur2274547107.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Internal3100008821.h"
#include "System_Configuration_System_Configuration_SectionI1785214432.h"
#include "System_Configuration_System_Configuration_SectionG3026026325.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"

// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern "C"  void Configuration__ctor_m1712686530 (Configuration_t2274547107 * __this, Configuration_t2274547107 * ___parent, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern "C"  void Configuration__ctor_m2511791728 (Configuration_t2274547107 * __this, InternalConfigurationSystem_t3100008821 * ___system, String_t* ___locationSubPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern "C"  Configuration_t2274547107 * Configuration_FindLocationConfiguration_m2344389824 (Configuration_t2274547107 * __this, String_t* ___relativePath, Configuration_t2274547107 * ___defaultConfiguration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern "C"  void Configuration_Init_m2756324488 (Configuration_t2274547107 * __this, Il2CppObject * ___system, String_t* ___configPath, Configuration_t2274547107 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C"  Configuration_t2274547107 * Configuration_get_Parent_m4109634498 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C"  void Configuration_set_Parent_m1155432391 (Configuration_t2274547107 * __this, Configuration_t2274547107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C"  Configuration_t2274547107 * Configuration_GetParentWithFile_m3380709909 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern "C"  Il2CppObject * Configuration_get_ConfigHost_m418627631 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C"  String_t* Configuration_get_LocationConfigPath_m1991016359 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C"  String_t* Configuration_get_ConfigPath_m3982728530 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::get_FilePath()
extern "C"  String_t* Configuration_get_FilePath_m2064340620 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C"  bool Configuration_get_HasFile_m1182408778 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern "C"  ConfigurationLocationCollection_t1915884662 * Configuration_get_Locations_m4165667707 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern "C"  ConfigurationSectionGroup_t1568843613 * Configuration_get_RootSectionGroup_m3061559546 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C"  ConfigurationSectionGroupCollection_t219364891 * Configuration_get_SectionGroups_m614791579 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C"  ConfigurationSectionCollection_t939966970 * Configuration_get_Sections_m2367917541 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern "C"  ConfigurationSection_t3243288060 * Configuration_GetSection_m598223879 (Configuration_t2274547107 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern "C"  ConfigurationSection_t3243288060 * Configuration_GetSectionInstance_m1119437385 (Configuration_t2274547107 * __this, SectionInfo_t1785214432 * ___config, bool ___createDefaultInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern "C"  ConfigurationSectionGroup_t1568843613 * Configuration_GetSectionGroupInstance_m1836884865 (Configuration_t2274547107 * __this, SectionGroupInfo_t3026026325 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C"  void Configuration_SetSectionXml_m435041335 (Configuration_t2274547107 * __this, SectionInfo_t1785214432 * ___config, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern "C"  String_t* Configuration_GetSectionXml_m1601149676 (Configuration_t2274547107 * __this, SectionInfo_t1785214432 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.Configuration::Load()
extern "C"  bool Configuration_Load_m1257171115 (Configuration_t2274547107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern "C"  void Configuration_ReadConfigFile_m126468843 (Configuration_t2274547107 * __this, XmlReader_t4229084514 * ___reader, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C"  void Configuration_ReadData_m2502527842 (Configuration_t2274547107 * __this, XmlReader_t4229084514 * ___reader, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern "C"  void Configuration_ThrowException_m4045333224 (Configuration_t2274547107 * __this, String_t* ___text, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
