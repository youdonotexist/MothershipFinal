#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Ionic.Zlib.WorkItem>
struct List_1_t3454153802;
// System.IO.Stream
struct Stream_t219029575;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// System.Object
struct Il2CppObject;
// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile)
struct Exception_t1967233988;

#include "mscorlib_System_IO_Stream219029575.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionLevel3940478795.h"
#include "Ionic_Zlib_Ionic_Zlib_ParallelDeflateOutputStream_2727706571.h"
#include "Ionic_Zlib_Ionic_Zlib_CompressionStrategy2328611910.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ionic.Zlib.ParallelDeflateOutputStream
struct  ParallelDeflateOutputStream_t1234751346  : public Stream_t219029575
{
public:
	// System.Collections.Generic.List`1<Ionic.Zlib.WorkItem> Ionic.Zlib.ParallelDeflateOutputStream::_pool
	List_1_t3454153802 * ____pool_3;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_leaveOpen
	bool ____leaveOpen_4;
	// System.IO.Stream Ionic.Zlib.ParallelDeflateOutputStream::_outStream
	Stream_t219029575 * ____outStream_5;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_nextToFill
	int32_t ____nextToFill_6;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_nextToWrite
	int32_t ____nextToWrite_7;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_bufferSize
	int32_t ____bufferSize_8;
	// System.Threading.ManualResetEvent Ionic.Zlib.ParallelDeflateOutputStream::_writingDone
	ManualResetEvent_t2399218676 * ____writingDone_9;
	// System.Threading.ManualResetEvent Ionic.Zlib.ParallelDeflateOutputStream::_sessionReset
	ManualResetEvent_t2399218676 * ____sessionReset_10;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_noMoreInputForThisSegment
	bool ____noMoreInputForThisSegment_11;
	// System.Object Ionic.Zlib.ParallelDeflateOutputStream::_outputLock
	Il2CppObject * ____outputLock_12;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_isClosed
	bool ____isClosed_13;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_isDisposed
	bool ____isDisposed_14;
	// System.Boolean Ionic.Zlib.ParallelDeflateOutputStream::_firstWriteDone
	bool ____firstWriteDone_15;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_pc
	int32_t ____pc_16;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::_Crc32
	int32_t ____Crc32_17;
	// System.Int64 Ionic.Zlib.ParallelDeflateOutputStream::_totalBytesProcessed
	int64_t ____totalBytesProcessed_18;
	// Ionic.Zlib.CompressionLevel Ionic.Zlib.ParallelDeflateOutputStream::_compressLevel
	int32_t ____compressLevel_19;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Ionic.Zlib.ParallelDeflateOutputStream::_pendingException
	Exception_t1967233988 * ____pendingException_20;
	// System.Object Ionic.Zlib.ParallelDeflateOutputStream::_eLock
	Il2CppObject * ____eLock_21;
	// Ionic.Zlib.ParallelDeflateOutputStream/TraceBits Ionic.Zlib.ParallelDeflateOutputStream::_DesiredTrace
	int32_t ____DesiredTrace_22;
	// Ionic.Zlib.CompressionStrategy Ionic.Zlib.ParallelDeflateOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_23;
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::<BuffersPerCore>k__BackingField
	int32_t ___U3CBuffersPerCoreU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__pool_3() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____pool_3)); }
	inline List_1_t3454153802 * get__pool_3() const { return ____pool_3; }
	inline List_1_t3454153802 ** get_address_of__pool_3() { return &____pool_3; }
	inline void set__pool_3(List_1_t3454153802 * value)
	{
		____pool_3 = value;
		Il2CppCodeGenWriteBarrier(&____pool_3, value);
	}

	inline static int32_t get_offset_of__leaveOpen_4() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____leaveOpen_4)); }
	inline bool get__leaveOpen_4() const { return ____leaveOpen_4; }
	inline bool* get_address_of__leaveOpen_4() { return &____leaveOpen_4; }
	inline void set__leaveOpen_4(bool value)
	{
		____leaveOpen_4 = value;
	}

	inline static int32_t get_offset_of__outStream_5() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____outStream_5)); }
	inline Stream_t219029575 * get__outStream_5() const { return ____outStream_5; }
	inline Stream_t219029575 ** get_address_of__outStream_5() { return &____outStream_5; }
	inline void set__outStream_5(Stream_t219029575 * value)
	{
		____outStream_5 = value;
		Il2CppCodeGenWriteBarrier(&____outStream_5, value);
	}

	inline static int32_t get_offset_of__nextToFill_6() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____nextToFill_6)); }
	inline int32_t get__nextToFill_6() const { return ____nextToFill_6; }
	inline int32_t* get_address_of__nextToFill_6() { return &____nextToFill_6; }
	inline void set__nextToFill_6(int32_t value)
	{
		____nextToFill_6 = value;
	}

	inline static int32_t get_offset_of__nextToWrite_7() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____nextToWrite_7)); }
	inline int32_t get__nextToWrite_7() const { return ____nextToWrite_7; }
	inline int32_t* get_address_of__nextToWrite_7() { return &____nextToWrite_7; }
	inline void set__nextToWrite_7(int32_t value)
	{
		____nextToWrite_7 = value;
	}

	inline static int32_t get_offset_of__bufferSize_8() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____bufferSize_8)); }
	inline int32_t get__bufferSize_8() const { return ____bufferSize_8; }
	inline int32_t* get_address_of__bufferSize_8() { return &____bufferSize_8; }
	inline void set__bufferSize_8(int32_t value)
	{
		____bufferSize_8 = value;
	}

	inline static int32_t get_offset_of__writingDone_9() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____writingDone_9)); }
	inline ManualResetEvent_t2399218676 * get__writingDone_9() const { return ____writingDone_9; }
	inline ManualResetEvent_t2399218676 ** get_address_of__writingDone_9() { return &____writingDone_9; }
	inline void set__writingDone_9(ManualResetEvent_t2399218676 * value)
	{
		____writingDone_9 = value;
		Il2CppCodeGenWriteBarrier(&____writingDone_9, value);
	}

	inline static int32_t get_offset_of__sessionReset_10() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____sessionReset_10)); }
	inline ManualResetEvent_t2399218676 * get__sessionReset_10() const { return ____sessionReset_10; }
	inline ManualResetEvent_t2399218676 ** get_address_of__sessionReset_10() { return &____sessionReset_10; }
	inline void set__sessionReset_10(ManualResetEvent_t2399218676 * value)
	{
		____sessionReset_10 = value;
		Il2CppCodeGenWriteBarrier(&____sessionReset_10, value);
	}

	inline static int32_t get_offset_of__noMoreInputForThisSegment_11() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____noMoreInputForThisSegment_11)); }
	inline bool get__noMoreInputForThisSegment_11() const { return ____noMoreInputForThisSegment_11; }
	inline bool* get_address_of__noMoreInputForThisSegment_11() { return &____noMoreInputForThisSegment_11; }
	inline void set__noMoreInputForThisSegment_11(bool value)
	{
		____noMoreInputForThisSegment_11 = value;
	}

	inline static int32_t get_offset_of__outputLock_12() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____outputLock_12)); }
	inline Il2CppObject * get__outputLock_12() const { return ____outputLock_12; }
	inline Il2CppObject ** get_address_of__outputLock_12() { return &____outputLock_12; }
	inline void set__outputLock_12(Il2CppObject * value)
	{
		____outputLock_12 = value;
		Il2CppCodeGenWriteBarrier(&____outputLock_12, value);
	}

	inline static int32_t get_offset_of__isClosed_13() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____isClosed_13)); }
	inline bool get__isClosed_13() const { return ____isClosed_13; }
	inline bool* get_address_of__isClosed_13() { return &____isClosed_13; }
	inline void set__isClosed_13(bool value)
	{
		____isClosed_13 = value;
	}

	inline static int32_t get_offset_of__isDisposed_14() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____isDisposed_14)); }
	inline bool get__isDisposed_14() const { return ____isDisposed_14; }
	inline bool* get_address_of__isDisposed_14() { return &____isDisposed_14; }
	inline void set__isDisposed_14(bool value)
	{
		____isDisposed_14 = value;
	}

	inline static int32_t get_offset_of__firstWriteDone_15() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____firstWriteDone_15)); }
	inline bool get__firstWriteDone_15() const { return ____firstWriteDone_15; }
	inline bool* get_address_of__firstWriteDone_15() { return &____firstWriteDone_15; }
	inline void set__firstWriteDone_15(bool value)
	{
		____firstWriteDone_15 = value;
	}

	inline static int32_t get_offset_of__pc_16() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____pc_16)); }
	inline int32_t get__pc_16() const { return ____pc_16; }
	inline int32_t* get_address_of__pc_16() { return &____pc_16; }
	inline void set__pc_16(int32_t value)
	{
		____pc_16 = value;
	}

	inline static int32_t get_offset_of__Crc32_17() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____Crc32_17)); }
	inline int32_t get__Crc32_17() const { return ____Crc32_17; }
	inline int32_t* get_address_of__Crc32_17() { return &____Crc32_17; }
	inline void set__Crc32_17(int32_t value)
	{
		____Crc32_17 = value;
	}

	inline static int32_t get_offset_of__totalBytesProcessed_18() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____totalBytesProcessed_18)); }
	inline int64_t get__totalBytesProcessed_18() const { return ____totalBytesProcessed_18; }
	inline int64_t* get_address_of__totalBytesProcessed_18() { return &____totalBytesProcessed_18; }
	inline void set__totalBytesProcessed_18(int64_t value)
	{
		____totalBytesProcessed_18 = value;
	}

	inline static int32_t get_offset_of__compressLevel_19() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____compressLevel_19)); }
	inline int32_t get__compressLevel_19() const { return ____compressLevel_19; }
	inline int32_t* get_address_of__compressLevel_19() { return &____compressLevel_19; }
	inline void set__compressLevel_19(int32_t value)
	{
		____compressLevel_19 = value;
	}

	inline static int32_t get_offset_of__pendingException_20() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____pendingException_20)); }
	inline Exception_t1967233988 * get__pendingException_20() const { return ____pendingException_20; }
	inline Exception_t1967233988 ** get_address_of__pendingException_20() { return &____pendingException_20; }
	inline void set__pendingException_20(Exception_t1967233988 * value)
	{
		____pendingException_20 = value;
		Il2CppCodeGenWriteBarrier(&____pendingException_20, value);
	}

	inline static int32_t get_offset_of__eLock_21() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____eLock_21)); }
	inline Il2CppObject * get__eLock_21() const { return ____eLock_21; }
	inline Il2CppObject ** get_address_of__eLock_21() { return &____eLock_21; }
	inline void set__eLock_21(Il2CppObject * value)
	{
		____eLock_21 = value;
		Il2CppCodeGenWriteBarrier(&____eLock_21, value);
	}

	inline static int32_t get_offset_of__DesiredTrace_22() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ____DesiredTrace_22)); }
	inline int32_t get__DesiredTrace_22() const { return ____DesiredTrace_22; }
	inline int32_t* get_address_of__DesiredTrace_22() { return &____DesiredTrace_22; }
	inline void set__DesiredTrace_22(int32_t value)
	{
		____DesiredTrace_22 = value;
	}

	inline static int32_t get_offset_of_U3CStrategyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ___U3CStrategyU3Ek__BackingField_23)); }
	inline int32_t get_U3CStrategyU3Ek__BackingField_23() const { return ___U3CStrategyU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CStrategyU3Ek__BackingField_23() { return &___U3CStrategyU3Ek__BackingField_23; }
	inline void set_U3CStrategyU3Ek__BackingField_23(int32_t value)
	{
		___U3CStrategyU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CBuffersPerCoreU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346, ___U3CBuffersPerCoreU3Ek__BackingField_24)); }
	inline int32_t get_U3CBuffersPerCoreU3Ek__BackingField_24() const { return ___U3CBuffersPerCoreU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CBuffersPerCoreU3Ek__BackingField_24() { return &___U3CBuffersPerCoreU3Ek__BackingField_24; }
	inline void set_U3CBuffersPerCoreU3Ek__BackingField_24(int32_t value)
	{
		___U3CBuffersPerCoreU3Ek__BackingField_24 = value;
	}
};

struct ParallelDeflateOutputStream_t1234751346_StaticFields
{
public:
	// System.Int32 Ionic.Zlib.ParallelDeflateOutputStream::IO_BUFFER_SIZE_DEFAULT
	int32_t ___IO_BUFFER_SIZE_DEFAULT_2;

public:
	inline static int32_t get_offset_of_IO_BUFFER_SIZE_DEFAULT_2() { return static_cast<int32_t>(offsetof(ParallelDeflateOutputStream_t1234751346_StaticFields, ___IO_BUFFER_SIZE_DEFAULT_2)); }
	inline int32_t get_IO_BUFFER_SIZE_DEFAULT_2() const { return ___IO_BUFFER_SIZE_DEFAULT_2; }
	inline int32_t* get_address_of_IO_BUFFER_SIZE_DEFAULT_2() { return &___IO_BUFFER_SIZE_DEFAULT_2; }
	inline void set_IO_BUFFER_SIZE_DEFAULT_2(int32_t value)
	{
		___IO_BUFFER_SIZE_DEFAULT_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
