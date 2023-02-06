#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MA_SampleICustomEventReceiver
struct  MA_SampleICustomEventReceiver_t3676003844  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<System.String> MA_SampleICustomEventReceiver::_eventsSubscribedTo
	List_1_t1765447871 * ____eventsSubscribedTo_2;

public:
	inline static int32_t get_offset_of__eventsSubscribedTo_2() { return static_cast<int32_t>(offsetof(MA_SampleICustomEventReceiver_t3676003844, ____eventsSubscribedTo_2)); }
	inline List_1_t1765447871 * get__eventsSubscribedTo_2() const { return ____eventsSubscribedTo_2; }
	inline List_1_t1765447871 ** get_address_of__eventsSubscribedTo_2() { return &____eventsSubscribedTo_2; }
	inline void set__eventsSubscribedTo_2(List_1_t1765447871 * value)
	{
		____eventsSubscribedTo_2 = value;
		Il2CppCodeGenWriteBarrier(&____eventsSubscribedTo_2, value);
	}
};

struct MA_SampleICustomEventReceiver_t3676003844_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MA_SampleICustomEventReceiver::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(MA_SampleICustomEventReceiver_t3676003844_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
