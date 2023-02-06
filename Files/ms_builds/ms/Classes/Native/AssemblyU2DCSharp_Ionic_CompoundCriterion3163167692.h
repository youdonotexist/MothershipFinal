#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Ionic.SelectionCriterion
struct SelectionCriterion_t2928688459;

#include "AssemblyU2DCSharp_Ionic_SelectionCriterion2928688459.h"
#include "AssemblyU2DCSharp_Ionic_LogicalConjunction1309140451.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.CompoundCriterion
struct  CompoundCriterion_t3163167692  : public SelectionCriterion_t2928688459
{
public:
	// Ionic.LogicalConjunction Ionic.CompoundCriterion::Conjunction
	int32_t ___Conjunction_1;
	// Ionic.SelectionCriterion Ionic.CompoundCriterion::Left
	SelectionCriterion_t2928688459 * ___Left_2;
	// Ionic.SelectionCriterion Ionic.CompoundCriterion::_Right
	SelectionCriterion_t2928688459 * ____Right_3;

public:
	inline static int32_t get_offset_of_Conjunction_1() { return static_cast<int32_t>(offsetof(CompoundCriterion_t3163167692, ___Conjunction_1)); }
	inline int32_t get_Conjunction_1() const { return ___Conjunction_1; }
	inline int32_t* get_address_of_Conjunction_1() { return &___Conjunction_1; }
	inline void set_Conjunction_1(int32_t value)
	{
		___Conjunction_1 = value;
	}

	inline static int32_t get_offset_of_Left_2() { return static_cast<int32_t>(offsetof(CompoundCriterion_t3163167692, ___Left_2)); }
	inline SelectionCriterion_t2928688459 * get_Left_2() const { return ___Left_2; }
	inline SelectionCriterion_t2928688459 ** get_address_of_Left_2() { return &___Left_2; }
	inline void set_Left_2(SelectionCriterion_t2928688459 * value)
	{
		___Left_2 = value;
		Il2CppCodeGenWriteBarrier(&___Left_2, value);
	}

	inline static int32_t get_offset_of__Right_3() { return static_cast<int32_t>(offsetof(CompoundCriterion_t3163167692, ____Right_3)); }
	inline SelectionCriterion_t2928688459 * get__Right_3() const { return ____Right_3; }
	inline SelectionCriterion_t2928688459 ** get_address_of__Right_3() { return &____Right_3; }
	inline void set__Right_3(SelectionCriterion_t2928688459 * value)
	{
		____Right_3 = value;
		Il2CppCodeGenWriteBarrier(&____Right_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
