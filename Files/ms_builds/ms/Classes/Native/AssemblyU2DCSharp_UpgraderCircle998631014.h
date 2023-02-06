#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UIButton
struct UIButton_t179429094;
// UISprite
struct UISprite_t661437049;
// UpgraderCircle
struct UpgraderCircle_t998631014;
// UnityEngine.Material
struct Material_t1886596500;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgraderCircle
struct  UpgraderCircle_t998631014  : public MonoBehaviour_t3012272455
{
public:
	// UIButton UpgraderCircle::_button
	UIButton_t179429094 * ____button_2;
	// UISprite UpgraderCircle::_background
	UISprite_t661437049 * ____background_3;
	// UISprite UpgraderCircle::_ring
	UISprite_t661437049 * ____ring_4;
	// UISprite UpgraderCircle::_minionType
	UISprite_t661437049 * ____minionType_5;
	// UpgraderCircle UpgraderCircle::_parent
	UpgraderCircle_t998631014 * ____parent_6;
	// System.Single UpgraderCircle::drawTime
	float ___drawTime_7;
	// System.Single UpgraderCircle::drawElapsed
	float ___drawElapsed_8;
	// System.Boolean UpgraderCircle::draw
	bool ___draw_9;
	// PortState/MinionTypeDetails UpgraderCircle::cachedDetails
	MinionTypeDetails_t2901012274  ___cachedDetails_10;
	// System.Int32 UpgraderCircle::typeContext
	int32_t ___typeContext_11;
	// System.Int32 UpgraderCircle::levelContext
	int32_t ___levelContext_12;
	// UnityEngine.Material UpgraderCircle::m_LineMaterial
	Material_t1886596500 * ___m_LineMaterial_13;
	// UnityEngine.Color UpgraderCircle::backgroundColor
	Color_t1588175760  ___backgroundColor_14;
	// UnityEngine.Color UpgraderCircle::ringColor
	Color_t1588175760  ___ringColor_15;
	// Vectrosity.VectorLine UpgraderCircle::_path
	VectorLine_t3065371647 * ____path_16;

public:
	inline static int32_t get_offset_of__button_2() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ____button_2)); }
	inline UIButton_t179429094 * get__button_2() const { return ____button_2; }
	inline UIButton_t179429094 ** get_address_of__button_2() { return &____button_2; }
	inline void set__button_2(UIButton_t179429094 * value)
	{
		____button_2 = value;
		Il2CppCodeGenWriteBarrier(&____button_2, value);
	}

	inline static int32_t get_offset_of__background_3() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ____background_3)); }
	inline UISprite_t661437049 * get__background_3() const { return ____background_3; }
	inline UISprite_t661437049 ** get_address_of__background_3() { return &____background_3; }
	inline void set__background_3(UISprite_t661437049 * value)
	{
		____background_3 = value;
		Il2CppCodeGenWriteBarrier(&____background_3, value);
	}

	inline static int32_t get_offset_of__ring_4() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ____ring_4)); }
	inline UISprite_t661437049 * get__ring_4() const { return ____ring_4; }
	inline UISprite_t661437049 ** get_address_of__ring_4() { return &____ring_4; }
	inline void set__ring_4(UISprite_t661437049 * value)
	{
		____ring_4 = value;
		Il2CppCodeGenWriteBarrier(&____ring_4, value);
	}

	inline static int32_t get_offset_of__minionType_5() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ____minionType_5)); }
	inline UISprite_t661437049 * get__minionType_5() const { return ____minionType_5; }
	inline UISprite_t661437049 ** get_address_of__minionType_5() { return &____minionType_5; }
	inline void set__minionType_5(UISprite_t661437049 * value)
	{
		____minionType_5 = value;
		Il2CppCodeGenWriteBarrier(&____minionType_5, value);
	}

	inline static int32_t get_offset_of__parent_6() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ____parent_6)); }
	inline UpgraderCircle_t998631014 * get__parent_6() const { return ____parent_6; }
	inline UpgraderCircle_t998631014 ** get_address_of__parent_6() { return &____parent_6; }
	inline void set__parent_6(UpgraderCircle_t998631014 * value)
	{
		____parent_6 = value;
		Il2CppCodeGenWriteBarrier(&____parent_6, value);
	}

	inline static int32_t get_offset_of_drawTime_7() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___drawTime_7)); }
	inline float get_drawTime_7() const { return ___drawTime_7; }
	inline float* get_address_of_drawTime_7() { return &___drawTime_7; }
	inline void set_drawTime_7(float value)
	{
		___drawTime_7 = value;
	}

	inline static int32_t get_offset_of_drawElapsed_8() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___drawElapsed_8)); }
	inline float get_drawElapsed_8() const { return ___drawElapsed_8; }
	inline float* get_address_of_drawElapsed_8() { return &___drawElapsed_8; }
	inline void set_drawElapsed_8(float value)
	{
		___drawElapsed_8 = value;
	}

	inline static int32_t get_offset_of_draw_9() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___draw_9)); }
	inline bool get_draw_9() const { return ___draw_9; }
	inline bool* get_address_of_draw_9() { return &___draw_9; }
	inline void set_draw_9(bool value)
	{
		___draw_9 = value;
	}

	inline static int32_t get_offset_of_cachedDetails_10() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___cachedDetails_10)); }
	inline MinionTypeDetails_t2901012274  get_cachedDetails_10() const { return ___cachedDetails_10; }
	inline MinionTypeDetails_t2901012274 * get_address_of_cachedDetails_10() { return &___cachedDetails_10; }
	inline void set_cachedDetails_10(MinionTypeDetails_t2901012274  value)
	{
		___cachedDetails_10 = value;
	}

	inline static int32_t get_offset_of_typeContext_11() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___typeContext_11)); }
	inline int32_t get_typeContext_11() const { return ___typeContext_11; }
	inline int32_t* get_address_of_typeContext_11() { return &___typeContext_11; }
	inline void set_typeContext_11(int32_t value)
	{
		___typeContext_11 = value;
	}

	inline static int32_t get_offset_of_levelContext_12() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___levelContext_12)); }
	inline int32_t get_levelContext_12() const { return ___levelContext_12; }
	inline int32_t* get_address_of_levelContext_12() { return &___levelContext_12; }
	inline void set_levelContext_12(int32_t value)
	{
		___levelContext_12 = value;
	}

	inline static int32_t get_offset_of_m_LineMaterial_13() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___m_LineMaterial_13)); }
	inline Material_t1886596500 * get_m_LineMaterial_13() const { return ___m_LineMaterial_13; }
	inline Material_t1886596500 ** get_address_of_m_LineMaterial_13() { return &___m_LineMaterial_13; }
	inline void set_m_LineMaterial_13(Material_t1886596500 * value)
	{
		___m_LineMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_LineMaterial_13, value);
	}

	inline static int32_t get_offset_of_backgroundColor_14() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___backgroundColor_14)); }
	inline Color_t1588175760  get_backgroundColor_14() const { return ___backgroundColor_14; }
	inline Color_t1588175760 * get_address_of_backgroundColor_14() { return &___backgroundColor_14; }
	inline void set_backgroundColor_14(Color_t1588175760  value)
	{
		___backgroundColor_14 = value;
	}

	inline static int32_t get_offset_of_ringColor_15() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ___ringColor_15)); }
	inline Color_t1588175760  get_ringColor_15() const { return ___ringColor_15; }
	inline Color_t1588175760 * get_address_of_ringColor_15() { return &___ringColor_15; }
	inline void set_ringColor_15(Color_t1588175760  value)
	{
		___ringColor_15 = value;
	}

	inline static int32_t get_offset_of__path_16() { return static_cast<int32_t>(offsetof(UpgraderCircle_t998631014, ____path_16)); }
	inline VectorLine_t3065371647 * get__path_16() const { return ____path_16; }
	inline VectorLine_t3065371647 ** get_address_of__path_16() { return &____path_16; }
	inline void set__path_16(VectorLine_t3065371647 * value)
	{
		____path_16 = value;
		Il2CppCodeGenWriteBarrier(&____path_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
