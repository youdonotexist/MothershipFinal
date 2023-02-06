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

// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3500269194;
// System.Configuration.ProviderSettingsCollection
struct ProviderSettingsCollection_t2237664223;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t379478628;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t28828390;
// System.Configuration.ProviderSettings
struct ProviderSettings_t1469913633;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Provider1469913633.h"

// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern "C"  void ProtectedConfigurationSection__cctor_m3673819823 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern "C"  ProviderSettingsCollection_t2237664223 * ProtectedConfigurationSection_get_Providers_m2992613259 (ProtectedConfigurationSection_t3500269194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern "C"  ConfigurationPropertyCollection_t1125014 * ProtectedConfigurationSection_get_Properties_m1794991967 (ProtectedConfigurationSection_t3500269194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern "C"  ProtectedConfigurationProviderCollection_t379478628 * ProtectedConfigurationSection_GetAllProviders_m625639758 (ProtectedConfigurationSection_t3500269194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern "C"  ProtectedConfigurationProvider_t28828390 * ProtectedConfigurationSection_InstantiateProvider_m2857613203 (ProtectedConfigurationSection_t3500269194 * __this, ProviderSettings_t1469913633 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
