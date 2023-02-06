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

// Envelope
struct Envelope_t2310829040;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"

// System.Void Envelope::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Envelope__ctor_m787607887 (Envelope_t2310829040 * __this, float ___attackTime, float ___sustainTime, float ___decayTime, float ___punch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Envelope::LevelAt(System.Single)
extern "C"  float Envelope_LevelAt_m1325094295 (Envelope_t2310829040 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Envelope::get_AttackTime()
extern "C"  float Envelope_get_AttackTime_m4123763011 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Envelope::set_AttackTime(System.Single)
extern "C"  void Envelope_set_AttackTime_m949101984 (Envelope_t2310829040 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Envelope::get_SustainTime()
extern "C"  float Envelope_get_SustainTime_m1613530596 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Envelope::set_SustainTime(System.Single)
extern "C"  void Envelope_set_SustainTime_m2783500527 (Envelope_t2310829040 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Envelope::get_DecayTime()
extern "C"  float Envelope_get_DecayTime_m2274830075 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Envelope::set_DecayTime(System.Single)
extern "C"  void Envelope_set_DecayTime_m2784198456 (Envelope_t2310829040 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Envelope::get_Punch()
extern "C"  float Envelope_get_Punch_m309891650 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Envelope::set_Punch(System.Single)
extern "C"  void Envelope_set_Punch_m2841604945 (Envelope_t2310829040 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Envelope::get_TotalTime()
extern "C"  float Envelope_get_TotalTime_m2308643589 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action Envelope::get_TimeChangeEvent()
extern "C"  Action_t437523947 * Envelope_get_TimeChangeEvent_m1443917631 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Envelope::set_TimeChangeEvent(System.Action)
extern "C"  void Envelope_set_TimeChangeEvent_m1884396148 (Envelope_t2310829040 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Envelope::RaiseTimeChangeEvent()
extern "C"  void Envelope_RaiseTimeChangeEvent_m3486545194 (Envelope_t2310829040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
