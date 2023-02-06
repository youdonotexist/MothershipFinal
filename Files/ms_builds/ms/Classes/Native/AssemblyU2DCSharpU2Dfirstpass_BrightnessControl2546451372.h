#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RefInt
struct RefInt_t2443978364;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BrightnessControl
struct  BrightnessControl_t2546451372  : public MonoBehaviour_t3012272455
{
public:
	// RefInt BrightnessControl::m_objectNumber
	RefInt_t2443978364 * ___m_objectNumber_2;
	// Vectrosity.VectorLine BrightnessControl::m_vectorLine
	VectorLine_t3065371647 * ___m_vectorLine_3;
	// System.Boolean BrightnessControl::m_useLine
	bool ___m_useLine_4;
	// System.Boolean BrightnessControl::m_destroyed
	bool ___m_destroyed_5;

public:
	inline static int32_t get_offset_of_m_objectNumber_2() { return static_cast<int32_t>(offsetof(BrightnessControl_t2546451372, ___m_objectNumber_2)); }
	inline RefInt_t2443978364 * get_m_objectNumber_2() const { return ___m_objectNumber_2; }
	inline RefInt_t2443978364 ** get_address_of_m_objectNumber_2() { return &___m_objectNumber_2; }
	inline void set_m_objectNumber_2(RefInt_t2443978364 * value)
	{
		___m_objectNumber_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_objectNumber_2, value);
	}

	inline static int32_t get_offset_of_m_vectorLine_3() { return static_cast<int32_t>(offsetof(BrightnessControl_t2546451372, ___m_vectorLine_3)); }
	inline VectorLine_t3065371647 * get_m_vectorLine_3() const { return ___m_vectorLine_3; }
	inline VectorLine_t3065371647 ** get_address_of_m_vectorLine_3() { return &___m_vectorLine_3; }
	inline void set_m_vectorLine_3(VectorLine_t3065371647 * value)
	{
		___m_vectorLine_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_vectorLine_3, value);
	}

	inline static int32_t get_offset_of_m_useLine_4() { return static_cast<int32_t>(offsetof(BrightnessControl_t2546451372, ___m_useLine_4)); }
	inline bool get_m_useLine_4() const { return ___m_useLine_4; }
	inline bool* get_address_of_m_useLine_4() { return &___m_useLine_4; }
	inline void set_m_useLine_4(bool value)
	{
		___m_useLine_4 = value;
	}

	inline static int32_t get_offset_of_m_destroyed_5() { return static_cast<int32_t>(offsetof(BrightnessControl_t2546451372, ___m_destroyed_5)); }
	inline bool get_m_destroyed_5() const { return ___m_destroyed_5; }
	inline bool* get_address_of_m_destroyed_5() { return &___m_destroyed_5; }
	inline void set_m_destroyed_5(bool value)
	{
		___m_destroyed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
