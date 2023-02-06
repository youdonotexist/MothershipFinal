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

// Port
struct Port_t2493601;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;
// Gesture
struct Gesture_t1589572905;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gesture1589572905.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_PortState_MinionTypeDetails2901012274.h"
#include "AssemblyU2DCSharp_PortState_MinionTypes4228739459.h"

// System.Void Port::.ctor()
extern "C"  void Port__ctor_m3684115226 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::Awake()
extern "C"  void Port_Awake_m3921720445 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnEnable()
extern "C"  void Port_OnEnable_m1953994284 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnDisable()
extern "C"  void Port_OnDisable_m885217921 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::Start()
extern "C"  void Port_Start_m2631253018 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::PortMinion()
extern "C"  void Port_PortMinion_m2491157185 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] Port::buildColorSmooth(System.Int32)
extern "C"  ColorU5BU5D_t3477081137* Port_buildColorSmooth_m1596615907 (Port_t2493601 * __this, int32_t ___lines, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnUpdatePort(System.Int32,System.Int32)
extern "C"  void Port_OnUpdatePort_m1259617971 (Port_t2493601 * __this, int32_t ___type, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnDestroy()
extern "C"  void Port_OnDestroy_m3062749971 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::UnsubscribeEvent()
extern "C"  void Port_UnsubscribeEvent_m1421553011 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnTouchStartET(Gesture)
extern "C"  void Port_OnTouchStartET_m2630438094 (Port_t2493601 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnTouchDragET(Gesture)
extern "C"  void Port_OnTouchDragET_m2881394158 (Port_t2493601 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnTouchEndET(Gesture)
extern "C"  void Port_OnTouchEndET_m2636661877 (Port_t2493601 * __this, Gesture_t1589572905 * ___gesture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::EndPath()
extern "C"  void Port_EndPath_m2534910488 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::Update()
extern "C"  void Port_Update_m4265284403 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::UpdateAnimation()
extern "C"  void Port_UpdateAnimation_m912834931 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::MinionDestroyed()
extern "C"  void Port_MinionDestroyed_m4191751419 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::SetEnable(System.Boolean)
extern "C"  void Port_SetEnable_m2232023732 (Port_t2493601 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnSpriteQualityChange(System.String)
extern "C"  void Port_OnSpriteQualityChange_m1972013567 (Port_t2493601 * __this, String_t* ___quality, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Port::OnDrawGizmosSelected()
extern "C"  void Port_OnDrawGizmosSelected_m4183563201 (Port_t2493601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PortState/MinionTypeDetails Port::detailsForMinionType(PortState/MinionTypes)
extern "C"  MinionTypeDetails_t2901012274  Port_detailsForMinionType_m3826303597 (Port_t2493601 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
