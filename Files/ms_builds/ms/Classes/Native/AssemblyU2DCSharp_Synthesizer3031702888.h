#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WaveForm
struct WaveForm_t667898749;
// Frequency
struct Frequency_t1933944124;
// Tremolo
struct Tremolo_t601254060;
// Envelope
struct Envelope_t2310829040;

#include "AssemblyU2DCSharp_AbstractSynthesizer4045401062.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Synthesizer
struct  Synthesizer_t3031702888  : public AbstractSynthesizer_t4045401062
{
public:
	// System.Single Synthesizer::time
	float ___time_4;
	// System.Boolean Synthesizer::_3D
	bool ____3D_5;
	// System.Boolean Synthesizer::streamed
	bool ___streamed_6;
	// WaveForm Synthesizer::waveForm
	WaveForm_t667898749 * ___waveForm_7;
	// Frequency Synthesizer::frequency
	Frequency_t1933944124 * ___frequency_8;
	// Tremolo Synthesizer::tremolo
	Tremolo_t601254060 * ___tremolo_9;
	// Envelope Synthesizer::envelope
	Envelope_t2310829040 * ___envelope_10;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of__3D_5() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ____3D_5)); }
	inline bool get__3D_5() const { return ____3D_5; }
	inline bool* get_address_of__3D_5() { return &____3D_5; }
	inline void set__3D_5(bool value)
	{
		____3D_5 = value;
	}

	inline static int32_t get_offset_of_streamed_6() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ___streamed_6)); }
	inline bool get_streamed_6() const { return ___streamed_6; }
	inline bool* get_address_of_streamed_6() { return &___streamed_6; }
	inline void set_streamed_6(bool value)
	{
		___streamed_6 = value;
	}

	inline static int32_t get_offset_of_waveForm_7() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ___waveForm_7)); }
	inline WaveForm_t667898749 * get_waveForm_7() const { return ___waveForm_7; }
	inline WaveForm_t667898749 ** get_address_of_waveForm_7() { return &___waveForm_7; }
	inline void set_waveForm_7(WaveForm_t667898749 * value)
	{
		___waveForm_7 = value;
		Il2CppCodeGenWriteBarrier(&___waveForm_7, value);
	}

	inline static int32_t get_offset_of_frequency_8() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ___frequency_8)); }
	inline Frequency_t1933944124 * get_frequency_8() const { return ___frequency_8; }
	inline Frequency_t1933944124 ** get_address_of_frequency_8() { return &___frequency_8; }
	inline void set_frequency_8(Frequency_t1933944124 * value)
	{
		___frequency_8 = value;
		Il2CppCodeGenWriteBarrier(&___frequency_8, value);
	}

	inline static int32_t get_offset_of_tremolo_9() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ___tremolo_9)); }
	inline Tremolo_t601254060 * get_tremolo_9() const { return ___tremolo_9; }
	inline Tremolo_t601254060 ** get_address_of_tremolo_9() { return &___tremolo_9; }
	inline void set_tremolo_9(Tremolo_t601254060 * value)
	{
		___tremolo_9 = value;
		Il2CppCodeGenWriteBarrier(&___tremolo_9, value);
	}

	inline static int32_t get_offset_of_envelope_10() { return static_cast<int32_t>(offsetof(Synthesizer_t3031702888, ___envelope_10)); }
	inline Envelope_t2310829040 * get_envelope_10() const { return ___envelope_10; }
	inline Envelope_t2310829040 ** get_address_of_envelope_10() { return &___envelope_10; }
	inline void set_envelope_10(Envelope_t2310829040 * value)
	{
		___envelope_10 = value;
		Il2CppCodeGenWriteBarrier(&___envelope_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
