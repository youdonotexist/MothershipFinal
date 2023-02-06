#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controls
struct  Controls_t3792677590  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Controls::_controlled
	GameObject_t4012695102 * ____controlled_2;
	// System.Single Controls::forwardForce
	float ___forwardForce_3;
	// System.Single Controls::brakingForce
	float ___brakingForce_4;
	// System.Single Controls::maxSpeed
	float ___maxSpeed_5;
	// System.Single Controls::turnSpeed
	float ___turnSpeed_6;
	// System.Single Controls::currentTurn
	float ___currentTurn_7;

public:
	inline static int32_t get_offset_of__controlled_2() { return static_cast<int32_t>(offsetof(Controls_t3792677590, ____controlled_2)); }
	inline GameObject_t4012695102 * get__controlled_2() const { return ____controlled_2; }
	inline GameObject_t4012695102 ** get_address_of__controlled_2() { return &____controlled_2; }
	inline void set__controlled_2(GameObject_t4012695102 * value)
	{
		____controlled_2 = value;
		Il2CppCodeGenWriteBarrier(&____controlled_2, value);
	}

	inline static int32_t get_offset_of_forwardForce_3() { return static_cast<int32_t>(offsetof(Controls_t3792677590, ___forwardForce_3)); }
	inline float get_forwardForce_3() const { return ___forwardForce_3; }
	inline float* get_address_of_forwardForce_3() { return &___forwardForce_3; }
	inline void set_forwardForce_3(float value)
	{
		___forwardForce_3 = value;
	}

	inline static int32_t get_offset_of_brakingForce_4() { return static_cast<int32_t>(offsetof(Controls_t3792677590, ___brakingForce_4)); }
	inline float get_brakingForce_4() const { return ___brakingForce_4; }
	inline float* get_address_of_brakingForce_4() { return &___brakingForce_4; }
	inline void set_brakingForce_4(float value)
	{
		___brakingForce_4 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_5() { return static_cast<int32_t>(offsetof(Controls_t3792677590, ___maxSpeed_5)); }
	inline float get_maxSpeed_5() const { return ___maxSpeed_5; }
	inline float* get_address_of_maxSpeed_5() { return &___maxSpeed_5; }
	inline void set_maxSpeed_5(float value)
	{
		___maxSpeed_5 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_6() { return static_cast<int32_t>(offsetof(Controls_t3792677590, ___turnSpeed_6)); }
	inline float get_turnSpeed_6() const { return ___turnSpeed_6; }
	inline float* get_address_of_turnSpeed_6() { return &___turnSpeed_6; }
	inline void set_turnSpeed_6(float value)
	{
		___turnSpeed_6 = value;
	}

	inline static int32_t get_offset_of_currentTurn_7() { return static_cast<int32_t>(offsetof(Controls_t3792677590, ___currentTurn_7)); }
	inline float get_currentTurn_7() const { return ___currentTurn_7; }
	inline float* get_address_of_currentTurn_7() { return &___currentTurn_7; }
	inline void set_currentTurn_7(float value)
	{
		___currentTurn_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
