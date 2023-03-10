#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t180559927;
// System.IO.Stream
struct Stream_t219029575;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.IO.StreamWriter
struct StreamWriter_t872970458;

#include "mscorlib_System_IO_TextWriter1689927879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t872970458  : public TextWriter_t1689927879
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t180559927 * ___internalEncoding_4;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_t219029575 * ___internalStream_5;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_6;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t58506160* ___byte_buf_7;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_8;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t3416858730* ___decode_buf_9;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_10;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_11;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_12;

public:
	inline static int32_t get_offset_of_internalEncoding_4() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___internalEncoding_4)); }
	inline Encoding_t180559927 * get_internalEncoding_4() const { return ___internalEncoding_4; }
	inline Encoding_t180559927 ** get_address_of_internalEncoding_4() { return &___internalEncoding_4; }
	inline void set_internalEncoding_4(Encoding_t180559927 * value)
	{
		___internalEncoding_4 = value;
		Il2CppCodeGenWriteBarrier(&___internalEncoding_4, value);
	}

	inline static int32_t get_offset_of_internalStream_5() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___internalStream_5)); }
	inline Stream_t219029575 * get_internalStream_5() const { return ___internalStream_5; }
	inline Stream_t219029575 ** get_address_of_internalStream_5() { return &___internalStream_5; }
	inline void set_internalStream_5(Stream_t219029575 * value)
	{
		___internalStream_5 = value;
		Il2CppCodeGenWriteBarrier(&___internalStream_5, value);
	}

	inline static int32_t get_offset_of_iflush_6() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___iflush_6)); }
	inline bool get_iflush_6() const { return ___iflush_6; }
	inline bool* get_address_of_iflush_6() { return &___iflush_6; }
	inline void set_iflush_6(bool value)
	{
		___iflush_6 = value;
	}

	inline static int32_t get_offset_of_byte_buf_7() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___byte_buf_7)); }
	inline ByteU5BU5D_t58506160* get_byte_buf_7() const { return ___byte_buf_7; }
	inline ByteU5BU5D_t58506160** get_address_of_byte_buf_7() { return &___byte_buf_7; }
	inline void set_byte_buf_7(ByteU5BU5D_t58506160* value)
	{
		___byte_buf_7 = value;
		Il2CppCodeGenWriteBarrier(&___byte_buf_7, value);
	}

	inline static int32_t get_offset_of_byte_pos_8() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___byte_pos_8)); }
	inline int32_t get_byte_pos_8() const { return ___byte_pos_8; }
	inline int32_t* get_address_of_byte_pos_8() { return &___byte_pos_8; }
	inline void set_byte_pos_8(int32_t value)
	{
		___byte_pos_8 = value;
	}

	inline static int32_t get_offset_of_decode_buf_9() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___decode_buf_9)); }
	inline CharU5BU5D_t3416858730* get_decode_buf_9() const { return ___decode_buf_9; }
	inline CharU5BU5D_t3416858730** get_address_of_decode_buf_9() { return &___decode_buf_9; }
	inline void set_decode_buf_9(CharU5BU5D_t3416858730* value)
	{
		___decode_buf_9 = value;
		Il2CppCodeGenWriteBarrier(&___decode_buf_9, value);
	}

	inline static int32_t get_offset_of_decode_pos_10() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___decode_pos_10)); }
	inline int32_t get_decode_pos_10() const { return ___decode_pos_10; }
	inline int32_t* get_address_of_decode_pos_10() { return &___decode_pos_10; }
	inline void set_decode_pos_10(int32_t value)
	{
		___decode_pos_10 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_11() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___DisposedAlready_11)); }
	inline bool get_DisposedAlready_11() const { return ___DisposedAlready_11; }
	inline bool* get_address_of_DisposedAlready_11() { return &___DisposedAlready_11; }
	inline void set_DisposedAlready_11(bool value)
	{
		___DisposedAlready_11 = value;
	}

	inline static int32_t get_offset_of_preamble_done_12() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458, ___preamble_done_12)); }
	inline bool get_preamble_done_12() const { return ___preamble_done_12; }
	inline bool* get_address_of_preamble_done_12() { return &___preamble_done_12; }
	inline void set_preamble_done_12(bool value)
	{
		___preamble_done_12 = value;
	}
};

struct StreamWriter_t872970458_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t872970458 * ___Null_13;

public:
	inline static int32_t get_offset_of_Null_13() { return static_cast<int32_t>(offsetof(StreamWriter_t872970458_StaticFields, ___Null_13)); }
	inline StreamWriter_t872970458 * get_Null_13() const { return ___Null_13; }
	inline StreamWriter_t872970458 ** get_address_of_Null_13() { return &___Null_13; }
	inline void set_Null_13(StreamWriter_t872970458 * value)
	{
		___Null_13 = value;
		Il2CppCodeGenWriteBarrier(&___Null_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
