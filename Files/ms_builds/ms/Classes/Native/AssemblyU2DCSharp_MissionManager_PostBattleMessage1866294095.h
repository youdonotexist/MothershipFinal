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
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissionManager/PostBattleMessage
struct  PostBattleMessage_t1866294095 
{
public:
	// System.String MissionManager/PostBattleMessage::heroName
	String_t* ___heroName_0;
	// System.String MissionManager/PostBattleMessage::heroSpriteName
	String_t* ___heroSpriteName_1;
	// System.String MissionManager/PostBattleMessage::heroObit
	String_t* ___heroObit_2;
	// System.String MissionManager/PostBattleMessage::nextHeroSpriteName
	String_t* ___nextHeroSpriteName_3;
	// System.Collections.Hashtable MissionManager/PostBattleMessage::battleData
	Hashtable_t3875263730 * ___battleData_4;

public:
	inline static int32_t get_offset_of_heroName_0() { return static_cast<int32_t>(offsetof(PostBattleMessage_t1866294095, ___heroName_0)); }
	inline String_t* get_heroName_0() const { return ___heroName_0; }
	inline String_t** get_address_of_heroName_0() { return &___heroName_0; }
	inline void set_heroName_0(String_t* value)
	{
		___heroName_0 = value;
		Il2CppCodeGenWriteBarrier(&___heroName_0, value);
	}

	inline static int32_t get_offset_of_heroSpriteName_1() { return static_cast<int32_t>(offsetof(PostBattleMessage_t1866294095, ___heroSpriteName_1)); }
	inline String_t* get_heroSpriteName_1() const { return ___heroSpriteName_1; }
	inline String_t** get_address_of_heroSpriteName_1() { return &___heroSpriteName_1; }
	inline void set_heroSpriteName_1(String_t* value)
	{
		___heroSpriteName_1 = value;
		Il2CppCodeGenWriteBarrier(&___heroSpriteName_1, value);
	}

	inline static int32_t get_offset_of_heroObit_2() { return static_cast<int32_t>(offsetof(PostBattleMessage_t1866294095, ___heroObit_2)); }
	inline String_t* get_heroObit_2() const { return ___heroObit_2; }
	inline String_t** get_address_of_heroObit_2() { return &___heroObit_2; }
	inline void set_heroObit_2(String_t* value)
	{
		___heroObit_2 = value;
		Il2CppCodeGenWriteBarrier(&___heroObit_2, value);
	}

	inline static int32_t get_offset_of_nextHeroSpriteName_3() { return static_cast<int32_t>(offsetof(PostBattleMessage_t1866294095, ___nextHeroSpriteName_3)); }
	inline String_t* get_nextHeroSpriteName_3() const { return ___nextHeroSpriteName_3; }
	inline String_t** get_address_of_nextHeroSpriteName_3() { return &___nextHeroSpriteName_3; }
	inline void set_nextHeroSpriteName_3(String_t* value)
	{
		___nextHeroSpriteName_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextHeroSpriteName_3, value);
	}

	inline static int32_t get_offset_of_battleData_4() { return static_cast<int32_t>(offsetof(PostBattleMessage_t1866294095, ___battleData_4)); }
	inline Hashtable_t3875263730 * get_battleData_4() const { return ___battleData_4; }
	inline Hashtable_t3875263730 ** get_address_of_battleData_4() { return &___battleData_4; }
	inline void set_battleData_4(Hashtable_t3875263730 * value)
	{
		___battleData_4 = value;
		Il2CppCodeGenWriteBarrier(&___battleData_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
