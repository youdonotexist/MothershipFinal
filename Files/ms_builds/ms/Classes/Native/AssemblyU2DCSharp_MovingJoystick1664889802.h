#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// EasyJoystick
struct EasyJoystick_t449807230;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingJoystick
struct  MovingJoystick_t1664889802  : public Il2CppObject
{
public:
	// System.String MovingJoystick::joystickName
	String_t* ___joystickName_0;
	// UnityEngine.Vector2 MovingJoystick::joystickAxis
	Vector2_t3525329788  ___joystickAxis_1;
	// UnityEngine.Vector2 MovingJoystick::joystickValue
	Vector2_t3525329788  ___joystickValue_2;
	// EasyJoystick MovingJoystick::joystick
	EasyJoystick_t449807230 * ___joystick_3;

public:
	inline static int32_t get_offset_of_joystickName_0() { return static_cast<int32_t>(offsetof(MovingJoystick_t1664889802, ___joystickName_0)); }
	inline String_t* get_joystickName_0() const { return ___joystickName_0; }
	inline String_t** get_address_of_joystickName_0() { return &___joystickName_0; }
	inline void set_joystickName_0(String_t* value)
	{
		___joystickName_0 = value;
		Il2CppCodeGenWriteBarrier(&___joystickName_0, value);
	}

	inline static int32_t get_offset_of_joystickAxis_1() { return static_cast<int32_t>(offsetof(MovingJoystick_t1664889802, ___joystickAxis_1)); }
	inline Vector2_t3525329788  get_joystickAxis_1() const { return ___joystickAxis_1; }
	inline Vector2_t3525329788 * get_address_of_joystickAxis_1() { return &___joystickAxis_1; }
	inline void set_joystickAxis_1(Vector2_t3525329788  value)
	{
		___joystickAxis_1 = value;
	}

	inline static int32_t get_offset_of_joystickValue_2() { return static_cast<int32_t>(offsetof(MovingJoystick_t1664889802, ___joystickValue_2)); }
	inline Vector2_t3525329788  get_joystickValue_2() const { return ___joystickValue_2; }
	inline Vector2_t3525329788 * get_address_of_joystickValue_2() { return &___joystickValue_2; }
	inline void set_joystickValue_2(Vector2_t3525329788  value)
	{
		___joystickValue_2 = value;
	}

	inline static int32_t get_offset_of_joystick_3() { return static_cast<int32_t>(offsetof(MovingJoystick_t1664889802, ___joystick_3)); }
	inline EasyJoystick_t449807230 * get_joystick_3() const { return ___joystick_3; }
	inline EasyJoystick_t449807230 ** get_address_of_joystick_3() { return &___joystick_3; }
	inline void set_joystick_3(EasyJoystick_t449807230 * value)
	{
		___joystick_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
