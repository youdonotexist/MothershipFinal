#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t3013571836;
// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEvent/MA_SnapshotInfo>
struct List_1_t3836719734;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio553683591.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi2885573881.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1823621723.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio_71009483.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi1363918210.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudio358274568.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3863831287.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_MasterAudi3482519025.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_AudioEvent_913770606.h"
#include "AssemblyU2DCSharp_DarkTonic_MasterAudio_EventSound1078957005.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.AudioEvent
struct  AudioEvent_t1997961779  : public Il2CppObject
{
public:
	// System.String DarkTonic.MasterAudio.AudioEvent::actionName
	String_t* ___actionName_0;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::isExpanded
	bool ___isExpanded_1;
	// System.String DarkTonic.MasterAudio.AudioEvent::soundType
	String_t* ___soundType_2;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::allPlaylistControllersForGroupCmd
	bool ___allPlaylistControllersForGroupCmd_3;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::allSoundTypesForGroupCmd
	bool ___allSoundTypesForGroupCmd_4;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::allSoundTypesForBusCmd
	bool ___allSoundTypesForBusCmd_5;
	// System.Single DarkTonic.MasterAudio.AudioEvent::volume
	float ___volume_6;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::useFixedPitch
	bool ___useFixedPitch_7;
	// System.Single DarkTonic.MasterAudio.AudioEvent::pitch
	float ___pitch_8;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::emitParticles
	bool ___emitParticles_9;
	// System.Int32 DarkTonic.MasterAudio.AudioEvent::particleCountToEmit
	int32_t ___particleCountToEmit_10;
	// System.Single DarkTonic.MasterAudio.AudioEvent::delaySound
	float ___delaySound_11;
	// DarkTonic.MasterAudio.MasterAudio/EventSoundFunctionType DarkTonic.MasterAudio.AudioEvent::currentSoundFunctionType
	int32_t ___currentSoundFunctionType_12;
	// DarkTonic.MasterAudio.MasterAudio/PlaylistCommand DarkTonic.MasterAudio.AudioEvent::currentPlaylistCommand
	int32_t ___currentPlaylistCommand_13;
	// DarkTonic.MasterAudio.MasterAudio/SoundGroupCommand DarkTonic.MasterAudio.AudioEvent::currentSoundGroupCommand
	int32_t ___currentSoundGroupCommand_14;
	// DarkTonic.MasterAudio.MasterAudio/BusCommand DarkTonic.MasterAudio.AudioEvent::currentBusCommand
	int32_t ___currentBusCommand_15;
	// DarkTonic.MasterAudio.MasterAudio/CustomEventCommand DarkTonic.MasterAudio.AudioEvent::currentCustomEventCommand
	int32_t ___currentCustomEventCommand_16;
	// DarkTonic.MasterAudio.MasterAudio/GlobalCommand DarkTonic.MasterAudio.AudioEvent::currentGlobalCommand
	int32_t ___currentGlobalCommand_17;
	// DarkTonic.MasterAudio.MasterAudio/UnityMixerCommand DarkTonic.MasterAudio.AudioEvent::currentMixerCommand
	int32_t ___currentMixerCommand_18;
	// UnityEngine.Audio.AudioMixerSnapshot DarkTonic.MasterAudio.AudioEvent::snapshotToTransitionTo
	AudioMixerSnapshot_t3013571836 * ___snapshotToTransitionTo_19;
	// System.Single DarkTonic.MasterAudio.AudioEvent::snapshotTransitionTime
	float ___snapshotTransitionTime_20;
	// System.Collections.Generic.List`1<DarkTonic.MasterAudio.AudioEvent/MA_SnapshotInfo> DarkTonic.MasterAudio.AudioEvent::snapshotsToBlend
	List_1_t3836719734 * ___snapshotsToBlend_21;
	// DarkTonic.MasterAudio.MasterAudio/PersistentSettingsCommand DarkTonic.MasterAudio.AudioEvent::currentPersistentSettingsCommand
	int32_t ___currentPersistentSettingsCommand_22;
	// System.String DarkTonic.MasterAudio.AudioEvent::busName
	String_t* ___busName_23;
	// System.String DarkTonic.MasterAudio.AudioEvent::playlistName
	String_t* ___playlistName_24;
	// System.String DarkTonic.MasterAudio.AudioEvent::playlistControllerName
	String_t* ___playlistControllerName_25;
	// System.Boolean DarkTonic.MasterAudio.AudioEvent::startPlaylist
	bool ___startPlaylist_26;
	// System.Single DarkTonic.MasterAudio.AudioEvent::fadeVolume
	float ___fadeVolume_27;
	// System.Single DarkTonic.MasterAudio.AudioEvent::fadeTime
	float ___fadeTime_28;
	// DarkTonic.MasterAudio.AudioEvent/TargetVolumeMode DarkTonic.MasterAudio.AudioEvent::targetVolMode
	int32_t ___targetVolMode_29;
	// System.String DarkTonic.MasterAudio.AudioEvent::clipName
	String_t* ___clipName_30;
	// DarkTonic.MasterAudio.EventSounds/VariationType DarkTonic.MasterAudio.AudioEvent::variationType
	int32_t ___variationType_31;
	// System.String DarkTonic.MasterAudio.AudioEvent::variationName
	String_t* ___variationName_32;
	// System.String DarkTonic.MasterAudio.AudioEvent::theCustomEventName
	String_t* ___theCustomEventName_33;

public:
	inline static int32_t get_offset_of_actionName_0() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___actionName_0)); }
	inline String_t* get_actionName_0() const { return ___actionName_0; }
	inline String_t** get_address_of_actionName_0() { return &___actionName_0; }
	inline void set_actionName_0(String_t* value)
	{
		___actionName_0 = value;
		Il2CppCodeGenWriteBarrier(&___actionName_0, value);
	}

	inline static int32_t get_offset_of_isExpanded_1() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___isExpanded_1)); }
	inline bool get_isExpanded_1() const { return ___isExpanded_1; }
	inline bool* get_address_of_isExpanded_1() { return &___isExpanded_1; }
	inline void set_isExpanded_1(bool value)
	{
		___isExpanded_1 = value;
	}

	inline static int32_t get_offset_of_soundType_2() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___soundType_2)); }
	inline String_t* get_soundType_2() const { return ___soundType_2; }
	inline String_t** get_address_of_soundType_2() { return &___soundType_2; }
	inline void set_soundType_2(String_t* value)
	{
		___soundType_2 = value;
		Il2CppCodeGenWriteBarrier(&___soundType_2, value);
	}

	inline static int32_t get_offset_of_allPlaylistControllersForGroupCmd_3() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___allPlaylistControllersForGroupCmd_3)); }
	inline bool get_allPlaylistControllersForGroupCmd_3() const { return ___allPlaylistControllersForGroupCmd_3; }
	inline bool* get_address_of_allPlaylistControllersForGroupCmd_3() { return &___allPlaylistControllersForGroupCmd_3; }
	inline void set_allPlaylistControllersForGroupCmd_3(bool value)
	{
		___allPlaylistControllersForGroupCmd_3 = value;
	}

	inline static int32_t get_offset_of_allSoundTypesForGroupCmd_4() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___allSoundTypesForGroupCmd_4)); }
	inline bool get_allSoundTypesForGroupCmd_4() const { return ___allSoundTypesForGroupCmd_4; }
	inline bool* get_address_of_allSoundTypesForGroupCmd_4() { return &___allSoundTypesForGroupCmd_4; }
	inline void set_allSoundTypesForGroupCmd_4(bool value)
	{
		___allSoundTypesForGroupCmd_4 = value;
	}

	inline static int32_t get_offset_of_allSoundTypesForBusCmd_5() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___allSoundTypesForBusCmd_5)); }
	inline bool get_allSoundTypesForBusCmd_5() const { return ___allSoundTypesForBusCmd_5; }
	inline bool* get_address_of_allSoundTypesForBusCmd_5() { return &___allSoundTypesForBusCmd_5; }
	inline void set_allSoundTypesForBusCmd_5(bool value)
	{
		___allSoundTypesForBusCmd_5 = value;
	}

	inline static int32_t get_offset_of_volume_6() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___volume_6)); }
	inline float get_volume_6() const { return ___volume_6; }
	inline float* get_address_of_volume_6() { return &___volume_6; }
	inline void set_volume_6(float value)
	{
		___volume_6 = value;
	}

	inline static int32_t get_offset_of_useFixedPitch_7() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___useFixedPitch_7)); }
	inline bool get_useFixedPitch_7() const { return ___useFixedPitch_7; }
	inline bool* get_address_of_useFixedPitch_7() { return &___useFixedPitch_7; }
	inline void set_useFixedPitch_7(bool value)
	{
		___useFixedPitch_7 = value;
	}

	inline static int32_t get_offset_of_pitch_8() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___pitch_8)); }
	inline float get_pitch_8() const { return ___pitch_8; }
	inline float* get_address_of_pitch_8() { return &___pitch_8; }
	inline void set_pitch_8(float value)
	{
		___pitch_8 = value;
	}

	inline static int32_t get_offset_of_emitParticles_9() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___emitParticles_9)); }
	inline bool get_emitParticles_9() const { return ___emitParticles_9; }
	inline bool* get_address_of_emitParticles_9() { return &___emitParticles_9; }
	inline void set_emitParticles_9(bool value)
	{
		___emitParticles_9 = value;
	}

	inline static int32_t get_offset_of_particleCountToEmit_10() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___particleCountToEmit_10)); }
	inline int32_t get_particleCountToEmit_10() const { return ___particleCountToEmit_10; }
	inline int32_t* get_address_of_particleCountToEmit_10() { return &___particleCountToEmit_10; }
	inline void set_particleCountToEmit_10(int32_t value)
	{
		___particleCountToEmit_10 = value;
	}

	inline static int32_t get_offset_of_delaySound_11() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___delaySound_11)); }
	inline float get_delaySound_11() const { return ___delaySound_11; }
	inline float* get_address_of_delaySound_11() { return &___delaySound_11; }
	inline void set_delaySound_11(float value)
	{
		___delaySound_11 = value;
	}

	inline static int32_t get_offset_of_currentSoundFunctionType_12() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentSoundFunctionType_12)); }
	inline int32_t get_currentSoundFunctionType_12() const { return ___currentSoundFunctionType_12; }
	inline int32_t* get_address_of_currentSoundFunctionType_12() { return &___currentSoundFunctionType_12; }
	inline void set_currentSoundFunctionType_12(int32_t value)
	{
		___currentSoundFunctionType_12 = value;
	}

	inline static int32_t get_offset_of_currentPlaylistCommand_13() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentPlaylistCommand_13)); }
	inline int32_t get_currentPlaylistCommand_13() const { return ___currentPlaylistCommand_13; }
	inline int32_t* get_address_of_currentPlaylistCommand_13() { return &___currentPlaylistCommand_13; }
	inline void set_currentPlaylistCommand_13(int32_t value)
	{
		___currentPlaylistCommand_13 = value;
	}

	inline static int32_t get_offset_of_currentSoundGroupCommand_14() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentSoundGroupCommand_14)); }
	inline int32_t get_currentSoundGroupCommand_14() const { return ___currentSoundGroupCommand_14; }
	inline int32_t* get_address_of_currentSoundGroupCommand_14() { return &___currentSoundGroupCommand_14; }
	inline void set_currentSoundGroupCommand_14(int32_t value)
	{
		___currentSoundGroupCommand_14 = value;
	}

	inline static int32_t get_offset_of_currentBusCommand_15() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentBusCommand_15)); }
	inline int32_t get_currentBusCommand_15() const { return ___currentBusCommand_15; }
	inline int32_t* get_address_of_currentBusCommand_15() { return &___currentBusCommand_15; }
	inline void set_currentBusCommand_15(int32_t value)
	{
		___currentBusCommand_15 = value;
	}

	inline static int32_t get_offset_of_currentCustomEventCommand_16() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentCustomEventCommand_16)); }
	inline int32_t get_currentCustomEventCommand_16() const { return ___currentCustomEventCommand_16; }
	inline int32_t* get_address_of_currentCustomEventCommand_16() { return &___currentCustomEventCommand_16; }
	inline void set_currentCustomEventCommand_16(int32_t value)
	{
		___currentCustomEventCommand_16 = value;
	}

	inline static int32_t get_offset_of_currentGlobalCommand_17() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentGlobalCommand_17)); }
	inline int32_t get_currentGlobalCommand_17() const { return ___currentGlobalCommand_17; }
	inline int32_t* get_address_of_currentGlobalCommand_17() { return &___currentGlobalCommand_17; }
	inline void set_currentGlobalCommand_17(int32_t value)
	{
		___currentGlobalCommand_17 = value;
	}

	inline static int32_t get_offset_of_currentMixerCommand_18() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentMixerCommand_18)); }
	inline int32_t get_currentMixerCommand_18() const { return ___currentMixerCommand_18; }
	inline int32_t* get_address_of_currentMixerCommand_18() { return &___currentMixerCommand_18; }
	inline void set_currentMixerCommand_18(int32_t value)
	{
		___currentMixerCommand_18 = value;
	}

	inline static int32_t get_offset_of_snapshotToTransitionTo_19() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___snapshotToTransitionTo_19)); }
	inline AudioMixerSnapshot_t3013571836 * get_snapshotToTransitionTo_19() const { return ___snapshotToTransitionTo_19; }
	inline AudioMixerSnapshot_t3013571836 ** get_address_of_snapshotToTransitionTo_19() { return &___snapshotToTransitionTo_19; }
	inline void set_snapshotToTransitionTo_19(AudioMixerSnapshot_t3013571836 * value)
	{
		___snapshotToTransitionTo_19 = value;
		Il2CppCodeGenWriteBarrier(&___snapshotToTransitionTo_19, value);
	}

	inline static int32_t get_offset_of_snapshotTransitionTime_20() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___snapshotTransitionTime_20)); }
	inline float get_snapshotTransitionTime_20() const { return ___snapshotTransitionTime_20; }
	inline float* get_address_of_snapshotTransitionTime_20() { return &___snapshotTransitionTime_20; }
	inline void set_snapshotTransitionTime_20(float value)
	{
		___snapshotTransitionTime_20 = value;
	}

	inline static int32_t get_offset_of_snapshotsToBlend_21() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___snapshotsToBlend_21)); }
	inline List_1_t3836719734 * get_snapshotsToBlend_21() const { return ___snapshotsToBlend_21; }
	inline List_1_t3836719734 ** get_address_of_snapshotsToBlend_21() { return &___snapshotsToBlend_21; }
	inline void set_snapshotsToBlend_21(List_1_t3836719734 * value)
	{
		___snapshotsToBlend_21 = value;
		Il2CppCodeGenWriteBarrier(&___snapshotsToBlend_21, value);
	}

	inline static int32_t get_offset_of_currentPersistentSettingsCommand_22() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___currentPersistentSettingsCommand_22)); }
	inline int32_t get_currentPersistentSettingsCommand_22() const { return ___currentPersistentSettingsCommand_22; }
	inline int32_t* get_address_of_currentPersistentSettingsCommand_22() { return &___currentPersistentSettingsCommand_22; }
	inline void set_currentPersistentSettingsCommand_22(int32_t value)
	{
		___currentPersistentSettingsCommand_22 = value;
	}

	inline static int32_t get_offset_of_busName_23() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___busName_23)); }
	inline String_t* get_busName_23() const { return ___busName_23; }
	inline String_t** get_address_of_busName_23() { return &___busName_23; }
	inline void set_busName_23(String_t* value)
	{
		___busName_23 = value;
		Il2CppCodeGenWriteBarrier(&___busName_23, value);
	}

	inline static int32_t get_offset_of_playlistName_24() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___playlistName_24)); }
	inline String_t* get_playlistName_24() const { return ___playlistName_24; }
	inline String_t** get_address_of_playlistName_24() { return &___playlistName_24; }
	inline void set_playlistName_24(String_t* value)
	{
		___playlistName_24 = value;
		Il2CppCodeGenWriteBarrier(&___playlistName_24, value);
	}

	inline static int32_t get_offset_of_playlistControllerName_25() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___playlistControllerName_25)); }
	inline String_t* get_playlistControllerName_25() const { return ___playlistControllerName_25; }
	inline String_t** get_address_of_playlistControllerName_25() { return &___playlistControllerName_25; }
	inline void set_playlistControllerName_25(String_t* value)
	{
		___playlistControllerName_25 = value;
		Il2CppCodeGenWriteBarrier(&___playlistControllerName_25, value);
	}

	inline static int32_t get_offset_of_startPlaylist_26() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___startPlaylist_26)); }
	inline bool get_startPlaylist_26() const { return ___startPlaylist_26; }
	inline bool* get_address_of_startPlaylist_26() { return &___startPlaylist_26; }
	inline void set_startPlaylist_26(bool value)
	{
		___startPlaylist_26 = value;
	}

	inline static int32_t get_offset_of_fadeVolume_27() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___fadeVolume_27)); }
	inline float get_fadeVolume_27() const { return ___fadeVolume_27; }
	inline float* get_address_of_fadeVolume_27() { return &___fadeVolume_27; }
	inline void set_fadeVolume_27(float value)
	{
		___fadeVolume_27 = value;
	}

	inline static int32_t get_offset_of_fadeTime_28() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___fadeTime_28)); }
	inline float get_fadeTime_28() const { return ___fadeTime_28; }
	inline float* get_address_of_fadeTime_28() { return &___fadeTime_28; }
	inline void set_fadeTime_28(float value)
	{
		___fadeTime_28 = value;
	}

	inline static int32_t get_offset_of_targetVolMode_29() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___targetVolMode_29)); }
	inline int32_t get_targetVolMode_29() const { return ___targetVolMode_29; }
	inline int32_t* get_address_of_targetVolMode_29() { return &___targetVolMode_29; }
	inline void set_targetVolMode_29(int32_t value)
	{
		___targetVolMode_29 = value;
	}

	inline static int32_t get_offset_of_clipName_30() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___clipName_30)); }
	inline String_t* get_clipName_30() const { return ___clipName_30; }
	inline String_t** get_address_of_clipName_30() { return &___clipName_30; }
	inline void set_clipName_30(String_t* value)
	{
		___clipName_30 = value;
		Il2CppCodeGenWriteBarrier(&___clipName_30, value);
	}

	inline static int32_t get_offset_of_variationType_31() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___variationType_31)); }
	inline int32_t get_variationType_31() const { return ___variationType_31; }
	inline int32_t* get_address_of_variationType_31() { return &___variationType_31; }
	inline void set_variationType_31(int32_t value)
	{
		___variationType_31 = value;
	}

	inline static int32_t get_offset_of_variationName_32() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___variationName_32)); }
	inline String_t* get_variationName_32() const { return ___variationName_32; }
	inline String_t** get_address_of_variationName_32() { return &___variationName_32; }
	inline void set_variationName_32(String_t* value)
	{
		___variationName_32 = value;
		Il2CppCodeGenWriteBarrier(&___variationName_32, value);
	}

	inline static int32_t get_offset_of_theCustomEventName_33() { return static_cast<int32_t>(offsetof(AudioEvent_t1997961779, ___theCustomEventName_33)); }
	inline String_t* get_theCustomEventName_33() const { return ___theCustomEventName_33; }
	inline String_t** get_address_of_theCustomEventName_33() { return &___theCustomEventName_33; }
	inline void set_theCustomEventName_33(String_t* value)
	{
		___theCustomEventName_33 = value;
		Il2CppCodeGenWriteBarrier(&___theCustomEventName_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
