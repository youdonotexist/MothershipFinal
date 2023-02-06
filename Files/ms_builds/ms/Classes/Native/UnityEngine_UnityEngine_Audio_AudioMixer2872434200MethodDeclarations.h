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

// UnityEngine.Audio.AudioMixer
struct AudioMixer_t2872434200;
// UnityEngine.Audio.AudioMixerSnapshot[]
struct AudioMixerSnapshotU5BU5D_t1602784149;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Audio.AudioMixer::TransitionToSnapshots(UnityEngine.Audio.AudioMixerSnapshot[],System.Single[],System.Single)
extern "C"  void AudioMixer_TransitionToSnapshots_m3287003935 (AudioMixer_t2872434200 * __this, AudioMixerSnapshotU5BU5D_t1602784149* ___snapshots, SingleU5BU5D_t1219431280* ___weights, float ___timeToReach, const MethodInfo* method) IL2CPP_METHOD_ATTR;
