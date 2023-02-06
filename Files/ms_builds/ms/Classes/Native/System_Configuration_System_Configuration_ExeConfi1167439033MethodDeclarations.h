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

// System.Configuration.ExeConfigurationHost
struct ExeConfigurationHost_t1167439033;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t4010930758;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C"  void ExeConfigurationHost__ctor_m957968831 (ExeConfigurationHost_t1167439033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_Init_m367743737 (ExeConfigurationHost_t1167439033 * __this, Il2CppObject * ___root, ObjectU5BU5D_t11523773* ___hostInitParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern "C"  String_t* ExeConfigurationHost_GetStreamName_m1983209793 (ExeConfigurationHost_t1167439033 * __this, String_t* ___configPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_InitForConfiguration_m706706708 (ExeConfigurationHost_t1167439033 * __this, String_t** ___locationSubPath, String_t** ___configPath, String_t** ___locationConfigPath, Il2CppObject * ___root, ObjectU5BU5D_t11523773* ___hostInitConfigurationParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
