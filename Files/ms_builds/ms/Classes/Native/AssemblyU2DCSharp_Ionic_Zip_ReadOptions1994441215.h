#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t3044741302;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Text.Encoding
struct Encoding_t180559927;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zip.ReadOptions
struct  ReadOptions_t1994441215  : public Il2CppObject
{
public:
	// System.EventHandler`1<Ionic.Zip.ReadProgressEventArgs> Ionic.Zip.ReadOptions::<ReadProgress>k__BackingField
	EventHandler_1_t3044741302 * ___U3CReadProgressU3Ek__BackingField_0;
	// System.IO.TextWriter Ionic.Zip.ReadOptions::<StatusMessageWriter>k__BackingField
	TextWriter_t1689927879 * ___U3CStatusMessageWriterU3Ek__BackingField_1;
	// System.Text.Encoding Ionic.Zip.ReadOptions::<Encoding>k__BackingField
	Encoding_t180559927 * ___U3CEncodingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CReadProgressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReadOptions_t1994441215, ___U3CReadProgressU3Ek__BackingField_0)); }
	inline EventHandler_1_t3044741302 * get_U3CReadProgressU3Ek__BackingField_0() const { return ___U3CReadProgressU3Ek__BackingField_0; }
	inline EventHandler_1_t3044741302 ** get_address_of_U3CReadProgressU3Ek__BackingField_0() { return &___U3CReadProgressU3Ek__BackingField_0; }
	inline void set_U3CReadProgressU3Ek__BackingField_0(EventHandler_1_t3044741302 * value)
	{
		___U3CReadProgressU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CReadProgressU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CStatusMessageWriterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReadOptions_t1994441215, ___U3CStatusMessageWriterU3Ek__BackingField_1)); }
	inline TextWriter_t1689927879 * get_U3CStatusMessageWriterU3Ek__BackingField_1() const { return ___U3CStatusMessageWriterU3Ek__BackingField_1; }
	inline TextWriter_t1689927879 ** get_address_of_U3CStatusMessageWriterU3Ek__BackingField_1() { return &___U3CStatusMessageWriterU3Ek__BackingField_1; }
	inline void set_U3CStatusMessageWriterU3Ek__BackingField_1(TextWriter_t1689927879 * value)
	{
		___U3CStatusMessageWriterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStatusMessageWriterU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CEncodingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReadOptions_t1994441215, ___U3CEncodingU3Ek__BackingField_2)); }
	inline Encoding_t180559927 * get_U3CEncodingU3Ek__BackingField_2() const { return ___U3CEncodingU3Ek__BackingField_2; }
	inline Encoding_t180559927 ** get_address_of_U3CEncodingU3Ek__BackingField_2() { return &___U3CEncodingU3Ek__BackingField_2; }
	inline void set_U3CEncodingU3Ek__BackingField_2(Encoding_t180559927 * value)
	{
		___U3CEncodingU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEncodingU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
