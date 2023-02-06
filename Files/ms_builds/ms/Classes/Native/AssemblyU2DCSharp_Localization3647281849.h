#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Localization/LoadFunction
struct LoadFunction_t2829036286;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t299600851;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Localization
struct  Localization_t3647281849  : public Il2CppObject
{
public:

public:
};

struct Localization_t3647281849_StaticFields
{
public:
	// Localization/LoadFunction Localization::loadFunction
	LoadFunction_t2829036286 * ___loadFunction_0;
	// System.Boolean Localization::localizationHasBeenSet
	bool ___localizationHasBeenSet_1;
	// System.String[] Localization::mLanguages
	StringU5BU5D_t2956870243* ___mLanguages_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Localization::mOldDictionary
	Dictionary_2_t2606186806 * ___mOldDictionary_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> Localization::mDictionary
	Dictionary_2_t299600851 * ___mDictionary_4;
	// System.Int32 Localization::mLanguageIndex
	int32_t ___mLanguageIndex_5;
	// System.String Localization::mLanguage
	String_t* ___mLanguage_6;

public:
	inline static int32_t get_offset_of_loadFunction_0() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___loadFunction_0)); }
	inline LoadFunction_t2829036286 * get_loadFunction_0() const { return ___loadFunction_0; }
	inline LoadFunction_t2829036286 ** get_address_of_loadFunction_0() { return &___loadFunction_0; }
	inline void set_loadFunction_0(LoadFunction_t2829036286 * value)
	{
		___loadFunction_0 = value;
		Il2CppCodeGenWriteBarrier(&___loadFunction_0, value);
	}

	inline static int32_t get_offset_of_localizationHasBeenSet_1() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___localizationHasBeenSet_1)); }
	inline bool get_localizationHasBeenSet_1() const { return ___localizationHasBeenSet_1; }
	inline bool* get_address_of_localizationHasBeenSet_1() { return &___localizationHasBeenSet_1; }
	inline void set_localizationHasBeenSet_1(bool value)
	{
		___localizationHasBeenSet_1 = value;
	}

	inline static int32_t get_offset_of_mLanguages_2() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___mLanguages_2)); }
	inline StringU5BU5D_t2956870243* get_mLanguages_2() const { return ___mLanguages_2; }
	inline StringU5BU5D_t2956870243** get_address_of_mLanguages_2() { return &___mLanguages_2; }
	inline void set_mLanguages_2(StringU5BU5D_t2956870243* value)
	{
		___mLanguages_2 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguages_2, value);
	}

	inline static int32_t get_offset_of_mOldDictionary_3() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___mOldDictionary_3)); }
	inline Dictionary_2_t2606186806 * get_mOldDictionary_3() const { return ___mOldDictionary_3; }
	inline Dictionary_2_t2606186806 ** get_address_of_mOldDictionary_3() { return &___mOldDictionary_3; }
	inline void set_mOldDictionary_3(Dictionary_2_t2606186806 * value)
	{
		___mOldDictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&___mOldDictionary_3, value);
	}

	inline static int32_t get_offset_of_mDictionary_4() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___mDictionary_4)); }
	inline Dictionary_2_t299600851 * get_mDictionary_4() const { return ___mDictionary_4; }
	inline Dictionary_2_t299600851 ** get_address_of_mDictionary_4() { return &___mDictionary_4; }
	inline void set_mDictionary_4(Dictionary_2_t299600851 * value)
	{
		___mDictionary_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDictionary_4, value);
	}

	inline static int32_t get_offset_of_mLanguageIndex_5() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___mLanguageIndex_5)); }
	inline int32_t get_mLanguageIndex_5() const { return ___mLanguageIndex_5; }
	inline int32_t* get_address_of_mLanguageIndex_5() { return &___mLanguageIndex_5; }
	inline void set_mLanguageIndex_5(int32_t value)
	{
		___mLanguageIndex_5 = value;
	}

	inline static int32_t get_offset_of_mLanguage_6() { return static_cast<int32_t>(offsetof(Localization_t3647281849_StaticFields, ___mLanguage_6)); }
	inline String_t* get_mLanguage_6() const { return ___mLanguage_6; }
	inline String_t** get_address_of_mLanguage_6() { return &___mLanguage_6; }
	inline void set_mLanguage_6(String_t* value)
	{
		___mLanguage_6 = value;
		Il2CppCodeGenWriteBarrier(&___mLanguage_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
