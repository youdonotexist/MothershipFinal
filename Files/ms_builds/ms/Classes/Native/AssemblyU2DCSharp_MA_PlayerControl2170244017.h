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
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MA_PlayerControl
struct  MA_PlayerControl_t2170244017  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MA_PlayerControl::ProjectilePrefab
	GameObject_t4012695102 * ___ProjectilePrefab_3;
	// System.Boolean MA_PlayerControl::canShoot
	bool ___canShoot_4;
	// UnityEngine.Transform MA_PlayerControl::trans
	Transform_t284553113 * ___trans_5;
	// System.Single MA_PlayerControl::lastMoveAmt
	float ___lastMoveAmt_6;

public:
	inline static int32_t get_offset_of_ProjectilePrefab_3() { return static_cast<int32_t>(offsetof(MA_PlayerControl_t2170244017, ___ProjectilePrefab_3)); }
	inline GameObject_t4012695102 * get_ProjectilePrefab_3() const { return ___ProjectilePrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_ProjectilePrefab_3() { return &___ProjectilePrefab_3; }
	inline void set_ProjectilePrefab_3(GameObject_t4012695102 * value)
	{
		___ProjectilePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___ProjectilePrefab_3, value);
	}

	inline static int32_t get_offset_of_canShoot_4() { return static_cast<int32_t>(offsetof(MA_PlayerControl_t2170244017, ___canShoot_4)); }
	inline bool get_canShoot_4() const { return ___canShoot_4; }
	inline bool* get_address_of_canShoot_4() { return &___canShoot_4; }
	inline void set_canShoot_4(bool value)
	{
		___canShoot_4 = value;
	}

	inline static int32_t get_offset_of_trans_5() { return static_cast<int32_t>(offsetof(MA_PlayerControl_t2170244017, ___trans_5)); }
	inline Transform_t284553113 * get_trans_5() const { return ___trans_5; }
	inline Transform_t284553113 ** get_address_of_trans_5() { return &___trans_5; }
	inline void set_trans_5(Transform_t284553113 * value)
	{
		___trans_5 = value;
		Il2CppCodeGenWriteBarrier(&___trans_5, value);
	}

	inline static int32_t get_offset_of_lastMoveAmt_6() { return static_cast<int32_t>(offsetof(MA_PlayerControl_t2170244017, ___lastMoveAmt_6)); }
	inline float get_lastMoveAmt_6() const { return ___lastMoveAmt_6; }
	inline float* get_address_of_lastMoveAmt_6() { return &___lastMoveAmt_6; }
	inline void set_lastMoveAmt_6(float value)
	{
		___lastMoveAmt_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
