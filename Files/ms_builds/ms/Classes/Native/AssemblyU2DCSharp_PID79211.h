#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PID
struct  PID_t79211  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PID::Kp
	float ___Kp_2;
	// System.Single PID::Ki
	float ___Ki_3;
	// System.Single PID::Kd
	float ___Kd_4;
	// System.Single PID::P
	float ___P_5;
	// System.Single PID::I
	float ___I_6;
	// System.Single PID::D
	float ___D_7;
	// System.Single PID::prevError
	float ___prevError_8;

public:
	inline static int32_t get_offset_of_Kp_2() { return static_cast<int32_t>(offsetof(PID_t79211, ___Kp_2)); }
	inline float get_Kp_2() const { return ___Kp_2; }
	inline float* get_address_of_Kp_2() { return &___Kp_2; }
	inline void set_Kp_2(float value)
	{
		___Kp_2 = value;
	}

	inline static int32_t get_offset_of_Ki_3() { return static_cast<int32_t>(offsetof(PID_t79211, ___Ki_3)); }
	inline float get_Ki_3() const { return ___Ki_3; }
	inline float* get_address_of_Ki_3() { return &___Ki_3; }
	inline void set_Ki_3(float value)
	{
		___Ki_3 = value;
	}

	inline static int32_t get_offset_of_Kd_4() { return static_cast<int32_t>(offsetof(PID_t79211, ___Kd_4)); }
	inline float get_Kd_4() const { return ___Kd_4; }
	inline float* get_address_of_Kd_4() { return &___Kd_4; }
	inline void set_Kd_4(float value)
	{
		___Kd_4 = value;
	}

	inline static int32_t get_offset_of_P_5() { return static_cast<int32_t>(offsetof(PID_t79211, ___P_5)); }
	inline float get_P_5() const { return ___P_5; }
	inline float* get_address_of_P_5() { return &___P_5; }
	inline void set_P_5(float value)
	{
		___P_5 = value;
	}

	inline static int32_t get_offset_of_I_6() { return static_cast<int32_t>(offsetof(PID_t79211, ___I_6)); }
	inline float get_I_6() const { return ___I_6; }
	inline float* get_address_of_I_6() { return &___I_6; }
	inline void set_I_6(float value)
	{
		___I_6 = value;
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(PID_t79211, ___D_7)); }
	inline float get_D_7() const { return ___D_7; }
	inline float* get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(float value)
	{
		___D_7 = value;
	}

	inline static int32_t get_offset_of_prevError_8() { return static_cast<int32_t>(offsetof(PID_t79211, ___prevError_8)); }
	inline float get_prevError_8() const { return ___prevError_8; }
	inline float* get_address_of_prevError_8() { return &___prevError_8; }
	inline void set_prevError_8(float value)
	{
		___prevError_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
