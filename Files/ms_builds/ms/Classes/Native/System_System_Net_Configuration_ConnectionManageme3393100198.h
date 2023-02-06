#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t646701464;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;

#include "System_Configuration_System_Configuration_Configur3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t3393100198  : public ConfigurationSection_t3243288060
{
public:

public:
};

struct ConnectionManagementSection_t3393100198_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t646701464 * ___connectionManagementProp_17;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_18;

public:
	inline static int32_t get_offset_of_connectionManagementProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t3393100198_StaticFields, ___connectionManagementProp_17)); }
	inline ConfigurationProperty_t646701464 * get_connectionManagementProp_17() const { return ___connectionManagementProp_17; }
	inline ConfigurationProperty_t646701464 ** get_address_of_connectionManagementProp_17() { return &___connectionManagementProp_17; }
	inline void set_connectionManagementProp_17(ConfigurationProperty_t646701464 * value)
	{
		___connectionManagementProp_17 = value;
		Il2CppCodeGenWriteBarrier(&___connectionManagementProp_17, value);
	}

	inline static int32_t get_offset_of_properties_18() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t3393100198_StaticFields, ___properties_18)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_18() const { return ___properties_18; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_18() { return &___properties_18; }
	inline void set_properties_18(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_18 = value;
		Il2CppCodeGenWriteBarrier(&___properties_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
