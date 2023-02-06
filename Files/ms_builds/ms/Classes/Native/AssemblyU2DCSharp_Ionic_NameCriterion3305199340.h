#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Ionic_SelectionCriterion2928688459.h"
#include "AssemblyU2DCSharp_Ionic_ComparisonOperator4266058403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.NameCriterion
struct  NameCriterion_t3305199340  : public SelectionCriterion_t2928688459
{
public:
	// System.Text.RegularExpressions.Regex Ionic.NameCriterion::_re
	Regex_t3802381858 * ____re_1;
	// System.String Ionic.NameCriterion::_regexString
	String_t* ____regexString_2;
	// Ionic.ComparisonOperator Ionic.NameCriterion::Operator
	int32_t ___Operator_3;
	// System.String Ionic.NameCriterion::_MatchingFileSpec
	String_t* ____MatchingFileSpec_4;

public:
	inline static int32_t get_offset_of__re_1() { return static_cast<int32_t>(offsetof(NameCriterion_t3305199340, ____re_1)); }
	inline Regex_t3802381858 * get__re_1() const { return ____re_1; }
	inline Regex_t3802381858 ** get_address_of__re_1() { return &____re_1; }
	inline void set__re_1(Regex_t3802381858 * value)
	{
		____re_1 = value;
		Il2CppCodeGenWriteBarrier(&____re_1, value);
	}

	inline static int32_t get_offset_of__regexString_2() { return static_cast<int32_t>(offsetof(NameCriterion_t3305199340, ____regexString_2)); }
	inline String_t* get__regexString_2() const { return ____regexString_2; }
	inline String_t** get_address_of__regexString_2() { return &____regexString_2; }
	inline void set__regexString_2(String_t* value)
	{
		____regexString_2 = value;
		Il2CppCodeGenWriteBarrier(&____regexString_2, value);
	}

	inline static int32_t get_offset_of_Operator_3() { return static_cast<int32_t>(offsetof(NameCriterion_t3305199340, ___Operator_3)); }
	inline int32_t get_Operator_3() const { return ___Operator_3; }
	inline int32_t* get_address_of_Operator_3() { return &___Operator_3; }
	inline void set_Operator_3(int32_t value)
	{
		___Operator_3 = value;
	}

	inline static int32_t get_offset_of__MatchingFileSpec_4() { return static_cast<int32_t>(offsetof(NameCriterion_t3305199340, ____MatchingFileSpec_4)); }
	inline String_t* get__MatchingFileSpec_4() const { return ____MatchingFileSpec_4; }
	inline String_t** get_address_of__MatchingFileSpec_4() { return &____MatchingFileSpec_4; }
	inline void set__MatchingFileSpec_4(String_t* value)
	{
		____MatchingFileSpec_4 = value;
		Il2CppCodeGenWriteBarrier(&____MatchingFileSpec_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
