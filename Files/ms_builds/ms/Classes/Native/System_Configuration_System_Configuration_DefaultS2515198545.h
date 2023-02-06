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

#include "System_Configuration_System_Configuration_Configur3243288060.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.DefaultSection
struct  DefaultSection_t2515198545  : public ConfigurationSection_t3243288060
{
public:

public:
};

struct DefaultSection_t2515198545_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_17;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(DefaultSection_t2515198545_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier(&___properties_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
