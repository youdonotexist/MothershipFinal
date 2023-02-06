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

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t379478628;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t28828390;
// System.String
struct String_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t1318101562;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_Configuration_System_Configuration_Provider1318101562.h"

// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C"  void ProtectedConfigurationProviderCollection__ctor_m2297663604 (ProtectedConfigurationProviderCollection_t379478628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern "C"  ProtectedConfigurationProvider_t28828390 * ProtectedConfigurationProviderCollection_get_Item_m40970297 (ProtectedConfigurationProviderCollection_t379478628 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C"  void ProtectedConfigurationProviderCollection_Add_m4012533931 (ProtectedConfigurationProviderCollection_t379478628 * __this, ProviderBase_t1318101562 * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
