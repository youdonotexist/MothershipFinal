#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t3013571836;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkTonic.MasterAudio.AudioEvent/MA_SnapshotInfo
struct  MA_SnapshotInfo_t3039760765  : public Il2CppObject
{
public:
	// UnityEngine.Audio.AudioMixerSnapshot DarkTonic.MasterAudio.AudioEvent/MA_SnapshotInfo::snapshot
	AudioMixerSnapshot_t3013571836 * ___snapshot_0;
	// System.Single DarkTonic.MasterAudio.AudioEvent/MA_SnapshotInfo::weight
	float ___weight_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(MA_SnapshotInfo_t3039760765, ___snapshot_0)); }
	inline AudioMixerSnapshot_t3013571836 * get_snapshot_0() const { return ___snapshot_0; }
	inline AudioMixerSnapshot_t3013571836 ** get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(AudioMixerSnapshot_t3013571836 * value)
	{
		___snapshot_0 = value;
		Il2CppCodeGenWriteBarrier(&___snapshot_0, value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(MA_SnapshotInfo_t3039760765, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
