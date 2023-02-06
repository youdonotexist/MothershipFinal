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

// VirtualScreen
struct VirtualScreen_t1258571575;
// VirtualScreen/On_ScreenResizeHandler
struct On_ScreenResizeHandler_t3030730890;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_VirtualScreen_On_ScreenResizeHan3030730890.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// System.Void VirtualScreen::.ctor()
extern "C"  void VirtualScreen__ctor_m2589804564 (VirtualScreen_t1258571575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::.cctor()
extern "C"  void VirtualScreen__cctor_m2492433945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::add_On_ScreenResize(VirtualScreen/On_ScreenResizeHandler)
extern "C"  void VirtualScreen_add_On_ScreenResize_m1204704882 (Il2CppObject * __this /* static, unused */, On_ScreenResizeHandler_t3030730890 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::remove_On_ScreenResize(VirtualScreen/On_ScreenResizeHandler)
extern "C"  void VirtualScreen_remove_On_ScreenResize_m993440851 (Il2CppObject * __this /* static, unused */, On_ScreenResizeHandler_t3030730890 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::Awake()
extern "C"  void VirtualScreen_Awake_m2827409783 (VirtualScreen_t1258571575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::Update()
extern "C"  void VirtualScreen_Update_m406424953 (VirtualScreen_t1258571575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::ComputeScreen()
extern "C"  void VirtualScreen_ComputeScreen_m692520693 (VirtualScreen_t1258571575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::ComputeVirtualScreen()
extern "C"  void VirtualScreen_ComputeVirtualScreen_m932400400 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VirtualScreen::SetGuiScaleMatrix()
extern "C"  void VirtualScreen_SetGuiScaleMatrix_m134204836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect VirtualScreen::GetRealRect(UnityEngine.Rect)
extern "C"  Rect_t1525428817  VirtualScreen_GetRealRect_m211289809 (Il2CppObject * __this /* static, unused */, Rect_t1525428817  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
