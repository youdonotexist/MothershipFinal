#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// Damagable
struct Damagable_t4024817136;

#include "AssemblyU2DCSharp_TargetedShot123373866.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TargetedEnergyShot
struct  TargetedEnergyShot_t3672590290  : public TargetedShot_t123373866
{
public:
	// UnityEngine.LayerMask TargetedEnergyShot::hitLayers
	LayerMask_t1862190090  ___hitLayers_7;
	// UnityEngine.LayerMask TargetedEnergyShot::proxyDamageLayer
	LayerMask_t1862190090  ___proxyDamageLayer_8;
	// UnityEngine.Material TargetedEnergyShot::laserMat
	Material_t1886596500 * ___laserMat_9;
	// UnityEngine.Material TargetedEnergyShot::laserTracerMat
	Material_t1886596500 * ___laserTracerMat_10;
	// UnityEngine.GameObject TargetedEnergyShot::muzzleFlash
	GameObject_t4012695102 * ___muzzleFlash_11;
	// UnityEngine.GameObject TargetedEnergyShot::mothershipImpactPrefab
	GameObject_t4012695102 * ___mothershipImpactPrefab_12;
	// UnityEngine.GameObject TargetedEnergyShot::minionImpactPrefab
	GameObject_t4012695102 * ___minionImpactPrefab_13;
	// Vectrosity.VectorLine TargetedEnergyShot::shot
	VectorLine_t3065371647 * ___shot_14;
	// Vectrosity.VectorLine TargetedEnergyShot::tracer
	VectorLine_t3065371647 * ___tracer_15;
	// System.Boolean TargetedEnergyShot::firing
	bool ___firing_16;
	// Damagable TargetedEnergyShot::_damagable
	Damagable_t4024817136 * ____damagable_17;

public:
	inline static int32_t get_offset_of_hitLayers_7() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___hitLayers_7)); }
	inline LayerMask_t1862190090  get_hitLayers_7() const { return ___hitLayers_7; }
	inline LayerMask_t1862190090 * get_address_of_hitLayers_7() { return &___hitLayers_7; }
	inline void set_hitLayers_7(LayerMask_t1862190090  value)
	{
		___hitLayers_7 = value;
	}

	inline static int32_t get_offset_of_proxyDamageLayer_8() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___proxyDamageLayer_8)); }
	inline LayerMask_t1862190090  get_proxyDamageLayer_8() const { return ___proxyDamageLayer_8; }
	inline LayerMask_t1862190090 * get_address_of_proxyDamageLayer_8() { return &___proxyDamageLayer_8; }
	inline void set_proxyDamageLayer_8(LayerMask_t1862190090  value)
	{
		___proxyDamageLayer_8 = value;
	}

	inline static int32_t get_offset_of_laserMat_9() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___laserMat_9)); }
	inline Material_t1886596500 * get_laserMat_9() const { return ___laserMat_9; }
	inline Material_t1886596500 ** get_address_of_laserMat_9() { return &___laserMat_9; }
	inline void set_laserMat_9(Material_t1886596500 * value)
	{
		___laserMat_9 = value;
		Il2CppCodeGenWriteBarrier(&___laserMat_9, value);
	}

	inline static int32_t get_offset_of_laserTracerMat_10() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___laserTracerMat_10)); }
	inline Material_t1886596500 * get_laserTracerMat_10() const { return ___laserTracerMat_10; }
	inline Material_t1886596500 ** get_address_of_laserTracerMat_10() { return &___laserTracerMat_10; }
	inline void set_laserTracerMat_10(Material_t1886596500 * value)
	{
		___laserTracerMat_10 = value;
		Il2CppCodeGenWriteBarrier(&___laserTracerMat_10, value);
	}

	inline static int32_t get_offset_of_muzzleFlash_11() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___muzzleFlash_11)); }
	inline GameObject_t4012695102 * get_muzzleFlash_11() const { return ___muzzleFlash_11; }
	inline GameObject_t4012695102 ** get_address_of_muzzleFlash_11() { return &___muzzleFlash_11; }
	inline void set_muzzleFlash_11(GameObject_t4012695102 * value)
	{
		___muzzleFlash_11 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlash_11, value);
	}

	inline static int32_t get_offset_of_mothershipImpactPrefab_12() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___mothershipImpactPrefab_12)); }
	inline GameObject_t4012695102 * get_mothershipImpactPrefab_12() const { return ___mothershipImpactPrefab_12; }
	inline GameObject_t4012695102 ** get_address_of_mothershipImpactPrefab_12() { return &___mothershipImpactPrefab_12; }
	inline void set_mothershipImpactPrefab_12(GameObject_t4012695102 * value)
	{
		___mothershipImpactPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___mothershipImpactPrefab_12, value);
	}

	inline static int32_t get_offset_of_minionImpactPrefab_13() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___minionImpactPrefab_13)); }
	inline GameObject_t4012695102 * get_minionImpactPrefab_13() const { return ___minionImpactPrefab_13; }
	inline GameObject_t4012695102 ** get_address_of_minionImpactPrefab_13() { return &___minionImpactPrefab_13; }
	inline void set_minionImpactPrefab_13(GameObject_t4012695102 * value)
	{
		___minionImpactPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___minionImpactPrefab_13, value);
	}

	inline static int32_t get_offset_of_shot_14() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___shot_14)); }
	inline VectorLine_t3065371647 * get_shot_14() const { return ___shot_14; }
	inline VectorLine_t3065371647 ** get_address_of_shot_14() { return &___shot_14; }
	inline void set_shot_14(VectorLine_t3065371647 * value)
	{
		___shot_14 = value;
		Il2CppCodeGenWriteBarrier(&___shot_14, value);
	}

	inline static int32_t get_offset_of_tracer_15() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___tracer_15)); }
	inline VectorLine_t3065371647 * get_tracer_15() const { return ___tracer_15; }
	inline VectorLine_t3065371647 ** get_address_of_tracer_15() { return &___tracer_15; }
	inline void set_tracer_15(VectorLine_t3065371647 * value)
	{
		___tracer_15 = value;
		Il2CppCodeGenWriteBarrier(&___tracer_15, value);
	}

	inline static int32_t get_offset_of_firing_16() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ___firing_16)); }
	inline bool get_firing_16() const { return ___firing_16; }
	inline bool* get_address_of_firing_16() { return &___firing_16; }
	inline void set_firing_16(bool value)
	{
		___firing_16 = value;
	}

	inline static int32_t get_offset_of__damagable_17() { return static_cast<int32_t>(offsetof(TargetedEnergyShot_t3672590290, ____damagable_17)); }
	inline Damagable_t4024817136 * get__damagable_17() const { return ____damagable_17; }
	inline Damagable_t4024817136 ** get_address_of__damagable_17() { return &____damagable_17; }
	inline void set__damagable_17(Damagable_t4024817136 * value)
	{
		____damagable_17 = value;
		Il2CppCodeGenWriteBarrier(&____damagable_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
