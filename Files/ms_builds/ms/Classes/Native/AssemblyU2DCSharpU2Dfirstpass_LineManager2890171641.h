#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vectrosity.VectorLine>
struct List_1_t3862330616;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LineManager
struct  LineManager_t2890171641  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean LineManager::destroyed
	bool ___destroyed_5;

public:
	inline static int32_t get_offset_of_destroyed_5() { return static_cast<int32_t>(offsetof(LineManager_t2890171641, ___destroyed_5)); }
	inline bool get_destroyed_5() const { return ___destroyed_5; }
	inline bool* get_address_of_destroyed_5() { return &___destroyed_5; }
	inline void set_destroyed_5(bool value)
	{
		___destroyed_5 = value;
	}
};

struct LineManager_t2890171641_StaticFields
{
public:
	// System.Collections.Generic.List`1<Vectrosity.VectorLine> LineManager::lines
	List_1_t3862330616 * ___lines_2;
	// System.Collections.Generic.List`1<UnityEngine.Transform> LineManager::transforms
	List_1_t1081512082 * ___transforms_3;
	// System.Int32 LineManager::lineCount
	int32_t ___lineCount_4;

public:
	inline static int32_t get_offset_of_lines_2() { return static_cast<int32_t>(offsetof(LineManager_t2890171641_StaticFields, ___lines_2)); }
	inline List_1_t3862330616 * get_lines_2() const { return ___lines_2; }
	inline List_1_t3862330616 ** get_address_of_lines_2() { return &___lines_2; }
	inline void set_lines_2(List_1_t3862330616 * value)
	{
		___lines_2 = value;
		Il2CppCodeGenWriteBarrier(&___lines_2, value);
	}

	inline static int32_t get_offset_of_transforms_3() { return static_cast<int32_t>(offsetof(LineManager_t2890171641_StaticFields, ___transforms_3)); }
	inline List_1_t1081512082 * get_transforms_3() const { return ___transforms_3; }
	inline List_1_t1081512082 ** get_address_of_transforms_3() { return &___transforms_3; }
	inline void set_transforms_3(List_1_t1081512082 * value)
	{
		___transforms_3 = value;
		Il2CppCodeGenWriteBarrier(&___transforms_3, value);
	}

	inline static int32_t get_offset_of_lineCount_4() { return static_cast<int32_t>(offsetof(LineManager_t2890171641_StaticFields, ___lineCount_4)); }
	inline int32_t get_lineCount_4() const { return ___lineCount_4; }
	inline int32_t* get_address_of_lineCount_4() { return &___lineCount_4; }
	inline void set_lineCount_4(int32_t value)
	{
		___lineCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
