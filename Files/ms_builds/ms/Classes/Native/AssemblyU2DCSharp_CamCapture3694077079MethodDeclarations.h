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

// CamCapture
struct CamCapture_t3694077079;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_CamCapture_ThreadData808007924.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void CamCapture::.ctor()
extern "C"  void CamCapture__ctor_m1874243044 (CamCapture_t3694077079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::Awake()
extern "C"  void CamCapture_Awake_m2111848263 (CamCapture_t3694077079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CamCapture::GetPalette()
extern "C"  ColorU5BU5D_t3477081137* CamCapture_GetPalette_m2769971978 (CamCapture_t3694077079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::UpdateICK()
extern "C"  void CamCapture_UpdateICK_m786844042 (CamCapture_t3694077079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::ThreadedCapture()
extern "C"  void CamCapture_ThreadedCapture_m740807007 (CamCapture_t3694077079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::processCanvas(System.Object)
extern "C"  void CamCapture_processCanvas_m3751676715 (CamCapture_t3694077079 * __this, Il2CppObject * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::IncreaseBrightness(CamCapture/ThreadData,System.Single)
extern "C"  void CamCapture_IncreaseBrightness_m1669555256 (CamCapture_t3694077079 * __this, ThreadData_t808007924  ___data, float ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::InvertColors(CamCapture/ThreadData)
extern "C"  void CamCapture_InvertColors_m741502272 (CamCapture_t3694077079 * __this, ThreadData_t808007924  ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::IncreaseContrast(CamCapture/ThreadData,System.Single)
extern "C"  void CamCapture_IncreaseContrast_m3630978023 (CamCapture_t3694077079 * __this, ThreadData_t808007924  ___data, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color CamCapture::processBlock(CamCapture/ThreadData,System.Int32,System.Int32,System.Int32)
extern "C"  Color_t1588175760  CamCapture_processBlock_m984758166 (CamCapture_t3694077079 * __this, ThreadData_t808007924  ___context, int32_t ___x, int32_t ___y, int32_t ___totalBlocks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CamCapture::GetPixels(UnityEngine.Color[],System.Int32,System.Int32,CamCapture/ThreadData,System.Int32,System.Int32)
extern "C"  ColorU5BU5D_t3477081137* CamCapture_GetPixels_m550412580 (CamCapture_t3694077079 * __this, ColorU5BU5D_t3477081137* ___inColors, int32_t ___x, int32_t ___y, ThreadData_t808007924  ___context, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CamCapture::SetPixels(UnityEngine.Color[],System.Int32,System.Int32,CamCapture/ThreadData,System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void CamCapture_SetPixels_m1182139987 (CamCapture_t3694077079 * __this, ColorU5BU5D_t3477081137* ___outColors, int32_t ___x, int32_t ___y, ThreadData_t808007924  ___context, int32_t ___width, int32_t ___height, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color CamCapture::getClosestColor(UnityEngine.Color,UnityEngine.Color[])
extern "C"  Color_t1588175760  CamCapture_getClosestColor_m3212811145 (CamCapture_t3694077079 * __this, Color_t1588175760  ___c, ColorU5BU5D_t3477081137* ___palette, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color CamCapture::avgPixel(UnityEngine.Color[])
extern "C"  Color_t1588175760  CamCapture_avgPixel_m1736321481 (CamCapture_t3694077079 * __this, ColorU5BU5D_t3477081137* ___imageData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
