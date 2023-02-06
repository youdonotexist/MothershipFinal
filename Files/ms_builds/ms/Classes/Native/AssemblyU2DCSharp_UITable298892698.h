﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UITable/OnReposition
struct OnReposition_t1160738748;
// System.Comparison`1<UnityEngine.Transform>
struct Comparison_1_t2988227989;
// UIPanel
struct UIPanel_t295209936;

#include "AssemblyU2DCSharp_UIWidgetContainer1520767337.h"
#include "AssemblyU2DCSharp_UITable_Direction1041377119.h"
#include "AssemblyU2DCSharp_UITable_Sorting3935038820.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot77126690.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UITable
struct  UITable_t298892698  : public UIWidgetContainer_t1520767337
{
public:
	// System.Int32 UITable::columns
	int32_t ___columns_2;
	// UITable/Direction UITable::direction
	int32_t ___direction_3;
	// UITable/Sorting UITable::sorting
	int32_t ___sorting_4;
	// UIWidget/Pivot UITable::pivot
	int32_t ___pivot_5;
	// UIWidget/Pivot UITable::cellAlignment
	int32_t ___cellAlignment_6;
	// System.Boolean UITable::hideInactive
	bool ___hideInactive_7;
	// System.Boolean UITable::keepWithinPanel
	bool ___keepWithinPanel_8;
	// UnityEngine.Vector2 UITable::padding
	Vector2_t3525329788  ___padding_9;
	// UITable/OnReposition UITable::onReposition
	OnReposition_t1160738748 * ___onReposition_10;
	// System.Comparison`1<UnityEngine.Transform> UITable::onCustomSort
	Comparison_1_t2988227989 * ___onCustomSort_11;
	// UIPanel UITable::mPanel
	UIPanel_t295209936 * ___mPanel_12;
	// System.Boolean UITable::mInitDone
	bool ___mInitDone_13;
	// System.Boolean UITable::mReposition
	bool ___mReposition_14;

public:
	inline static int32_t get_offset_of_columns_2() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___columns_2)); }
	inline int32_t get_columns_2() const { return ___columns_2; }
	inline int32_t* get_address_of_columns_2() { return &___columns_2; }
	inline void set_columns_2(int32_t value)
	{
		___columns_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___direction_3)); }
	inline int32_t get_direction_3() const { return ___direction_3; }
	inline int32_t* get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(int32_t value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_sorting_4() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___sorting_4)); }
	inline int32_t get_sorting_4() const { return ___sorting_4; }
	inline int32_t* get_address_of_sorting_4() { return &___sorting_4; }
	inline void set_sorting_4(int32_t value)
	{
		___sorting_4 = value;
	}

	inline static int32_t get_offset_of_pivot_5() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___pivot_5)); }
	inline int32_t get_pivot_5() const { return ___pivot_5; }
	inline int32_t* get_address_of_pivot_5() { return &___pivot_5; }
	inline void set_pivot_5(int32_t value)
	{
		___pivot_5 = value;
	}

	inline static int32_t get_offset_of_cellAlignment_6() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___cellAlignment_6)); }
	inline int32_t get_cellAlignment_6() const { return ___cellAlignment_6; }
	inline int32_t* get_address_of_cellAlignment_6() { return &___cellAlignment_6; }
	inline void set_cellAlignment_6(int32_t value)
	{
		___cellAlignment_6 = value;
	}

	inline static int32_t get_offset_of_hideInactive_7() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___hideInactive_7)); }
	inline bool get_hideInactive_7() const { return ___hideInactive_7; }
	inline bool* get_address_of_hideInactive_7() { return &___hideInactive_7; }
	inline void set_hideInactive_7(bool value)
	{
		___hideInactive_7 = value;
	}

	inline static int32_t get_offset_of_keepWithinPanel_8() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___keepWithinPanel_8)); }
	inline bool get_keepWithinPanel_8() const { return ___keepWithinPanel_8; }
	inline bool* get_address_of_keepWithinPanel_8() { return &___keepWithinPanel_8; }
	inline void set_keepWithinPanel_8(bool value)
	{
		___keepWithinPanel_8 = value;
	}

	inline static int32_t get_offset_of_padding_9() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___padding_9)); }
	inline Vector2_t3525329788  get_padding_9() const { return ___padding_9; }
	inline Vector2_t3525329788 * get_address_of_padding_9() { return &___padding_9; }
	inline void set_padding_9(Vector2_t3525329788  value)
	{
		___padding_9 = value;
	}

	inline static int32_t get_offset_of_onReposition_10() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___onReposition_10)); }
	inline OnReposition_t1160738748 * get_onReposition_10() const { return ___onReposition_10; }
	inline OnReposition_t1160738748 ** get_address_of_onReposition_10() { return &___onReposition_10; }
	inline void set_onReposition_10(OnReposition_t1160738748 * value)
	{
		___onReposition_10 = value;
		Il2CppCodeGenWriteBarrier(&___onReposition_10, value);
	}

	inline static int32_t get_offset_of_onCustomSort_11() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___onCustomSort_11)); }
	inline Comparison_1_t2988227989 * get_onCustomSort_11() const { return ___onCustomSort_11; }
	inline Comparison_1_t2988227989 ** get_address_of_onCustomSort_11() { return &___onCustomSort_11; }
	inline void set_onCustomSort_11(Comparison_1_t2988227989 * value)
	{
		___onCustomSort_11 = value;
		Il2CppCodeGenWriteBarrier(&___onCustomSort_11, value);
	}

	inline static int32_t get_offset_of_mPanel_12() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___mPanel_12)); }
	inline UIPanel_t295209936 * get_mPanel_12() const { return ___mPanel_12; }
	inline UIPanel_t295209936 ** get_address_of_mPanel_12() { return &___mPanel_12; }
	inline void set_mPanel_12(UIPanel_t295209936 * value)
	{
		___mPanel_12 = value;
		Il2CppCodeGenWriteBarrier(&___mPanel_12, value);
	}

	inline static int32_t get_offset_of_mInitDone_13() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___mInitDone_13)); }
	inline bool get_mInitDone_13() const { return ___mInitDone_13; }
	inline bool* get_address_of_mInitDone_13() { return &___mInitDone_13; }
	inline void set_mInitDone_13(bool value)
	{
		___mInitDone_13 = value;
	}

	inline static int32_t get_offset_of_mReposition_14() { return static_cast<int32_t>(offsetof(UITable_t298892698, ___mReposition_14)); }
	inline bool get_mReposition_14() const { return ___mReposition_14; }
	inline bool* get_address_of_mReposition_14() { return &___mReposition_14; }
	inline void set_mReposition_14(bool value)
	{
		___mReposition_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
