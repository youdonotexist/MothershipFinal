﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t4229084514;

#include "mscorlib_System_Object837106420.h"
#include "System_Xml_System_Xml_XmlReaderBinarySupport_Comma2109480998.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport
struct  XmlReaderBinarySupport_t2724083932  : public Il2CppObject
{
public:
	// System.Xml.XmlReader System.Xml.XmlReaderBinarySupport::reader
	XmlReader_t4229084514 * ___reader_0;
	// System.Int32 System.Xml.XmlReaderBinarySupport::base64CacheStartsAt
	int32_t ___base64CacheStartsAt_1;
	// System.Xml.XmlReaderBinarySupport/CommandState System.Xml.XmlReaderBinarySupport::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlReaderBinarySupport::hasCache
	bool ___hasCache_3;
	// System.Boolean System.Xml.XmlReaderBinarySupport::dontReset
	bool ___dontReset_4;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t2724083932, ___reader_0)); }
	inline XmlReader_t4229084514 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_t4229084514 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_t4229084514 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier(&___reader_0, value);
	}

	inline static int32_t get_offset_of_base64CacheStartsAt_1() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t2724083932, ___base64CacheStartsAt_1)); }
	inline int32_t get_base64CacheStartsAt_1() const { return ___base64CacheStartsAt_1; }
	inline int32_t* get_address_of_base64CacheStartsAt_1() { return &___base64CacheStartsAt_1; }
	inline void set_base64CacheStartsAt_1(int32_t value)
	{
		___base64CacheStartsAt_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t2724083932, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_hasCache_3() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t2724083932, ___hasCache_3)); }
	inline bool get_hasCache_3() const { return ___hasCache_3; }
	inline bool* get_address_of_hasCache_3() { return &___hasCache_3; }
	inline void set_hasCache_3(bool value)
	{
		___hasCache_3 = value;
	}

	inline static int32_t get_offset_of_dontReset_4() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_t2724083932, ___dontReset_4)); }
	inline bool get_dontReset_4() const { return ___dontReset_4; }
	inline bool* get_address_of_dontReset_4() { return &___dontReset_4; }
	inline void set_dontReset_4(bool value)
	{
		___dontReset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
