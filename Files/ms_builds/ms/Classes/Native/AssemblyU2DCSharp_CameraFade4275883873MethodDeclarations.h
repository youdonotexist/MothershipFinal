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

// CameraFade
struct CameraFade_t4275883873;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "System_Core_System_Action437523947.h"

// System.Void CameraFade::.ctor()
extern "C"  void CameraFade__ctor_m2260436570 (CameraFade_t4275883873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::.cctor()
extern "C"  void CameraFade__cctor_m871960723 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CameraFade CameraFade::get_instance()
extern "C"  CameraFade_t4275883873 * CameraFade_get_instance_m2393247652 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::Awake()
extern "C"  void CameraFade_Awake_m2498041789 (CameraFade_t4275883873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::init()
extern "C"  void CameraFade_init_m1356228762 (CameraFade_t4275883873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::OnGUI()
extern "C"  void CameraFade_OnGUI_m1755835220 (CameraFade_t4275883873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::SetScreenOverlayColor(UnityEngine.Color)
extern "C"  void CameraFade_SetScreenOverlayColor_m2549829261 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___newScreenOverlayColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CameraFade::StartAlphaFadeAsync(UnityEngine.Color,System.Boolean,System.Single)
extern "C"  Il2CppObject * CameraFade_StartAlphaFadeAsync_m507046864 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___newScreenOverlayColor, bool ___isFadeIn, float ___fadeDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::StartAlphaFade(UnityEngine.Color,System.Boolean,System.Single)
extern "C"  void CameraFade_StartAlphaFade_m3701666014 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___newScreenOverlayColor, bool ___isFadeIn, float ___fadeDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::StartAlphaFade(UnityEngine.Color,System.Boolean,System.Single,System.Single)
extern "C"  void CameraFade_StartAlphaFade_m3061817155 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___newScreenOverlayColor, bool ___isFadeIn, float ___fadeDuration, float ___fadeDelay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::StartAlphaFade(UnityEngine.Color,System.Boolean,System.Single,System.Single,System.Action)
extern "C"  void CameraFade_StartAlphaFade_m4077714618 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___newScreenOverlayColor, bool ___isFadeIn, float ___fadeDuration, float ___fadeDelay, Action_t437523947 * ___OnFadeFinish, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::Die()
extern "C"  void CameraFade_Die_m1533444536 (CameraFade_t4275883873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraFade::OnApplicationQuit()
extern "C"  void CameraFade_OnApplicationQuit_m2730179800 (CameraFade_t4275883873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
