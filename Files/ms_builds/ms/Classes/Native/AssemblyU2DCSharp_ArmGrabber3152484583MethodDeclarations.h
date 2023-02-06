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

// ArmGrabber
struct ArmGrabber_t3152484583;
// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"

// System.Void ArmGrabber::.ctor()
extern "C"  void ArmGrabber__ctor_m2762249108 (ArmGrabber_t3152484583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ArmGrabber::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void ArmGrabber_OnTriggerEnter_m2111271012 (ArmGrabber_t3152484583 * __this, Collider_t955670625 * ___inObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ArmGrabber::OnTriggerLeave(UnityEngine.Collider)
extern "C"  void ArmGrabber_OnTriggerLeave_m644544259 (ArmGrabber_t3152484583 * __this, Collider_t955670625 * ___inObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ArmGrabber::OnTriggerStay(UnityEngine.Collider)
extern "C"  void ArmGrabber_OnTriggerStay_m3444496313 (ArmGrabber_t3152484583 * __this, Collider_t955670625 * ___inObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ArmGrabber::GetCurrentTarget()
extern "C"  Transform_t284553113 * ArmGrabber_GetCurrentTarget_m528155714 (ArmGrabber_t3152484583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ArmGrabber::Update()
extern "C"  void ArmGrabber_Update_m1457238521 (ArmGrabber_t3152484583 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
