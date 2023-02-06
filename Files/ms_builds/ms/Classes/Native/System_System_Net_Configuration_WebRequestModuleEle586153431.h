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

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t586153431  : public ConfigurationElement_t3905177107
{
public:

public:
};

struct WebRequestModuleElement_t586153431_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t646701464 * ___prefixProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t646701464 * ___typeProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t586153431_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of_prefixProp_14() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t586153431_StaticFields, ___prefixProp_14)); }
	inline ConfigurationProperty_t646701464 * get_prefixProp_14() const { return ___prefixProp_14; }
	inline ConfigurationProperty_t646701464 ** get_address_of_prefixProp_14() { return &___prefixProp_14; }
	inline void set_prefixProp_14(ConfigurationProperty_t646701464 * value)
	{
		___prefixProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___prefixProp_14, value);
	}

	inline static int32_t get_offset_of_typeProp_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t586153431_StaticFields, ___typeProp_15)); }
	inline ConfigurationProperty_t646701464 * get_typeProp_15() const { return ___typeProp_15; }
	inline ConfigurationProperty_t646701464 ** get_address_of_typeProp_15() { return &___typeProp_15; }
	inline void set_typeProp_15(ConfigurationProperty_t646701464 * value)
	{
		___typeProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___typeProp_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
