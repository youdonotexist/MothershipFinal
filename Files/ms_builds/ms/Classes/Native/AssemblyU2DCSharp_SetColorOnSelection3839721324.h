#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIWidget
struct UIWidget_t769069560;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SetColorOnSelection
struct  SetColorOnSelection_t3839721324  : public MonoBehaviour_t3012272455
{
public:
	// UIWidget SetColorOnSelection::mWidget
	UIWidget_t769069560 * ___mWidget_2;

public:
	inline static int32_t get_offset_of_mWidget_2() { return static_cast<int32_t>(offsetof(SetColorOnSelection_t3839721324, ___mWidget_2)); }
	inline UIWidget_t769069560 * get_mWidget_2() const { return ___mWidget_2; }
	inline UIWidget_t769069560 ** get_address_of_mWidget_2() { return &___mWidget_2; }
	inline void set_mWidget_2(UIWidget_t769069560 * value)
	{
		___mWidget_2 = value;
		Il2CppCodeGenWriteBarrier(&___mWidget_2, value);
	}
};

struct SetColorOnSelection_t3839721324_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SetColorOnSelection::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_3() { return static_cast<int32_t>(offsetof(SetColorOnSelection_t3839721324_StaticFields, ___U3CU3Ef__switchU24map1_3)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_3() const { return ___U3CU3Ef__switchU24map1_3; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_3() { return &___U3CU3Ef__switchU24map1_3; }
	inline void set_U3CU3Ef__switchU24map1_3(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
