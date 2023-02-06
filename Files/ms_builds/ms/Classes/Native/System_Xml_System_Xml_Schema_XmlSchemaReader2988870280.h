#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlReader
struct XmlReader_t4229084514;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t2777264566;

#include "System_Xml_System_Xml_XmlReader4229084514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaReader
struct  XmlSchemaReader_t2988870280  : public XmlReader_t4229084514
{
public:
	// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::reader
	XmlReader_t4229084514 * ___reader_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaReader::handler
	ValidationEventHandler_t2777264566 * ___handler_3;
	// System.Boolean System.Xml.Schema.XmlSchemaReader::hasLineInfo
	bool ___hasLineInfo_4;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(XmlSchemaReader_t2988870280, ___reader_2)); }
	inline XmlReader_t4229084514 * get_reader_2() const { return ___reader_2; }
	inline XmlReader_t4229084514 ** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(XmlReader_t4229084514 * value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier(&___reader_2, value);
	}

	inline static int32_t get_offset_of_handler_3() { return static_cast<int32_t>(offsetof(XmlSchemaReader_t2988870280, ___handler_3)); }
	inline ValidationEventHandler_t2777264566 * get_handler_3() const { return ___handler_3; }
	inline ValidationEventHandler_t2777264566 ** get_address_of_handler_3() { return &___handler_3; }
	inline void set_handler_3(ValidationEventHandler_t2777264566 * value)
	{
		___handler_3 = value;
		Il2CppCodeGenWriteBarrier(&___handler_3, value);
	}

	inline static int32_t get_offset_of_hasLineInfo_4() { return static_cast<int32_t>(offsetof(XmlSchemaReader_t2988870280, ___hasLineInfo_4)); }
	inline bool get_hasLineInfo_4() const { return ___hasLineInfo_4; }
	inline bool* get_address_of_hasLineInfo_4() { return &___hasLineInfo_4; }
	inline void set_hasLineInfo_4(bool value)
	{
		___hasLineInfo_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
