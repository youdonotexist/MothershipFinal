#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Collections.Generic.List`1<UnityEngine.Vector3[]>
struct List_1_t4024530665;
// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DottedLine
struct  DottedLine_t3918013790  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector3[] DottedLine::path1
	Vector3U5BU5D_t3227571696* ___path1_2;
	// UnityEngine.Vector3[] DottedLine::path2
	Vector3U5BU5D_t3227571696* ___path2_3;
	// UnityEngine.Vector3[] DottedLine::path3
	Vector3U5BU5D_t3227571696* ___path3_4;
	// UnityEngine.Vector3[] DottedLine::path4
	Vector3U5BU5D_t3227571696* ___path4_5;
	// UnityEngine.Vector3[] DottedLine::path5
	Vector3U5BU5D_t3227571696* ___path5_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3[]> DottedLine::paths
	List_1_t4024530665 * ___paths_7;
	// System.Int32 DottedLine::currentPath
	int32_t ___currentPath_8;
	// Vectrosity.VectorLine DottedLine::spline
	VectorLine_t3065371647 * ___spline_9;
	// Vectrosity.VectorLine DottedLine::drawnLine
	VectorLine_t3065371647 * ___drawnLine_10;
	// UnityEngine.Transform DottedLine::end
	Transform_t284553113 * ___end_11;
	// UnityEngine.Material DottedLine::mat
	Material_t1886596500 * ___mat_12;
	// UnityEngine.Material DottedLine::capMat
	Material_t1886596500 * ___capMat_13;
	// UnityEngine.Texture2D DottedLine::cap
	Texture2D_t2509538522 * ___cap_14;

public:
	inline static int32_t get_offset_of_path1_2() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___path1_2)); }
	inline Vector3U5BU5D_t3227571696* get_path1_2() const { return ___path1_2; }
	inline Vector3U5BU5D_t3227571696** get_address_of_path1_2() { return &___path1_2; }
	inline void set_path1_2(Vector3U5BU5D_t3227571696* value)
	{
		___path1_2 = value;
		Il2CppCodeGenWriteBarrier(&___path1_2, value);
	}

	inline static int32_t get_offset_of_path2_3() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___path2_3)); }
	inline Vector3U5BU5D_t3227571696* get_path2_3() const { return ___path2_3; }
	inline Vector3U5BU5D_t3227571696** get_address_of_path2_3() { return &___path2_3; }
	inline void set_path2_3(Vector3U5BU5D_t3227571696* value)
	{
		___path2_3 = value;
		Il2CppCodeGenWriteBarrier(&___path2_3, value);
	}

	inline static int32_t get_offset_of_path3_4() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___path3_4)); }
	inline Vector3U5BU5D_t3227571696* get_path3_4() const { return ___path3_4; }
	inline Vector3U5BU5D_t3227571696** get_address_of_path3_4() { return &___path3_4; }
	inline void set_path3_4(Vector3U5BU5D_t3227571696* value)
	{
		___path3_4 = value;
		Il2CppCodeGenWriteBarrier(&___path3_4, value);
	}

	inline static int32_t get_offset_of_path4_5() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___path4_5)); }
	inline Vector3U5BU5D_t3227571696* get_path4_5() const { return ___path4_5; }
	inline Vector3U5BU5D_t3227571696** get_address_of_path4_5() { return &___path4_5; }
	inline void set_path4_5(Vector3U5BU5D_t3227571696* value)
	{
		___path4_5 = value;
		Il2CppCodeGenWriteBarrier(&___path4_5, value);
	}

	inline static int32_t get_offset_of_path5_6() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___path5_6)); }
	inline Vector3U5BU5D_t3227571696* get_path5_6() const { return ___path5_6; }
	inline Vector3U5BU5D_t3227571696** get_address_of_path5_6() { return &___path5_6; }
	inline void set_path5_6(Vector3U5BU5D_t3227571696* value)
	{
		___path5_6 = value;
		Il2CppCodeGenWriteBarrier(&___path5_6, value);
	}

	inline static int32_t get_offset_of_paths_7() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___paths_7)); }
	inline List_1_t4024530665 * get_paths_7() const { return ___paths_7; }
	inline List_1_t4024530665 ** get_address_of_paths_7() { return &___paths_7; }
	inline void set_paths_7(List_1_t4024530665 * value)
	{
		___paths_7 = value;
		Il2CppCodeGenWriteBarrier(&___paths_7, value);
	}

	inline static int32_t get_offset_of_currentPath_8() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___currentPath_8)); }
	inline int32_t get_currentPath_8() const { return ___currentPath_8; }
	inline int32_t* get_address_of_currentPath_8() { return &___currentPath_8; }
	inline void set_currentPath_8(int32_t value)
	{
		___currentPath_8 = value;
	}

	inline static int32_t get_offset_of_spline_9() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___spline_9)); }
	inline VectorLine_t3065371647 * get_spline_9() const { return ___spline_9; }
	inline VectorLine_t3065371647 ** get_address_of_spline_9() { return &___spline_9; }
	inline void set_spline_9(VectorLine_t3065371647 * value)
	{
		___spline_9 = value;
		Il2CppCodeGenWriteBarrier(&___spline_9, value);
	}

	inline static int32_t get_offset_of_drawnLine_10() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___drawnLine_10)); }
	inline VectorLine_t3065371647 * get_drawnLine_10() const { return ___drawnLine_10; }
	inline VectorLine_t3065371647 ** get_address_of_drawnLine_10() { return &___drawnLine_10; }
	inline void set_drawnLine_10(VectorLine_t3065371647 * value)
	{
		___drawnLine_10 = value;
		Il2CppCodeGenWriteBarrier(&___drawnLine_10, value);
	}

	inline static int32_t get_offset_of_end_11() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___end_11)); }
	inline Transform_t284553113 * get_end_11() const { return ___end_11; }
	inline Transform_t284553113 ** get_address_of_end_11() { return &___end_11; }
	inline void set_end_11(Transform_t284553113 * value)
	{
		___end_11 = value;
		Il2CppCodeGenWriteBarrier(&___end_11, value);
	}

	inline static int32_t get_offset_of_mat_12() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___mat_12)); }
	inline Material_t1886596500 * get_mat_12() const { return ___mat_12; }
	inline Material_t1886596500 ** get_address_of_mat_12() { return &___mat_12; }
	inline void set_mat_12(Material_t1886596500 * value)
	{
		___mat_12 = value;
		Il2CppCodeGenWriteBarrier(&___mat_12, value);
	}

	inline static int32_t get_offset_of_capMat_13() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___capMat_13)); }
	inline Material_t1886596500 * get_capMat_13() const { return ___capMat_13; }
	inline Material_t1886596500 ** get_address_of_capMat_13() { return &___capMat_13; }
	inline void set_capMat_13(Material_t1886596500 * value)
	{
		___capMat_13 = value;
		Il2CppCodeGenWriteBarrier(&___capMat_13, value);
	}

	inline static int32_t get_offset_of_cap_14() { return static_cast<int32_t>(offsetof(DottedLine_t3918013790, ___cap_14)); }
	inline Texture2D_t2509538522 * get_cap_14() const { return ___cap_14; }
	inline Texture2D_t2509538522 ** get_address_of_cap_14() { return &___cap_14; }
	inline void set_cap_14(Texture2D_t2509538522 * value)
	{
		___cap_14 = value;
		Il2CppCodeGenWriteBarrier(&___cap_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
