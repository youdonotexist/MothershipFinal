#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<exClipping/PlaneInfo>
struct List_1_t612754947;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t2683555469;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material>
struct Dictionary_2_t2832584480;

#include "ex2D_Runtime_exPlane2956252521.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exClipping
struct  exClipping_t464063125  : public exPlane_t2956252521
{
public:
	// System.Single exClipping::width_
	float ___width__12;
	// System.Single exClipping::height_
	float ___height__13;
	// System.Boolean exClipping::isDyanmic
	bool ___isDyanmic_14;
	// System.Collections.Generic.List`1<exClipping/PlaneInfo> exClipping::planeInfoList
	List_1_t612754947 * ___planeInfoList_15;
	// System.Collections.Generic.List`1<UnityEngine.Material> exClipping::clipMaterialList
	List_1_t2683555469 * ___clipMaterialList_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture2D,UnityEngine.Material> exClipping::textureToClipMaterialTable
	Dictionary_2_t2832584480 * ___textureToClipMaterialTable_17;
	// System.Boolean exClipping::initialized
	bool ___initialized_18;
	// UnityEngine.Rect exClipping::<clippedRect>k__BackingField
	Rect_t1525428817  ___U3CclippedRectU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_width__12() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___width__12)); }
	inline float get_width__12() const { return ___width__12; }
	inline float* get_address_of_width__12() { return &___width__12; }
	inline void set_width__12(float value)
	{
		___width__12 = value;
	}

	inline static int32_t get_offset_of_height__13() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___height__13)); }
	inline float get_height__13() const { return ___height__13; }
	inline float* get_address_of_height__13() { return &___height__13; }
	inline void set_height__13(float value)
	{
		___height__13 = value;
	}

	inline static int32_t get_offset_of_isDyanmic_14() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___isDyanmic_14)); }
	inline bool get_isDyanmic_14() const { return ___isDyanmic_14; }
	inline bool* get_address_of_isDyanmic_14() { return &___isDyanmic_14; }
	inline void set_isDyanmic_14(bool value)
	{
		___isDyanmic_14 = value;
	}

	inline static int32_t get_offset_of_planeInfoList_15() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___planeInfoList_15)); }
	inline List_1_t612754947 * get_planeInfoList_15() const { return ___planeInfoList_15; }
	inline List_1_t612754947 ** get_address_of_planeInfoList_15() { return &___planeInfoList_15; }
	inline void set_planeInfoList_15(List_1_t612754947 * value)
	{
		___planeInfoList_15 = value;
		Il2CppCodeGenWriteBarrier(&___planeInfoList_15, value);
	}

	inline static int32_t get_offset_of_clipMaterialList_16() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___clipMaterialList_16)); }
	inline List_1_t2683555469 * get_clipMaterialList_16() const { return ___clipMaterialList_16; }
	inline List_1_t2683555469 ** get_address_of_clipMaterialList_16() { return &___clipMaterialList_16; }
	inline void set_clipMaterialList_16(List_1_t2683555469 * value)
	{
		___clipMaterialList_16 = value;
		Il2CppCodeGenWriteBarrier(&___clipMaterialList_16, value);
	}

	inline static int32_t get_offset_of_textureToClipMaterialTable_17() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___textureToClipMaterialTable_17)); }
	inline Dictionary_2_t2832584480 * get_textureToClipMaterialTable_17() const { return ___textureToClipMaterialTable_17; }
	inline Dictionary_2_t2832584480 ** get_address_of_textureToClipMaterialTable_17() { return &___textureToClipMaterialTable_17; }
	inline void set_textureToClipMaterialTable_17(Dictionary_2_t2832584480 * value)
	{
		___textureToClipMaterialTable_17 = value;
		Il2CppCodeGenWriteBarrier(&___textureToClipMaterialTable_17, value);
	}

	inline static int32_t get_offset_of_initialized_18() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___initialized_18)); }
	inline bool get_initialized_18() const { return ___initialized_18; }
	inline bool* get_address_of_initialized_18() { return &___initialized_18; }
	inline void set_initialized_18(bool value)
	{
		___initialized_18 = value;
	}

	inline static int32_t get_offset_of_U3CclippedRectU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(exClipping_t464063125, ___U3CclippedRectU3Ek__BackingField_19)); }
	inline Rect_t1525428817  get_U3CclippedRectU3Ek__BackingField_19() const { return ___U3CclippedRectU3Ek__BackingField_19; }
	inline Rect_t1525428817 * get_address_of_U3CclippedRectU3Ek__BackingField_19() { return &___U3CclippedRectU3Ek__BackingField_19; }
	inline void set_U3CclippedRectU3Ek__BackingField_19(Rect_t1525428817  value)
	{
		___U3CclippedRectU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
