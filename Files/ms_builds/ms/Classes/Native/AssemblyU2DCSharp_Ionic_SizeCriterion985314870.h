#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Ionic_SelectionCriterion2928688459.h"
#include "AssemblyU2DCSharp_Ionic_ComparisonOperator4266058403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.SizeCriterion
struct  SizeCriterion_t985314870  : public SelectionCriterion_t2928688459
{
public:
	// Ionic.ComparisonOperator Ionic.SizeCriterion::Operator
	int32_t ___Operator_1;
	// System.Int64 Ionic.SizeCriterion::Size
	int64_t ___Size_2;

public:
	inline static int32_t get_offset_of_Operator_1() { return static_cast<int32_t>(offsetof(SizeCriterion_t985314870, ___Operator_1)); }
	inline int32_t get_Operator_1() const { return ___Operator_1; }
	inline int32_t* get_address_of_Operator_1() { return &___Operator_1; }
	inline void set_Operator_1(int32_t value)
	{
		___Operator_1 = value;
	}

	inline static int32_t get_offset_of_Size_2() { return static_cast<int32_t>(offsetof(SizeCriterion_t985314870, ___Size_2)); }
	inline int64_t get_Size_2() const { return ___Size_2; }
	inline int64_t* get_address_of_Size_2() { return &___Size_2; }
	inline void set_Size_2(int64_t value)
	{
		___Size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
