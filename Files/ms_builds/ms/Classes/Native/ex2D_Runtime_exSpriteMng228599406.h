#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<exPlane>
struct List_1_t3753211490;
// System.Collections.Generic.List`1<exClipping>
struct List_1_t1261022094;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteMng
struct  exSpriteMng_t228599406  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<exPlane> exSpriteMng::sprites
	List_1_t3753211490 * ___sprites_2;
	// System.Collections.Generic.List`1<exClipping> exSpriteMng::clippingList
	List_1_t1261022094 * ___clippingList_3;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(exSpriteMng_t228599406, ___sprites_2)); }
	inline List_1_t3753211490 * get_sprites_2() const { return ___sprites_2; }
	inline List_1_t3753211490 ** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(List_1_t3753211490 * value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_2, value);
	}

	inline static int32_t get_offset_of_clippingList_3() { return static_cast<int32_t>(offsetof(exSpriteMng_t228599406, ___clippingList_3)); }
	inline List_1_t1261022094 * get_clippingList_3() const { return ___clippingList_3; }
	inline List_1_t1261022094 ** get_address_of_clippingList_3() { return &___clippingList_3; }
	inline void set_clippingList_3(List_1_t1261022094 * value)
	{
		___clippingList_3 = value;
		Il2CppCodeGenWriteBarrier(&___clippingList_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
