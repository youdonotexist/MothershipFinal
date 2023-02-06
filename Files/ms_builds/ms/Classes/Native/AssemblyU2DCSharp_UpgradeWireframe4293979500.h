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
// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// UnityEngine.Transform
struct Transform_t284553113;
// UILabel[]
struct UILabelU5BU5D_t1494885441;
// Vectrosity.VectorLine[]
struct VectorLineU5BU5D_t500207910;
// UISprite
struct UISprite_t661437049;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpgradeWireframe
struct  UpgradeWireframe_t4293979500  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material UpgradeWireframe::m_LineMaterial
	Material_t1886596500 * ___m_LineMaterial_2;
	// UnityEngine.Transform[] UpgradeWireframe::ports
	TransformU5BU5D_t3681339876* ___ports_3;
	// UnityEngine.Transform UpgradeWireframe::rootNode
	Transform_t284553113 * ___rootNode_4;
	// UILabel[] UpgradeWireframe::portLabels
	UILabelU5BU5D_t1494885441* ___portLabels_5;
	// Vectrosity.VectorLine[] UpgradeWireframe::lines
	VectorLineU5BU5D_t500207910* ___lines_6;
	// System.Single UpgradeWireframe::drawTime
	float ___drawTime_7;
	// System.Single UpgradeWireframe::drawElapsed
	float ___drawElapsed_8;
	// System.Boolean UpgradeWireframe::draw
	bool ___draw_9;
	// UISprite UpgradeWireframe::_wireframeSprite
	UISprite_t661437049 * ____wireframeSprite_10;

public:
	inline static int32_t get_offset_of_m_LineMaterial_2() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___m_LineMaterial_2)); }
	inline Material_t1886596500 * get_m_LineMaterial_2() const { return ___m_LineMaterial_2; }
	inline Material_t1886596500 ** get_address_of_m_LineMaterial_2() { return &___m_LineMaterial_2; }
	inline void set_m_LineMaterial_2(Material_t1886596500 * value)
	{
		___m_LineMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LineMaterial_2, value);
	}

	inline static int32_t get_offset_of_ports_3() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___ports_3)); }
	inline TransformU5BU5D_t3681339876* get_ports_3() const { return ___ports_3; }
	inline TransformU5BU5D_t3681339876** get_address_of_ports_3() { return &___ports_3; }
	inline void set_ports_3(TransformU5BU5D_t3681339876* value)
	{
		___ports_3 = value;
		Il2CppCodeGenWriteBarrier(&___ports_3, value);
	}

	inline static int32_t get_offset_of_rootNode_4() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___rootNode_4)); }
	inline Transform_t284553113 * get_rootNode_4() const { return ___rootNode_4; }
	inline Transform_t284553113 ** get_address_of_rootNode_4() { return &___rootNode_4; }
	inline void set_rootNode_4(Transform_t284553113 * value)
	{
		___rootNode_4 = value;
		Il2CppCodeGenWriteBarrier(&___rootNode_4, value);
	}

	inline static int32_t get_offset_of_portLabels_5() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___portLabels_5)); }
	inline UILabelU5BU5D_t1494885441* get_portLabels_5() const { return ___portLabels_5; }
	inline UILabelU5BU5D_t1494885441** get_address_of_portLabels_5() { return &___portLabels_5; }
	inline void set_portLabels_5(UILabelU5BU5D_t1494885441* value)
	{
		___portLabels_5 = value;
		Il2CppCodeGenWriteBarrier(&___portLabels_5, value);
	}

	inline static int32_t get_offset_of_lines_6() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___lines_6)); }
	inline VectorLineU5BU5D_t500207910* get_lines_6() const { return ___lines_6; }
	inline VectorLineU5BU5D_t500207910** get_address_of_lines_6() { return &___lines_6; }
	inline void set_lines_6(VectorLineU5BU5D_t500207910* value)
	{
		___lines_6 = value;
		Il2CppCodeGenWriteBarrier(&___lines_6, value);
	}

	inline static int32_t get_offset_of_drawTime_7() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___drawTime_7)); }
	inline float get_drawTime_7() const { return ___drawTime_7; }
	inline float* get_address_of_drawTime_7() { return &___drawTime_7; }
	inline void set_drawTime_7(float value)
	{
		___drawTime_7 = value;
	}

	inline static int32_t get_offset_of_drawElapsed_8() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___drawElapsed_8)); }
	inline float get_drawElapsed_8() const { return ___drawElapsed_8; }
	inline float* get_address_of_drawElapsed_8() { return &___drawElapsed_8; }
	inline void set_drawElapsed_8(float value)
	{
		___drawElapsed_8 = value;
	}

	inline static int32_t get_offset_of_draw_9() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ___draw_9)); }
	inline bool get_draw_9() const { return ___draw_9; }
	inline bool* get_address_of_draw_9() { return &___draw_9; }
	inline void set_draw_9(bool value)
	{
		___draw_9 = value;
	}

	inline static int32_t get_offset_of__wireframeSprite_10() { return static_cast<int32_t>(offsetof(UpgradeWireframe_t4293979500, ____wireframeSprite_10)); }
	inline UISprite_t661437049 * get__wireframeSprite_10() const { return ____wireframeSprite_10; }
	inline UISprite_t661437049 ** get_address_of__wireframeSprite_10() { return &____wireframeSprite_10; }
	inline void set__wireframeSprite_10(UISprite_t661437049 * value)
	{
		____wireframeSprite_10 = value;
		Il2CppCodeGenWriteBarrier(&____wireframeSprite_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
