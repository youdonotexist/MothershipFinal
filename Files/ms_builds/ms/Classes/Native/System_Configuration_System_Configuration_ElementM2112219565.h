#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1910224309;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ElementMap
struct  ElementMap_t2112219565  : public Il2CppObject
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::properties
	ConfigurationPropertyCollection_t1125014 * ___properties_1;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ElementMap::collectionAttribute
	ConfigurationCollectionAttribute_t1910224309 * ___collectionAttribute_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(ElementMap_t2112219565, ___properties_1)); }
	inline ConfigurationPropertyCollection_t1125014 * get_properties_1() const { return ___properties_1; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ConfigurationPropertyCollection_t1125014 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier(&___properties_1, value);
	}

	inline static int32_t get_offset_of_collectionAttribute_2() { return static_cast<int32_t>(offsetof(ElementMap_t2112219565, ___collectionAttribute_2)); }
	inline ConfigurationCollectionAttribute_t1910224309 * get_collectionAttribute_2() const { return ___collectionAttribute_2; }
	inline ConfigurationCollectionAttribute_t1910224309 ** get_address_of_collectionAttribute_2() { return &___collectionAttribute_2; }
	inline void set_collectionAttribute_2(ConfigurationCollectionAttribute_t1910224309 * value)
	{
		___collectionAttribute_2 = value;
		Il2CppCodeGenWriteBarrier(&___collectionAttribute_2, value);
	}
};

struct ElementMap_t2112219565_StaticFields
{
public:
	// System.Collections.Hashtable System.Configuration.ElementMap::elementMaps
	Hashtable_t3875263730 * ___elementMaps_0;

public:
	inline static int32_t get_offset_of_elementMaps_0() { return static_cast<int32_t>(offsetof(ElementMap_t2112219565_StaticFields, ___elementMaps_0)); }
	inline Hashtable_t3875263730 * get_elementMaps_0() const { return ___elementMaps_0; }
	inline Hashtable_t3875263730 ** get_address_of_elementMaps_0() { return &___elementMaps_0; }
	inline void set_elementMaps_0(Hashtable_t3875263730 * value)
	{
		___elementMaps_0 = value;
		Il2CppCodeGenWriteBarrier(&___elementMaps_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
