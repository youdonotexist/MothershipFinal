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
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t142482116;

#include "System_Xml_System_Xml_XmlReader4229084514.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeReader
struct  XmlNodeReader_t3079406212  : public XmlReader_t4229084514
{
public:
	// System.Xml.XmlReader System.Xml.XmlNodeReader::entity
	XmlReader_t4229084514 * ___entity_2;
	// System.Xml.XmlNodeReaderImpl System.Xml.XmlNodeReader::source
	XmlNodeReaderImpl_t142482116 * ___source_3;
	// System.Boolean System.Xml.XmlNodeReader::entityInsideAttribute
	bool ___entityInsideAttribute_4;
	// System.Boolean System.Xml.XmlNodeReader::insideAttribute
	bool ___insideAttribute_5;

public:
	inline static int32_t get_offset_of_entity_2() { return static_cast<int32_t>(offsetof(XmlNodeReader_t3079406212, ___entity_2)); }
	inline XmlReader_t4229084514 * get_entity_2() const { return ___entity_2; }
	inline XmlReader_t4229084514 ** get_address_of_entity_2() { return &___entity_2; }
	inline void set_entity_2(XmlReader_t4229084514 * value)
	{
		___entity_2 = value;
		Il2CppCodeGenWriteBarrier(&___entity_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(XmlNodeReader_t3079406212, ___source_3)); }
	inline XmlNodeReaderImpl_t142482116 * get_source_3() const { return ___source_3; }
	inline XmlNodeReaderImpl_t142482116 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(XmlNodeReaderImpl_t142482116 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_4() { return static_cast<int32_t>(offsetof(XmlNodeReader_t3079406212, ___entityInsideAttribute_4)); }
	inline bool get_entityInsideAttribute_4() const { return ___entityInsideAttribute_4; }
	inline bool* get_address_of_entityInsideAttribute_4() { return &___entityInsideAttribute_4; }
	inline void set_entityInsideAttribute_4(bool value)
	{
		___entityInsideAttribute_4 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_5() { return static_cast<int32_t>(offsetof(XmlNodeReader_t3079406212, ___insideAttribute_5)); }
	inline bool get_insideAttribute_5() const { return ___insideAttribute_5; }
	inline bool* get_address_of_insideAttribute_5() { return &___insideAttribute_5; }
	inline void set_insideAttribute_5(bool value)
	{
		___insideAttribute_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
