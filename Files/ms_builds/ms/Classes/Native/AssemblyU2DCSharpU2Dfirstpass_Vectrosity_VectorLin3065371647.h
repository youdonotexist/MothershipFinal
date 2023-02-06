#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.MeshFilter
struct MeshFilter_t4177078322;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Color32[]
struct Color32U5BU5D_t1677970742;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.PhysicsMaterial2D
struct PhysicsMaterial2D_t872494989;
// UnityEngine.Camera
struct Camera_t3533968274;
// LineManager
struct LineManager_t2890171641;
// System.Collections.Generic.Dictionary`2<System.String,Vectrosity.CapInfo>
struct Dictionary_2_t612390136;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Joins1125461105.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_EndCap3133754655.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_LineType2307019126.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vectrosity.VectorLine
struct  VectorLine_t3065371647  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Vectrosity.VectorLine::m_vectorObject
	GameObject_t4012695102 * ___m_vectorObject_1;
	// UnityEngine.MeshFilter Vectrosity.VectorLine::m_meshFilter
	MeshFilter_t4177078322 * ___m_meshFilter_2;
	// UnityEngine.Mesh Vectrosity.VectorLine::m_mesh
	Mesh_t1525280346 * ___m_mesh_3;
	// UnityEngine.Vector3[] Vectrosity.VectorLine::m_lineVertices
	Vector3U5BU5D_t3227571696* ___m_lineVertices_4;
	// UnityEngine.Vector2[] Vectrosity.VectorLine::m_lineUVs
	Vector2U5BU5D_t2741383957* ___m_lineUVs_5;
	// UnityEngine.Color32[] Vectrosity.VectorLine::m_lineColors
	Color32U5BU5D_t1677970742* ___m_lineColors_6;
	// UnityEngine.Vector2[] Vectrosity.VectorLine::points2
	Vector2U5BU5D_t2741383957* ___points2_7;
	// UnityEngine.Vector3[] Vectrosity.VectorLine::points3
	Vector3U5BU5D_t3227571696* ___points3_8;
	// System.Int32 Vectrosity.VectorLine::m_pointsLength
	int32_t ___m_pointsLength_9;
	// System.Boolean Vectrosity.VectorLine::m_is2D
	bool ___m_is2D_10;
	// UnityEngine.Vector3[] Vectrosity.VectorLine::m_screenPoints
	Vector3U5BU5D_t3227571696* ___m_screenPoints_11;
	// System.Single[] Vectrosity.VectorLine::m_lineWidths
	SingleU5BU5D_t1219431280* ___m_lineWidths_12;
	// System.Single Vectrosity.VectorLine::m_maxWeldDistance
	float ___m_maxWeldDistance_13;
	// System.Single[] Vectrosity.VectorLine::m_distances
	SingleU5BU5D_t1219431280* ___m_distances_14;
	// System.String Vectrosity.VectorLine::m_name
	String_t* ___m_name_15;
	// UnityEngine.Material Vectrosity.VectorLine::m_material
	Material_t1886596500 * ___m_material_16;
	// System.Boolean Vectrosity.VectorLine::m_active
	bool ___m_active_17;
	// System.Single Vectrosity.VectorLine::capLength
	float ___capLength_18;
	// System.Int32 Vectrosity.VectorLine::m_depth
	int32_t ___m_depth_19;
	// System.Boolean Vectrosity.VectorLine::m_smoothWidth
	bool ___m_smoothWidth_20;
	// System.Boolean Vectrosity.VectorLine::m_smoothColor
	bool ___m_smoothColor_21;
	// System.Int32 Vectrosity.VectorLine::m_layer
	int32_t ___m_layer_22;
	// System.Boolean Vectrosity.VectorLine::m_continuous
	bool ___m_continuous_23;
	// Vectrosity.Joins Vectrosity.VectorLine::m_joins
	int32_t ___m_joins_24;
	// System.Boolean Vectrosity.VectorLine::m_isPoints
	bool ___m_isPoints_25;
	// System.Boolean Vectrosity.VectorLine::m_isAutoDrawing
	bool ___m_isAutoDrawing_26;
	// System.Int32 Vectrosity.VectorLine::m_minDrawIndex
	int32_t ___m_minDrawIndex_27;
	// System.Int32 Vectrosity.VectorLine::m_maxDrawIndex
	int32_t ___m_maxDrawIndex_28;
	// System.Int32 Vectrosity.VectorLine::m_drawStart
	int32_t ___m_drawStart_29;
	// System.Int32 Vectrosity.VectorLine::m_drawEnd
	int32_t ___m_drawEnd_30;
	// System.Boolean Vectrosity.VectorLine::m_useNormals
	bool ___m_useNormals_31;
	// System.Boolean Vectrosity.VectorLine::m_useTangents
	bool ___m_useTangents_32;
	// System.Boolean Vectrosity.VectorLine::m_normalsCalculated
	bool ___m_normalsCalculated_33;
	// System.Boolean Vectrosity.VectorLine::m_tangentsCalculated
	bool ___m_tangentsCalculated_34;
	// System.Int32 Vectrosity.VectorLine::m_triangleCount
	int32_t ___m_triangleCount_35;
	// System.Int32 Vectrosity.VectorLine::m_vertexCount
	int32_t ___m_vertexCount_36;
	// Vectrosity.EndCap Vectrosity.VectorLine::m_capType
	int32_t ___m_capType_37;
	// System.String Vectrosity.VectorLine::m_endCap
	String_t* ___m_endCap_38;
	// System.Boolean Vectrosity.VectorLine::m_continuousTexture
	bool ___m_continuousTexture_39;
	// System.Boolean Vectrosity.VectorLine::m_1pixelLine
	bool ___m_1pixelLine_40;
	// UnityEngine.Transform Vectrosity.VectorLine::m_useTransform
	Transform_t284553113 * ___m_useTransform_41;
	// System.Boolean Vectrosity.VectorLine::m_viewportDraw
	bool ___m_viewportDraw_42;
	// System.Single Vectrosity.VectorLine::m_textureScale
	float ___m_textureScale_43;
	// System.Boolean Vectrosity.VectorLine::m_useTextureScale
	bool ___m_useTextureScale_44;
	// System.Single Vectrosity.VectorLine::m_textureOffset
	float ___m_textureOffset_45;
	// System.Boolean Vectrosity.VectorLine::m_useMatrix
	bool ___m_useMatrix_46;
	// UnityEngine.Matrix4x4 Vectrosity.VectorLine::m_matrix
	Matrix4x4_t277289660  ___m_matrix_47;
	// System.Boolean Vectrosity.VectorLine::m_collider
	bool ___m_collider_48;
	// System.Boolean Vectrosity.VectorLine::m_trigger
	bool ___m_trigger_49;
	// UnityEngine.PhysicsMaterial2D Vectrosity.VectorLine::m_physicsMaterial
	PhysicsMaterial2D_t872494989 * ___m_physicsMaterial_50;

public:
	inline static int32_t get_offset_of_m_vectorObject_1() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_vectorObject_1)); }
	inline GameObject_t4012695102 * get_m_vectorObject_1() const { return ___m_vectorObject_1; }
	inline GameObject_t4012695102 ** get_address_of_m_vectorObject_1() { return &___m_vectorObject_1; }
	inline void set_m_vectorObject_1(GameObject_t4012695102 * value)
	{
		___m_vectorObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_vectorObject_1, value);
	}

	inline static int32_t get_offset_of_m_meshFilter_2() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_meshFilter_2)); }
	inline MeshFilter_t4177078322 * get_m_meshFilter_2() const { return ___m_meshFilter_2; }
	inline MeshFilter_t4177078322 ** get_address_of_m_meshFilter_2() { return &___m_meshFilter_2; }
	inline void set_m_meshFilter_2(MeshFilter_t4177078322 * value)
	{
		___m_meshFilter_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_2, value);
	}

	inline static int32_t get_offset_of_m_mesh_3() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_mesh_3)); }
	inline Mesh_t1525280346 * get_m_mesh_3() const { return ___m_mesh_3; }
	inline Mesh_t1525280346 ** get_address_of_m_mesh_3() { return &___m_mesh_3; }
	inline void set_m_mesh_3(Mesh_t1525280346 * value)
	{
		___m_mesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_mesh_3, value);
	}

	inline static int32_t get_offset_of_m_lineVertices_4() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_lineVertices_4)); }
	inline Vector3U5BU5D_t3227571696* get_m_lineVertices_4() const { return ___m_lineVertices_4; }
	inline Vector3U5BU5D_t3227571696** get_address_of_m_lineVertices_4() { return &___m_lineVertices_4; }
	inline void set_m_lineVertices_4(Vector3U5BU5D_t3227571696* value)
	{
		___m_lineVertices_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineVertices_4, value);
	}

	inline static int32_t get_offset_of_m_lineUVs_5() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_lineUVs_5)); }
	inline Vector2U5BU5D_t2741383957* get_m_lineUVs_5() const { return ___m_lineUVs_5; }
	inline Vector2U5BU5D_t2741383957** get_address_of_m_lineUVs_5() { return &___m_lineUVs_5; }
	inline void set_m_lineUVs_5(Vector2U5BU5D_t2741383957* value)
	{
		___m_lineUVs_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineUVs_5, value);
	}

	inline static int32_t get_offset_of_m_lineColors_6() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_lineColors_6)); }
	inline Color32U5BU5D_t1677970742* get_m_lineColors_6() const { return ___m_lineColors_6; }
	inline Color32U5BU5D_t1677970742** get_address_of_m_lineColors_6() { return &___m_lineColors_6; }
	inline void set_m_lineColors_6(Color32U5BU5D_t1677970742* value)
	{
		___m_lineColors_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineColors_6, value);
	}

	inline static int32_t get_offset_of_points2_7() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___points2_7)); }
	inline Vector2U5BU5D_t2741383957* get_points2_7() const { return ___points2_7; }
	inline Vector2U5BU5D_t2741383957** get_address_of_points2_7() { return &___points2_7; }
	inline void set_points2_7(Vector2U5BU5D_t2741383957* value)
	{
		___points2_7 = value;
		Il2CppCodeGenWriteBarrier(&___points2_7, value);
	}

	inline static int32_t get_offset_of_points3_8() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___points3_8)); }
	inline Vector3U5BU5D_t3227571696* get_points3_8() const { return ___points3_8; }
	inline Vector3U5BU5D_t3227571696** get_address_of_points3_8() { return &___points3_8; }
	inline void set_points3_8(Vector3U5BU5D_t3227571696* value)
	{
		___points3_8 = value;
		Il2CppCodeGenWriteBarrier(&___points3_8, value);
	}

	inline static int32_t get_offset_of_m_pointsLength_9() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_pointsLength_9)); }
	inline int32_t get_m_pointsLength_9() const { return ___m_pointsLength_9; }
	inline int32_t* get_address_of_m_pointsLength_9() { return &___m_pointsLength_9; }
	inline void set_m_pointsLength_9(int32_t value)
	{
		___m_pointsLength_9 = value;
	}

	inline static int32_t get_offset_of_m_is2D_10() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_is2D_10)); }
	inline bool get_m_is2D_10() const { return ___m_is2D_10; }
	inline bool* get_address_of_m_is2D_10() { return &___m_is2D_10; }
	inline void set_m_is2D_10(bool value)
	{
		___m_is2D_10 = value;
	}

	inline static int32_t get_offset_of_m_screenPoints_11() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_screenPoints_11)); }
	inline Vector3U5BU5D_t3227571696* get_m_screenPoints_11() const { return ___m_screenPoints_11; }
	inline Vector3U5BU5D_t3227571696** get_address_of_m_screenPoints_11() { return &___m_screenPoints_11; }
	inline void set_m_screenPoints_11(Vector3U5BU5D_t3227571696* value)
	{
		___m_screenPoints_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_screenPoints_11, value);
	}

	inline static int32_t get_offset_of_m_lineWidths_12() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_lineWidths_12)); }
	inline SingleU5BU5D_t1219431280* get_m_lineWidths_12() const { return ___m_lineWidths_12; }
	inline SingleU5BU5D_t1219431280** get_address_of_m_lineWidths_12() { return &___m_lineWidths_12; }
	inline void set_m_lineWidths_12(SingleU5BU5D_t1219431280* value)
	{
		___m_lineWidths_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineWidths_12, value);
	}

	inline static int32_t get_offset_of_m_maxWeldDistance_13() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_maxWeldDistance_13)); }
	inline float get_m_maxWeldDistance_13() const { return ___m_maxWeldDistance_13; }
	inline float* get_address_of_m_maxWeldDistance_13() { return &___m_maxWeldDistance_13; }
	inline void set_m_maxWeldDistance_13(float value)
	{
		___m_maxWeldDistance_13 = value;
	}

	inline static int32_t get_offset_of_m_distances_14() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_distances_14)); }
	inline SingleU5BU5D_t1219431280* get_m_distances_14() const { return ___m_distances_14; }
	inline SingleU5BU5D_t1219431280** get_address_of_m_distances_14() { return &___m_distances_14; }
	inline void set_m_distances_14(SingleU5BU5D_t1219431280* value)
	{
		___m_distances_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_distances_14, value);
	}

	inline static int32_t get_offset_of_m_name_15() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_name_15)); }
	inline String_t* get_m_name_15() const { return ___m_name_15; }
	inline String_t** get_address_of_m_name_15() { return &___m_name_15; }
	inline void set_m_name_15(String_t* value)
	{
		___m_name_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_name_15, value);
	}

	inline static int32_t get_offset_of_m_material_16() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_material_16)); }
	inline Material_t1886596500 * get_m_material_16() const { return ___m_material_16; }
	inline Material_t1886596500 ** get_address_of_m_material_16() { return &___m_material_16; }
	inline void set_m_material_16(Material_t1886596500 * value)
	{
		___m_material_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_material_16, value);
	}

	inline static int32_t get_offset_of_m_active_17() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_active_17)); }
	inline bool get_m_active_17() const { return ___m_active_17; }
	inline bool* get_address_of_m_active_17() { return &___m_active_17; }
	inline void set_m_active_17(bool value)
	{
		___m_active_17 = value;
	}

	inline static int32_t get_offset_of_capLength_18() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___capLength_18)); }
	inline float get_capLength_18() const { return ___capLength_18; }
	inline float* get_address_of_capLength_18() { return &___capLength_18; }
	inline void set_capLength_18(float value)
	{
		___capLength_18 = value;
	}

	inline static int32_t get_offset_of_m_depth_19() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_depth_19)); }
	inline int32_t get_m_depth_19() const { return ___m_depth_19; }
	inline int32_t* get_address_of_m_depth_19() { return &___m_depth_19; }
	inline void set_m_depth_19(int32_t value)
	{
		___m_depth_19 = value;
	}

	inline static int32_t get_offset_of_m_smoothWidth_20() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_smoothWidth_20)); }
	inline bool get_m_smoothWidth_20() const { return ___m_smoothWidth_20; }
	inline bool* get_address_of_m_smoothWidth_20() { return &___m_smoothWidth_20; }
	inline void set_m_smoothWidth_20(bool value)
	{
		___m_smoothWidth_20 = value;
	}

	inline static int32_t get_offset_of_m_smoothColor_21() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_smoothColor_21)); }
	inline bool get_m_smoothColor_21() const { return ___m_smoothColor_21; }
	inline bool* get_address_of_m_smoothColor_21() { return &___m_smoothColor_21; }
	inline void set_m_smoothColor_21(bool value)
	{
		___m_smoothColor_21 = value;
	}

	inline static int32_t get_offset_of_m_layer_22() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_layer_22)); }
	inline int32_t get_m_layer_22() const { return ___m_layer_22; }
	inline int32_t* get_address_of_m_layer_22() { return &___m_layer_22; }
	inline void set_m_layer_22(int32_t value)
	{
		___m_layer_22 = value;
	}

	inline static int32_t get_offset_of_m_continuous_23() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_continuous_23)); }
	inline bool get_m_continuous_23() const { return ___m_continuous_23; }
	inline bool* get_address_of_m_continuous_23() { return &___m_continuous_23; }
	inline void set_m_continuous_23(bool value)
	{
		___m_continuous_23 = value;
	}

	inline static int32_t get_offset_of_m_joins_24() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_joins_24)); }
	inline int32_t get_m_joins_24() const { return ___m_joins_24; }
	inline int32_t* get_address_of_m_joins_24() { return &___m_joins_24; }
	inline void set_m_joins_24(int32_t value)
	{
		___m_joins_24 = value;
	}

	inline static int32_t get_offset_of_m_isPoints_25() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_isPoints_25)); }
	inline bool get_m_isPoints_25() const { return ___m_isPoints_25; }
	inline bool* get_address_of_m_isPoints_25() { return &___m_isPoints_25; }
	inline void set_m_isPoints_25(bool value)
	{
		___m_isPoints_25 = value;
	}

	inline static int32_t get_offset_of_m_isAutoDrawing_26() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_isAutoDrawing_26)); }
	inline bool get_m_isAutoDrawing_26() const { return ___m_isAutoDrawing_26; }
	inline bool* get_address_of_m_isAutoDrawing_26() { return &___m_isAutoDrawing_26; }
	inline void set_m_isAutoDrawing_26(bool value)
	{
		___m_isAutoDrawing_26 = value;
	}

	inline static int32_t get_offset_of_m_minDrawIndex_27() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_minDrawIndex_27)); }
	inline int32_t get_m_minDrawIndex_27() const { return ___m_minDrawIndex_27; }
	inline int32_t* get_address_of_m_minDrawIndex_27() { return &___m_minDrawIndex_27; }
	inline void set_m_minDrawIndex_27(int32_t value)
	{
		___m_minDrawIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_maxDrawIndex_28() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_maxDrawIndex_28)); }
	inline int32_t get_m_maxDrawIndex_28() const { return ___m_maxDrawIndex_28; }
	inline int32_t* get_address_of_m_maxDrawIndex_28() { return &___m_maxDrawIndex_28; }
	inline void set_m_maxDrawIndex_28(int32_t value)
	{
		___m_maxDrawIndex_28 = value;
	}

	inline static int32_t get_offset_of_m_drawStart_29() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_drawStart_29)); }
	inline int32_t get_m_drawStart_29() const { return ___m_drawStart_29; }
	inline int32_t* get_address_of_m_drawStart_29() { return &___m_drawStart_29; }
	inline void set_m_drawStart_29(int32_t value)
	{
		___m_drawStart_29 = value;
	}

	inline static int32_t get_offset_of_m_drawEnd_30() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_drawEnd_30)); }
	inline int32_t get_m_drawEnd_30() const { return ___m_drawEnd_30; }
	inline int32_t* get_address_of_m_drawEnd_30() { return &___m_drawEnd_30; }
	inline void set_m_drawEnd_30(int32_t value)
	{
		___m_drawEnd_30 = value;
	}

	inline static int32_t get_offset_of_m_useNormals_31() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_useNormals_31)); }
	inline bool get_m_useNormals_31() const { return ___m_useNormals_31; }
	inline bool* get_address_of_m_useNormals_31() { return &___m_useNormals_31; }
	inline void set_m_useNormals_31(bool value)
	{
		___m_useNormals_31 = value;
	}

	inline static int32_t get_offset_of_m_useTangents_32() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_useTangents_32)); }
	inline bool get_m_useTangents_32() const { return ___m_useTangents_32; }
	inline bool* get_address_of_m_useTangents_32() { return &___m_useTangents_32; }
	inline void set_m_useTangents_32(bool value)
	{
		___m_useTangents_32 = value;
	}

	inline static int32_t get_offset_of_m_normalsCalculated_33() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_normalsCalculated_33)); }
	inline bool get_m_normalsCalculated_33() const { return ___m_normalsCalculated_33; }
	inline bool* get_address_of_m_normalsCalculated_33() { return &___m_normalsCalculated_33; }
	inline void set_m_normalsCalculated_33(bool value)
	{
		___m_normalsCalculated_33 = value;
	}

	inline static int32_t get_offset_of_m_tangentsCalculated_34() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_tangentsCalculated_34)); }
	inline bool get_m_tangentsCalculated_34() const { return ___m_tangentsCalculated_34; }
	inline bool* get_address_of_m_tangentsCalculated_34() { return &___m_tangentsCalculated_34; }
	inline void set_m_tangentsCalculated_34(bool value)
	{
		___m_tangentsCalculated_34 = value;
	}

	inline static int32_t get_offset_of_m_triangleCount_35() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_triangleCount_35)); }
	inline int32_t get_m_triangleCount_35() const { return ___m_triangleCount_35; }
	inline int32_t* get_address_of_m_triangleCount_35() { return &___m_triangleCount_35; }
	inline void set_m_triangleCount_35(int32_t value)
	{
		___m_triangleCount_35 = value;
	}

	inline static int32_t get_offset_of_m_vertexCount_36() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_vertexCount_36)); }
	inline int32_t get_m_vertexCount_36() const { return ___m_vertexCount_36; }
	inline int32_t* get_address_of_m_vertexCount_36() { return &___m_vertexCount_36; }
	inline void set_m_vertexCount_36(int32_t value)
	{
		___m_vertexCount_36 = value;
	}

	inline static int32_t get_offset_of_m_capType_37() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_capType_37)); }
	inline int32_t get_m_capType_37() const { return ___m_capType_37; }
	inline int32_t* get_address_of_m_capType_37() { return &___m_capType_37; }
	inline void set_m_capType_37(int32_t value)
	{
		___m_capType_37 = value;
	}

	inline static int32_t get_offset_of_m_endCap_38() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_endCap_38)); }
	inline String_t* get_m_endCap_38() const { return ___m_endCap_38; }
	inline String_t** get_address_of_m_endCap_38() { return &___m_endCap_38; }
	inline void set_m_endCap_38(String_t* value)
	{
		___m_endCap_38 = value;
		Il2CppCodeGenWriteBarrier(&___m_endCap_38, value);
	}

	inline static int32_t get_offset_of_m_continuousTexture_39() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_continuousTexture_39)); }
	inline bool get_m_continuousTexture_39() const { return ___m_continuousTexture_39; }
	inline bool* get_address_of_m_continuousTexture_39() { return &___m_continuousTexture_39; }
	inline void set_m_continuousTexture_39(bool value)
	{
		___m_continuousTexture_39 = value;
	}

	inline static int32_t get_offset_of_m_1pixelLine_40() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_1pixelLine_40)); }
	inline bool get_m_1pixelLine_40() const { return ___m_1pixelLine_40; }
	inline bool* get_address_of_m_1pixelLine_40() { return &___m_1pixelLine_40; }
	inline void set_m_1pixelLine_40(bool value)
	{
		___m_1pixelLine_40 = value;
	}

	inline static int32_t get_offset_of_m_useTransform_41() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_useTransform_41)); }
	inline Transform_t284553113 * get_m_useTransform_41() const { return ___m_useTransform_41; }
	inline Transform_t284553113 ** get_address_of_m_useTransform_41() { return &___m_useTransform_41; }
	inline void set_m_useTransform_41(Transform_t284553113 * value)
	{
		___m_useTransform_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_useTransform_41, value);
	}

	inline static int32_t get_offset_of_m_viewportDraw_42() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_viewportDraw_42)); }
	inline bool get_m_viewportDraw_42() const { return ___m_viewportDraw_42; }
	inline bool* get_address_of_m_viewportDraw_42() { return &___m_viewportDraw_42; }
	inline void set_m_viewportDraw_42(bool value)
	{
		___m_viewportDraw_42 = value;
	}

	inline static int32_t get_offset_of_m_textureScale_43() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_textureScale_43)); }
	inline float get_m_textureScale_43() const { return ___m_textureScale_43; }
	inline float* get_address_of_m_textureScale_43() { return &___m_textureScale_43; }
	inline void set_m_textureScale_43(float value)
	{
		___m_textureScale_43 = value;
	}

	inline static int32_t get_offset_of_m_useTextureScale_44() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_useTextureScale_44)); }
	inline bool get_m_useTextureScale_44() const { return ___m_useTextureScale_44; }
	inline bool* get_address_of_m_useTextureScale_44() { return &___m_useTextureScale_44; }
	inline void set_m_useTextureScale_44(bool value)
	{
		___m_useTextureScale_44 = value;
	}

	inline static int32_t get_offset_of_m_textureOffset_45() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_textureOffset_45)); }
	inline float get_m_textureOffset_45() const { return ___m_textureOffset_45; }
	inline float* get_address_of_m_textureOffset_45() { return &___m_textureOffset_45; }
	inline void set_m_textureOffset_45(float value)
	{
		___m_textureOffset_45 = value;
	}

	inline static int32_t get_offset_of_m_useMatrix_46() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_useMatrix_46)); }
	inline bool get_m_useMatrix_46() const { return ___m_useMatrix_46; }
	inline bool* get_address_of_m_useMatrix_46() { return &___m_useMatrix_46; }
	inline void set_m_useMatrix_46(bool value)
	{
		___m_useMatrix_46 = value;
	}

	inline static int32_t get_offset_of_m_matrix_47() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_matrix_47)); }
	inline Matrix4x4_t277289660  get_m_matrix_47() const { return ___m_matrix_47; }
	inline Matrix4x4_t277289660 * get_address_of_m_matrix_47() { return &___m_matrix_47; }
	inline void set_m_matrix_47(Matrix4x4_t277289660  value)
	{
		___m_matrix_47 = value;
	}

	inline static int32_t get_offset_of_m_collider_48() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_collider_48)); }
	inline bool get_m_collider_48() const { return ___m_collider_48; }
	inline bool* get_address_of_m_collider_48() { return &___m_collider_48; }
	inline void set_m_collider_48(bool value)
	{
		___m_collider_48 = value;
	}

	inline static int32_t get_offset_of_m_trigger_49() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_trigger_49)); }
	inline bool get_m_trigger_49() const { return ___m_trigger_49; }
	inline bool* get_address_of_m_trigger_49() { return &___m_trigger_49; }
	inline void set_m_trigger_49(bool value)
	{
		___m_trigger_49 = value;
	}

	inline static int32_t get_offset_of_m_physicsMaterial_50() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647, ___m_physicsMaterial_50)); }
	inline PhysicsMaterial2D_t872494989 * get_m_physicsMaterial_50() const { return ___m_physicsMaterial_50; }
	inline PhysicsMaterial2D_t872494989 ** get_address_of_m_physicsMaterial_50() { return &___m_physicsMaterial_50; }
	inline void set_m_physicsMaterial_50(PhysicsMaterial2D_t872494989 * value)
	{
		___m_physicsMaterial_50 = value;
		Il2CppCodeGenWriteBarrier(&___m_physicsMaterial_50, value);
	}
};

struct VectorLine_t3065371647_StaticFields
{
public:
	// System.Boolean Vectrosity.VectorLine::m_useMeshLines
	bool ___m_useMeshLines_51;
	// System.Boolean Vectrosity.VectorLine::m_useMeshPoints
	bool ___m_useMeshPoints_52;
	// System.Boolean Vectrosity.VectorLine::m_meshRenderMethodSet
	bool ___m_meshRenderMethodSet_53;
	// UnityEngine.Material Vectrosity.VectorLine::defaultMaterial
	Material_t1886596500 * ___defaultMaterial_54;
	// UnityEngine.Camera Vectrosity.VectorLine::cam
	Camera_t3533968274 * ___cam_55;
	// UnityEngine.Transform Vectrosity.VectorLine::camTransform
	Transform_t284553113 * ___camTransform_56;
	// UnityEngine.Camera Vectrosity.VectorLine::cam3D
	Camera_t3533968274 * ___cam3D_57;
	// UnityEngine.Vector3 Vectrosity.VectorLine::oldPosition
	Vector3_t3525329789  ___oldPosition_58;
	// UnityEngine.Vector3 Vectrosity.VectorLine::oldRotation
	Vector3_t3525329789  ___oldRotation_59;
	// System.Int32 Vectrosity.VectorLine::_vectorLayer
	int32_t ____vectorLayer_60;
	// System.Int32 Vectrosity.VectorLine::_vectorLayer3D
	int32_t ____vectorLayer3D_61;
	// System.Single Vectrosity.VectorLine::zDist
	float ___zDist_62;
	// System.Boolean Vectrosity.VectorLine::useOrthoCam
	bool ___useOrthoCam_63;
	// System.Boolean Vectrosity.VectorLine::error
	bool ___error_64;
	// System.Boolean Vectrosity.VectorLine::lineManagerCreated
	bool ___lineManagerCreated_65;
	// LineManager Vectrosity.VectorLine::_lineManager
	LineManager_t2890171641 * ____lineManager_66;
	// System.Int32 Vectrosity.VectorLine::m_screenWidth
	int32_t ___m_screenWidth_67;
	// System.Int32 Vectrosity.VectorLine::m_screenHeight
	int32_t ___m_screenHeight_68;
	// System.Collections.Generic.Dictionary`2<System.String,Vectrosity.CapInfo> Vectrosity.VectorLine::capDictionary
	Dictionary_2_t612390136 * ___capDictionary_69;
	// System.String[] Vectrosity.VectorLine::functionNames
	StringU5BU5D_t2956870243* ___functionNames_70;
	// UnityEngine.Material Vectrosity.VectorLine::defaultLineMaterial
	Material_t1886596500 * ___defaultLineMaterial_71;
	// System.Single Vectrosity.VectorLine::defaultLineWidth
	float ___defaultLineWidth_72;
	// System.Int32 Vectrosity.VectorLine::defaultLineDepth
	int32_t ___defaultLineDepth_73;
	// System.Single Vectrosity.VectorLine::defaultCapLength
	float ___defaultCapLength_74;
	// UnityEngine.Color Vectrosity.VectorLine::defaultLineColor
	Color_t1588175760  ___defaultLineColor_75;
	// Vectrosity.LineType Vectrosity.VectorLine::defaultLineType
	int32_t ___defaultLineType_76;
	// Vectrosity.Joins Vectrosity.VectorLine::defaultJoins
	int32_t ___defaultJoins_77;
	// System.Boolean Vectrosity.VectorLine::defaultsSet
	bool ___defaultsSet_78;
	// System.Int32 Vectrosity.VectorLine::endianDiff1
	int32_t ___endianDiff1_79;
	// System.Int32 Vectrosity.VectorLine::endianDiff2
	int32_t ___endianDiff2_80;
	// System.Byte[] Vectrosity.VectorLine::byteBlock
	ByteU5BU5D_t58506160* ___byteBlock_81;

public:
	inline static int32_t get_offset_of_m_useMeshLines_51() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___m_useMeshLines_51)); }
	inline bool get_m_useMeshLines_51() const { return ___m_useMeshLines_51; }
	inline bool* get_address_of_m_useMeshLines_51() { return &___m_useMeshLines_51; }
	inline void set_m_useMeshLines_51(bool value)
	{
		___m_useMeshLines_51 = value;
	}

	inline static int32_t get_offset_of_m_useMeshPoints_52() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___m_useMeshPoints_52)); }
	inline bool get_m_useMeshPoints_52() const { return ___m_useMeshPoints_52; }
	inline bool* get_address_of_m_useMeshPoints_52() { return &___m_useMeshPoints_52; }
	inline void set_m_useMeshPoints_52(bool value)
	{
		___m_useMeshPoints_52 = value;
	}

	inline static int32_t get_offset_of_m_meshRenderMethodSet_53() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___m_meshRenderMethodSet_53)); }
	inline bool get_m_meshRenderMethodSet_53() const { return ___m_meshRenderMethodSet_53; }
	inline bool* get_address_of_m_meshRenderMethodSet_53() { return &___m_meshRenderMethodSet_53; }
	inline void set_m_meshRenderMethodSet_53(bool value)
	{
		___m_meshRenderMethodSet_53 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_54() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultMaterial_54)); }
	inline Material_t1886596500 * get_defaultMaterial_54() const { return ___defaultMaterial_54; }
	inline Material_t1886596500 ** get_address_of_defaultMaterial_54() { return &___defaultMaterial_54; }
	inline void set_defaultMaterial_54(Material_t1886596500 * value)
	{
		___defaultMaterial_54 = value;
		Il2CppCodeGenWriteBarrier(&___defaultMaterial_54, value);
	}

	inline static int32_t get_offset_of_cam_55() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___cam_55)); }
	inline Camera_t3533968274 * get_cam_55() const { return ___cam_55; }
	inline Camera_t3533968274 ** get_address_of_cam_55() { return &___cam_55; }
	inline void set_cam_55(Camera_t3533968274 * value)
	{
		___cam_55 = value;
		Il2CppCodeGenWriteBarrier(&___cam_55, value);
	}

	inline static int32_t get_offset_of_camTransform_56() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___camTransform_56)); }
	inline Transform_t284553113 * get_camTransform_56() const { return ___camTransform_56; }
	inline Transform_t284553113 ** get_address_of_camTransform_56() { return &___camTransform_56; }
	inline void set_camTransform_56(Transform_t284553113 * value)
	{
		___camTransform_56 = value;
		Il2CppCodeGenWriteBarrier(&___camTransform_56, value);
	}

	inline static int32_t get_offset_of_cam3D_57() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___cam3D_57)); }
	inline Camera_t3533968274 * get_cam3D_57() const { return ___cam3D_57; }
	inline Camera_t3533968274 ** get_address_of_cam3D_57() { return &___cam3D_57; }
	inline void set_cam3D_57(Camera_t3533968274 * value)
	{
		___cam3D_57 = value;
		Il2CppCodeGenWriteBarrier(&___cam3D_57, value);
	}

	inline static int32_t get_offset_of_oldPosition_58() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___oldPosition_58)); }
	inline Vector3_t3525329789  get_oldPosition_58() const { return ___oldPosition_58; }
	inline Vector3_t3525329789 * get_address_of_oldPosition_58() { return &___oldPosition_58; }
	inline void set_oldPosition_58(Vector3_t3525329789  value)
	{
		___oldPosition_58 = value;
	}

	inline static int32_t get_offset_of_oldRotation_59() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___oldRotation_59)); }
	inline Vector3_t3525329789  get_oldRotation_59() const { return ___oldRotation_59; }
	inline Vector3_t3525329789 * get_address_of_oldRotation_59() { return &___oldRotation_59; }
	inline void set_oldRotation_59(Vector3_t3525329789  value)
	{
		___oldRotation_59 = value;
	}

	inline static int32_t get_offset_of__vectorLayer_60() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ____vectorLayer_60)); }
	inline int32_t get__vectorLayer_60() const { return ____vectorLayer_60; }
	inline int32_t* get_address_of__vectorLayer_60() { return &____vectorLayer_60; }
	inline void set__vectorLayer_60(int32_t value)
	{
		____vectorLayer_60 = value;
	}

	inline static int32_t get_offset_of__vectorLayer3D_61() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ____vectorLayer3D_61)); }
	inline int32_t get__vectorLayer3D_61() const { return ____vectorLayer3D_61; }
	inline int32_t* get_address_of__vectorLayer3D_61() { return &____vectorLayer3D_61; }
	inline void set__vectorLayer3D_61(int32_t value)
	{
		____vectorLayer3D_61 = value;
	}

	inline static int32_t get_offset_of_zDist_62() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___zDist_62)); }
	inline float get_zDist_62() const { return ___zDist_62; }
	inline float* get_address_of_zDist_62() { return &___zDist_62; }
	inline void set_zDist_62(float value)
	{
		___zDist_62 = value;
	}

	inline static int32_t get_offset_of_useOrthoCam_63() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___useOrthoCam_63)); }
	inline bool get_useOrthoCam_63() const { return ___useOrthoCam_63; }
	inline bool* get_address_of_useOrthoCam_63() { return &___useOrthoCam_63; }
	inline void set_useOrthoCam_63(bool value)
	{
		___useOrthoCam_63 = value;
	}

	inline static int32_t get_offset_of_error_64() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___error_64)); }
	inline bool get_error_64() const { return ___error_64; }
	inline bool* get_address_of_error_64() { return &___error_64; }
	inline void set_error_64(bool value)
	{
		___error_64 = value;
	}

	inline static int32_t get_offset_of_lineManagerCreated_65() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___lineManagerCreated_65)); }
	inline bool get_lineManagerCreated_65() const { return ___lineManagerCreated_65; }
	inline bool* get_address_of_lineManagerCreated_65() { return &___lineManagerCreated_65; }
	inline void set_lineManagerCreated_65(bool value)
	{
		___lineManagerCreated_65 = value;
	}

	inline static int32_t get_offset_of__lineManager_66() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ____lineManager_66)); }
	inline LineManager_t2890171641 * get__lineManager_66() const { return ____lineManager_66; }
	inline LineManager_t2890171641 ** get_address_of__lineManager_66() { return &____lineManager_66; }
	inline void set__lineManager_66(LineManager_t2890171641 * value)
	{
		____lineManager_66 = value;
		Il2CppCodeGenWriteBarrier(&____lineManager_66, value);
	}

	inline static int32_t get_offset_of_m_screenWidth_67() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___m_screenWidth_67)); }
	inline int32_t get_m_screenWidth_67() const { return ___m_screenWidth_67; }
	inline int32_t* get_address_of_m_screenWidth_67() { return &___m_screenWidth_67; }
	inline void set_m_screenWidth_67(int32_t value)
	{
		___m_screenWidth_67 = value;
	}

	inline static int32_t get_offset_of_m_screenHeight_68() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___m_screenHeight_68)); }
	inline int32_t get_m_screenHeight_68() const { return ___m_screenHeight_68; }
	inline int32_t* get_address_of_m_screenHeight_68() { return &___m_screenHeight_68; }
	inline void set_m_screenHeight_68(int32_t value)
	{
		___m_screenHeight_68 = value;
	}

	inline static int32_t get_offset_of_capDictionary_69() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___capDictionary_69)); }
	inline Dictionary_2_t612390136 * get_capDictionary_69() const { return ___capDictionary_69; }
	inline Dictionary_2_t612390136 ** get_address_of_capDictionary_69() { return &___capDictionary_69; }
	inline void set_capDictionary_69(Dictionary_2_t612390136 * value)
	{
		___capDictionary_69 = value;
		Il2CppCodeGenWriteBarrier(&___capDictionary_69, value);
	}

	inline static int32_t get_offset_of_functionNames_70() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___functionNames_70)); }
	inline StringU5BU5D_t2956870243* get_functionNames_70() const { return ___functionNames_70; }
	inline StringU5BU5D_t2956870243** get_address_of_functionNames_70() { return &___functionNames_70; }
	inline void set_functionNames_70(StringU5BU5D_t2956870243* value)
	{
		___functionNames_70 = value;
		Il2CppCodeGenWriteBarrier(&___functionNames_70, value);
	}

	inline static int32_t get_offset_of_defaultLineMaterial_71() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultLineMaterial_71)); }
	inline Material_t1886596500 * get_defaultLineMaterial_71() const { return ___defaultLineMaterial_71; }
	inline Material_t1886596500 ** get_address_of_defaultLineMaterial_71() { return &___defaultLineMaterial_71; }
	inline void set_defaultLineMaterial_71(Material_t1886596500 * value)
	{
		___defaultLineMaterial_71 = value;
		Il2CppCodeGenWriteBarrier(&___defaultLineMaterial_71, value);
	}

	inline static int32_t get_offset_of_defaultLineWidth_72() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultLineWidth_72)); }
	inline float get_defaultLineWidth_72() const { return ___defaultLineWidth_72; }
	inline float* get_address_of_defaultLineWidth_72() { return &___defaultLineWidth_72; }
	inline void set_defaultLineWidth_72(float value)
	{
		___defaultLineWidth_72 = value;
	}

	inline static int32_t get_offset_of_defaultLineDepth_73() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultLineDepth_73)); }
	inline int32_t get_defaultLineDepth_73() const { return ___defaultLineDepth_73; }
	inline int32_t* get_address_of_defaultLineDepth_73() { return &___defaultLineDepth_73; }
	inline void set_defaultLineDepth_73(int32_t value)
	{
		___defaultLineDepth_73 = value;
	}

	inline static int32_t get_offset_of_defaultCapLength_74() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultCapLength_74)); }
	inline float get_defaultCapLength_74() const { return ___defaultCapLength_74; }
	inline float* get_address_of_defaultCapLength_74() { return &___defaultCapLength_74; }
	inline void set_defaultCapLength_74(float value)
	{
		___defaultCapLength_74 = value;
	}

	inline static int32_t get_offset_of_defaultLineColor_75() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultLineColor_75)); }
	inline Color_t1588175760  get_defaultLineColor_75() const { return ___defaultLineColor_75; }
	inline Color_t1588175760 * get_address_of_defaultLineColor_75() { return &___defaultLineColor_75; }
	inline void set_defaultLineColor_75(Color_t1588175760  value)
	{
		___defaultLineColor_75 = value;
	}

	inline static int32_t get_offset_of_defaultLineType_76() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultLineType_76)); }
	inline int32_t get_defaultLineType_76() const { return ___defaultLineType_76; }
	inline int32_t* get_address_of_defaultLineType_76() { return &___defaultLineType_76; }
	inline void set_defaultLineType_76(int32_t value)
	{
		___defaultLineType_76 = value;
	}

	inline static int32_t get_offset_of_defaultJoins_77() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultJoins_77)); }
	inline int32_t get_defaultJoins_77() const { return ___defaultJoins_77; }
	inline int32_t* get_address_of_defaultJoins_77() { return &___defaultJoins_77; }
	inline void set_defaultJoins_77(int32_t value)
	{
		___defaultJoins_77 = value;
	}

	inline static int32_t get_offset_of_defaultsSet_78() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___defaultsSet_78)); }
	inline bool get_defaultsSet_78() const { return ___defaultsSet_78; }
	inline bool* get_address_of_defaultsSet_78() { return &___defaultsSet_78; }
	inline void set_defaultsSet_78(bool value)
	{
		___defaultsSet_78 = value;
	}

	inline static int32_t get_offset_of_endianDiff1_79() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___endianDiff1_79)); }
	inline int32_t get_endianDiff1_79() const { return ___endianDiff1_79; }
	inline int32_t* get_address_of_endianDiff1_79() { return &___endianDiff1_79; }
	inline void set_endianDiff1_79(int32_t value)
	{
		___endianDiff1_79 = value;
	}

	inline static int32_t get_offset_of_endianDiff2_80() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___endianDiff2_80)); }
	inline int32_t get_endianDiff2_80() const { return ___endianDiff2_80; }
	inline int32_t* get_address_of_endianDiff2_80() { return &___endianDiff2_80; }
	inline void set_endianDiff2_80(int32_t value)
	{
		___endianDiff2_80 = value;
	}

	inline static int32_t get_offset_of_byteBlock_81() { return static_cast<int32_t>(offsetof(VectorLine_t3065371647_StaticFields, ___byteBlock_81)); }
	inline ByteU5BU5D_t58506160* get_byteBlock_81() const { return ___byteBlock_81; }
	inline ByteU5BU5D_t58506160** get_address_of_byteBlock_81() { return &___byteBlock_81; }
	inline void set_byteBlock_81(ByteU5BU5D_t58506160* value)
	{
		___byteBlock_81 = value;
		Il2CppCodeGenWriteBarrier(&___byteBlock_81, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
