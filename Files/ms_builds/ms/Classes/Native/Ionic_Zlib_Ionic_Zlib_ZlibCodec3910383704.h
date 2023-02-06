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
// System.String
struct String_t;
// Ionic.Zlib.DeflateManager
struct DeflateManager_t3792001679;
// Ionic.Zlib.InflateManager
struct InflateManager_t2918548787;

#include "mscorlib_System_Object837106420.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ZlibCodec
struct  ZlibCodec_t3910383704  : public Il2CppObject
{
public:
	// System.Byte[] Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_t58506160* ___InputBuffer_0;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_t58506160* ___OutputBuffer_4;
	// System.Int32 Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Ionic.Zlib.DeflateManager Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t3792001679 * ___dstate_9;
	// Ionic.Zlib.InflateManager Ionic.Zlib.ZlibCodec::istate
	InflateManager_t2918548787 * ___istate_10;
	// System.UInt32 Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___InputBuffer_0)); }
	inline ByteU5BU5D_t58506160* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_t58506160** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_t58506160* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___InputBuffer_0, value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___OutputBuffer_4)); }
	inline ByteU5BU5D_t58506160* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_t58506160** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_t58506160* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___OutputBuffer_4, value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier(&___Message_8, value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___dstate_9)); }
	inline DeflateManager_t3792001679 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t3792001679 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t3792001679 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier(&___dstate_9, value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___istate_10)); }
	inline InflateManager_t2918548787 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t2918548787 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t2918548787 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier(&___istate_10, value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t3910383704, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
