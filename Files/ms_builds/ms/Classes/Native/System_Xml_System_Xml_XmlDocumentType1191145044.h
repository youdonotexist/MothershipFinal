#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t1329997280;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t709926554;

#include "System_Xml_System_Xml_XmlLinkedNode3253021914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocumentType
struct  XmlDocumentType_t1191145044  : public XmlLinkedNode_t3253021914
{
public:
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t1329997280 * ___entities_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t1329997280 * ___notations_7;
	// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::dtd
	DTDObjectModel_t709926554 * ___dtd_8;

public:
	inline static int32_t get_offset_of_entities_6() { return static_cast<int32_t>(offsetof(XmlDocumentType_t1191145044, ___entities_6)); }
	inline XmlNamedNodeMap_t1329997280 * get_entities_6() const { return ___entities_6; }
	inline XmlNamedNodeMap_t1329997280 ** get_address_of_entities_6() { return &___entities_6; }
	inline void set_entities_6(XmlNamedNodeMap_t1329997280 * value)
	{
		___entities_6 = value;
		Il2CppCodeGenWriteBarrier(&___entities_6, value);
	}

	inline static int32_t get_offset_of_notations_7() { return static_cast<int32_t>(offsetof(XmlDocumentType_t1191145044, ___notations_7)); }
	inline XmlNamedNodeMap_t1329997280 * get_notations_7() const { return ___notations_7; }
	inline XmlNamedNodeMap_t1329997280 ** get_address_of_notations_7() { return &___notations_7; }
	inline void set_notations_7(XmlNamedNodeMap_t1329997280 * value)
	{
		___notations_7 = value;
		Il2CppCodeGenWriteBarrier(&___notations_7, value);
	}

	inline static int32_t get_offset_of_dtd_8() { return static_cast<int32_t>(offsetof(XmlDocumentType_t1191145044, ___dtd_8)); }
	inline DTDObjectModel_t709926554 * get_dtd_8() const { return ___dtd_8; }
	inline DTDObjectModel_t709926554 ** get_address_of_dtd_8() { return &___dtd_8; }
	inline void set_dtd_8(DTDObjectModel_t709926554 * value)
	{
		___dtd_8 = value;
		Il2CppCodeGenWriteBarrier(&___dtd_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
