#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Ionic_SelectionCriterion2928688459.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"
#include "AssemblyU2DCSharp_Ionic_ComparisonOperator4266058403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.AttributesCriterion
struct  AttributesCriterion_t4264928672  : public SelectionCriterion_t2928688459
{
public:
	// System.IO.FileAttributes Ionic.AttributesCriterion::_Attributes
	int32_t ____Attributes_1;
	// Ionic.ComparisonOperator Ionic.AttributesCriterion::Operator
	int32_t ___Operator_2;

public:
	inline static int32_t get_offset_of__Attributes_1() { return static_cast<int32_t>(offsetof(AttributesCriterion_t4264928672, ____Attributes_1)); }
	inline int32_t get__Attributes_1() const { return ____Attributes_1; }
	inline int32_t* get_address_of__Attributes_1() { return &____Attributes_1; }
	inline void set__Attributes_1(int32_t value)
	{
		____Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Operator_2() { return static_cast<int32_t>(offsetof(AttributesCriterion_t4264928672, ___Operator_2)); }
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
