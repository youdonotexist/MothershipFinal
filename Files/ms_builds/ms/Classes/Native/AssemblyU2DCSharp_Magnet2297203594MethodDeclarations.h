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

// Magnet
struct Magnet_t2297203594;
// UnityEngine.Collider
struct Collider_t955670625;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"

// System.Void Magnet::.ctor()
extern "C"  void Magnet__ctor_m2631808081 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Magnet::Awake()
extern "C"  void Magnet_Awake_m2869413300 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Magnet::Update()
extern "C"  void Magnet_Update_m1708533980 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Magnet::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Magnet_OnTriggerEnter_m654083271 (Magnet_t2297203594 * __this, Collider_t955670625 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Magnet::HasObject()
extern "C"  bool Magnet_HasObject_m3402976116 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Magnet::GetCurrent()
extern "C"  Transform_t284553113 * Magnet_GetCurrent_m1254102836 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Magnet::ReleaseCurrent()
extern "C"  void Magnet_ReleaseCurrent_m995483461 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Magnet::OnRetracted()
extern "C"  void Magnet_OnRetracted_m3003538160 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Magnet::OnExtended()
extern "C"  void Magnet_OnExtended_m2865653643 (Magnet_t2297203594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
