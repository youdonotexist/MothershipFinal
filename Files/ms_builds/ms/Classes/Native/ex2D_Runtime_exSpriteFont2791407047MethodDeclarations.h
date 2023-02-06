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

// exSpriteFont
struct exSpriteFont_t2791407047;
// exBitmapFont
struct exBitmapFont_t3811321649;
// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.Mesh
struct Mesh_t1525280346;

#include "codegen/il2cpp-codegen.h"
#include "ex2D_Runtime_exBitmapFont3811321649.h"
#include "mscorlib_System_String968488902.h"
#include "ex2D_Runtime_exSpriteFont_TextAlign938456504.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Mesh1525280346.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void exSpriteFont::.ctor()
extern "C"  void exSpriteFont__ctor_m3898927605 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exBitmapFont exSpriteFont::get_fontInfo()
extern "C"  exBitmapFont_t3811321649 * exSpriteFont_get_fontInfo_m1889474883 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_fontInfo(exBitmapFont)
extern "C"  void exSpriteFont_set_fontInfo_m3720875992 (exSpriteFont_t2791407047 * __this, exBitmapFont_t3811321649 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String exSpriteFont::get_text()
extern "C"  String_t* exSpriteFont_get_text_m2168263144 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_text(System.String)
extern "C"  void exSpriteFont_set_text_m2585522601 (exSpriteFont_t2791407047 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteFont::get_useMultiline()
extern "C"  bool exSpriteFont_get_useMultiline_m2533879572 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_useMultiline(System.Boolean)
extern "C"  void exSpriteFont_set_useMultiline_m3580348521 (exSpriteFont_t2791407047 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// exSpriteFont/TextAlign exSpriteFont::get_textAlign()
extern "C"  int32_t exSpriteFont_get_textAlign_m4039588627 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_textAlign(exSpriteFont/TextAlign)
extern "C"  void exSpriteFont_set_textAlign_m829480318 (exSpriteFont_t2791407047 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteFont::get_useKerning()
extern "C"  bool exSpriteFont_get_useKerning_m1654574899 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_useKerning(System.Boolean)
extern "C"  void exSpriteFont_set_useKerning_m435987912 (exSpriteFont_t2791407047 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteFont::get_tracking()
extern "C"  float exSpriteFont_get_tracking_m3905740571 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_tracking(System.Single)
extern "C"  void exSpriteFont_set_tracking_m2444133128 (exSpriteFont_t2791407047 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteFont::get_lineSpacing()
extern "C"  float exSpriteFont_get_lineSpacing_m904282861 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_lineSpacing(System.Single)
extern "C"  void exSpriteFont_set_lineSpacing_m2501215302 (exSpriteFont_t2791407047 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color exSpriteFont::get_topColor()
extern "C"  Color_t1588175760  exSpriteFont_get_topColor_m3645080365 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_topColor(UnityEngine.Color)
extern "C"  void exSpriteFont_set_topColor_m2464908108 (exSpriteFont_t2791407047 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color exSpriteFont::get_botColor()
extern "C"  Color_t1588175760  exSpriteFont_get_botColor_m1268662907 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_botColor(UnityEngine.Color)
extern "C"  void exSpriteFont_set_botColor_m2616822206 (exSpriteFont_t2791407047 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteFont::get_useOutline()
extern "C"  bool exSpriteFont_get_useOutline_m2552633065 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_useOutline(System.Boolean)
extern "C"  void exSpriteFont_set_useOutline_m1404647166 (exSpriteFont_t2791407047 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single exSpriteFont::get_outlineWidth()
extern "C"  float exSpriteFont_get_outlineWidth_m2500148808 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_outlineWidth(System.Single)
extern "C"  void exSpriteFont_set_outlineWidth_m862251259 (exSpriteFont_t2791407047 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color exSpriteFont::get_outlineColor()
extern "C"  Color_t1588175760  exSpriteFont_get_outlineColor_m70551712 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_outlineColor(UnityEngine.Color)
extern "C"  void exSpriteFont_set_outlineColor_m517611705 (exSpriteFont_t2791407047 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean exSpriteFont::get_useShadow()
extern "C"  bool exSpriteFont_get_useShadow_m2723530555 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_useShadow(System.Boolean)
extern "C"  void exSpriteFont_set_useShadow_m3430891348 (exSpriteFont_t2791407047 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 exSpriteFont::get_shadowBias()
extern "C"  Vector2_t3525329788  exSpriteFont_get_shadowBias_m1768365100 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_shadowBias(UnityEngine.Vector2)
extern "C"  void exSpriteFont_set_shadowBias_m167313941 (exSpriteFont_t2791407047 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color exSpriteFont::get_shadowColor()
extern "C"  Color_t1588175760  exSpriteFont_get_shadowColor_m890017542 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::set_shadowColor(UnityEngine.Color)
extern "C"  void exSpriteFont_set_shadowColor_m1697423949 (exSpriteFont_t2791407047 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::CalculateSize(System.Single[]&,System.Single[]&,System.Single&,System.Single&,System.Single&,System.Single&)
extern "C"  void exSpriteFont_CalculateSize_m4147854988 (exSpriteFont_t2791407047 * __this, SingleU5BU5D_t1219431280** ____lineWidths, SingleU5BU5D_t1219431280** ____kernings, float* ____halfWidthScaled, float* ____halfHeightScaled, float* ____offsetX, float* ____offsetY, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::UpdateOutline(System.Int32,System.Int32,System.Int32,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[])
extern "C"  void exSpriteFont_UpdateOutline_m1540725877 (exSpriteFont_t2791407047 * __this, int32_t ____vertexStartAt, int32_t ____indexStartAt, int32_t ____srcVertexStartAt, Vector3U5BU5D_t3227571696* ____vertices, Vector2U5BU5D_t2741383957* ____uvs, Int32U5BU5D_t1809983122* ____indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::UpdateShadow(System.Int32,System.Int32,System.Int32,UnityEngine.Vector3[],UnityEngine.Vector2[],System.Int32[])
extern "C"  void exSpriteFont_UpdateShadow_m3363479625 (exSpriteFont_t2791407047 * __this, int32_t ____vertexStartAt, int32_t ____indexStartAt, int32_t ____srcVertexStartAt, Vector3U5BU5D_t3227571696* ____vertices, Vector2U5BU5D_t2741383957* ____uvs, Int32U5BU5D_t1809983122* ____indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::UpdateMesh(UnityEngine.Mesh)
extern "C"  void exSpriteFont_UpdateMesh_m774356961 (exSpriteFont_t2791407047 * __this, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::ForceUpdateMesh(UnityEngine.Mesh)
extern "C"  void exSpriteFont_ForceUpdateMesh_m3648914128 (exSpriteFont_t2791407047 * __this, Mesh_t1525280346 * ____mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::Commit()
extern "C"  void exSpriteFont_Commit_m409646246 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::Awake()
extern "C"  void exSpriteFont_Awake_m4136532824 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::Clear()
extern "C"  void exSpriteFont_Clear_m1305060896 (exSpriteFont_t2791407047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect exSpriteFont::GetCharRect(System.Int32)
extern "C"  Rect_t1525428817  exSpriteFont_GetCharRect_m3495617296 (exSpriteFont_t2791407047 * __this, int32_t ____idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void exSpriteFont::SetCharColor(System.Int32,UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  void exSpriteFont_SetCharColor_m3638772880 (exSpriteFont_t2791407047 * __this, int32_t ____idx, Color_t1588175760  ____topColor, Color_t1588175760  ____botColor, float ____alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
