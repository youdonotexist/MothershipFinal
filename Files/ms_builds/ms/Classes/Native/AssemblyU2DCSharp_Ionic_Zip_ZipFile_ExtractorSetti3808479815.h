#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Ionic_Zip_SelfExtractorFlavor1861780173.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ZipFile/ExtractorSettings
struct  ExtractorSettings_t3808479815  : public Il2CppObject
{
public:
	// Ionic.Zip.SelfExtractorFlavor Ionic.Zip.ZipFile/ExtractorSettings::Flavor
	int32_t ___Flavor_0;
	// System.Collections.Generic.List`1<System.String> Ionic.Zip.ZipFile/ExtractorSettings::ReferencedAssemblies
	List_1_t1765447871 * ___ReferencedAssemblies_1;
	// System.Collections.Generic.List`1<System.String> Ionic.Zip.ZipFile/ExtractorSettings::CopyThroughResources
	List_1_t1765447871 * ___CopyThroughResources_2;
	// System.Collections.Generic.List`1<System.String> Ionic.Zip.ZipFile/ExtractorSettings::ResourcesToCompile
	List_1_t1765447871 * ___ResourcesToCompile_3;

public:
	inline static int32_t get_offset_of_Flavor_0() { return static_cast<int32_t>(offsetof(ExtractorSettings_t3808479815, ___Flavor_0)); }
	inline int32_t get_Flavor_0() const { return ___Flavor_0; }
	inline int32_t* get_address_of_Flavor_0() { return &___Flavor_0; }
	inline void set_Flavor_0(int32_t value)
	{
		___Flavor_0 = value;
	}

	inline static int32_t get_offset_of_ReferencedAssemblies_1() { return static_cast<int32_t>(offsetof(ExtractorSettings_t3808479815, ___ReferencedAssemblies_1)); }
	inline List_1_t1765447871 * get_ReferencedAssemblies_1() const { return ___ReferencedAssemblies_1; }
	inline List_1_t1765447871 ** get_address_of_ReferencedAssemblies_1() { return &___ReferencedAssemblies_1; }
	inline void set_ReferencedAssemblies_1(List_1_t1765447871 * value)
	{
		___ReferencedAssemblies_1 = value;
		Il2CppCodeGenWriteBarrier(&___ReferencedAssemblies_1, value);
	}

	inline static int32_t get_offset_of_CopyThroughResources_2() { return static_cast<int32_t>(offsetof(ExtractorSettings_t3808479815, ___CopyThroughResources_2)); }
	inline List_1_t1765447871 * get_CopyThroughResources_2() const { return ___CopyThroughResources_2; }
	inline List_1_t1765447871 ** get_address_of_CopyThroughResources_2() { return &___CopyThroughResources_2; }
	inline void set_CopyThroughResources_2(List_1_t1765447871 * value)
	{
		___CopyThroughResources_2 = value;
		Il2CppCodeGenWriteBarrier(&___CopyThroughResources_2, value);
	}

	inline static int32_t get_offset_of_ResourcesToCompile_3() { return static_cast<int32_t>(offsetof(ExtractorSettings_t3808479815, ___ResourcesToCompile_3)); }
	inline List_1_t1765447871 * get_ResourcesToCompile_3() const { return ___ResourcesToCompile_3; }
	inline List_1_t1765447871 ** get_address_of_ResourcesToCompile_3() { return &___ResourcesToCompile_3; }
	inline void set_ResourcesToCompile_3(List_1_t1765447871 * value)
	{
		___ResourcesToCompile_3 = value;
		Il2CppCodeGenWriteBarrier(&___ResourcesToCompile_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
