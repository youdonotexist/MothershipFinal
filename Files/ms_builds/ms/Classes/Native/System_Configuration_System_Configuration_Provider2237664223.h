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

#include "System_Configuration_System_Configuration_Configur1006530897.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProviderSettingsCollection
struct  ProviderSettingsCollection_t2237664223  : public ConfigurationElementCollection_t1006530897
{
public:

public:
};

struct ProviderSettingsCollection_t2237664223_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::props
	ConfigurationPropertyCollection_t1125014 * ___props_23;

public:
	inline static int32_t get_offset_of_props_23() { return static_cast<int32_t>(offsetof(ProviderSettingsCollection_t2237664223_StaticFields, ___props_23)); }
	inline ConfigurationPropertyCollection_t1125014 * get_props_23() const { return ___props_23; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_props_23() { return &___props_23; }
	inline void set_props_23(ConfigurationPropertyCollection_t1125014 * value)
	{
		___props_23 = value;
		Il2CppCodeGenWriteBarrier(&___props_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
