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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.FileSelector
struct  FileSelector_t3746835537  : public Il2CppObject
{
public:
	// Ionic.SelectionCriterion Ionic.FileSelector::_Criterion
	SelectionCriterion_t2928688459 * ____Criterion_0;
	// System.Boolean Ionic.FileSelector::<TraverseReparsePoints>k__BackingField
	bool ___U3CTraverseReparsePointsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__Criterion_0() { return static_cast<int32_t>(offsetof(FileSelector_t3746835537, ____Criterion_0)); }
	inline SelectionCriterion_t2928688459 * get__Criterion_0() const { return ____Criterion_0; }
	inline SelectionCriterion_t2928688459 ** get_address_of__Criterion_0() { return &____Criterion_0; }
	inline void set__Criterion_0(SelectionCriterion_t2928688459 * value)
	{
		____Criterion_0 = value;
		Il2CppCodeGenWriteBarrier(&____Criterion_0, value);
	}

	inline static int32_t get_offset_of_U3CTraverseReparsePointsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FileSelector_t3746835537, ___U3CTraverseReparsePointsU3Ek__BackingField_1)); }
	inline bool get_U3CTraverseReparsePointsU3Ek__BackingField_1() const { return ___U3CTraverseReparsePointsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CTraverseReparsePointsU3Ek__BackingField_1() { return &___U3CTraverseReparsePointsU3Ek__BackingField_1; }
	inline void set_U3CTraverseReparsePointsU3Ek__BackingField_1(bool value)
	{
		___U3CTraverseReparsePointsU3Ek__BackingField_1 = value;
	}
};

struct FileSelector_t3746835537_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Ionic.FileSelector::<>f__switch$map8
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map8_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_2() { return static_cast<int32_t>(offsetof(FileSelector_t3746835537_StaticFields, ___U3CU3Ef__switchU24map8_2)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map8_2() const { return ___U3CU3Ef__switchU24map8_2; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map8_2() { return &___U3CU3Ef__switchU24map8_2; }
	inline void set_U3CU3Ef__switchU24map8_2(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map8_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map8_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
