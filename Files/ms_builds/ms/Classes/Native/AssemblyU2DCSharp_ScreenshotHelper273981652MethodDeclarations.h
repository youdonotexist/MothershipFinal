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

// ScreenshotHelper
struct ScreenshotHelper_t273981652;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// ShotSize
struct ShotSize_t4017980987;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ShotSize4017980987.h"

// System.Void ScreenshotHelper::.ctor()
extern "C"  void ScreenshotHelper__ctor_m705049671 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ScreenshotHelper ScreenshotHelper::get_instance()
extern "C"  ScreenshotHelper_t273981652 * ScreenshotHelper_get_instance_m2014859588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::Awake()
extern "C"  void ScreenshotHelper_Awake_m942654890 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ScreenshotHelper::BuildSaveLocation()
extern "C"  String_t* ScreenshotHelper_BuildSaveLocation_m1063254274 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::Update()
extern "C"  void ScreenshotHelper_Update_m2108565414 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::UpdateDimensions()
extern "C"  void ScreenshotHelper_UpdateDimensions_m3527389715 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::WarnCanvases()
extern "C"  void ScreenshotHelper_WarnCanvases_m312318409 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::GetScreenShots()
extern "C"  void ScreenshotHelper_GetScreenShots_m3838696916 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScreenshotHelper::GetFileNum(System.String)
extern "C"  int32_t ScreenshotHelper_GetFileNum_m4276552067 (ScreenshotHelper_t273981652 * __this, String_t* ___typeExt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ScreenshotHelper::TakeScreenShots()
extern "C"  Il2CppObject * ScreenshotHelper_TakeScreenShots_m4117026883 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::RemoveAllCustomSizes()
extern "C"  void ScreenshotHelper_RemoveAllCustomSizes_m883373057 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ScreenshotHelper::GetScreenShotName(ShotSize)
extern "C"  String_t* ScreenshotHelper_GetScreenShotName_m2880538798 (ScreenshotHelper_t273981652 * __this, ShotSize_t4017980987 * ___shot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenshotHelper::SetDefaults()
extern "C"  void ScreenshotHelper_SetDefaults_m4272056889 (ScreenshotHelper_t273981652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
