#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.Schema.XmlSchema
struct XmlSchema_t1932230565;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t2238201602;

#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase3990058885.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAll
struct  XmlSchemaAll_t3827156278  : public XmlSchemaGroupBase_t3990058885
{
public:
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaAll::schema
	XmlSchema_t1932230565 * ___schema_28;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::items
	XmlSchemaObjectCollection_t2238201602 * ___items_29;
	// System.Boolean System.Xml.Schema.XmlSchemaAll::emptiable
	bool ___emptiable_30;

public:
	inline static int32_t get_offset_of_schema_28() { return static_cast<int32_t>(offsetof(XmlSchemaAll_t3827156278, ___schema_28)); }
	inline XmlSchema_t1932230565 * get_schema_28() const { return ___schema_28; }
	inline XmlSchema_t1932230565 ** get_address_of_schema_28() { return &___schema_28; }
	inline void set_schema_28(XmlSchema_t1932230565 * value)
	{
		___schema_28 = value;
		Il2CppCodeGenWriteBarrier(&___schema_28, value);
	}

	inline static int32_t get_offset_of_items_29() { return static_cast<int32_t>(offsetof(XmlSchemaAll_t3827156278, ___items_29)); }
	inline XmlSchemaObjectCollection_t2238201602 * get_items_29() const { return ___items_29; }
	inline XmlSchemaObjectCollection_t2238201602 ** get_address_of_items_29() { return &___items_29; }
	inline void set_items_29(XmlSchemaObjectCollection_t2238201602 * value)
	{
		___items_29 = value;
		Il2CppCodeGenWriteBarrier(&___items_29, value);
	}

	inline static int32_t get_offset_of_emptiable_30() { return static_cast<int32_t>(offsetof(XmlSchemaAll_t3827156278, ___emptiable_30)); }
	inline bool get_emptiable_30() const { return ___emptiable_30; }
	inline bool* get_address_of_emptiable_30() { return &___emptiable_30; }
	inline void set_emptiable_30(bool value)
	{
		___emptiable_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
