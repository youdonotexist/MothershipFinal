#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// exLayer
struct exLayer_t2952253534;
// System.Collections.Generic.List`1<exLayer>
struct List_1_t3749212503;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "ex2D_Runtime_exLayer_Type2622298.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exLayer
struct  exLayer_t2952253534  : public MonoBehaviour_t3012272455
{
public:
	// exLayer exLayer::parent_
	exLayer_t2952253534 * ___parent__2;
	// System.Collections.Generic.List`1<exLayer> exLayer::children_
	List_1_t3749212503 * ___children__3;
	// exLayer/Type exLayer::type_
	int32_t ___type__4;
	// System.Int32 exLayer::range_
	int32_t ___range__5;
	// System.Single exLayer::depth
	float ___depth_6;
	// System.Boolean exLayer::foldout
	bool ___foldout_7;
	// System.Int32 exLayer::indentLevel
	int32_t ___indentLevel_8;
	// System.Boolean exLayer::isDirty
	bool ___isDirty_9;

public:
	inline static int32_t get_offset_of_parent__2() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___parent__2)); }
	inline exLayer_t2952253534 * get_parent__2() const { return ___parent__2; }
	inline exLayer_t2952253534 ** get_address_of_parent__2() { return &___parent__2; }
	inline void set_parent__2(exLayer_t2952253534 * value)
	{
		___parent__2 = value;
		Il2CppCodeGenWriteBarrier(&___parent__2, value);
	}

	inline static int32_t get_offset_of_children__3() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___children__3)); }
	inline List_1_t3749212503 * get_children__3() const { return ___children__3; }
	inline List_1_t3749212503 ** get_address_of_children__3() { return &___children__3; }
	inline void set_children__3(List_1_t3749212503 * value)
	{
		___children__3 = value;
		Il2CppCodeGenWriteBarrier(&___children__3, value);
	}

	inline static int32_t get_offset_of_type__4() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___type__4)); }
	inline int32_t get_type__4() const { return ___type__4; }
	inline int32_t* get_address_of_type__4() { return &___type__4; }
	inline void set_type__4(int32_t value)
	{
		___type__4 = value;
	}

	inline static int32_t get_offset_of_range__5() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___range__5)); }
	inline int32_t get_range__5() const { return ___range__5; }
	inline int32_t* get_address_of_range__5() { return &___range__5; }
	inline void set_range__5(int32_t value)
	{
		___range__5 = value;
	}

	inline static int32_t get_offset_of_depth_6() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___depth_6)); }
	inline float get_depth_6() const { return ___depth_6; }
	inline float* get_address_of_depth_6() { return &___depth_6; }
	inline void set_depth_6(float value)
	{
		___depth_6 = value;
	}

	inline static int32_t get_offset_of_foldout_7() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___foldout_7)); }
	inline bool get_foldout_7() const { return ___foldout_7; }
	inline bool* get_address_of_foldout_7() { return &___foldout_7; }
	inline void set_foldout_7(bool value)
	{
		___foldout_7 = value;
	}

	inline static int32_t get_offset_of_indentLevel_8() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___indentLevel_8)); }
	inline int32_t get_indentLevel_8() const { return ___indentLevel_8; }
	inline int32_t* get_address_of_indentLevel_8() { return &___indentLevel_8; }
	inline void set_indentLevel_8(int32_t value)
	{
		___indentLevel_8 = value;
	}

	inline static int32_t get_offset_of_isDirty_9() { return static_cast<int32_t>(offsetof(exLayer_t2952253534, ___isDirty_9)); }
	inline bool get_isDirty_9() const { return ___isDirty_9; }
	inline bool* get_address_of_isDirty_9() { return &___isDirty_9; }
	inline void set_isDirty_9(bool value)
	{
		___isDirty_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
