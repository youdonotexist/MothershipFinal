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
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1890718142;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t3151226183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m925445731 (Il2CppObject * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3812046522 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m6468109 (Il2CppObject * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1519327982 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUILayoutOptionU5BU5D_t1890718142* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m559926739 (Il2CppObject * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C"  void GUILayout_BeginArea_m4120101869 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUILayout_BeginArea_m2566106901 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___screenRect, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C"  void GUILayout_EndArea_m755663130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_Width_m2259621411 (Il2CppObject * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t3151226183 * GUILayout_Height_m3774802884 (Il2CppObject * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
