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

#include "System_Configuration_System_Configuration_Configur3905177107.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t4054989245  : public ConfigurationElement_t3905177107
{
public:

public:
};

struct ConnectionManagementElement_t4054989245_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t646701464 * ___addressProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t646701464 * ___maxConnectionProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t4054989245_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of_addressProp_14() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t4054989245_StaticFields, ___addressProp_14)); }
	inline ConfigurationProperty_t646701464 * get_addressProp_14() const { return ___addressProp_14; }
	inline ConfigurationProperty_t646701464 ** get_address_of_addressProp_14() { return &___addressProp_14; }
	inline void set_addressProp_14(ConfigurationProperty_t646701464 * value)
	{
		___addressProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___addressProp_14, value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t4054989245_StaticFields, ___maxConnectionProp_15)); }
	inline ConfigurationProperty_t646701464 * get_maxConnectionProp_15() const { return ___maxConnectionProp_15; }
	inline ConfigurationProperty_t646701464 ** get_address_of_maxConnectionProp_15() { return &___maxConnectionProp_15; }
	inline void set_maxConnectionProp_15(ConfigurationProperty_t646701464 * value)
	{
		___maxConnectionProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___maxConnectionProp_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
