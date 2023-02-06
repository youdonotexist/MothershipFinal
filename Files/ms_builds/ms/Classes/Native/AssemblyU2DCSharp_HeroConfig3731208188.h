#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1654916945;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeroConfig
struct  HeroConfig_t3731208188  : public Il2CppObject
{
public:
	// System.String[] HeroConfig::directives
	StringU5BU5D_t2956870243* ___directives_0;
	// System.String HeroConfig::heroName
	String_t* ___heroName_1;
	// System.String HeroConfig::heroId
	String_t* ___heroId_2;
	// System.Collections.IDictionary HeroConfig::heroAttributes
	Il2CppObject * ___heroAttributes_3;

public:
	inline static int32_t get_offset_of_directives_0() { return static_cast<int32_t>(offsetof(HeroConfig_t3731208188, ___directives_0)); }
	inline StringU5BU5D_t2956870243* get_directives_0() const { return ___directives_0; }
	inline StringU5BU5D_t2956870243** get_address_of_directives_0() { return &___directives_0; }
	inline void set_directives_0(StringU5BU5D_t2956870243* value)
	{
		___directives_0 = value;
		Il2CppCodeGenWriteBarrier(&___directives_0, value);
	}

	inline static int32_t get_offset_of_heroName_1() { return static_cast<int32_t>(offsetof(HeroConfig_t3731208188, ___heroName_1)); }
	inline String_t* get_heroName_1() const { return ___heroName_1; }
	inline String_t** get_address_of_heroName_1() { return &___heroName_1; }
	inline void set_heroName_1(String_t* value)
	{
		___heroName_1 = value;
		Il2CppCodeGenWriteBarrier(&___heroName_1, value);
	}

	inline static int32_t get_offset_of_heroId_2() { return static_cast<int32_t>(offsetof(HeroConfig_t3731208188, ___heroId_2)); }
	inline String_t* get_heroId_2() const { return ___heroId_2; }
	inline String_t** get_address_of_heroId_2() { return &___heroId_2; }
	inline void set_heroId_2(String_t* value)
	{
		___heroId_2 = value;
		Il2CppCodeGenWriteBarrier(&___heroId_2, value);
	}

	inline static int32_t get_offset_of_heroAttributes_3() { return static_cast<int32_t>(offsetof(HeroConfig_t3731208188, ___heroAttributes_3)); }
	inline Il2CppObject * get_heroAttributes_3() const { return ___heroAttributes_3; }
	inline Il2CppObject ** get_address_of_heroAttributes_3() { return &___heroAttributes_3; }
	inline void set_heroAttributes_3(Il2CppObject * value)
	{
		___heroAttributes_3 = value;
		Il2CppCodeGenWriteBarrier(&___heroAttributes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
