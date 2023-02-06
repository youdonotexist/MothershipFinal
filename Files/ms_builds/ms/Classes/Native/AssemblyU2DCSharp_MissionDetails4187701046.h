#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Singleton_1_gen145549143.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissionDetails
struct  MissionDetails_t4187701046  : public Singleton_1_t145549143
{
public:
	// System.String MissionDetails::encounterId
	String_t* ___encounterId_5;
	// System.String MissionDetails::encounterType
	String_t* ___encounterType_6;
	// System.Int32 MissionDetails::encounterIndex
	int32_t ___encounterIndex_7;
	// System.String MissionDetails::encounterStoryTeller
	String_t* ___encounterStoryTeller_8;
	// System.String MissionDetails::encounterOneLiner
	String_t* ___encounterOneLiner_9;

public:
	inline static int32_t get_offset_of_encounterId_5() { return static_cast<int32_t>(offsetof(MissionDetails_t4187701046, ___encounterId_5)); }
	inline String_t* get_encounterId_5() const { return ___encounterId_5; }
	inline String_t** get_address_of_encounterId_5() { return &___encounterId_5; }
	inline void set_encounterId_5(String_t* value)
	{
		___encounterId_5 = value;
		Il2CppCodeGenWriteBarrier(&___encounterId_5, value);
	}

	inline static int32_t get_offset_of_encounterType_6() { return static_cast<int32_t>(offsetof(MissionDetails_t4187701046, ___encounterType_6)); }
	inline String_t* get_encounterType_6() const { return ___encounterType_6; }
	inline String_t** get_address_of_encounterType_6() { return &___encounterType_6; }
	inline void set_encounterType_6(String_t* value)
	{
		___encounterType_6 = value;
		Il2CppCodeGenWriteBarrier(&___encounterType_6, value);
	}

	inline static int32_t get_offset_of_encounterIndex_7() { return static_cast<int32_t>(offsetof(MissionDetails_t4187701046, ___encounterIndex_7)); }
	inline int32_t get_encounterIndex_7() const { return ___encounterIndex_7; }
	inline int32_t* get_address_of_encounterIndex_7() { return &___encounterIndex_7; }
	inline void set_encounterIndex_7(int32_t value)
	{
		___encounterIndex_7 = value;
	}

	inline static int32_t get_offset_of_encounterStoryTeller_8() { return static_cast<int32_t>(offsetof(MissionDetails_t4187701046, ___encounterStoryTeller_8)); }
	inline String_t* get_encounterStoryTeller_8() const { return ___encounterStoryTeller_8; }
	inline String_t** get_address_of_encounterStoryTeller_8() { return &___encounterStoryTeller_8; }
	inline void set_encounterStoryTeller_8(String_t* value)
	{
		___encounterStoryTeller_8 = value;
		Il2CppCodeGenWriteBarrier(&___encounterStoryTeller_8, value);
	}

	inline static int32_t get_offset_of_encounterOneLiner_9() { return static_cast<int32_t>(offsetof(MissionDetails_t4187701046, ___encounterOneLiner_9)); }
	inline String_t* get_encounterOneLiner_9() const { return ___encounterOneLiner_9; }
	inline String_t** get_address_of_encounterOneLiner_9() { return &___encounterOneLiner_9; }
	inline void set_encounterOneLiner_9(String_t* value)
	{
		___encounterOneLiner_9 = value;
		Il2CppCodeGenWriteBarrier(&___encounterOneLiner_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
