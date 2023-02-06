#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t646701464;

#include "System_Configuration_System_Configuration_Configur3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t3139424987  : public ConfigurationSection_t3243288060
{
public:

public:
};

struct WebRequestModulesSection_t3139424987_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t646701464 * ___webRequestModulesProp_18;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t3139424987_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier(&___properties_17, value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_18() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t3139424987_StaticFields, ___webRequestModulesProp_18)); }
	inline ConfigurationProperty_t646701464 * get_webRequestModulesProp_18() const { return ___webRequestModulesProp_18; }
	inline ConfigurationProperty_t646701464 ** get_address_of_webRequestModulesProp_18() { return &___webRequestModulesProp_18; }
	inline void set_webRequestModulesProp_18(ConfigurationProperty_t646701464 * value)
	{
		___webRequestModulesProp_18 = value;
		Il2CppCodeGenWriteBarrier(&___webRequestModulesProp_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
