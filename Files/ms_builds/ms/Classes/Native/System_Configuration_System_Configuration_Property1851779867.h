﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t573960898;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator
struct  PropertyInformationEnumerator_t1851779867  : public Il2CppObject
{
public:
	// System.Configuration.PropertyInformationCollection System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::collection
	PropertyInformationCollection_t573960898 * ___collection_0;
	// System.Int32 System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of_collection_0() { return static_cast<int32_t>(offsetof(PropertyInformationEnumerator_t1851779867, ___collection_0)); }
	inline PropertyInformationCollection_t573960898 * get_collection_0() const { return ___collection_0; }
	inline PropertyInformationCollection_t573960898 ** get_address_of_collection_0() { return &___collection_0; }
	inline void set_collection_0(PropertyInformationCollection_t573960898 * value)
	{
		___collection_0 = value;
		Il2CppCodeGenWriteBarrier(&___collection_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(PropertyInformationEnumerator_t1851779867, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
