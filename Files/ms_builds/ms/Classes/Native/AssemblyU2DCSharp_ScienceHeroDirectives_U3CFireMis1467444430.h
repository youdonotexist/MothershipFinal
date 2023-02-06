#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SpatialNode[]
struct SpatialNodeU5BU5D_t1480054819;
// SpatialNode
struct SpatialNode_t3293136134;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1365728750;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// HeroMissile
struct HeroMissile_t4116636588;
// AIDirective
struct AIDirective_t3038039303;
// System.Object
struct Il2CppObject;
// ScienceHeroDirectives
struct ScienceHeroDirectives_t169817346;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScienceHeroDirectives/<FireMissile>c__Iterator29
struct  U3CFireMissileU3Ec__Iterator29_t1467444430  : public Il2CppObject
{
public:
	// SpatialNode[] ScienceHeroDirectives/<FireMissile>c__Iterator29::<heroNodes>__0
	SpatialNodeU5BU5D_t1480054819* ___U3CheroNodesU3E__0_0;
	// SpatialNode ScienceHeroDirectives/<FireMissile>c__Iterator29::<chosenNode>__1
	SpatialNode_t3293136134 * ___U3CchosenNodeU3E__1_1;
	// System.Int32 ScienceHeroDirectives/<FireMissile>c__Iterator29::<randomStart>__2
	int32_t ___U3CrandomStartU3E__2_2;
	// System.Int32 ScienceHeroDirectives/<FireMissile>c__Iterator29::<i>__3
	int32_t ___U3CiU3E__3_3;
	// UnityEngine.LayerMask ScienceHeroDirectives/<FireMissile>c__Iterator29::<avoid>__4
	LayerMask_t1862190090  ___U3CavoidU3E__4_4;
	// SpatialNode ScienceHeroDirectives/<FireMissile>c__Iterator29::<startNode>__5
	SpatialNode_t3293136134 * ___U3CstartNodeU3E__5_5;
	// UnityEngine.RaycastHit[] ScienceHeroDirectives/<FireMissile>c__Iterator29::<hits>__6
	RaycastHitU5BU5D_t1365728750* ___U3ChitsU3E__6_6;
	// UnityEngine.Vector3 ScienceHeroDirectives/<FireMissile>c__Iterator29::<startPosition>__7
	Vector3_t3525329789  ___U3CstartPositionU3E__7_7;
	// System.Single ScienceHeroDirectives/<FireMissile>c__Iterator29::<startDistance>__8
	float ___U3CstartDistanceU3E__8_8;
	// System.Single ScienceHeroDirectives/<FireMissile>c__Iterator29::<moveTime>__9
	float ___U3CmoveTimeU3E__9_9;
	// UnityEngine.Vector3[] ScienceHeroDirectives/<FireMissile>c__Iterator29::<path>__10
	Vector3U5BU5D_t3227571696* ___U3CpathU3E__10_10;
	// UnityEngine.GameObject ScienceHeroDirectives/<FireMissile>c__Iterator29::<instance>__11
	GameObject_t4012695102 * ___U3CinstanceU3E__11_11;
	// HeroMissile ScienceHeroDirectives/<FireMissile>c__Iterator29::<hm>__12
	HeroMissile_t4116636588 * ___U3ChmU3E__12_12;
	// System.Single ScienceHeroDirectives/<FireMissile>c__Iterator29::<missileSpeed>__13
	float ___U3CmissileSpeedU3E__13_13;
	// System.Single ScienceHeroDirectives/<FireMissile>c__Iterator29::<waitfordirective>__14
	float ___U3CwaitfordirectiveU3E__14_14;
	// AIDirective ScienceHeroDirectives/<FireMissile>c__Iterator29::directive
	AIDirective_t3038039303 * ___directive_15;
	// System.Int32 ScienceHeroDirectives/<FireMissile>c__Iterator29::$PC
	int32_t ___U24PC_16;
	// System.Object ScienceHeroDirectives/<FireMissile>c__Iterator29::$current
	Il2CppObject * ___U24current_17;
	// AIDirective ScienceHeroDirectives/<FireMissile>c__Iterator29::<$>directive
	AIDirective_t3038039303 * ___U3CU24U3Edirective_18;
	// ScienceHeroDirectives ScienceHeroDirectives/<FireMissile>c__Iterator29::<>f__this
	ScienceHeroDirectives_t169817346 * ___U3CU3Ef__this_19;

public:
	inline static int32_t get_offset_of_U3CheroNodesU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CheroNodesU3E__0_0)); }
	inline SpatialNodeU5BU5D_t1480054819* get_U3CheroNodesU3E__0_0() const { return ___U3CheroNodesU3E__0_0; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of_U3CheroNodesU3E__0_0() { return &___U3CheroNodesU3E__0_0; }
	inline void set_U3CheroNodesU3E__0_0(SpatialNodeU5BU5D_t1480054819* value)
	{
		___U3CheroNodesU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CheroNodesU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CchosenNodeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CchosenNodeU3E__1_1)); }
	inline SpatialNode_t3293136134 * get_U3CchosenNodeU3E__1_1() const { return ___U3CchosenNodeU3E__1_1; }
	inline SpatialNode_t3293136134 ** get_address_of_U3CchosenNodeU3E__1_1() { return &___U3CchosenNodeU3E__1_1; }
	inline void set_U3CchosenNodeU3E__1_1(SpatialNode_t3293136134 * value)
	{
		___U3CchosenNodeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CchosenNodeU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U3CrandomStartU3E__2_2() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CrandomStartU3E__2_2)); }
	inline int32_t get_U3CrandomStartU3E__2_2() const { return ___U3CrandomStartU3E__2_2; }
	inline int32_t* get_address_of_U3CrandomStartU3E__2_2() { return &___U3CrandomStartU3E__2_2; }
	inline void set_U3CrandomStartU3E__2_2(int32_t value)
	{
		___U3CrandomStartU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__3_3() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CiU3E__3_3)); }
	inline int32_t get_U3CiU3E__3_3() const { return ___U3CiU3E__3_3; }
	inline int32_t* get_address_of_U3CiU3E__3_3() { return &___U3CiU3E__3_3; }
	inline void set_U3CiU3E__3_3(int32_t value)
	{
		___U3CiU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_U3CavoidU3E__4_4() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CavoidU3E__4_4)); }
	inline LayerMask_t1862190090  get_U3CavoidU3E__4_4() const { return ___U3CavoidU3E__4_4; }
	inline LayerMask_t1862190090 * get_address_of_U3CavoidU3E__4_4() { return &___U3CavoidU3E__4_4; }
	inline void set_U3CavoidU3E__4_4(LayerMask_t1862190090  value)
	{
		___U3CavoidU3E__4_4 = value;
	}

	inline static int32_t get_offset_of_U3CstartNodeU3E__5_5() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CstartNodeU3E__5_5)); }
	inline SpatialNode_t3293136134 * get_U3CstartNodeU3E__5_5() const { return ___U3CstartNodeU3E__5_5; }
	inline SpatialNode_t3293136134 ** get_address_of_U3CstartNodeU3E__5_5() { return &___U3CstartNodeU3E__5_5; }
	inline void set_U3CstartNodeU3E__5_5(SpatialNode_t3293136134 * value)
	{
		___U3CstartNodeU3E__5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstartNodeU3E__5_5, value);
	}

	inline static int32_t get_offset_of_U3ChitsU3E__6_6() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3ChitsU3E__6_6)); }
	inline RaycastHitU5BU5D_t1365728750* get_U3ChitsU3E__6_6() const { return ___U3ChitsU3E__6_6; }
	inline RaycastHitU5BU5D_t1365728750** get_address_of_U3ChitsU3E__6_6() { return &___U3ChitsU3E__6_6; }
	inline void set_U3ChitsU3E__6_6(RaycastHitU5BU5D_t1365728750* value)
	{
		___U3ChitsU3E__6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChitsU3E__6_6, value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E__7_7() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CstartPositionU3E__7_7)); }
	inline Vector3_t3525329789  get_U3CstartPositionU3E__7_7() const { return ___U3CstartPositionU3E__7_7; }
	inline Vector3_t3525329789 * get_address_of_U3CstartPositionU3E__7_7() { return &___U3CstartPositionU3E__7_7; }
	inline void set_U3CstartPositionU3E__7_7(Vector3_t3525329789  value)
	{
		___U3CstartPositionU3E__7_7 = value;
	}

	inline static int32_t get_offset_of_U3CstartDistanceU3E__8_8() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CstartDistanceU3E__8_8)); }
	inline float get_U3CstartDistanceU3E__8_8() const { return ___U3CstartDistanceU3E__8_8; }
	inline float* get_address_of_U3CstartDistanceU3E__8_8() { return &___U3CstartDistanceU3E__8_8; }
	inline void set_U3CstartDistanceU3E__8_8(float value)
	{
		___U3CstartDistanceU3E__8_8 = value;
	}

	inline static int32_t get_offset_of_U3CmoveTimeU3E__9_9() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CmoveTimeU3E__9_9)); }
	inline float get_U3CmoveTimeU3E__9_9() const { return ___U3CmoveTimeU3E__9_9; }
	inline float* get_address_of_U3CmoveTimeU3E__9_9() { return &___U3CmoveTimeU3E__9_9; }
	inline void set_U3CmoveTimeU3E__9_9(float value)
	{
		___U3CmoveTimeU3E__9_9 = value;
	}

	inline static int32_t get_offset_of_U3CpathU3E__10_10() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CpathU3E__10_10)); }
	inline Vector3U5BU5D_t3227571696* get_U3CpathU3E__10_10() const { return ___U3CpathU3E__10_10; }
	inline Vector3U5BU5D_t3227571696** get_address_of_U3CpathU3E__10_10() { return &___U3CpathU3E__10_10; }
	inline void set_U3CpathU3E__10_10(Vector3U5BU5D_t3227571696* value)
	{
		___U3CpathU3E__10_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3E__10_10, value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3E__11_11() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CinstanceU3E__11_11)); }
	inline GameObject_t4012695102 * get_U3CinstanceU3E__11_11() const { return ___U3CinstanceU3E__11_11; }
	inline GameObject_t4012695102 ** get_address_of_U3CinstanceU3E__11_11() { return &___U3CinstanceU3E__11_11; }
	inline void set_U3CinstanceU3E__11_11(GameObject_t4012695102 * value)
	{
		___U3CinstanceU3E__11_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinstanceU3E__11_11, value);
	}

	inline static int32_t get_offset_of_U3ChmU3E__12_12() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3ChmU3E__12_12)); }
	inline HeroMissile_t4116636588 * get_U3ChmU3E__12_12() const { return ___U3ChmU3E__12_12; }
	inline HeroMissile_t4116636588 ** get_address_of_U3ChmU3E__12_12() { return &___U3ChmU3E__12_12; }
	inline void set_U3ChmU3E__12_12(HeroMissile_t4116636588 * value)
	{
		___U3ChmU3E__12_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChmU3E__12_12, value);
	}

	inline static int32_t get_offset_of_U3CmissileSpeedU3E__13_13() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CmissileSpeedU3E__13_13)); }
	inline float get_U3CmissileSpeedU3E__13_13() const { return ___U3CmissileSpeedU3E__13_13; }
	inline float* get_address_of_U3CmissileSpeedU3E__13_13() { return &___U3CmissileSpeedU3E__13_13; }
	inline void set_U3CmissileSpeedU3E__13_13(float value)
	{
		___U3CmissileSpeedU3E__13_13 = value;
	}

	inline static int32_t get_offset_of_U3CwaitfordirectiveU3E__14_14() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CwaitfordirectiveU3E__14_14)); }
	inline float get_U3CwaitfordirectiveU3E__14_14() const { return ___U3CwaitfordirectiveU3E__14_14; }
	inline float* get_address_of_U3CwaitfordirectiveU3E__14_14() { return &___U3CwaitfordirectiveU3E__14_14; }
	inline void set_U3CwaitfordirectiveU3E__14_14(float value)
	{
		___U3CwaitfordirectiveU3E__14_14 = value;
	}

	inline static int32_t get_offset_of_directive_15() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___directive_15)); }
	inline AIDirective_t3038039303 * get_directive_15() const { return ___directive_15; }
	inline AIDirective_t3038039303 ** get_address_of_directive_15() { return &___directive_15; }
	inline void set_directive_15(AIDirective_t3038039303 * value)
	{
		___directive_15 = value;
		Il2CppCodeGenWriteBarrier(&___directive_15, value);
	}

	inline static int32_t get_offset_of_U24PC_16() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U24PC_16)); }
	inline int32_t get_U24PC_16() const { return ___U24PC_16; }
	inline int32_t* get_address_of_U24PC_16() { return &___U24PC_16; }
	inline void set_U24PC_16(int32_t value)
	{
		___U24PC_16 = value;
	}

	inline static int32_t get_offset_of_U24current_17() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U24current_17)); }
	inline Il2CppObject * get_U24current_17() const { return ___U24current_17; }
	inline Il2CppObject ** get_address_of_U24current_17() { return &___U24current_17; }
	inline void set_U24current_17(Il2CppObject * value)
	{
		___U24current_17 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_17, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edirective_18() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CU24U3Edirective_18)); }
	inline AIDirective_t3038039303 * get_U3CU24U3Edirective_18() const { return ___U3CU24U3Edirective_18; }
	inline AIDirective_t3038039303 ** get_address_of_U3CU24U3Edirective_18() { return &___U3CU24U3Edirective_18; }
	inline void set_U3CU24U3Edirective_18(AIDirective_t3038039303 * value)
	{
		___U3CU24U3Edirective_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Edirective_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_19() { return static_cast<int32_t>(offsetof(U3CFireMissileU3Ec__Iterator29_t1467444430, ___U3CU3Ef__this_19)); }
	inline ScienceHeroDirectives_t169817346 * get_U3CU3Ef__this_19() const { return ___U3CU3Ef__this_19; }
	inline ScienceHeroDirectives_t169817346 ** get_address_of_U3CU3Ef__this_19() { return &___U3CU3Ef__this_19; }
	inline void set_U3CU3Ef__this_19(ScienceHeroDirectives_t169817346 * value)
	{
		___U3CU3Ef__this_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
