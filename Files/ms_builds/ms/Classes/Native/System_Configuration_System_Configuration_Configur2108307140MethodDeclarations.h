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

// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Configuration.Internal.IInternalConfigConfigurationFactory
struct IInternalConfigConfigurationFactory_t3281261720;
// System.Configuration.Internal.IInternalConfigSystem
struct IInternalConfigSystem_t3080599955;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "System_Configuration_System_Configuration_Configura447161104.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Configuration.ConfigurationManager::.cctor()
extern "C"  void ConfigurationManager__cctor_m2231779865 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationManager::GetAssemblyInfo(System.Reflection.Assembly)
extern "C"  String_t* ConfigurationManager_GetAssemblyInfo_m2176095509 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationManager::OpenExeConfigurationInternal(System.Configuration.ConfigurationUserLevel,System.Reflection.Assembly,System.String)
extern "C"  Configuration_t2274547107 * ConfigurationManager_OpenExeConfigurationInternal_m705051979 (Il2CppObject * __this /* static, unused */, int32_t ___userLevel, Assembly_t1882292308 * ___calling_assembly, String_t* ___exePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigConfigurationFactory System.Configuration.ConfigurationManager::get_ConfigurationFactory()
extern "C"  Il2CppObject * ConfigurationManager_get_ConfigurationFactory_m2857363868 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::get_ConfigurationSystem()
extern "C"  Il2CppObject * ConfigurationManager_get_ConfigurationSystem_m2202583076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern "C"  Il2CppObject * ConfigurationManager_GetSection_m3454646136 (Il2CppObject * __this /* static, unused */, String_t* ___sectionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
