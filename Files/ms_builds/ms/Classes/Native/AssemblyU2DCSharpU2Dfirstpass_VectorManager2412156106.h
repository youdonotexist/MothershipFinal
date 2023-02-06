#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vectrosity.VectorLine>
struct List_1_t3862330616;
// System.Collections.Generic.List`1<RefInt>
struct List_1_t3240937333;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1081512082;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t2385134729;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Mesh>
struct Dictionary_2_t3162978250;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VectorManager
struct  VectorManager_t2412156106  : public Il2CppObject
{
public:

public:
};

struct VectorManager_t2412156106_StaticFields
{
public:
	// System.Single VectorManager::minBrightnessDistance
	float ___minBrightnessDistance_0;
	// System.Single VectorManager::maxBrightnessDistance
	float ___maxBrightnessDistance_1;
	// System.Int32 VectorManager::brightnessLevels
	int32_t ___brightnessLevels_2;
	// System.Single VectorManager::distanceCheckFrequency
	float ___distanceCheckFrequency_3;
	// UnityEngine.Color VectorManager::fogColor
	Color_t1588175760  ___fogColor_4;
	// System.Boolean VectorManager::useDraw3D
	bool ___useDraw3D_5;
	// System.Collections.Generic.List`1<Vectrosity.VectorLine> VectorManager::vectorLines
	List_1_t3862330616 * ___vectorLines_6;
	// System.Collections.Generic.List`1<RefInt> VectorManager::objectNumbers
	List_1_t3240937333 * ___objectNumbers_7;
	// System.Int32 VectorManager::_arrayCount
	int32_t ____arrayCount_8;
	// System.Collections.Generic.List`1<Vectrosity.VectorLine> VectorManager::vectorLines2
	List_1_t3862330616 * ___vectorLines2_9;
	// System.Collections.Generic.List`1<RefInt> VectorManager::objectNumbers2
	List_1_t3240937333 * ___objectNumbers2_10;
	// System.Int32 VectorManager::_arrayCount2
	int32_t ____arrayCount2_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VectorManager::transforms3
	List_1_t1081512082 * ___transforms3_12;
	// System.Collections.Generic.List`1<Vectrosity.VectorLine> VectorManager::vectorLines3
	List_1_t3862330616 * ___vectorLines3_13;
	// System.Collections.Generic.List`1<System.Int32> VectorManager::oldDistances
	List_1_t3644373756 * ___oldDistances_14;
	// System.Collections.Generic.List`1<UnityEngine.Color> VectorManager::colors
	List_1_t2385134729 * ___colors_15;
	// System.Collections.Generic.List`1<RefInt> VectorManager::objectNumbers3
	List_1_t3240937333 * ___objectNumbers3_16;
	// System.Int32 VectorManager::_arrayCount3
	int32_t ____arrayCount3_17;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Mesh> VectorManager::meshTable
	Dictionary_2_t3162978250 * ___meshTable_18;

public:
	inline static int32_t get_offset_of_minBrightnessDistance_0() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___minBrightnessDistance_0)); }
	inline float get_minBrightnessDistance_0() const { return ___minBrightnessDistance_0; }
	inline float* get_address_of_minBrightnessDistance_0() { return &___minBrightnessDistance_0; }
	inline void set_minBrightnessDistance_0(float value)
	{
		___minBrightnessDistance_0 = value;
	}

	inline static int32_t get_offset_of_maxBrightnessDistance_1() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___maxBrightnessDistance_1)); }
	inline float get_maxBrightnessDistance_1() const { return ___maxBrightnessDistance_1; }
	inline float* get_address_of_maxBrightnessDistance_1() { return &___maxBrightnessDistance_1; }
	inline void set_maxBrightnessDistance_1(float value)
	{
		___maxBrightnessDistance_1 = value;
	}

	inline static int32_t get_offset_of_brightnessLevels_2() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___brightnessLevels_2)); }
	inline int32_t get_brightnessLevels_2() const { return ___brightnessLevels_2; }
	inline int32_t* get_address_of_brightnessLevels_2() { return &___brightnessLevels_2; }
	inline void set_brightnessLevels_2(int32_t value)
	{
		___brightnessLevels_2 = value;
	}

	inline static int32_t get_offset_of_distanceCheckFrequency_3() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___distanceCheckFrequency_3)); }
	inline float get_distanceCheckFrequency_3() const { return ___distanceCheckFrequency_3; }
	inline float* get_address_of_distanceCheckFrequency_3() { return &___distanceCheckFrequency_3; }
	inline void set_distanceCheckFrequency_3(float value)
	{
		___distanceCheckFrequency_3 = value;
	}

	inline static int32_t get_offset_of_fogColor_4() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___fogColor_4)); }
	inline Color_t1588175760  get_fogColor_4() const { return ___fogColor_4; }
	inline Color_t1588175760 * get_address_of_fogColor_4() { return &___fogColor_4; }
	inline void set_fogColor_4(Color_t1588175760  value)
	{
		___fogColor_4 = value;
	}

	inline static int32_t get_offset_of_useDraw3D_5() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___useDraw3D_5)); }
	inline bool get_useDraw3D_5() const { return ___useDraw3D_5; }
	inline bool* get_address_of_useDraw3D_5() { return &___useDraw3D_5; }
	inline void set_useDraw3D_5(bool value)
	{
		___useDraw3D_5 = value;
	}

	inline static int32_t get_offset_of_vectorLines_6() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___vectorLines_6)); }
	inline List_1_t3862330616 * get_vectorLines_6() const { return ___vectorLines_6; }
	inline List_1_t3862330616 ** get_address_of_vectorLines_6() { return &___vectorLines_6; }
	inline void set_vectorLines_6(List_1_t3862330616 * value)
	{
		___vectorLines_6 = value;
		Il2CppCodeGenWriteBarrier(&___vectorLines_6, value);
	}

	inline static int32_t get_offset_of_objectNumbers_7() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___objectNumbers_7)); }
	inline List_1_t3240937333 * get_objectNumbers_7() const { return ___objectNumbers_7; }
	inline List_1_t3240937333 ** get_address_of_objectNumbers_7() { return &___objectNumbers_7; }
	inline void set_objectNumbers_7(List_1_t3240937333 * value)
	{
		___objectNumbers_7 = value;
		Il2CppCodeGenWriteBarrier(&___objectNumbers_7, value);
	}

	inline static int32_t get_offset_of__arrayCount_8() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ____arrayCount_8)); }
	inline int32_t get__arrayCount_8() const { return ____arrayCount_8; }
	inline int32_t* get_address_of__arrayCount_8() { return &____arrayCount_8; }
	inline void set__arrayCount_8(int32_t value)
	{
		____arrayCount_8 = value;
	}

	inline static int32_t get_offset_of_vectorLines2_9() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___vectorLines2_9)); }
	inline List_1_t3862330616 * get_vectorLines2_9() const { return ___vectorLines2_9; }
	inline List_1_t3862330616 ** get_address_of_vectorLines2_9() { return &___vectorLines2_9; }
	inline void set_vectorLines2_9(List_1_t3862330616 * value)
	{
		___vectorLines2_9 = value;
		Il2CppCodeGenWriteBarrier(&___vectorLines2_9, value);
	}

	inline static int32_t get_offset_of_objectNumbers2_10() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___objectNumbers2_10)); }
	inline List_1_t3240937333 * get_objectNumbers2_10() const { return ___objectNumbers2_10; }
	inline List_1_t3240937333 ** get_address_of_objectNumbers2_10() { return &___objectNumbers2_10; }
	inline void set_objectNumbers2_10(List_1_t3240937333 * value)
	{
		___objectNumbers2_10 = value;
		Il2CppCodeGenWriteBarrier(&___objectNumbers2_10, value);
	}

	inline static int32_t get_offset_of__arrayCount2_11() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ____arrayCount2_11)); }
	inline int32_t get__arrayCount2_11() const { return ____arrayCount2_11; }
	inline int32_t* get_address_of__arrayCount2_11() { return &____arrayCount2_11; }
	inline void set__arrayCount2_11(int32_t value)
	{
		____arrayCount2_11 = value;
	}

	inline static int32_t get_offset_of_transforms3_12() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___transforms3_12)); }
	inline List_1_t1081512082 * get_transforms3_12() const { return ___transforms3_12; }
	inline List_1_t1081512082 ** get_address_of_transforms3_12() { return &___transforms3_12; }
	inline void set_transforms3_12(List_1_t1081512082 * value)
	{
		___transforms3_12 = value;
		Il2CppCodeGenWriteBarrier(&___transforms3_12, value);
	}

	inline static int32_t get_offset_of_vectorLines3_13() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___vectorLines3_13)); }
	inline List_1_t3862330616 * get_vectorLines3_13() const { return ___vectorLines3_13; }
	inline List_1_t3862330616 ** get_address_of_vectorLines3_13() { return &___vectorLines3_13; }
	inline void set_vectorLines3_13(List_1_t3862330616 * value)
	{
		___vectorLines3_13 = value;
		Il2CppCodeGenWriteBarrier(&___vectorLines3_13, value);
	}

	inline static int32_t get_offset_of_oldDistances_14() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___oldDistances_14)); }
	inline List_1_t3644373756 * get_oldDistances_14() const { return ___oldDistances_14; }
	inline List_1_t3644373756 ** get_address_of_oldDistances_14() { return &___oldDistances_14; }
	inline void set_oldDistances_14(List_1_t3644373756 * value)
	{
		___oldDistances_14 = value;
		Il2CppCodeGenWriteBarrier(&___oldDistances_14, value);
	}

	inline static int32_t get_offset_of_colors_15() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___colors_15)); }
	inline List_1_t2385134729 * get_colors_15() const { return ___colors_15; }
	inline List_1_t2385134729 ** get_address_of_colors_15() { return &___colors_15; }
	inline void set_colors_15(List_1_t2385134729 * value)
	{
		___colors_15 = value;
		Il2CppCodeGenWriteBarrier(&___colors_15, value);
	}

	inline static int32_t get_offset_of_objectNumbers3_16() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___objectNumbers3_16)); }
	inline List_1_t3240937333 * get_objectNumbers3_16() const { return ___objectNumbers3_16; }
	inline List_1_t3240937333 ** get_address_of_objectNumbers3_16() { return &___objectNumbers3_16; }
	inline void set_objectNumbers3_16(List_1_t3240937333 * value)
	{
		___objectNumbers3_16 = value;
		Il2CppCodeGenWriteBarrier(&___objectNumbers3_16, value);
	}

	inline static int32_t get_offset_of__arrayCount3_17() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ____arrayCount3_17)); }
	inline int32_t get__arrayCount3_17() const { return ____arrayCount3_17; }
	inline int32_t* get_address_of__arrayCount3_17() { return &____arrayCount3_17; }
	inline void set__arrayCount3_17(int32_t value)
	{
		____arrayCount3_17 = value;
	}

	inline static int32_t get_offset_of_meshTable_18() { return static_cast<int32_t>(offsetof(VectorManager_t2412156106_StaticFields, ___meshTable_18)); }
	inline Dictionary_2_t3162978250 * get_meshTable_18() const { return ___meshTable_18; }
	inline Dictionary_2_t3162978250 ** get_address_of_meshTable_18() { return &___meshTable_18; }
	inline void set_meshTable_18(Dictionary_2_t3162978250 * value)
	{
		___meshTable_18 = value;
		Il2CppCodeGenWriteBarrier(&___meshTable_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
