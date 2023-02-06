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
// PortState/MinionTypeLevelDetail[]
struct MinionTypeLevelDetailU5BU5D_t834197736;
struct MinionTypeLevelDetail_t70250981_marshaled_pinvoke;
struct MinionTypeLevelDetail_t70250981_marshaled_com;

#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharp_PortState_MinionUpgradeType3066550528.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortState/MinionTypeDetails
struct  MinionTypeDetails_t2901012274 
{
public:
	// System.Int32 PortState/MinionTypeDetails::index
	int32_t ___index_0;
	// System.String PortState/MinionTypeDetails::title
	String_t* ___title_1;
	// System.String PortState/MinionTypeDetails::description
	String_t* ___description_2;
	// System.Int32 PortState/MinionTypeDetails::state
	int32_t ___state_3;
	// PortState/MinionTypeLevelDetail[] PortState/MinionTypeDetails::levels
	MinionTypeLevelDetailU5BU5D_t834197736* ___levels_4;
	// PortState/MinionUpgradeType PortState/MinionTypeDetails::upgradeType
	int32_t ___upgradeType_5;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MinionTypeDetails_t2901012274, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(MinionTypeDetails_t2901012274, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MinionTypeDetails_t2901012274, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier(&___description_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MinionTypeDetails_t2901012274, ___state_3)); }
	inline int32_t get_state_3() const { return ___state_3; }
	inline int32_t* get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(int32_t value)
	{
		___state_3 = value;
	}

	inline static int32_t get_offset_of_levels_4() { return static_cast<int32_t>(offsetof(MinionTypeDetails_t2901012274, ___levels_4)); }
	inline MinionTypeLevelDetailU5BU5D_t834197736* get_levels_4() const { return ___levels_4; }
	inline MinionTypeLevelDetailU5BU5D_t834197736** get_address_of_levels_4() { return &___levels_4; }
	inline void set_levels_4(MinionTypeLevelDetailU5BU5D_t834197736* value)
	{
		___levels_4 = value;
		Il2CppCodeGenWriteBarrier(&___levels_4, value);
	}

	inline static int32_t get_offset_of_upgradeType_5() { return static_cast<int32_t>(offsetof(MinionTypeDetails_t2901012274, ___upgradeType_5)); }
	inline int32_t get_upgradeType_5() const { return ___upgradeType_5; }
	inline int32_t* get_address_of_upgradeType_5() { return &___upgradeType_5; }
	inline void set_upgradeType_5(int32_t value)
	{
		___upgradeType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: PortState/MinionTypeDetails
struct MinionTypeDetails_t2901012274_marshaled_pinvoke
{
	int32_t ___index_0;
	char* ___title_1;
	char* ___description_2;
	int32_t ___state_3;
	MinionTypeLevelDetail_t70250981_marshaled_pinvoke* ___levels_4;
	int32_t ___upgradeType_5;
};
// Native definition for marshalling of: PortState/MinionTypeDetails
struct MinionTypeDetails_t2901012274_marshaled_com
{
	int32_t ___index_0;
	uint16_t* ___title_1;
	uint16_t* ___description_2;
	int32_t ___state_3;
	MinionTypeLevelDetail_t70250981_marshaled_com* ___levels_4;
	int32_t ___upgradeType_5;
};
