﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Text.Decoder
struct Decoder_t1611780840;
// System.IO.Stream
struct Stream_t219029575;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_IO_TextReader1534522647.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NonBlockingStreamReader
struct  NonBlockingStreamReader_t19630413  : public TextReader_t1534522647
{
public:
	// System.Byte[] System.Xml.NonBlockingStreamReader::input_buffer
	ByteU5BU5D_t58506160* ___input_buffer_2;
	// System.Char[] System.Xml.NonBlockingStreamReader::decoded_buffer
	CharU5BU5D_t3416858730* ___decoded_buffer_3;
	// System.Int32 System.Xml.NonBlockingStreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.Xml.NonBlockingStreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.Xml.NonBlockingStreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Text.Encoding System.Xml.NonBlockingStreamReader::encoding
	Encoding_t180559927 * ___encoding_7;
	// System.Text.Decoder System.Xml.NonBlockingStreamReader::decoder
	Decoder_t1611780840 * ___decoder_8;
	// System.IO.Stream System.Xml.NonBlockingStreamReader::base_stream
	Stream_t219029575 * ___base_stream_9;
	// System.Boolean System.Xml.NonBlockingStreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.Xml.NonBlockingStreamReader::line_builder
	StringBuilder_t3822575854 * ___line_builder_11;
	// System.Boolean System.Xml.NonBlockingStreamReader::foundCR
	bool ___foundCR_12;

public:
	inline static int32_t get_offset_of_input_buffer_2() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___input_buffer_2)); }
	inline ByteU5BU5D_t58506160* get_input_buffer_2() const { return ___input_buffer_2; }
	inline ByteU5BU5D_t58506160** get_address_of_input_buffer_2() { return &___input_buffer_2; }
	inline void set_input_buffer_2(ByteU5BU5D_t58506160* value)
	{
		___input_buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_buffer_2, value);
	}

	inline static int32_t get_offset_of_decoded_buffer_3() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___decoded_buffer_3)); }
	inline CharU5BU5D_t3416858730* get_decoded_buffer_3() const { return ___decoded_buffer_3; }
	inline CharU5BU5D_t3416858730** get_address_of_decoded_buffer_3() { return &___decoded_buffer_3; }
	inline void set_decoded_buffer_3(CharU5BU5D_t3416858730* value)
	{
		___decoded_buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___decoded_buffer_3, value);
	}

	inline static int32_t get_offset_of_decoded_count_4() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___decoded_count_4)); }
	inline int32_t get_decoded_count_4() const { return ___decoded_count_4; }
	inline int32_t* get_address_of_decoded_count_4() { return &___decoded_count_4; }
	inline void set_decoded_count_4(int32_t value)
	{
		___decoded_count_4 = value;
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___pos_5)); }
	inline int32_t get_pos_5() const { return ___pos_5; }
	inline int32_t* get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(int32_t value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_buffer_size_6() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___buffer_size_6)); }
	inline int32_t get_buffer_size_6() const { return ___buffer_size_6; }
	inline int32_t* get_address_of_buffer_size_6() { return &___buffer_size_6; }
	inline void set_buffer_size_6(int32_t value)
	{
		___buffer_size_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___encoding_7)); }
	inline Encoding_t180559927 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t180559927 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t180559927 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_7, value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___decoder_8)); }
	inline Decoder_t1611780840 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t1611780840 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t1611780840 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_8, value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___base_stream_9)); }
	inline Stream_t219029575 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t219029575 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t219029575 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier(&___base_stream_9, value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___line_builder_11)); }
	inline StringBuilder_t3822575854 * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t3822575854 ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t3822575854 * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier(&___line_builder_11, value);
	}

	inline static int32_t get_offset_of_foundCR_12() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_t19630413, ___foundCR_12)); }
	inline bool get_foundCR_12() const { return ___foundCR_12; }
	inline bool* get_address_of_foundCR_12() { return &___foundCR_12; }
	inline void set_foundCR_12(bool value)
	{
		___foundCR_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
