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

// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// DarkTonic.MasterAudio.PlaylistController
struct PlaylistController_t2988482781;
// DarkTonic.MasterAudio.SoundGroupVariation
struct SoundGroupVariation_t49693394;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SystemLanguage1674836756.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCo2988482781.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_PlaylistCon745328228.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_SoundGroupVa49693394.h"
#include "System_Core_System_Action437523947.h"

// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::.cctor()
extern "C"  void AudioResourceOptimizer__cctor_m4129329140 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::ClearAudioClips()
extern "C"  void AudioResourceOptimizer_ClearAudioClips_m534604049 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.AudioResourceOptimizer::GetLocalizedDynamicSoundGroupFileName(UnityEngine.SystemLanguage,System.Boolean,System.String)
extern "C"  String_t* AudioResourceOptimizer_GetLocalizedDynamicSoundGroupFileName_m706129266 (Il2CppObject * __this /* static, unused */, int32_t ___localLanguage, bool ___useLocalization, String_t* ___resourceFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.AudioResourceOptimizer::GetLocalizedFileName(System.Boolean,System.String)
extern "C"  String_t* AudioResourceOptimizer_GetLocalizedFileName_m773224813 (Il2CppObject * __this /* static, unused */, bool ___useLocalization, String_t* ___resourceFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::AddTargetForClip(System.String,UnityEngine.AudioSource)
extern "C"  void AudioResourceOptimizer_AddTargetForClip_m1647150178 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, AudioSource_t3628549054 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DarkTonic.MasterAudio.AudioResourceOptimizer::SupportedLanguageFolder()
extern "C"  String_t* AudioResourceOptimizer_SupportedLanguageFolder_m524845096 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::ClearSupportLanguageFolder()
extern "C"  void AudioResourceOptimizer_ClearSupportLanguageFolder_m1823153427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip DarkTonic.MasterAudio.AudioResourceOptimizer::PopulateResourceSongToPlaylistController(System.String,System.String,System.String)
extern "C"  AudioClip_t3714538611 * AudioResourceOptimizer_PopulateResourceSongToPlaylistController_m1117759669 (Il2CppObject * __this /* static, unused */, String_t* ___controllerName, String_t* ___songResourceName, String_t* ___playlistName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::FinishRecordingPlaylistClip(System.String,UnityEngine.AudioClip)
extern "C"  void AudioResourceOptimizer_FinishRecordingPlaylistClip_m3078804872 (Il2CppObject * __this /* static, unused */, String_t* ___controllerName, AudioClip_t3714538611 * ___resAudioClip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DarkTonic.MasterAudio.AudioResourceOptimizer::PopulateResourceSongToPlaylistControllerAsync(System.String,System.String,DarkTonic.MasterAudio.PlaylistController,DarkTonic.MasterAudio.PlaylistController/AudioPlayType)
extern "C"  Il2CppObject * AudioResourceOptimizer_PopulateResourceSongToPlaylistControllerAsync_m3416626132 (Il2CppObject * __this /* static, unused */, String_t* ___songResourceName, String_t* ___playlistName, PlaylistController_t2988482781 * ___controller, int32_t ___playType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DarkTonic.MasterAudio.AudioResourceOptimizer::PopulateSourceWithInternetFile(System.String,DarkTonic.MasterAudio.SoundGroupVariation,System.Action,System.Action)
extern "C"  Il2CppObject * AudioResourceOptimizer_PopulateSourceWithInternetFile_m4016091375 (Il2CppObject * __this /* static, unused */, String_t* ___fileUrl, SoundGroupVariation_t49693394 * ___variation, Action_t437523947 * ___successAction, Action_t437523947 * ___failureAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::RemoveLoadedInternetClip(System.String)
extern "C"  void AudioResourceOptimizer_RemoveLoadedInternetClip_m2405009629 (Il2CppObject * __this /* static, unused */, String_t* ___fileUrl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator DarkTonic.MasterAudio.AudioResourceOptimizer::PopulateSourcesWithResourceClipAsync(System.String,DarkTonic.MasterAudio.SoundGroupVariation,System.Action,System.Action)
extern "C"  Il2CppObject * AudioResourceOptimizer_PopulateSourcesWithResourceClipAsync_m3160908301 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, SoundGroupVariation_t49693394 * ___variation, Action_t437523947 * ___successAction, Action_t437523947 * ___failureAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::UnloadPlaylistSongIfUnused(System.String,UnityEngine.AudioClip)
extern "C"  void AudioResourceOptimizer_UnloadPlaylistSongIfUnused_m3156133947 (Il2CppObject * __this /* static, unused */, String_t* ___controllerName, AudioClip_t3714538611 * ___clipToRemove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DarkTonic.MasterAudio.AudioResourceOptimizer::PopulateSourcesWithResourceClip(System.String,DarkTonic.MasterAudio.SoundGroupVariation)
extern "C"  bool AudioResourceOptimizer_PopulateSourcesWithResourceClip_m384711783 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, SoundGroupVariation_t49693394 * ___variation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::DeleteAudioSourceFromList(System.String,UnityEngine.AudioSource)
extern "C"  void AudioResourceOptimizer_DeleteAudioSourceFromList_m3710127 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, AudioSource_t3628549054 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DarkTonic.MasterAudio.AudioResourceOptimizer::UnloadClipIfUnused(System.String)
extern "C"  void AudioResourceOptimizer_UnloadClipIfUnused_m1755777397 (Il2CppObject * __this /* static, unused */, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
