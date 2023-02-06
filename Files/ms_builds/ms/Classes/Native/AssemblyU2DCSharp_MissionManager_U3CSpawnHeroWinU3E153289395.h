#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroConfig
struct HeroConfig_t3731208188;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// HeroVehicle
struct HeroVehicle_t3389256114;
// System.Object
struct Il2CppObject;
// MissionManager
struct MissionManager_t3465239713;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MissionManager/<SpawnHeroWin>c__Iterator63
struct  U3CSpawnHeroWinU3Ec__Iterator63_t153289395  : public Il2CppObject
{
public:
	// System.Int32 MissionManager/<SpawnHeroWin>c__Iterator63::index
	int32_t ___index_0;
	// HeroConfig MissionManager/<SpawnHeroWin>c__Iterator63::<config>__0
	HeroConfig_t3731208188 * ___U3CconfigU3E__0_1;
	// UnityEngine.GameObject MissionManager/<SpawnHeroWin>c__Iterator63::<go>__1
	GameObject_t4012695102 * ___U3CgoU3E__1_2;
	// HeroVehicle MissionManager/<SpawnHeroWin>c__Iterator63::<hero>__2
	HeroVehicle_t3389256114 * ___U3CheroU3E__2_3;
	// UnityEngine.Vector3 MissionManager/<SpawnHeroWin>c__Iterator63::<start>__3
	Vector3_t3525329789  ___U3CstartU3E__3_4;
	// UnityEngine.Vector3 MissionManager/<SpawnHeroWin>c__Iterator63::<end>__4
	Vector3_t3525329789  ___U3CendU3E__4_5;
	// System.Single MissionManager/<SpawnHeroWin>c__Iterator63::<duration>__5
	float ___U3CdurationU3E__5_6;
	// System.Single MissionManager/<SpawnHeroWin>c__Iterator63::<elapsed>__6
	float ___U3CelapsedU3E__6_7;
	// System.Int32 MissionManager/<SpawnHeroWin>c__Iterator63::$PC
	int32_t ___U24PC_8;
	// System.Object MissionManager/<SpawnHeroWin>c__Iterator63::$current
	Il2CppObject * ___U24current_9;
	// System.Int32 MissionManager/<SpawnHeroWin>c__Iterator63::<$>index
	int32_t ___U3CU24U3Eindex_10;
	// MissionManager MissionManager/<SpawnHeroWin>c__Iterator63::<>f__this
	MissionManager_t3465239713 * ___U3CU3Ef__this_11;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_U3CconfigU3E__0_1() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CconfigU3E__0_1)); }
	inline HeroConfig_t3731208188 * get_U3CconfigU3E__0_1() const { return ___U3CconfigU3E__0_1; }
	inline HeroConfig_t3731208188 ** get_address_of_U3CconfigU3E__0_1() { return &___U3CconfigU3E__0_1; }
	inline void set_U3CconfigU3E__0_1(HeroConfig_t3731208188 * value)
	{
		___U3CconfigU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CconfigU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U3CgoU3E__1_2() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CgoU3E__1_2)); }
	inline GameObject_t4012695102 * get_U3CgoU3E__1_2() const { return ___U3CgoU3E__1_2; }
	inline GameObject_t4012695102 ** get_address_of_U3CgoU3E__1_2() { return &___U3CgoU3E__1_2; }
	inline void set_U3CgoU3E__1_2(GameObject_t4012695102 * value)
	{
		___U3CgoU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgoU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CheroU3E__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CheroU3E__2_3)); }
	inline HeroVehicle_t3389256114 * get_U3CheroU3E__2_3() const { return ___U3CheroU3E__2_3; }
	inline HeroVehicle_t3389256114 ** get_address_of_U3CheroU3E__2_3() { return &___U3CheroU3E__2_3; }
	inline void set_U3CheroU3E__2_3(HeroVehicle_t3389256114 * value)
	{
		___U3CheroU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CheroU3E__2_3, value);
	}

	inline static int32_t get_offset_of_U3CstartU3E__3_4() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CstartU3E__3_4)); }
	inline Vector3_t3525329789  get_U3CstartU3E__3_4() const { return ___U3CstartU3E__3_4; }
	inline Vector3_t3525329789 * get_address_of_U3CstartU3E__3_4() { return &___U3CstartU3E__3_4; }
	inline void set_U3CstartU3E__3_4(Vector3_t3525329789  value)
	{
		___U3CstartU3E__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CendU3E__4_5() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CendU3E__4_5)); }
	inline Vector3_t3525329789  get_U3CendU3E__4_5() const { return ___U3CendU3E__4_5; }
	inline Vector3_t3525329789 * get_address_of_U3CendU3E__4_5() { return &___U3CendU3E__4_5; }
	inline void set_U3CendU3E__4_5(Vector3_t3525329789  value)
	{
		___U3CendU3E__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CdurationU3E__5_6() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CdurationU3E__5_6)); }
	inline float get_U3CdurationU3E__5_6() const { return ___U3CdurationU3E__5_6; }
	inline float* get_address_of_U3CdurationU3E__5_6() { return &___U3CdurationU3E__5_6; }
	inline void set_U3CdurationU3E__5_6(float value)
	{
		___U3CdurationU3E__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedU3E__6_7() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CelapsedU3E__6_7)); }
	inline float get_U3CelapsedU3E__6_7() const { return ___U3CelapsedU3E__6_7; }
	inline float* get_address_of_U3CelapsedU3E__6_7() { return &___U3CelapsedU3E__6_7; }
	inline void set_U3CelapsedU3E__6_7(float value)
	{
		___U3CelapsedU3E__6_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U24current_9)); }
	inline Il2CppObject * get_U24current_9() const { return ___U24current_9; }
	inline Il2CppObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(Il2CppObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_9, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eindex_10() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CU24U3Eindex_10)); }
	inline int32_t get_U3CU24U3Eindex_10() const { return ___U3CU24U3Eindex_10; }
	inline int32_t* get_address_of_U3CU24U3Eindex_10() { return &___U3CU24U3Eindex_10; }
	inline void set_U3CU24U3Eindex_10(int32_t value)
	{
		___U3CU24U3Eindex_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_11() { return static_cast<int32_t>(offsetof(U3CSpawnHeroWinU3Ec__Iterator63_t153289395, ___U3CU3Ef__this_11)); }
	inline MissionManager_t3465239713 * get_U3CU3Ef__this_11() const { return ___U3CU3Ef__this_11; }
	inline MissionManager_t3465239713 ** get_address_of_U3CU3Ef__this_11() { return &___U3CU3Ef__this_11; }
	inline void set_U3CU3Ef__this_11(MissionManager_t3465239713 * value)
	{
		___U3CU3Ef__this_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
