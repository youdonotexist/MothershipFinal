#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exAtlas
struct exAtlas_t2942648216;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "AssemblyU2DCSharp_Singleton_1_gen726022080.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceManager
struct  ResourceManager_t473206687  : public Singleton_1_t726022080
{
public:
	// exAtlas ResourceManager::nesAtlas
	exAtlas_t2942648216 * ___nesAtlas_5;
	// exAtlas ResourceManager::msAtlas
	exAtlas_t2942648216 * ___msAtlas_6;
	// exAtlas ResourceManager::snesAtlas
	exAtlas_t2942648216 * ___snesAtlas_7;
	// exAtlas ResourceManager::psAtlas
	exAtlas_t2942648216 * ___psAtlas_8;

public:
	inline static int32_t get_offset_of_nesAtlas_5() { return static_cast<int32_t>(offsetof(ResourceManager_t473206687, ___nesAtlas_5)); }
	inline exAtlas_t2942648216 * get_nesAtlas_5() const { return ___nesAtlas_5; }
	inline exAtlas_t2942648216 ** get_address_of_nesAtlas_5() { return &___nesAtlas_5; }
	inline void set_nesAtlas_5(exAtlas_t2942648216 * value)
	{
		___nesAtlas_5 = value;
		Il2CppCodeGenWriteBarrier(&___nesAtlas_5, value);
	}

	inline static int32_t get_offset_of_msAtlas_6() { return static_cast<int32_t>(offsetof(ResourceManager_t473206687, ___msAtlas_6)); }
	inline exAtlas_t2942648216 * get_msAtlas_6() const { return ___msAtlas_6; }
	inline exAtlas_t2942648216 ** get_address_of_msAtlas_6() { return &___msAtlas_6; }
	inline void set_msAtlas_6(exAtlas_t2942648216 * value)
	{
		___msAtlas_6 = value;
		Il2CppCodeGenWriteBarrier(&___msAtlas_6, value);
	}

	inline static int32_t get_offset_of_snesAtlas_7() { return static_cast<int32_t>(offsetof(ResourceManager_t473206687, ___snesAtlas_7)); }
	inline exAtlas_t2942648216 * get_snesAtlas_7() const { return ___snesAtlas_7; }
	inline exAtlas_t2942648216 ** get_address_of_snesAtlas_7() { return &___snesAtlas_7; }
	inline void set_snesAtlas_7(exAtlas_t2942648216 * value)
	{
		___snesAtlas_7 = value;
		Il2CppCodeGenWriteBarrier(&___snesAtlas_7, value);
	}

	inline static int32_t get_offset_of_psAtlas_8() { return static_cast<int32_t>(offsetof(ResourceManager_t473206687, ___psAtlas_8)); }
	inline exAtlas_t2942648216 * get_psAtlas_8() const { return ___psAtlas_8; }
	inline exAtlas_t2942648216 ** get_address_of_psAtlas_8() { return &___psAtlas_8; }
	inline void set_psAtlas_8(exAtlas_t2942648216 * value)
	{
		___psAtlas_8 = value;
		Il2CppCodeGenWriteBarrier(&___psAtlas_8, value);
	}
};

struct ResourceManager_t473206687_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ResourceManager::QualityMapping
	Dictionary_2_t2606186806 * ___QualityMapping_9;

public:
	inline static int32_t get_offset_of_QualityMapping_9() { return static_cast<int32_t>(offsetof(ResourceManager_t473206687_StaticFields, ___QualityMapping_9)); }
	inline Dictionary_2_t2606186806 * get_QualityMapping_9() const { return ___QualityMapping_9; }
	inline Dictionary_2_t2606186806 ** get_address_of_QualityMapping_9() { return &___QualityMapping_9; }
	inline void set_QualityMapping_9(Dictionary_2_t2606186806 * value)
	{
		___QualityMapping_9 = value;
		Il2CppCodeGenWriteBarrier(&___QualityMapping_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
