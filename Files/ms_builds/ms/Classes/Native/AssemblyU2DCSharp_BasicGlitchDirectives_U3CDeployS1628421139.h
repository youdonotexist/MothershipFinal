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
// UnityEngine.GameObject
struct GameObject_t4012695102;
// BouncyShield
struct BouncyShield_t2791436613;
// AIDirective
struct AIDirective_t3038039303;
// System.Object
struct Il2CppObject;
// BasicGlitchDirectives
struct BasicGlitchDirectives_t1660713287;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasicGlitchDirectives/<DeployShield>c__Iterator1E
struct  U3CDeployShieldU3Ec__Iterator1E_t1628421139  : public Il2CppObject
{
public:
	// SpatialNode[] BasicGlitchDirectives/<DeployShield>c__Iterator1E::<path>__0
	SpatialNodeU5BU5D_t1480054819* ___U3CpathU3E__0_0;
	// SpatialNode BasicGlitchDirectives/<DeployShield>c__Iterator1E::<movenode>__1
	SpatialNode_t3293136134 * ___U3CmovenodeU3E__1_1;
	// SpatialNode BasicGlitchDirectives/<DeployShield>c__Iterator1E::<shieldNode>__2
	SpatialNode_t3293136134 * ___U3CshieldNodeU3E__2_2;
	// UnityEngine.Vector3 BasicGlitchDirectives/<DeployShield>c__Iterator1E::<startPosition>__3
	Vector3_t3525329789  ___U3CstartPositionU3E__3_3;
	// System.Single BasicGlitchDirectives/<DeployShield>c__Iterator1E::<startDistance>__4
	float ___U3CstartDistanceU3E__4_4;
	// System.Single BasicGlitchDirectives/<DeployShield>c__Iterator1E::<moveTime>__5
	float ___U3CmoveTimeU3E__5_5;
	// UnityEngine.GameObject BasicGlitchDirectives/<DeployShield>c__Iterator1E::<instance>__6
	GameObject_t4012695102 * ___U3CinstanceU3E__6_6;
	// BouncyShield BasicGlitchDirectives/<DeployShield>c__Iterator1E::<shield>__7
	BouncyShield_t2791436613 * ___U3CshieldU3E__7_7;
	// System.Single BasicGlitchDirectives/<DeployShield>c__Iterator1E::<waitfordirective>__8
	float ___U3CwaitfordirectiveU3E__8_8;
	// AIDirective BasicGlitchDirectives/<DeployShield>c__Iterator1E::directive
	AIDirective_t3038039303 * ___directive_9;
	// System.Int32 BasicGlitchDirectives/<DeployShield>c__Iterator1E::$PC
	int32_t ___U24PC_10;
	// System.Object BasicGlitchDirectives/<DeployShield>c__Iterator1E::$current
	Il2CppObject * ___U24current_11;
	// AIDirective BasicGlitchDirectives/<DeployShield>c__Iterator1E::<$>directive
	AIDirective_t3038039303 * ___U3CU24U3Edirective_12;
	// BasicGlitchDirectives BasicGlitchDirectives/<DeployShield>c__Iterator1E::<>f__this
	BasicGlitchDirectives_t1660713287 * ___U3CU3Ef__this_13;

public:
	inline static int32_t get_offset_of_U3CpathU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CpathU3E__0_0)); }
	inline SpatialNodeU5BU5D_t1480054819* get_U3CpathU3E__0_0() const { return ___U3CpathU3E__0_0; }
	inline SpatialNodeU5BU5D_t1480054819** get_address_of_U3CpathU3E__0_0() { return &___U3CpathU3E__0_0; }
	inline void set_U3CpathU3E__0_0(SpatialNodeU5BU5D_t1480054819* value)
	{
		___U3CpathU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpathU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CmovenodeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CmovenodeU3E__1_1)); }
	inline SpatialNode_t3293136134 * get_U3CmovenodeU3E__1_1() const { return ___U3CmovenodeU3E__1_1; }
	inline SpatialNode_t3293136134 ** get_address_of_U3CmovenodeU3E__1_1() { return &___U3CmovenodeU3E__1_1; }
	inline void set_U3CmovenodeU3E__1_1(SpatialNode_t3293136134 * value)
	{
		___U3CmovenodeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmovenodeU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U3CshieldNodeU3E__2_2() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CshieldNodeU3E__2_2)); }
	inline SpatialNode_t3293136134 * get_U3CshieldNodeU3E__2_2() const { return ___U3CshieldNodeU3E__2_2; }
	inline SpatialNode_t3293136134 ** get_address_of_U3CshieldNodeU3E__2_2() { return &___U3CshieldNodeU3E__2_2; }
	inline void set_U3CshieldNodeU3E__2_2(SpatialNode_t3293136134 * value)
	{
		___U3CshieldNodeU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CshieldNodeU3E__2_2, value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E__3_3() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CstartPositionU3E__3_3)); }
	inline Vector3_t3525329789  get_U3CstartPositionU3E__3_3() const { return ___U3CstartPositionU3E__3_3; }
	inline Vector3_t3525329789 * get_address_of_U3CstartPositionU3E__3_3() { return &___U3CstartPositionU3E__3_3; }
	inline void set_U3CstartPositionU3E__3_3(Vector3_t3525329789  value)
	{
		___U3CstartPositionU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_U3CstartDistanceU3E__4_4() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CstartDistanceU3E__4_4)); }
	inline float get_U3CstartDistanceU3E__4_4() const { return ___U3CstartDistanceU3E__4_4; }
	inline float* get_address_of_U3CstartDistanceU3E__4_4() { return &___U3CstartDistanceU3E__4_4; }
	inline void set_U3CstartDistanceU3E__4_4(float value)
	{
		___U3CstartDistanceU3E__4_4 = value;
	}

	inline static int32_t get_offset_of_U3CmoveTimeU3E__5_5() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CmoveTimeU3E__5_5)); }
	inline float get_U3CmoveTimeU3E__5_5() const { return ___U3CmoveTimeU3E__5_5; }
	inline float* get_address_of_U3CmoveTimeU3E__5_5() { return &___U3CmoveTimeU3E__5_5; }
	inline void set_U3CmoveTimeU3E__5_5(float value)
	{
		___U3CmoveTimeU3E__5_5 = value;
	}

	inline static int32_t get_offset_of_U3CinstanceU3E__6_6() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CinstanceU3E__6_6)); }
	inline GameObject_t4012695102 * get_U3CinstanceU3E__6_6() const { return ___U3CinstanceU3E__6_6; }
	inline GameObject_t4012695102 ** get_address_of_U3CinstanceU3E__6_6() { return &___U3CinstanceU3E__6_6; }
	inline void set_U3CinstanceU3E__6_6(GameObject_t4012695102 * value)
	{
		___U3CinstanceU3E__6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinstanceU3E__6_6, value);
	}

	inline static int32_t get_offset_of_U3CshieldU3E__7_7() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CshieldU3E__7_7)); }
	inline BouncyShield_t2791436613 * get_U3CshieldU3E__7_7() const { return ___U3CshieldU3E__7_7; }
	inline BouncyShield_t2791436613 ** get_address_of_U3CshieldU3E__7_7() { return &___U3CshieldU3E__7_7; }
	inline void set_U3CshieldU3E__7_7(BouncyShield_t2791436613 * value)
	{
		___U3CshieldU3E__7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CshieldU3E__7_7, value);
	}

	inline static int32_t get_offset_of_U3CwaitfordirectiveU3E__8_8() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CwaitfordirectiveU3E__8_8)); }
	inline float get_U3CwaitfordirectiveU3E__8_8() const { return ___U3CwaitfordirectiveU3E__8_8; }
	inline float* get_address_of_U3CwaitfordirectiveU3E__8_8() { return &___U3CwaitfordirectiveU3E__8_8; }
	inline void set_U3CwaitfordirectiveU3E__8_8(float value)
	{
		___U3CwaitfordirectiveU3E__8_8 = value;
	}

	inline static int32_t get_offset_of_directive_9() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___directive_9)); }
	inline AIDirective_t3038039303 * get_directive_9() const { return ___directive_9; }
	inline AIDirective_t3038039303 ** get_address_of_directive_9() { return &___directive_9; }
	inline void set_directive_9(AIDirective_t3038039303 * value)
	{
		___directive_9 = value;
		Il2CppCodeGenWriteBarrier(&___directive_9, value);
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}

	inline static int32_t get_offset_of_U24current_11() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U24current_11)); }
	inline Il2CppObject * get_U24current_11() const { return ___U24current_11; }
	inline Il2CppObject ** get_address_of_U24current_11() { return &___U24current_11; }
	inline void set_U24current_11(Il2CppObject * value)
	{
		___U24current_11 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_11, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edirective_12() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CU24U3Edirective_12)); }
	inline AIDirective_t3038039303 * get_U3CU24U3Edirective_12() const { return ___U3CU24U3Edirective_12; }
	inline AIDirective_t3038039303 ** get_address_of_U3CU24U3Edirective_12() { return &___U3CU24U3Edirective_12; }
	inline void set_U3CU24U3Edirective_12(AIDirective_t3038039303 * value)
	{
		___U3CU24U3Edirective_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Edirective_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_13() { return static_cast<int32_t>(offsetof(U3CDeployShieldU3Ec__Iterator1E_t1628421139, ___U3CU3Ef__this_13)); }
	inline BasicGlitchDirectives_t1660713287 * get_U3CU3Ef__this_13() const { return ___U3CU3Ef__this_13; }
	inline BasicGlitchDirectives_t1660713287 ** get_address_of_U3CU3Ef__this_13() { return &___U3CU3Ef__this_13; }
	inline void set_U3CU3Ef__this_13(BasicGlitchDirectives_t1660713287 * value)
	{
		___U3CU3Ef__this_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
