#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HeroMovementNode
struct HeroMovementNode_t3096409227;
// AIDirective
struct AIDirective_t3038039303;
// System.Object
struct Il2CppObject;
// JuggernautHeroDirectives
struct JuggernautHeroDirectives_t3789385032;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24
struct  U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455  : public Il2CppObject
{
public:
	// System.Int32 JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::slot
	int32_t ___slot_0;
	// HeroMovementNode JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<node>__0
	HeroMovementNode_t3096409227 * ___U3CnodeU3E__0_1;
	// UnityEngine.Vector3 JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<startPosition>__1
	Vector3_t3525329789  ___U3CstartPositionU3E__1_2;
	// System.Single JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<startDistance>__2
	float ___U3CstartDistanceU3E__2_3;
	// System.Single JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<moveTime>__3
	float ___U3CmoveTimeU3E__3_4;
	// System.Single JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<waitfordirective>__4
	float ___U3CwaitfordirectiveU3E__4_5;
	// AIDirective JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::directive
	AIDirective_t3038039303 * ___directive_6;
	// System.Int32 JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::$PC
	int32_t ___U24PC_7;
	// System.Object JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::$current
	Il2CppObject * ___U24current_8;
	// System.Int32 JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<$>slot
	int32_t ___U3CU24U3Eslot_9;
	// AIDirective JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<$>directive
	AIDirective_t3038039303 * ___U3CU24U3Edirective_10;
	// JuggernautHeroDirectives JuggernautHeroDirectives/<MoveToLaneBasic>c__Iterator24::<>f__this
	JuggernautHeroDirectives_t3789385032 * ___U3CU3Ef__this_11;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_U3CnodeU3E__0_1() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CnodeU3E__0_1)); }
	inline HeroMovementNode_t3096409227 * get_U3CnodeU3E__0_1() const { return ___U3CnodeU3E__0_1; }
	inline HeroMovementNode_t3096409227 ** get_address_of_U3CnodeU3E__0_1() { return &___U3CnodeU3E__0_1; }
	inline void set_U3CnodeU3E__0_1(HeroMovementNode_t3096409227 * value)
	{
		___U3CnodeU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnodeU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U3CstartPositionU3E__1_2() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CstartPositionU3E__1_2)); }
	inline Vector3_t3525329789  get_U3CstartPositionU3E__1_2() const { return ___U3CstartPositionU3E__1_2; }
	inline Vector3_t3525329789 * get_address_of_U3CstartPositionU3E__1_2() { return &___U3CstartPositionU3E__1_2; }
	inline void set_U3CstartPositionU3E__1_2(Vector3_t3525329789  value)
	{
		___U3CstartPositionU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3CstartDistanceU3E__2_3() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CstartDistanceU3E__2_3)); }
	inline float get_U3CstartDistanceU3E__2_3() const { return ___U3CstartDistanceU3E__2_3; }
	inline float* get_address_of_U3CstartDistanceU3E__2_3() { return &___U3CstartDistanceU3E__2_3; }
	inline void set_U3CstartDistanceU3E__2_3(float value)
	{
		___U3CstartDistanceU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CmoveTimeU3E__3_4() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CmoveTimeU3E__3_4)); }
	inline float get_U3CmoveTimeU3E__3_4() const { return ___U3CmoveTimeU3E__3_4; }
	inline float* get_address_of_U3CmoveTimeU3E__3_4() { return &___U3CmoveTimeU3E__3_4; }
	inline void set_U3CmoveTimeU3E__3_4(float value)
	{
		___U3CmoveTimeU3E__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CwaitfordirectiveU3E__4_5() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CwaitfordirectiveU3E__4_5)); }
	inline float get_U3CwaitfordirectiveU3E__4_5() const { return ___U3CwaitfordirectiveU3E__4_5; }
	inline float* get_address_of_U3CwaitfordirectiveU3E__4_5() { return &___U3CwaitfordirectiveU3E__4_5; }
	inline void set_U3CwaitfordirectiveU3E__4_5(float value)
	{
		___U3CwaitfordirectiveU3E__4_5 = value;
	}

	inline static int32_t get_offset_of_directive_6() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___directive_6)); }
	inline AIDirective_t3038039303 * get_directive_6() const { return ___directive_6; }
	inline AIDirective_t3038039303 ** get_address_of_directive_6() { return &___directive_6; }
	inline void set_directive_6(AIDirective_t3038039303 * value)
	{
		___directive_6 = value;
		Il2CppCodeGenWriteBarrier(&___directive_6, value);
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U24current_8)); }
	inline Il2CppObject * get_U24current_8() const { return ___U24current_8; }
	inline Il2CppObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(Il2CppObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_8, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eslot_9() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CU24U3Eslot_9)); }
	inline int32_t get_U3CU24U3Eslot_9() const { return ___U3CU24U3Eslot_9; }
	inline int32_t* get_address_of_U3CU24U3Eslot_9() { return &___U3CU24U3Eslot_9; }
	inline void set_U3CU24U3Eslot_9(int32_t value)
	{
		___U3CU24U3Eslot_9 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Edirective_10() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CU24U3Edirective_10)); }
	inline AIDirective_t3038039303 * get_U3CU24U3Edirective_10() const { return ___U3CU24U3Edirective_10; }
	inline AIDirective_t3038039303 ** get_address_of_U3CU24U3Edirective_10() { return &___U3CU24U3Edirective_10; }
	inline void set_U3CU24U3Edirective_10(AIDirective_t3038039303 * value)
	{
		___U3CU24U3Edirective_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Edirective_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_11() { return static_cast<int32_t>(offsetof(U3CMoveToLaneBasicU3Ec__Iterator24_t3011997455, ___U3CU3Ef__this_11)); }
	inline JuggernautHeroDirectives_t3789385032 * get_U3CU3Ef__this_11() const { return ___U3CU3Ef__this_11; }
	inline JuggernautHeroDirectives_t3789385032 ** get_address_of_U3CU3Ef__this_11() { return &___U3CU3Ef__this_11; }
	inline void set_U3CU3Ef__this_11(JuggernautHeroDirectives_t3789385032 * value)
	{
		___U3CU3Ef__this_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
