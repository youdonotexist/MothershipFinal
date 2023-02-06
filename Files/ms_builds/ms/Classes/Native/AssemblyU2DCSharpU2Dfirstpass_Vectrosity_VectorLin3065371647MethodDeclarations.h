#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vectrosity.VectorLine
struct VectorLine_t3065371647;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.PhysicsMaterial2D
struct PhysicsMaterial2D_t872494989;
// LineManager
struct LineManager_t2890171641;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Vectrosity.VectorLine[]
struct VectorLineU5BU5D_t500207910;
// System.Collections.Generic.List`1<Vectrosity.VectorLine>
struct List_1_t3862330616;
// Vectrosity.VectorPoints
struct VectorPoints_t1645843502;
// Vectrosity.VectorPoints[]
struct VectorPointsU5BU5D_t3633504091;
// System.Collections.Generic.List`1<Vectrosity.VectorPoints>
struct List_1_t2442802471;
// System.Collections.Generic.Dictionary`2<Vectrosity.Vector3Pair,System.Boolean>
struct Dictionary_2_t1549962097;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2265160319;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_LineType2307019126.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_Joins1125461105.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_PhysicsMaterial2D872494989.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_CameraClearFlags3602484652.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorLin4247915171.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorLin3065371647.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_VectorPoi1645843502.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Vectrosity_EndCap3133754655.h"

// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m2214688836 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Color,UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m1343669796 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Color[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m2096455814 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Material,System.Single,Vectrosity.LineType)
extern "C"  void VectorLine__ctor_m2986851180 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Color,UnityEngine.Material,System.Single,Vectrosity.LineType)
extern "C"  void VectorLine__ctor_m2840287564 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Color[],UnityEngine.Material,System.Single,Vectrosity.LineType)
extern "C"  void VectorLine__ctor_m2439442094 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Material,System.Single,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine__ctor_m2816207207 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Color,UnityEngine.Material,System.Single,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine__ctor_m910935943 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector3[],UnityEngine.Color[],UnityEngine.Material,System.Single,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine__ctor_m1342530149 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m3137372419 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Color,UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m713211171 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Color[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m1816105925 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Material,System.Single,Vectrosity.LineType)
extern "C"  void VectorLine__ctor_m2706501291 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Color,UnityEngine.Material,System.Single,Vectrosity.LineType)
extern "C"  void VectorLine__ctor_m2826754763 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Color[],UnityEngine.Material,System.Single,Vectrosity.LineType)
extern "C"  void VectorLine__ctor_m2319322221 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Material,System.Single,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine__ctor_m1707392008 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Color,UnityEngine.Material,System.Single,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine__ctor_m1720423400 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.String,UnityEngine.Vector2[],UnityEngine.Color[],UnityEngine.Material,System.Single,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine__ctor_m1870895750 (VectorLine_t3065371647 * __this, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.Boolean,System.String,UnityEngine.Vector2[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m1091916766 (VectorLine_t3065371647 * __this, bool ___usePoints, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.Boolean,System.String,UnityEngine.Vector2[],UnityEngine.Color,UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m2290659134 (VectorLine_t3065371647 * __this, bool ___usePoints, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.Boolean,System.String,UnityEngine.Vector2[],UnityEngine.Color[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m1620142880 (VectorLine_t3065371647 * __this, bool ___usePoints, String_t* ___lineName, Vector2U5BU5D_t2741383957* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.Boolean,System.String,UnityEngine.Vector3[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m169233183 (VectorLine_t3065371647 * __this, bool ___usePoints, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.Boolean,System.String,UnityEngine.Vector3[],UnityEngine.Color[],UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m1900492769 (VectorLine_t3065371647 * __this, bool ___usePoints, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, ColorU5BU5D_t3477081137* ___colors, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.ctor(System.Boolean,System.String,UnityEngine.Vector3[],UnityEngine.Color,UnityEngine.Material,System.Single)
extern "C"  void VectorLine__ctor_m2921117759 (VectorLine_t3065371647 * __this, bool ___usePoints, String_t* ___lineName, Vector3U5BU5D_t3227571696* ___linePoints, Color_t1588175760  ___color, Material_t1886596500 * ___lineMaterial, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::.cctor()
extern "C"  void VectorLine__cctor_m3008033827 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vectrosity.VectorLine::Version()
extern "C"  String_t* VectorLine_Version_m1068034595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vectrosity.VectorLine::get_vectorObject()
extern "C"  GameObject_t4012695102 * VectorLine_get_vectorObject_m1048681096 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vectrosity.VectorLine::get_mesh()
extern "C"  Mesh_t1525280346 * VectorLine_get_mesh_m2671741935 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Vectrosity.VectorLine::get_color()
extern "C"  Color_t1588175760  VectorLine_get_color_m281720521 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_pointsLength()
extern "C"  int32_t VectorLine_get_pointsLength_m1161093078 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::get_lineWidth()
extern "C"  float VectorLine_get_lineWidth_m4268615197 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_lineWidth(System.Single)
extern "C"  void VectorLine_set_lineWidth_m2190819438 (VectorLine_t3065371647 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::get_maxWeldDistance()
extern "C"  float VectorLine_get_maxWeldDistance_m2138496906 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_maxWeldDistance(System.Single)
extern "C"  void VectorLine_set_maxWeldDistance_m2061922337 (VectorLine_t3065371647 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vectrosity.VectorLine::get_name()
extern "C"  String_t* VectorLine_get_name_m2749233323 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_name(System.String)
extern "C"  void VectorLine_set_name_m2650362208 (VectorLine_t3065371647 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material Vectrosity.VectorLine::get_material()
extern "C"  Material_t1886596500 * VectorLine_get_material_m77619427 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_material(UnityEngine.Material)
extern "C"  void VectorLine_set_material_m2794597728 (VectorLine_t3065371647 * __this, Material_t1886596500 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_active()
extern "C"  bool VectorLine_get_active_m3750866317 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_active(System.Boolean)
extern "C"  void VectorLine_set_active_m271839188 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_depth()
extern "C"  int32_t VectorLine_get_depth_m2625657112 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_depth(System.Int32)
extern "C"  void VectorLine_set_depth_m3645344255 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_smoothWidth()
extern "C"  bool VectorLine_get_smoothWidth_m1975712883 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_smoothWidth(System.Boolean)
extern "C"  void VectorLine_set_smoothWidth_m2585452314 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_smoothColor()
extern "C"  bool VectorLine_get_smoothColor_m1584532176 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_smoothColor(System.Boolean)
extern "C"  void VectorLine_set_smoothColor_m3373205175 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_layer()
extern "C"  int32_t VectorLine_get_layer_m1029109798 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_layer(System.Int32)
extern "C"  void VectorLine_set_layer_m1431438349 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_continuous()
extern "C"  bool VectorLine_get_continuous_m153694294 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.Joins Vectrosity.VectorLine::get_joins()
extern "C"  int32_t VectorLine_get_joins_m2483409626 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_joins(Vectrosity.Joins)
extern "C"  void VectorLine_set_joins_m3059732673 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_isAutoDrawing()
extern "C"  bool VectorLine_get_isAutoDrawing_m3869774304 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_minDrawIndex()
extern "C"  int32_t VectorLine_get_minDrawIndex_m361547049 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_minDrawIndex(System.Int32)
extern "C"  void VectorLine_set_minDrawIndex_m2990543012 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_maxDrawIndex()
extern "C"  int32_t VectorLine_get_maxDrawIndex_m3999598295 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_maxDrawIndex(System.Int32)
extern "C"  void VectorLine_set_maxDrawIndex_m1758281042 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_drawStart()
extern "C"  int32_t VectorLine_get_drawStart_m1634857747 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_drawStart(System.Int32)
extern "C"  void VectorLine_set_drawStart_m571295866 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_drawEnd()
extern "C"  int32_t VectorLine_get_drawEnd_m2920433996 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_drawEnd(System.Int32)
extern "C"  void VectorLine_set_drawEnd_m4025826995 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vectrosity.VectorLine::get_endCap()
extern "C"  String_t* VectorLine_get_endCap_m468264023 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_endCap(System.String)
extern "C"  void VectorLine_set_endCap_m3462715124 (VectorLine_t3065371647 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_continuousTexture()
extern "C"  bool VectorLine_get_continuousTexture_m2446555719 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_continuousTexture(System.Boolean)
extern "C"  void VectorLine_set_continuousTexture_m924648942 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vectrosity.VectorLine::get_drawTransform()
extern "C"  Transform_t284553113 * VectorLine_get_drawTransform_m3523019013 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_drawTransform(UnityEngine.Transform)
extern "C"  void VectorLine_set_drawTransform_m1261484778 (VectorLine_t3065371647 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_useViewportCoords()
extern "C"  bool VectorLine_get_useViewportCoords_m790640966 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_useViewportCoords(System.Boolean)
extern "C"  void VectorLine_set_useViewportCoords_m4191427245 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::get_textureScale()
extern "C"  float VectorLine_get_textureScale_m4197995142 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_textureScale(System.Single)
extern "C"  void VectorLine_set_textureScale_m3687650085 (VectorLine_t3065371647 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::get_textureOffset()
extern "C"  float VectorLine_get_textureOffset_m1424750969 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_textureOffset(System.Single)
extern "C"  void VectorLine_set_textureOffset_m1795531410 (VectorLine_t3065371647 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vectrosity.VectorLine::get_matrix()
extern "C"  Matrix4x4_t277289660  VectorLine_get_matrix_m1813874217 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void VectorLine_set_matrix_m2178523234 (VectorLine_t3065371647 * __this, Matrix4x4_t277289660  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_sortingLayerID()
extern "C"  int32_t VectorLine_get_sortingLayerID_m1556815733 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_sortingLayerID(System.Int32)
extern "C"  void VectorLine_set_sortingLayerID_m1167660656 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_sortingOrder()
extern "C"  int32_t VectorLine_get_sortingOrder_m3095677463 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_sortingOrder(System.Int32)
extern "C"  void VectorLine_set_sortingOrder_m3890323602 (VectorLine_t3065371647 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_collider()
extern "C"  bool VectorLine_get_collider_m1731041659 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_collider(System.Boolean)
extern "C"  void VectorLine_set_collider_m520208194 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_trigger()
extern "C"  bool VectorLine_get_trigger_m3754515059 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_trigger(System.Boolean)
extern "C"  void VectorLine_set_trigger_m2124379418 (VectorLine_t3065371647 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicsMaterial2D Vectrosity.VectorLine::get_physicsMaterial()
extern "C"  PhysicsMaterial2D_t872494989 * VectorLine_get_physicsMaterial_m4142828823 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_physicsMaterial(UnityEngine.PhysicsMaterial2D)
extern "C"  void VectorLine_set_physicsMaterial_m666327088 (VectorLine_t3065371647 * __this, PhysicsMaterial2D_t872494989 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::AddColliderIfNeeded()
extern "C"  void VectorLine_AddColliderIfNeeded_m1095412207 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_useMeshLines()
extern "C"  bool VectorLine_get_useMeshLines_m2295327762 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_useMeshLines(System.Boolean)
extern "C"  void VectorLine_set_useMeshLines_m1916532121 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_useMeshPoints()
extern "C"  bool VectorLine_get_useMeshPoints_m1712313234 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_useMeshPoints(System.Boolean)
extern "C"  void VectorLine_set_useMeshPoints_m2426566649 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] Vectrosity.VectorLine::SetColor(UnityEngine.Color,Vectrosity.LineType,System.Int32,System.Boolean)
extern "C"  ColorU5BU5D_t3477081137* VectorLine_SetColor_m4226913790 (VectorLine_t3065371647 * __this, Color_t1588175760  ___color, int32_t ___lineType, int32_t ___size, bool ___usePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetupMesh(System.String&,UnityEngine.Material,UnityEngine.Color[],System.Single&,Vectrosity.LineType,Vectrosity.Joins,System.Boolean,System.Boolean)
extern "C"  void VectorLine_SetupMesh_m1099100366 (VectorLine_t3065371647 * __this, String_t** ___lineName, Material_t1886596500 * ___useMaterial, ColorU5BU5D_t3477081137* ___colors, float* ___width, int32_t ___lineType, int32_t ___joins, bool ___use2Dlines, bool ___usePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Resize(UnityEngine.Vector3[])
extern "C"  void VectorLine_Resize_m3842059465 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___linePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Resize(UnityEngine.Vector2[])
extern "C"  void VectorLine_Resize_m3842029674 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___linePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Resize(System.Int32)
extern "C"  void VectorLine_Resize_m3388813567 (VectorLine_t3065371647 * __this, int32_t ___newSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::RebuildMesh()
extern "C"  void VectorLine_RebuildMesh_m514058064 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::BuildMesh(UnityEngine.Color[])
extern "C"  void VectorLine_BuildMesh_m1012633025 (VectorLine_t3065371647 * __this, ColorU5BU5D_t3477081137* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetupTriangles()
extern "C"  void VectorLine_SetupTriangles_m2497363432 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::MaxSegmentIndex()
extern "C"  int32_t VectorLine_MaxSegmentIndex_m4089133377 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::AddNormals()
extern "C"  void VectorLine_AddNormals_m14249541 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::AddTangents()
extern "C"  void VectorLine_AddTangents_m3797284727 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::CalculateTangents()
extern "C"  void VectorLine_CalculateTangents_m2833905340 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::AddEndCap()
extern "C"  void VectorLine_AddEndCap_m3077431648 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::RemoveEndCapVertices()
extern "C"  void VectorLine_RemoveEndCapVertices_m3849604078 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::get_camTransformPosition()
extern "C"  Vector3_t3525329789  VectorLine_get_camTransformPosition_m3718315151 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::get_camTransformExists()
extern "C"  bool VectorLine_get_camTransformExists_m59828192 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_vectorLayer()
extern "C"  int32_t VectorLine_get_vectorLayer_m1863806563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_vectorLayer(System.Int32)
extern "C"  void VectorLine_set_vectorLayer_m3584917066 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_vectorLayer3D()
extern "C"  int32_t VectorLine_get_vectorLayer3D_m117099540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::set_vectorLayer3D(System.Int32)
extern "C"  void VectorLine_set_vectorLayer3D_m904621307 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LineManager Vectrosity.VectorLine::get_lineManager()
extern "C"  LineManager_t2890171641 * VectorLine_get_lineManager_m3616178866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_screenWidth()
extern "C"  int32_t VectorLine_get_screenWidth_m3850169935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::get_screenHeight()
extern "C"  int32_t VectorLine_get_screenHeight_m3894965344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::LogError(System.String)
extern "C"  void VectorLine_LogError_m3246756068 (Il2CppObject * __this /* static, unused */, String_t* ___errorString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCameraRenderTexture(UnityEngine.RenderTexture)
extern "C"  Camera_t3533968274 * VectorLine_SetCameraRenderTexture_m793299381 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___renderTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCameraRenderTexture(UnityEngine.RenderTexture,UnityEngine.CameraClearFlags)
extern "C"  Camera_t3533968274 * VectorLine_SetCameraRenderTexture_m2722734011 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___renderTexture, int32_t ___clearFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCameraRenderTexture(UnityEngine.RenderTexture,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCameraRenderTexture_m1716406568 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___renderTexture, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCameraRenderTexture(UnityEngine.RenderTexture,UnityEngine.CameraClearFlags,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCameraRenderTexture_m3425822306 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___renderTexture, int32_t ___clearFlags, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCameraRenderTexture(UnityEngine.RenderTexture,UnityEngine.Color,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCameraRenderTexture_m2057953800 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___renderTexture, Color_t1588175760  ___color, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCameraRenderTexture(UnityEngine.RenderTexture,UnityEngine.Color,UnityEngine.CameraClearFlags,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCameraRenderTexture_m1454602626 (Il2CppObject * __this /* static, unused */, RenderTexture_t12905170 * ___renderTexture, Color_t1588175760  ___color, int32_t ___clearFlags, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera()
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m363675736 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m3813702607 (Il2CppObject * __this /* static, unused */, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(UnityEngine.CameraClearFlags)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m2897125922 (Il2CppObject * __this /* static, unused */, int32_t ___clearFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(UnityEngine.CameraClearFlags,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m4036552987 (Il2CppObject * __this /* static, unused */, int32_t ___clearFlags, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(UnityEngine.Camera)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m4030156540 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___thisCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(UnityEngine.Camera,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m1129950465 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___thisCamera, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(UnityEngine.Camera,UnityEngine.CameraClearFlags)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m1428739028 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___thisCamera, int32_t ___clearFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::SetCamera(UnityEngine.Camera,UnityEngine.CameraClearFlags,System.Boolean)
extern "C"  Camera_t3533968274 * VectorLine_SetCamera_m3351436585 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___thisCamera, int32_t ___clearFlags, bool ___useOrtho, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetCamera3D()
extern "C"  void VectorLine_SetCamera3D_m139766144 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetCamera3D(UnityEngine.Camera)
extern "C"  void VectorLine_SetCamera3D_m735428132 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___thisCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::CameraHasMoved()
extern "C"  bool VectorLine_CameraHasMoved_m2439121372 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::UpdateCameraInfo()
extern "C"  void VectorLine_UpdateCameraInfo_m916030934 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vectrosity.VectorLine::GetCamera()
extern "C"  Camera_t3533968274 * VectorLine_GetCamera_m452255564 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetVectorCamDepth(System.Int32)
extern "C"  void VectorLine_SetVectorCamDepth_m3993352338 (Il2CppObject * __this /* static, unused */, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vectrosity.VectorLine::GetSegmentNumber()
extern "C"  int32_t VectorLine_GetSegmentNumber_m763095978 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::WrongArrayLength(System.Int32,Vectrosity.VectorLine/FunctionName)
extern "C"  bool VectorLine_WrongArrayLength_m1534245568 (VectorLine_t3065371647 * __this, int32_t ___arrayLength, int32_t ___functionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::CheckArrayLength(Vectrosity.VectorLine/FunctionName,System.Int32,System.Int32)
extern "C"  bool VectorLine_CheckArrayLength_m4047366384 (VectorLine_t3065371647 * __this, int32_t ___functionName, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetEndCapColors()
extern "C"  void VectorLine_SetEndCapColors_m933396913 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetColor(UnityEngine.Color)
extern "C"  void VectorLine_SetColor_m4141256939 (VectorLine_t3065371647 * __this, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetColor(UnityEngine.Color,System.Int32)
extern "C"  void VectorLine_SetColor_m1544462796 (VectorLine_t3065371647 * __this, Color_t1588175760  ___color, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetColor(UnityEngine.Color,System.Int32,System.Int32)
extern "C"  void VectorLine_SetColor_m2455684747 (VectorLine_t3065371647 * __this, Color_t1588175760  ___color, int32_t ___startIndex, int32_t ___endIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetColors(UnityEngine.Color[])
extern "C"  void VectorLine_SetColors_m1235301162 (VectorLine_t3065371647 * __this, ColorU5BU5D_t3477081137* ___lineColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Vectrosity.VectorLine::GetColor(System.Int32)
extern "C"  Color_t1588175760  VectorLine_GetColor_m3930729489 (VectorLine_t3065371647 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetStartAndEnd(System.Int32&,System.Int32&)
extern "C"  void VectorLine_SetStartAndEnd_m1985539250 (VectorLine_t3065371647 * __this, int32_t* ___start, int32_t* ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidth(System.Single)
extern "C"  void VectorLine_SetWidth_m712327725 (VectorLine_t3065371647 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidth(System.Single,System.Int32)
extern "C"  void VectorLine_SetWidth_m214272970 (VectorLine_t3065371647 * __this, float ___width, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidth(System.Single,System.Int32,System.Int32)
extern "C"  void VectorLine_SetWidth_m804817229 (VectorLine_t3065371647 * __this, float ___width, int32_t ___startIndex, int32_t ___endIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidth(System.Single,System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_SetWidth_m3571738256 (VectorLine_t3065371647 * __this, float ___width, int32_t ___startIndex, int32_t ___endIndex, bool ___setAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidths(System.Single[])
extern "C"  void VectorLine_SetWidths_m1645923346 (VectorLine_t3065371647 * __this, SingleU5BU5D_t1219431280* ___lineWidths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidths(System.Int32[])
extern "C"  void VectorLine_SetWidths_m3117466886 (VectorLine_t3065371647 * __this, Int32U5BU5D_t1809983122* ___lineWidths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetWidths(System.Single[],System.Int32[],System.Int32,System.Boolean)
extern "C"  void VectorLine_SetWidths_m688358185 (VectorLine_t3065371647 * __this, SingleU5BU5D_t1219431280* ___lineWidthsFloat, Int32U5BU5D_t1809983122* ___lineWidthsInt, int32_t ___arrayLength, bool ___doFloat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::GetWidth(System.Int32)
extern "C"  float VectorLine_GetWidth_m556302031 (VectorLine_t3065371647 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::RedoLine(System.Boolean)
extern "C"  void VectorLine_RedoLine_m2167146947 (VectorLine_t3065371647 * __this, bool ___use1Pixel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetLineParameters(UnityEngine.Color,UnityEngine.Material,System.Single,System.Single,System.Int32,Vectrosity.LineType,Vectrosity.Joins)
extern "C"  void VectorLine_SetLineParameters_m3388994344 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, Material_t1886596500 * ___material, float ___width, float ___capLength, int32_t ___depth, int32_t ___lineType, int32_t ___joins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::PrintMakeLineError()
extern "C"  void VectorLine_PrintMakeLineError_m2030557107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::MakeLine(System.String,UnityEngine.Vector3[],UnityEngine.Color[])
extern "C"  VectorLine_t3065371647 * VectorLine_MakeLine_m484365339 (Il2CppObject * __this /* static, unused */, String_t* ___name, Vector3U5BU5D_t3227571696* ___points, ColorU5BU5D_t3477081137* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::MakeLine(System.String,UnityEngine.Vector2[],UnityEngine.Color[])
extern "C"  VectorLine_t3065371647 * VectorLine_MakeLine_m551372092 (Il2CppObject * __this /* static, unused */, String_t* ___name, Vector2U5BU5D_t2741383957* ___points, ColorU5BU5D_t3477081137* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::MakeLine(System.String,UnityEngine.Vector3[],UnityEngine.Color)
extern "C"  VectorLine_t3065371647 * VectorLine_MakeLine_m2181507133 (Il2CppObject * __this /* static, unused */, String_t* ___name, Vector3U5BU5D_t3227571696* ___points, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::MakeLine(System.String,UnityEngine.Vector2[],UnityEngine.Color)
extern "C"  VectorLine_t3065371647 * VectorLine_MakeLine_m4219563422 (Il2CppObject * __this /* static, unused */, String_t* ___name, Vector2U5BU5D_t2741383957* ___points, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::MakeLine(System.String,UnityEngine.Vector3[])
extern "C"  VectorLine_t3065371647 * VectorLine_MakeLine_m2515332893 (Il2CppObject * __this /* static, unused */, String_t* ___name, Vector3U5BU5D_t3227571696* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::MakeLine(System.String,UnityEngine.Vector2[])
extern "C"  VectorLine_t3065371647 * VectorLine_MakeLine_m2515303102 (Il2CppObject * __this /* static, unused */, String_t* ___name, Vector2U5BU5D_t2741383957* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetLine(UnityEngine.Color,UnityEngine.Vector2[])
extern "C"  VectorLine_t3065371647 * VectorLine_SetLine_m515275572 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, Vector2U5BU5D_t2741383957* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetLine(UnityEngine.Color,System.Single,UnityEngine.Vector2[])
extern "C"  VectorLine_t3065371647 * VectorLine_SetLine_m2032769241 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, float ___time, Vector2U5BU5D_t2741383957* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetLine(UnityEngine.Color,UnityEngine.Vector3[])
extern "C"  VectorLine_t3065371647 * VectorLine_SetLine_m515305363 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, Vector3U5BU5D_t3227571696* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetLine(UnityEngine.Color,System.Single,UnityEngine.Vector3[])
extern "C"  VectorLine_t3065371647 * VectorLine_SetLine_m2032799032 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, float ___time, Vector3U5BU5D_t3227571696* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetLine3D(UnityEngine.Color,UnityEngine.Vector3[])
extern "C"  VectorLine_t3065371647 * VectorLine_SetLine3D_m1279854850 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, Vector3U5BU5D_t3227571696* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetLine3D(UnityEngine.Color,System.Single,UnityEngine.Vector3[])
extern "C"  VectorLine_t3065371647 * VectorLine_SetLine3D_m3804199015 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, float ___time, Vector3U5BU5D_t3227571696* ___points, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetRay(UnityEngine.Color,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  VectorLine_t3065371647 * VectorLine_SetRay_m3382839312 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetRay(UnityEngine.Color,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  VectorLine_t3065371647 * VectorLine_SetRay_m2336491637 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, float ___time, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetRay3D(UnityEngine.Color,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  VectorLine_t3065371647 * VectorLine_SetRay3D_m2682393023 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vectrosity.VectorLine Vectrosity.VectorLine::SetRay3D(UnityEngine.Color,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  VectorLine_t3065371647 * VectorLine_SetRay3D_m2503865316 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color, float ___time, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::RedoFillLine()
extern "C"  void VectorLine_RedoFillLine_m2696968495 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::CheckLine(System.Boolean)
extern "C"  bool VectorLine_CheckLine_m3733589143 (VectorLine_t3065371647 * __this, bool ___draw3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::CheckNormals()
extern "C"  void VectorLine_CheckNormals_m2509310846 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::UseMatrix(UnityEngine.Matrix4x4&)
extern "C"  bool VectorLine_UseMatrix_m1060691134 (VectorLine_t3065371647 * __this, Matrix4x4_t277289660 * ___thisMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Draw()
extern "C"  void VectorLine_Draw_m3766314878 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Line2D(System.Int32,System.Int32,UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VectorLine_Line2D_m1225153187 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, Matrix4x4_t277289660  ___thisMatrix, bool ___useTransformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Line3DContinuous(System.Int32,System.Int32,UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VectorLine_Line3DContinuous_m984558705 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, Matrix4x4_t277289660  ___thisMatrix, bool ___useTransformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Line3DDiscrete(System.Int32,System.Int32,UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VectorLine_Line3DDiscrete_m930224091 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, Matrix4x4_t277289660  ___thisMatrix, bool ___useTransformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Draw3D()
extern "C"  void VectorLine_Draw3D_m3066489455 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::DrawPoints()
extern "C"  void VectorLine_DrawPoints_m3849972225 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::DrawPoints3D()
extern "C"  void VectorLine_DrawPoints3D_m1856821298 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Skip(System.Int32&,System.Int32&,UnityEngine.Vector3&,System.Int32&)
extern "C"  void VectorLine_Skip_m2685424823 (VectorLine_t3065371647 * __this, int32_t* ___idx, int32_t* ___widthIdx, Vector3_t3525329789 * ___pos, int32_t* ___widthIdxAdd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetLineMeshBounds()
extern "C"  void VectorLine_SetLineMeshBounds_m2097299584 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetupDrawStartEnd(System.Int32&,System.Int32&)
extern "C"  void VectorLine_SetupDrawStartEnd_m604204910 (VectorLine_t3065371647 * __this, int32_t* ___start, int32_t* ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::LineManagerCheckDistance()
extern "C"  void VectorLine_LineManagerCheckDistance_m396133438 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::LineManagerDisable()
extern "C"  void VectorLine_LineManagerDisable_m1334156105 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::LineManagerEnable()
extern "C"  void VectorLine_LineManagerEnable_m998644836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Draw3DAuto()
extern "C"  void VectorLine_Draw3DAuto_m4201422206 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Draw3DAuto(System.Single)
extern "C"  void VectorLine_Draw3DAuto_m1212596461 (VectorLine_t3065371647 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::StopDrawing3DAuto()
extern "C"  void VectorLine_StopDrawing3DAuto_m3813252324 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::WeldJoins(System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_WeldJoins_m3082578338 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, bool ___connectFirstAndLast, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::WeldJoinsDiscrete(System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_WeldJoinsDiscrete_m4185705339 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, bool ___connectFirstAndLast, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetIntersectionPoint(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VectorLine_SetIntersectionPoint_m1127676519 (VectorLine_t3065371647 * __this, int32_t ___p1, int32_t ___p2, int32_t ___p3, int32_t ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::WeldJoins3D(System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_WeldJoins3D_m892631123 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, bool ___connectFirstAndLast, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::WeldJoinsDiscrete3D(System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_WeldJoinsDiscrete3D_m140756972 (VectorLine_t3065371647 * __this, int32_t ___start, int32_t ___end, bool ___connectFirstAndLast, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetIntersectionPoint3D(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VectorLine_SetIntersectionPoint3D_m2758385686 (VectorLine_t3065371647 * __this, int32_t ___p1, int32_t ___p2, int32_t ___p3, int32_t ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetTextureScale()
extern "C"  void VectorLine_SetTextureScale_m1535677273 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::ResetTextureScale()
extern "C"  void VectorLine_ResetTextureScale_m1417667526 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetCollider(System.Boolean)
extern "C"  void VectorLine_SetCollider_m3058091669 (VectorLine_t3065371647 * __this, bool ___convertToWorldSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetDepth(UnityEngine.Transform,System.Int32)
extern "C"  void VectorLine_SetDepth_m978542581 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___thisTransform, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Vectrosity.VectorLine::BytesToVector3Array(System.Byte[])
extern "C"  Vector3U5BU5D_t3227571696* VectorLine_BytesToVector3Array_m427127578 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___lineBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] Vectrosity.VectorLine::BytesToVector2Array(System.Byte[])
extern "C"  Vector2U5BU5D_t2741383957* VectorLine_BytesToVector2Array_m1382472984 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___lineBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetupByteBlock()
extern "C"  void VectorLine_SetupByteBlock_m3126659170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::ConvertToFloat(System.Byte[],System.Int32)
extern "C"  float VectorLine_ConvertToFloat_m629281098 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(Vectrosity.VectorLine&)
extern "C"  void VectorLine_Destroy_m3774641993 (Il2CppObject * __this /* static, unused */, VectorLine_t3065371647 ** ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(Vectrosity.VectorLine[])
extern "C"  void VectorLine_Destroy_m1049837377 (Il2CppObject * __this /* static, unused */, VectorLineU5BU5D_t500207910* ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(System.Collections.Generic.List`1<Vectrosity.VectorLine>)
extern "C"  void VectorLine_Destroy_m3429751795 (Il2CppObject * __this /* static, unused */, List_1_t3862330616 * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::DestroyLine(Vectrosity.VectorLine&)
extern "C"  void VectorLine_DestroyLine_m3422996189 (Il2CppObject * __this /* static, unused */, VectorLine_t3065371647 ** ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(Vectrosity.VectorPoints&)
extern "C"  void VectorLine_Destroy_m1757480952 (Il2CppObject * __this /* static, unused */, VectorPoints_t1645843502 ** ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(Vectrosity.VectorPoints[])
extern "C"  void VectorLine_Destroy_m2942354546 (Il2CppObject * __this /* static, unused */, VectorPointsU5BU5D_t3633504091* ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(System.Collections.Generic.List`1<Vectrosity.VectorPoints>)
extern "C"  void VectorLine_Destroy_m1029768226 (Il2CppObject * __this /* static, unused */, List_1_t2442802471 * ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::DestroyPoints(Vectrosity.VectorPoints&)
extern "C"  void VectorLine_DestroyPoints_m3878995579 (Il2CppObject * __this /* static, unused */, VectorPoints_t1645843502 ** ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(Vectrosity.VectorLine&,UnityEngine.GameObject)
extern "C"  void VectorLine_Destroy_m3579579925 (Il2CppObject * __this /* static, unused */, VectorLine_t3065371647 ** ___line, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::Destroy(Vectrosity.VectorPoints&,UnityEngine.GameObject)
extern "C"  void VectorLine_Destroy_m4135987334 (Il2CppObject * __this /* static, unused */, VectorPoints_t1645843502 ** ___line, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeRect(UnityEngine.Rect)
extern "C"  void VectorLine_MakeRect_m2306542833 (VectorLine_t3065371647 * __this, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeRect(UnityEngine.Rect,System.Int32)
extern "C"  void VectorLine_MakeRect_m3972423558 (VectorLine_t3065371647 * __this, Rect_t1525428817  ___rect, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeRect(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void VectorLine_MakeRect_m3813099072 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___topLeft, Vector3_t3525329789  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeRect(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  void VectorLine_MakeRect_m4090494615 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___topLeft, Vector3_t3525329789  ___bottomRight, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,System.Single)
extern "C"  void VectorLine_MakeCircle_m4201809062 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  void VectorLine_MakeCircle_m3484931569 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___radius, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,System.Single,System.Int32,System.Single)
extern "C"  void VectorLine_MakeCircle_m2817042198 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___radius, int32_t ___segments, float ___pointRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,System.Single,System.Int32,System.Int32)
extern "C"  void VectorLine_MakeCircle_m3411555974 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___radius, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Int32)
extern "C"  void VectorLine_MakeCircle_m2010196353 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___radius, int32_t ___segments, float ___pointRotation, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void VectorLine_MakeCircle_m3192111737 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C"  void VectorLine_MakeCircle_m2321475326 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___radius, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
extern "C"  void VectorLine_MakeCircle_m1417829731 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___radius, int32_t ___segments, float ___pointRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,System.Int32)
extern "C"  void VectorLine_MakeCircle_m179831449 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___radius, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCircle(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Int32)
extern "C"  void VectorLine_MakeCircle_m1759828052 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___radius, int32_t ___segments, float ___pointRotation, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void VectorLine_MakeEllipse_m3188018091 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___xRadius, float ___yRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,System.Single,System.Single,System.Int32)
extern "C"  void VectorLine_MakeEllipse_m3128254220 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___xRadius, float ___yRadius, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void VectorLine_MakeEllipse_m2131071307 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___xRadius, float ___yRadius, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,System.Single,System.Single,System.Int32,System.Single)
extern "C"  void VectorLine_MakeEllipse_m1776723185 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, float ___xRadius, float ___yRadius, int32_t ___segments, float ___pointRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void VectorLine_MakeEllipse_m106089534 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___xRadius, float ___yRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Int32)
extern "C"  void VectorLine_MakeEllipse_m2926749017 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___xRadius, float ___yRadius, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void VectorLine_MakeEllipse_m1124053022 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___xRadius, float ___yRadius, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Int32,System.Single)
extern "C"  void VectorLine_MakeEllipse_m623927422 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___xRadius, float ___yRadius, int32_t ___segments, float ___pointRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeEllipse(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Int32,System.Single,System.Int32)
extern "C"  void VectorLine_MakeEllipse_m246937881 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___upVector, float ___xRadius, float ___yRadius, int32_t ___segments, float ___pointRotation, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector2[])
extern "C"  void VectorLine_MakeCurve_m4202226223 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___curvePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector2[],System.Int32)
extern "C"  void VectorLine_MakeCurve_m4217470728 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___curvePoints, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector2[],System.Int32,System.Int32)
extern "C"  void VectorLine_MakeCurve_m1331055311 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___curvePoints, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector3[])
extern "C"  void VectorLine_MakeCurve_m4202256014 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___curvePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector3[],System.Int32)
extern "C"  void VectorLine_MakeCurve_m1275813129 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___curvePoints, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector3[],System.Int32,System.Int32)
extern "C"  void VectorLine_MakeCurve_m1342371438 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___curvePoints, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void VectorLine_MakeCurve_m2913582505 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___anchor1, Vector3_t3525329789  ___control1, Vector3_t3525329789  ___anchor2, Vector3_t3525329789  ___control2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  void VectorLine_MakeCurve_m1432263118 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___anchor1, Vector3_t3525329789  ___control1, Vector3_t3525329789  ___anchor2, Vector3_t3525329789  ___control2, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCurve(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C"  void VectorLine_MakeCurve_m276652489 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___anchor1, Vector3_t3525329789  ___control1, Vector3_t3525329789  ___anchor2, Vector3_t3525329789  ___control2, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vectrosity.VectorLine::GetBezierPoint(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single)
extern "C"  Vector2_t3525329788  VectorLine_GetBezierPoint_m243377073 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___anchor1, Vector2_t3525329788 * ___control1, Vector2_t3525329788 * ___anchor2, Vector2_t3525329788 * ___control2, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::GetBezierPoint3D(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3525329789  VectorLine_GetBezierPoint3D_m706727039 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___anchor1, Vector3_t3525329789 * ___control1, Vector3_t3525329789 * ___anchor2, Vector3_t3525329789 * ___control2, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[])
extern "C"  void VectorLine_MakeSpline_m1612696031 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[],System.Boolean)
extern "C"  void VectorLine_MakeSpline_m2391125950 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[],System.Int32)
extern "C"  void VectorLine_MakeSpline_m3705967960 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[],System.Int32,System.Boolean)
extern "C"  void VectorLine_MakeSpline_m3122881317 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints, int32_t ___segments, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[],System.Int32,System.Int32)
extern "C"  void VectorLine_MakeSpline_m3746952831 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[],System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_MakeSpline_m165457694 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints, int32_t ___segments, int32_t ___index, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector3[])
extern "C"  void VectorLine_MakeSpline_m1612725822 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___splinePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector3[],System.Boolean)
extern "C"  void VectorLine_MakeSpline_m1546654079 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___splinePoints, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector3[],System.Int32)
extern "C"  void VectorLine_MakeSpline_m764310361 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___splinePoints, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector3[],System.Int32,System.Boolean)
extern "C"  void VectorLine_MakeSpline_m1112777476 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___splinePoints, int32_t ___segments, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector3[],System.Int32,System.Int32)
extern "C"  void VectorLine_MakeSpline_m3758268958 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___splinePoints, int32_t ___segments, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector3[],System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_MakeSpline_m2759684511 (VectorLine_t3065371647 * __this, Vector3U5BU5D_t3227571696* ___splinePoints, int32_t ___segments, int32_t ___index, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeSpline(UnityEngine.Vector2[],UnityEngine.Vector3[],System.Int32,System.Int32,System.Boolean)
extern "C"  void VectorLine_MakeSpline_m1964496781 (VectorLine_t3065371647 * __this, Vector2U5BU5D_t2741383957* ___splinePoints2, Vector3U5BU5D_t3227571696* ___splinePoints3, int32_t ___segments, int32_t ___index, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vectrosity.VectorLine::GetSplinePoint(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single)
extern "C"  Vector2_t3525329788  VectorLine_GetSplinePoint_m3832070819 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___p0, Vector2_t3525329788 * ___p1, Vector2_t3525329788 * ___p2, Vector2_t3525329788 * ___p3, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::GetSplinePoint3D(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3525329789  VectorLine_GetSplinePoint3D_m582678257 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___p0, Vector3_t3525329789 * ___p1, Vector3_t3525329789 * ___p2, Vector3_t3525329789 * ___p3, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::VectorDistanceSquared(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  float VectorLine_VectorDistanceSquared_m3657328067 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___p, Vector2_t3525329788 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::VectorDistanceSquared(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  float VectorLine_VectorDistanceSquared_m3590322275 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___p, Vector3_t3525329789 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::InitNonuniformCatmullRom(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Vector4&)
extern "C"  void VectorLine_InitNonuniformCatmullRom_m2925701044 (Il2CppObject * __this /* static, unused */, float ___x0, float ___x1, float ___x2, float ___x3, float ___dt0, float ___dt1, float ___dt2, Vector4_t3525329790 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::EvalCubicPoly(UnityEngine.Vector4&,System.Single)
extern "C"  float VectorLine_EvalCubicPoly_m1492667751 (Il2CppObject * __this /* static, unused */, Vector4_t3525329790 * ___p, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeText(System.String,UnityEngine.Vector3,System.Single)
extern "C"  void VectorLine_MakeText_m2710628581 (VectorLine_t3065371647 * __this, String_t* ___text, Vector3_t3525329789  ___startPos, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeText(System.String,UnityEngine.Vector3,System.Single,System.Boolean)
extern "C"  void VectorLine_MakeText_m272491512 (VectorLine_t3065371647 * __this, String_t* ___text, Vector3_t3525329789  ___startPos, float ___size, bool ___uppercaseOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeText(System.String,UnityEngine.Vector3,System.Single,System.Single,System.Single)
extern "C"  void VectorLine_MakeText_m2333995119 (VectorLine_t3065371647 * __this, String_t* ___text, Vector3_t3525329789  ___startPos, float ___size, float ___charSpacing, float ___lineSpacing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeText(System.String,UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Boolean)
extern "C"  void VectorLine_MakeText_m3502479150 (VectorLine_t3065371647 * __this, String_t* ___text, Vector3_t3525329789  ___startPos, float ___size, float ___charSpacing, float ___lineSpacing, bool ___uppercaseOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeWireframe(UnityEngine.Mesh)
extern "C"  void VectorLine_MakeWireframe_m217979134 (VectorLine_t3065371647 * __this, Mesh_t1525280346 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::CheckPairPoints(System.Collections.Generic.Dictionary`2<Vectrosity.Vector3Pair,System.Boolean>,UnityEngine.Vector3,UnityEngine.Vector3,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  void VectorLine_CheckPairPoints_m1279350610 (Il2CppObject * __this /* static, unused */, Dictionary_2_t1549962097 * ___pairs, Vector3_t3525329789  ___p1, Vector3_t3525329789  ___p2, List_1_t27321462 * ___linePoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCube(UnityEngine.Vector3,System.Single,System.Single,System.Single)
extern "C"  void VectorLine_MakeCube_m929731307 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___position, float ___xSize, float ___ySize, float ___zSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::MakeCube(UnityEngine.Vector3,System.Single,System.Single,System.Single,System.Int32)
extern "C"  void VectorLine_MakeCube_m1737351116 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___position, float ___xSize, float ___ySize, float ___zSize, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetDistances()
extern "C"  void VectorLine_SetDistances_m1591119894 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vectrosity.VectorLine::GetLength()
extern "C"  float VectorLine_GetLength_m178128912 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vectrosity.VectorLine::GetPoint01(System.Single)
extern "C"  Vector2_t3525329788  VectorLine_GetPoint01_m2011864593 (VectorLine_t3065371647 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vectrosity.VectorLine::GetPoint01(System.Single,System.Int32&)
extern "C"  Vector2_t3525329788  VectorLine_GetPoint01_m2932910630 (VectorLine_t3065371647 * __this, float ___distance, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vectrosity.VectorLine::GetPoint(System.Single)
extern "C"  Vector2_t3525329788  VectorLine_GetPoint_m4162609202 (VectorLine_t3065371647 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vectrosity.VectorLine::GetPoint(System.Single,System.Int32&)
extern "C"  Vector2_t3525329788  VectorLine_GetPoint_m1628413575 (VectorLine_t3065371647 * __this, float ___distance, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::GetPoint3D01(System.Single)
extern "C"  Vector3_t3525329789  VectorLine_GetPoint3D01_m1791780895 (VectorLine_t3065371647 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::GetPoint3D01(System.Single,System.Int32&)
extern "C"  Vector3_t3525329789  VectorLine_GetPoint3D01_m2412299188 (VectorLine_t3065371647 * __this, float ___distance, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::GetPoint3D(System.Single)
extern "C"  Vector3_t3525329789  VectorLine_GetPoint3D_m426071488 (VectorLine_t3065371647 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vectrosity.VectorLine::GetPoint3D(System.Single,System.Int32&)
extern "C"  Vector3_t3525329789  VectorLine_GetPoint3D_m2025636757 (VectorLine_t3065371647 * __this, float ___distance, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetDistanceIndex(System.Int32&,System.Single)
extern "C"  void VectorLine_SetDistanceIndex_m367135627 (VectorLine_t3065371647 * __this, int32_t* ___i, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetEndCap(System.String,Vectrosity.EndCap)
extern "C"  void VectorLine_SetEndCap_m2558154784 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___capType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetEndCap(System.String,Vectrosity.EndCap,UnityEngine.Material,UnityEngine.Texture2D[])
extern "C"  void VectorLine_SetEndCap_m2165986108 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___capType, Material_t1886596500 * ___material, Texture2DU5BU5D_t2265160319* ___textures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::SetEndCap(System.String,Vectrosity.EndCap,UnityEngine.Material,System.Single,UnityEngine.Texture2D[])
extern "C"  void VectorLine_SetEndCap_m1976541473 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___capType, Material_t1886596500 * ___material, float ___offset, Texture2DU5BU5D_t2265160319* ___textures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::RemoveEndCap(System.String)
extern "C"  void VectorLine_RemoveEndCap_m3313136397 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::ZeroPoints()
extern "C"  void VectorLine_ZeroPoints_m2514360165 (VectorLine_t3065371647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::ZeroPoints(System.Int32)
extern "C"  void VectorLine_ZeroPoints_m2930957622 (VectorLine_t3065371647 * __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::ZeroPoints(System.Int32,System.Int32)
extern "C"  void VectorLine_ZeroPoints_m1300752225 (VectorLine_t3065371647 * __this, int32_t ___startIndex, int32_t ___endIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vectrosity.VectorLine::ZeroVertices(System.Int32,System.Int32)
extern "C"  void VectorLine_ZeroVertices_m3450135243 (VectorLine_t3065371647 * __this, int32_t ___startIndex, int32_t ___endIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::Selected(UnityEngine.Vector2)
extern "C"  bool VectorLine_Selected_m3536924321 (VectorLine_t3065371647 * __this, Vector2_t3525329788  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::Selected(UnityEngine.Vector2,System.Int32&)
extern "C"  bool VectorLine_Selected_m4133945014 (VectorLine_t3065371647 * __this, Vector2_t3525329788  ___p, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::Selected(UnityEngine.Vector2,System.Int32,System.Int32&)
extern "C"  bool VectorLine_Selected_m2539686699 (VectorLine_t3065371647 * __this, Vector2_t3525329788  ___p, int32_t ___extraDistance, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::Approximately2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool VectorLine_Approximately2_m211512831 (VectorLine_t3065371647 * __this, Vector2_t3525329788  ___p1, Vector2_t3525329788  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::Approximately3(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool VectorLine_Approximately3_m2592497116 (VectorLine_t3065371647 * __this, Vector3_t3525329789  ___p1, Vector3_t3525329789  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vectrosity.VectorLine::Approximately(System.Single,System.Single)
extern "C"  bool VectorLine_Approximately_m73766731 (VectorLine_t3065371647 * __this, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
