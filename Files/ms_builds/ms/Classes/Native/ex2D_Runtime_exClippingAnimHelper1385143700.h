#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exClipping
struct exClipping_t464063125;

#include "ex2D_Runtime_exAnimationHelper3120018207.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exClippingAnimHelper
struct  exClippingAnimHelper_t1385143700  : public exAnimationHelper_t3120018207
{
public:
	// exClipping exClippingAnimHelper::clipping
	exClipping_t464063125 * ___clipping_2;
	// System.Single exClippingAnimHelper::lastWidth
	float ___lastWidth_3;
	// System.Single exClippingAnimHelper::lastHeight
	float ___lastHeight_4;

public:
	inline static int32_t get_offset_of_clipping_2() { return static_cast<int32_t>(offsetof(exClippingAnimHelper_t1385143700, ___clipping_2)); }
	inline exClipping_t464063125 * get_clipping_2() const { return ___clipping_2; }
	inline exClipping_t464063125 ** get_address_of_clipping_2() { return &___clipping_2; }
	inline void set_clipping_2(exClipping_t464063125 * value)
	{
		___clipping_2 = value;
		Il2CppCodeGenWriteBarrier(&___clipping_2, value);
	}

	inline static int32_t get_offset_of_lastWidth_3() { return static_cast<int32_t>(offsetof(exClippingAnimHelper_t1385143700, ___lastWidth_3)); }
	inline float get_lastWidth_3() const { return ___lastWidth_3; }
	inline float* get_address_of_lastWidth_3() { return &___lastWidth_3; }
	inline void set_lastWidth_3(float value)
	{
		___lastWidth_3 = value;
	}

	inline static int32_t get_offset_of_lastHeight_4() { return static_cast<int32_t>(offsetof(exClippingAnimHelper_t1385143700, ___lastHeight_4)); }
	inline float get_lastHeight_4() const { return ___lastHeight_4; }
	inline float* get_address_of_lastHeight_4() { return &___lastHeight_4; }
	inline void set_lastHeight_4(float value)
	{
		___lastHeight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
