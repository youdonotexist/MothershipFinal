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

// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t3540886392;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t2274547107;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Configur2274547107.h"

// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern "C"  void ConfigurationLocation__ctor_m2394162372 (ConfigurationLocation_t3540886392 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t2274547107 * ___parent, bool ___allowOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern "C"  void ConfigurationLocation__cctor_m3183420957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C"  String_t* ConfigurationLocation_get_Path_m3448230469 (ConfigurationLocation_t3540886392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern "C"  Configuration_t2274547107 * ConfigurationLocation_OpenConfiguration_m1387186314 (ConfigurationLocation_t3540886392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C"  void ConfigurationLocation_SetParentConfiguration_m3406111519 (ConfigurationLocation_t3540886392 * __this, Configuration_t2274547107 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
