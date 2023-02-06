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

// Tremolo
struct Tremolo_t601254060;

#include "codegen/il2cpp-codegen.h"

// System.Void Tremolo::.ctor(System.Single,System.Single)
extern "C"  void Tremolo__ctor_m2416692657 (Tremolo_t601254060 * __this, float ___speed, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tremolo::Reset()
extern "C"  void Tremolo_Reset_m3927388908 (Tremolo_t601254060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tremolo::Move(System.Single)
extern "C"  void Tremolo_Move_m1478749365 (Tremolo_t601254060 * __this, float ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tremolo::Level()
extern "C"  float Tremolo_Level_m425196717 (Tremolo_t601254060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tremolo::get_Hertz()
extern "C"  float Tremolo_get_Hertz_m2529252315 (Tremolo_t601254060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tremolo::get_Depth()
extern "C"  float Tremolo_get_Depth_m3272340547 (Tremolo_t601254060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tremolo::set_Depth(System.Single)
extern "C"  void Tremolo_set_Depth_m1421170696 (Tremolo_t601254060 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Tremolo::get_Speed()
extern "C"  float Tremolo_get_Speed_m4004305095 (Tremolo_t601254060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tremolo::set_Speed(System.Single)
extern "C"  void Tremolo_set_Speed_m184740356 (Tremolo_t601254060 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
