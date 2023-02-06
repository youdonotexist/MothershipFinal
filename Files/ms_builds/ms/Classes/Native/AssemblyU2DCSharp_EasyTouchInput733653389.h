#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyTouchInput
struct  EasyTouchInput_t733653389  : public Il2CppObject
{
public:
	// UnityEngine.Vector2[] EasyTouchInput::oldMousePosition
	Vector2U5BU5D_t2741383957* ___oldMousePosition_0;
	// System.Int32[] EasyTouchInput::tapCount
	Int32U5BU5D_t1809983122* ___tapCount_1;
	// System.Single[] EasyTouchInput::startActionTime
	SingleU5BU5D_t1219431280* ___startActionTime_2;
	// System.Single[] EasyTouchInput::deltaTime
	SingleU5BU5D_t1219431280* ___deltaTime_3;
	// System.Single[] EasyTouchInput::tapeTime
	SingleU5BU5D_t1219431280* ___tapeTime_4;
	// System.Boolean EasyTouchInput::bComplex
	bool ___bComplex_5;
	// UnityEngine.Vector2 EasyTouchInput::deltaFingerPosition
	Vector2_t3525329788  ___deltaFingerPosition_6;
	// UnityEngine.Vector2 EasyTouchInput::oldFinger2Position
	Vector2_t3525329788  ___oldFinger2Position_7;
	// UnityEngine.Vector2 EasyTouchInput::complexCenter
	Vector2_t3525329788  ___complexCenter_8;

public:
	inline static int32_t get_offset_of_oldMousePosition_0() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___oldMousePosition_0)); }
	inline Vector2U5BU5D_t2741383957* get_oldMousePosition_0() const { return ___oldMousePosition_0; }
	inline Vector2U5BU5D_t2741383957** get_address_of_oldMousePosition_0() { return &___oldMousePosition_0; }
	inline void set_oldMousePosition_0(Vector2U5BU5D_t2741383957* value)
	{
		___oldMousePosition_0 = value;
		Il2CppCodeGenWriteBarrier(&___oldMousePosition_0, value);
	}

	inline static int32_t get_offset_of_tapCount_1() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___tapCount_1)); }
	inline Int32U5BU5D_t1809983122* get_tapCount_1() const { return ___tapCount_1; }
	inline Int32U5BU5D_t1809983122** get_address_of_tapCount_1() { return &___tapCount_1; }
	inline void set_tapCount_1(Int32U5BU5D_t1809983122* value)
	{
		___tapCount_1 = value;
		Il2CppCodeGenWriteBarrier(&___tapCount_1, value);
	}

	inline static int32_t get_offset_of_startActionTime_2() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___startActionTime_2)); }
	inline SingleU5BU5D_t1219431280* get_startActionTime_2() const { return ___startActionTime_2; }
	inline SingleU5BU5D_t1219431280** get_address_of_startActionTime_2() { return &___startActionTime_2; }
	inline void set_startActionTime_2(SingleU5BU5D_t1219431280* value)
	{
		___startActionTime_2 = value;
		Il2CppCodeGenWriteBarrier(&___startActionTime_2, value);
	}

	inline static int32_t get_offset_of_deltaTime_3() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___deltaTime_3)); }
	inline SingleU5BU5D_t1219431280* get_deltaTime_3() const { return ___deltaTime_3; }
	inline SingleU5BU5D_t1219431280** get_address_of_deltaTime_3() { return &___deltaTime_3; }
	inline void set_deltaTime_3(SingleU5BU5D_t1219431280* value)
	{
		___deltaTime_3 = value;
		Il2CppCodeGenWriteBarrier(&___deltaTime_3, value);
	}

	inline static int32_t get_offset_of_tapeTime_4() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___tapeTime_4)); }
	inline SingleU5BU5D_t1219431280* get_tapeTime_4() const { return ___tapeTime_4; }
	inline SingleU5BU5D_t1219431280** get_address_of_tapeTime_4() { return &___tapeTime_4; }
	inline void set_tapeTime_4(SingleU5BU5D_t1219431280* value)
	{
		___tapeTime_4 = value;
		Il2CppCodeGenWriteBarrier(&___tapeTime_4, value);
	}

	inline static int32_t get_offset_of_bComplex_5() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___bComplex_5)); }
	inline bool get_bComplex_5() const { return ___bComplex_5; }
	inline bool* get_address_of_bComplex_5() { return &___bComplex_5; }
	inline void set_bComplex_5(bool value)
	{
		___bComplex_5 = value;
	}

	inline static int32_t get_offset_of_deltaFingerPosition_6() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___deltaFingerPosition_6)); }
	inline Vector2_t3525329788  get_deltaFingerPosition_6() const { return ___deltaFingerPosition_6; }
	inline Vector2_t3525329788 * get_address_of_deltaFingerPosition_6() { return &___deltaFingerPosition_6; }
	inline void set_deltaFingerPosition_6(Vector2_t3525329788  value)
	{
		___deltaFingerPosition_6 = value;
	}

	inline static int32_t get_offset_of_oldFinger2Position_7() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___oldFinger2Position_7)); }
	inline Vector2_t3525329788  get_oldFinger2Position_7() const { return ___oldFinger2Position_7; }
	inline Vector2_t3525329788 * get_address_of_oldFinger2Position_7() { return &___oldFinger2Position_7; }
	inline void set_oldFinger2Position_7(Vector2_t3525329788  value)
	{
		___oldFinger2Position_7 = value;
	}

	inline static int32_t get_offset_of_complexCenter_8() { return static_cast<int32_t>(offsetof(EasyTouchInput_t733653389, ___complexCenter_8)); }
	inline Vector2_t3525329788  get_complexCenter_8() const { return ___complexCenter_8; }
	inline Vector2_t3525329788 * get_address_of_complexCenter_8() { return &___complexCenter_8; }
	inline void set_complexCenter_8(Vector2_t3525329788  value)
	{
		___complexCenter_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
