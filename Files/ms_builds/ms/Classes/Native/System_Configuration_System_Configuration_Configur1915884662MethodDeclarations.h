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

// System.Configuration.ConfigurationLocationCollection
struct ConfigurationLocationCollection_t1915884662;
// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t3540886392;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3540886392.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C"  void ConfigurationLocationCollection__ctor_m3433272914 (ConfigurationLocationCollection_t1915884662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C"  void ConfigurationLocationCollection_Add_m3989327005 (ConfigurationLocationCollection_t1915884662 * __this, ConfigurationLocation_t3540886392 * ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern "C"  ConfigurationLocation_t3540886392 * ConfigurationLocationCollection_Find_m4125888732 (ConfigurationLocationCollection_t1915884662 * __this, String_t* ___location, const MethodInfo* method) IL2CPP_METHOD_ATTR;
