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

#include "System_Configuration_System_Configuration_Configur3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t3824751287  : public ConfigurationElement_t3905177107
{
public:

public:
};

struct PerformanceCountersElement_t3824751287_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t646701464 * ___enabledProp_13;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_14;

public:
	inline static int32_t get_offset_of_enabledProp_13() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t3824751287_StaticFields, ___enabledProp_13)); }
	inline ConfigurationProperty_t646701464 * get_enabledProp_13() const { return ___enabledProp_13; }
	inline ConfigurationProperty_t646701464 ** get_address_of_enabledProp_13() { return &___enabledProp_13; }
	inline void set_enabledProp_13(ConfigurationProperty_t646701464 * value)
	{
		___enabledProp_13 = value;
		Il2CppCodeGenWriteBarrier(&___enabledProp_13, value);
	}

	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t3824751287_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
