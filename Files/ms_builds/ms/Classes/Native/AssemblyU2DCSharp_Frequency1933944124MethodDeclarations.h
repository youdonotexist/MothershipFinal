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

// Frequency
struct Frequency_t1933944124;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationCurve3342907448.h"

// System.Void Frequency::.ctor()
extern "C"  void Frequency__ctor_m2123731887 (Frequency_t1933944124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Frequency::.cctor()
extern "C"  void Frequency__cctor_m929082846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Frequency::HertzAt(System.Single)
extern "C"  float Frequency_HertzAt_m1839146500 (Frequency_t1933944124 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve Frequency::get_Variation()
extern "C"  AnimationCurve_t3342907448 * Frequency_get_Variation_m3126949874 (Frequency_t1933944124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Frequency::set_Variation(UnityEngine.AnimationCurve)
extern "C"  void Frequency_set_Variation_m506995905 (Frequency_t1933944124 * __this, AnimationCurve_t3342907448 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Frequency::HertzToMidiNoteNumber(System.Single)
extern "C"  float Frequency_HertzToMidiNoteNumber_m129553344 (Il2CppObject * __this /* static, unused */, float ___hertz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Frequency::MidiNoteNumberToHertz(System.Single)
extern "C"  float Frequency_MidiNoteNumberToHertz_m3392503822 (Il2CppObject * __this /* static, unused */, float ___midiNoteNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
