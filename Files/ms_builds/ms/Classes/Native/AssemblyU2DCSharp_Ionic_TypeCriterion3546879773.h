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

// Ionic.TypeCriterion
struct  TypeCriterion_t3546879773  : public SelectionCriterion_t2928688459
{
public:
	// System.Char Ionic.TypeCriterion::ObjectType
	uint16_t ___ObjectType_1;
	// Ionic.ComparisonOperator Ionic.TypeCriterion::Operator
	int32_t ___Operator_2;

public:
	inline static int32_t get_offset_of_ObjectType_1() { return static_cast<int32_t>(offsetof(TypeCriterion_t3546879773, ___ObjectType_1)); }
	inline uint16_t get_ObjectType_1() const { return ___ObjectType_1; }
	inline uint16_t* get_address_of_ObjectType_1() { return &___ObjectType_1; }
	inline void set_ObjectType_1(uint16_t value)
	{
		___ObjectType_1 = value;
	}

	inline static int32_t get_offset_of_Operator_2() { return static_cast<int32_t>(offsetof(TypeCriterion_t3546879773, ___Operator_2)); }
	inline int32_t get_Operator_2() const { return ___Operator_2; }
	inline int32_t* get_address_of_Operator_2() { return &___Operator_2; }
	inline void set_Operator_2(int32_t value)
	{
		___Operator_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
