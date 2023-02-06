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

// Synthesizer
struct Synthesizer_t3031702888;
// WaveForm
struct WaveForm_t667898749;
// Frequency
struct Frequency_t1933944124;
// Tremolo
struct Tremolo_t601254060;
// Envelope
struct Envelope_t2310829040;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"

// System.Void Synthesizer::.ctor()
extern "C"  void Synthesizer__ctor_m949875459 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WaveForm Synthesizer::get_WaveForm()
extern "C"  WaveForm_t667898749 * Synthesizer_get_WaveForm_m4071303591 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Frequency Synthesizer::get_Frequency()
extern "C"  Frequency_t1933944124 * Synthesizer_get_Frequency_m3047818027 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tremolo Synthesizer::get_Tremolo()
extern "C"  Tremolo_t601254060 * Synthesizer_get_Tremolo_m2966159211 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Envelope Synthesizer::get_Envelope()
extern "C"  Envelope_t2310829040 * Synthesizer_get_Envelope_m2243084109 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Synthesizer::RenderAudio()
extern "C"  void Synthesizer_RenderAudio_m2544304129 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Synthesizer::WriteToBuffer(System.Single[])
extern "C"  void Synthesizer_WriteToBuffer_m1964760942 (Synthesizer_t3031702888 * __this, SingleU5BU5D_t1219431280* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Synthesizer::Reset()
extern "C"  void Synthesizer_Reset_m2891275696 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Synthesizer::Awake()
extern "C"  void Synthesizer_Awake_m1187480678 (Synthesizer_t3031702888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Synthesizer::OnAudioRead(System.Single[])
extern "C"  void Synthesizer_OnAudioRead_m646250491 (Synthesizer_t3031702888 * __this, SingleU5BU5D_t1219431280* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Synthesizer::OnAudioSetPosition(System.Int32)
extern "C"  void Synthesizer_OnAudioSetPosition_m883657894 (Synthesizer_t3031702888 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
