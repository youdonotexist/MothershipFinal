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

// TextureScale
struct TextureScale_t2944241935;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void TextureScale::.ctor()
extern "C"  void TextureScale__ctor_m3729465964 (TextureScale_t2944241935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureScale::Point(UnityEngine.Texture2D,System.Int32,System.Int32)
extern "C"  void TextureScale_Point_m1798251554 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___tex, int32_t ___newWidth, int32_t ___newHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureScale::Bilinear(UnityEngine.Texture2D,System.Int32,System.Int32)
extern "C"  void TextureScale_Bilinear_m4233902840 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___tex, int32_t ___newWidth, int32_t ___newHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureScale::ThreadedScale(UnityEngine.Texture2D,System.Int32,System.Int32,System.Boolean)
extern "C"  void TextureScale_ThreadedScale_m3873504044 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___tex, int32_t ___newWidth, int32_t ___newHeight, bool ___useBilinear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureScale::BilinearScale(System.Object)
extern "C"  void TextureScale_BilinearScale_m394702092 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureScale::PointScale(System.Object)
extern "C"  void TextureScale_PointScale_m1143083938 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TextureScale::ColorLerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t1588175760  TextureScale_ColorLerpUnclamped_m3069520581 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c1, Color_t1588175760  ___c2, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
