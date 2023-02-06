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
#include "AssemblyU2DCSharp_Ionic_WhichTime3524469024.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.TimeCriterion
struct  TimeCriterion_t2577443050  : public SelectionCriterion_t2928688459
{
public:
	// Ionic.ComparisonOperator Ionic.TimeCriterion::Operator
	int32_t ___Operator_1;
	// Ionic.WhichTime Ionic.TimeCriterion::Which
	int32_t ___Which_2;
	// System.DateTime Ionic.TimeCriterion::Time
	DateTime_t339033936  ___Time_3;

public:
	inline static int32_t get_offset_of_Operator_1() { return static_cast<int32_t>(offsetof(TimeCriterion_t2577443050, ___Operator_1)); }
	inline int32_t get_Operator_1() const { return ___Operator_1; }
	inline int32_t* get_address_of_Operator_1() { return &___Operator_1; }
	inline void set_Operator_1(int32_t value)
	{
		___Operator_1 = value;
	}

	inline static int32_t get_offset_of_Which_2() { return static_cast<int32_t>(offsetof(TimeCriterion_t2577443050, ___Which_2)); }
	inline int32_t get_Which_2() const { return ___Which_2; }
	inline int32_t* get_address_of_Which_2() { return &___Which_2; }
	inline void set_Which_2(int32_t value)
	{
		___Which_2 = value;
	}

	inline static int32_t get_offset_of_Time_3() { return static_cast<int32_t>(offsetof(TimeCriterion_t2577443050, ___Time_3)); }
	inline DateTime_t339033936  get_Time_3() const { return ___Time_3; }
	inline DateTime_t339033936 * get_address_of_Time_3() { return &___Time_3; }
	inline void set_Time_3(DateTime_t339033936  value)
	{
		___Time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
