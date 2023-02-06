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

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t2741383957;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// UnityEngine.Camera
struct Camera_t3533968274;
// UIRect
struct UIRect_t2503437976;
// UIWidget
struct UIWidget_t769069560;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "AssemblyU2DCSharp_UIWidget_Pivot77126690.h"
#include "AssemblyU2DCSharp_UIRect2503437976.h"
#include "AssemblyU2DCSharp_UIWidget769069560.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_Lerp_m2088444884 (Il2CppObject * __this /* static, unused */, float ___from, float ___to, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_ClampIndex_m2684191395 (Il2CppObject * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C"  int32_t NGUIMath_RepeatIndex_m1617649913 (Il2CppObject * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C"  float NGUIMath_WrapAngle_m3831556362 (Il2CppObject * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C"  float NGUIMath_Wrap01_m4134133558 (Il2CppObject * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C"  int32_t NGUIMath_HexToDecimal_m231656374 (Il2CppObject * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C"  uint16_t NGUIMath_DecimalToHexChar_m962756434 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex8(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex8_m1443630395 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex24(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex24_m81159043 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex32(System.Int32)
extern "C"  String_t* NGUIMath_DecimalToHex32_m850488544 (Il2CppObject * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C"  int32_t NGUIMath_ColorToInt_m2450582377 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C"  Color_t1588175760  NGUIMath_IntToColor_m1395442959 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C"  String_t* NGUIMath_IntToBinary_m1124748058 (Il2CppObject * __this /* static, unused */, int32_t ___val, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C"  Color_t1588175760  NGUIMath_HexToColor_m375679784 (Il2CppObject * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t1525428817  NGUIMath_ConvertToTexCoords_m3130058204 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C"  Rect_t1525428817  NGUIMath_ConvertToPixels_m2240053083 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, int32_t ___width, int32_t ___height, bool ___round, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C"  Rect_t1525428817  NGUIMath_MakePixelPerfect_m3379309626 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  Rect_t1525428817  NGUIMath_MakePixelPerfect_m1776078106 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  NGUIMath_ConstrainRect_m3106735282 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___minRect, Vector2_t3525329788  ___maxRect, Vector2_t3525329788  ___minArea, Vector2_t3525329788  ___maxArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t3518514978  NGUIMath_CalculateAbsoluteWidgetBounds_m635589940 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C"  Bounds_t3518514978  NGUIMath_CalculateRelativeWidgetBounds_m3101556671 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t3518514978  NGUIMath_CalculateRelativeWidgetBounds_m1956183518 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  Bounds_t3518514978  NGUIMath_CalculateRelativeWidgetBounds_m2719356150 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___relativeTo, Transform_t284553113 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C"  Bounds_t3518514978  NGUIMath_CalculateRelativeWidgetBounds_m1642787783 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___relativeTo, Transform_t284553113 * ___content, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean,System.Boolean,UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Boolean&)
extern "C"  void NGUIMath_CalculateRelativeWidgetBounds_m251973593 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___content, bool ___considerInactive, bool ___isRoot, Matrix4x4_t277289660 * ___toLocal, Vector3_t3525329789 * ___vMin, Vector3_t3525329789 * ___vMax, bool* ___isSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C"  Vector3_t3525329789  NGUIMath_SpringDampen_m4143798155 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C"  Vector2_t3525329788  NGUIMath_SpringDampen_m3349386795 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m1036467554 (Il2CppObject * __this /* static, unused */, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_SpringLerp_m3176191852 (Il2CppObject * __this /* static, unused */, float ___from, float ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector2_t3525329788  NGUIMath_SpringLerp_m236531867 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___from, Vector2_t3525329788  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t3525329789  NGUIMath_SpringLerp_m3331984154 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___from, Vector3_t3525329789  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C"  Quaternion_t1891715979  NGUIMath_SpringLerp_m2901898886 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___from, Quaternion_t1891715979  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C"  float NGUIMath_RotateTowards_m1722050620 (Il2CppObject * __this /* static, unused */, float ___from, float ___to, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float NGUIMath_DistancePointToLineSegment_m1902718895 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___point, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C"  float NGUIMath_DistanceToRectangle_m4084955221 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t2741383957* ___screenPoints, Vector2_t3525329788  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  float NGUIMath_DistanceToRectangle_m1058456566 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___worldPoints, Vector2_t3525329788  ___mousePos, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
extern "C"  Vector2_t3525329788  NGUIMath_GetPivotOffset_m2178153133 (Il2CppObject * __this /* static, unused */, int32_t ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot NGUIMath::GetPivot(UnityEngine.Vector2)
extern "C"  int32_t NGUIMath_GetPivot_m834732062 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveWidget(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveWidget_m2620155621 (Il2CppObject * __this /* static, unused */, UIRect_t2503437976 * ___w, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveRect(UIRect,System.Single,System.Single)
extern "C"  void NGUIMath_MoveRect_m3174214149 (Il2CppObject * __this /* static, unused */, UIRect_t2503437976 * ___rect, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m4013202983 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_ResizeWidget_m1041662151 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, int32_t ___maxWidth, int32_t ___maxHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single)
extern "C"  void NGUIMath_AdjustWidget_m3476709133 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w, float ___left, float ___bottom, float ___right, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m3175173677 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void NGUIMath_AdjustWidget_m1754109261 (Il2CppObject * __this /* static, unused */, UIWidget_t769069560 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, int32_t ___maxWidth, int32_t ___maxHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::AdjustByDPI(System.Single)
extern "C"  int32_t NGUIMath_AdjustByDPI_m831036606 (Il2CppObject * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C"  Vector2_t3525329788  NGUIMath_ScreenToPixels_m3183177316 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___pos, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ScreenToParentPixels(UnityEngine.Vector2,UnityEngine.Transform)
extern "C"  Vector2_t3525329788  NGUIMath_ScreenToParentPixels_m1397418522 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___pos, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::WorldToLocalPoint(UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera,UnityEngine.Transform)
extern "C"  Vector3_t3525329789  NGUIMath_WorldToLocalPoint_m4119094324 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___worldPos, Camera_t3533968274 * ___worldCam, Camera_t3533968274 * ___uiCam, Transform_t284553113 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void NGUIMath_OverlayPosition_m902206003 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, Vector3_t3525329789  ___worldPos, Camera_t3533968274 * ___worldCam, Camera_t3533968274 * ___myCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Camera)
extern "C"  void NGUIMath_OverlayPosition_m68767767 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, Vector3_t3525329789  ___worldPos, Camera_t3533968274 * ___worldCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::OverlayPosition(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void NGUIMath_OverlayPosition_m2746090903 (Il2CppObject * __this /* static, unused */, Transform_t284553113 * ___trans, Transform_t284553113 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
