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

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortState/MinionTypeLevelDetail
struct  MinionTypeLevelDetail_t70250981 
{
public:
	// System.String PortState/MinionTypeLevelDetail::title
	String_t* ___title_0;
	// System.String PortState/MinionTypeLevelDetail::description
	String_t* ___description_1;
	// System.Single PortState/MinionTypeLevelDetail::damage
	float ___damage_2;
	// System.Single PortState/MinionTypeLevelDetail::speed
	float ___speed_3;
	// System.Single PortState/MinionTypeLevelDetail::cost
	float ___cost_4;
	// System.Single PortState/MinionTypeLevelDetail::life
	float ___life_5;
	// System.Single PortState/MinionTypeLevelDetail::reloadMultiplier
	float ___reloadMultiplier_6;
	// System.Int32 PortState/MinionTypeLevelDetail::index
	int32_t ___index_7;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier(&___description_1, value);
	}

	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___damage_2)); }
	inline float get_damage_2() const { return ___damage_2; }
	inline float* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(float value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_cost_4() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___cost_4)); }
	inline float get_cost_4() const { return ___cost_4; }
	inline float* get_address_of_cost_4() { return &___cost_4; }
	inline void set_cost_4(float value)
	{
		___cost_4 = value;
	}

	inline static int32_t get_offset_of_life_5() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___life_5)); }
	inline float get_life_5() const { return ___life_5; }
	inline float* get_address_of_life_5() { return &___life_5; }
	inline void set_life_5(float value)
	{
		___life_5 = value;
	}

	inline static int32_t get_offset_of_reloadMultiplier_6() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___reloadMultiplier_6)); }
	inline float get_reloadMultiplier_6() const { return ___reloadMultiplier_6; }
	inline float* get_address_of_reloadMultiplier_6() { return &___reloadMultiplier_6; }
	inline void set_reloadMultiplier_6(float value)
	{
		___reloadMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_index_7() { return static_cast<int32_t>(offsetof(MinionTypeLevelDetail_t70250981, ___index_7)); }
	inline int32_t get_index_7() const { return ___index_7; }
	inline int32_t* get_address_of_index_7() { return &___index_7; }
	inline void set_index_7(int32_t value)
	{
		___index_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: PortState/MinionTypeLevelDetail
struct MinionTypeLevelDetail_t70250981_marshaled_pinvoke
{
	char* ___title_0;
	char* ___description_1;
	float ___damage_2;
	float ___speed_3;
	float ___cost_4;
	float ___life_5;
	float ___reloadMultiplier_6;
	int32_t ___index_7;
};
// Native definition for marshalling of: PortState/MinionTypeLevelDetail
struct MinionTypeLevelDetail_t70250981_marshaled_com
{
	uint16_t* ___title_0;
	uint16_t* ___description_1;
	float ___damage_2;
	float ___speed_3;
	float ___cost_4;
	float ___life_5;
	float ___reloadMultiplier_6;
	int32_t ___index_7;
};
