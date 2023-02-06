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

// System.Configuration.SectionInfo
struct SectionInfo_t1785214432;
// System.Object
struct Il2CppObject;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Configuration.ConfigInfo
struct ConfigInfo_t2367485949;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur2274547107.h"
#include "mscorlib_System_String968488902.h"
#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Configuration_System_Configuration_ConfigIn2367485949.h"

// System.Void System.Configuration.SectionInfo::.ctor()
extern "C"  void SectionInfo__ctor_m772573224 (SectionInfo_t1785214432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern "C"  Il2CppObject * SectionInfo_CreateInstance_m2554778498 (SectionInfo_t1785214432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern "C"  void SectionInfo_ReadConfig_m1839267793 (SectionInfo_t1785214432 * __this, Configuration_t2274547107 * ___cfg, String_t* ___streamName, XmlReader_t4229084514 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C"  void SectionInfo_ReadData_m4262697656 (SectionInfo_t1785214432 * __this, Configuration_t2274547107 * ___config, XmlReader_t4229084514 * ___reader, bool ___overrideAllowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C"  void SectionInfo_Merge_m3183891725 (SectionInfo_t1785214432 * __this, ConfigInfo_t2367485949 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
