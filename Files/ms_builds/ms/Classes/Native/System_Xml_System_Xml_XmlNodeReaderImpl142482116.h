#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlDocument
struct XmlDocument_t3705263098;
// System.Xml.XmlNode
struct XmlNode_t3592213601;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "System_Xml_System_Xml_XmlReader4229084514.h"
#include "System_Xml_System_Xml_ReadState457987651.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeReaderImpl
struct  XmlNodeReaderImpl_t142482116  : public XmlReader_t4229084514
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNodeReaderImpl::document
	XmlDocument_t3705263098 * ___document_2;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::startNode
	XmlNode_t3592213601 * ___startNode_3;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::current
	XmlNode_t3592213601 * ___current_4;
	// System.Xml.XmlNode System.Xml.XmlNodeReaderImpl::ownerLinkedNode
	XmlNode_t3592213601 * ___ownerLinkedNode_5;
	// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::state
	int32_t ___state_6;
	// System.Int32 System.Xml.XmlNodeReaderImpl::depth
	int32_t ___depth_7;
	// System.Boolean System.Xml.XmlNodeReaderImpl::isEndElement
	bool ___isEndElement_8;
	// System.Boolean System.Xml.XmlNodeReaderImpl::ignoreStartNode
	bool ___ignoreStartNode_9;

public:
	inline static int32_t get_offset_of_document_2() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___document_2)); }
	inline XmlDocument_t3705263098 * get_document_2() const { return ___document_2; }
	inline XmlDocument_t3705263098 ** get_address_of_document_2() { return &___document_2; }
	inline void set_document_2(XmlDocument_t3705263098 * value)
	{
		___document_2 = value;
		Il2CppCodeGenWriteBarrier(&___document_2, value);
	}

	inline static int32_t get_offset_of_startNode_3() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___startNode_3)); }
	inline XmlNode_t3592213601 * get_startNode_3() const { return ___startNode_3; }
	inline XmlNode_t3592213601 ** get_address_of_startNode_3() { return &___startNode_3; }
	inline void set_startNode_3(XmlNode_t3592213601 * value)
	{
		___startNode_3 = value;
		Il2CppCodeGenWriteBarrier(&___startNode_3, value);
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___current_4)); }
	inline XmlNode_t3592213601 * get_current_4() const { return ___current_4; }
	inline XmlNode_t3592213601 ** get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(XmlNode_t3592213601 * value)
	{
		___current_4 = value;
		Il2CppCodeGenWriteBarrier(&___current_4, value);
	}

	inline static int32_t get_offset_of_ownerLinkedNode_5() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___ownerLinkedNode_5)); }
	inline XmlNode_t3592213601 * get_ownerLinkedNode_5() const { return ___ownerLinkedNode_5; }
	inline XmlNode_t3592213601 ** get_address_of_ownerLinkedNode_5() { return &___ownerLinkedNode_5; }
	inline void set_ownerLinkedNode_5(XmlNode_t3592213601 * value)
	{
		___ownerLinkedNode_5 = value;
		Il2CppCodeGenWriteBarrier(&___ownerLinkedNode_5, value);
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}

	inline static int32_t get_offset_of_depth_7() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___depth_7)); }
	inline int32_t get_depth_7() const { return ___depth_7; }
	inline int32_t* get_address_of_depth_7() { return &___depth_7; }
	inline void set_depth_7(int32_t value)
	{
		___depth_7 = value;
	}

	inline static int32_t get_offset_of_isEndElement_8() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___isEndElement_8)); }
	inline bool get_isEndElement_8() const { return ___isEndElement_8; }
	inline bool* get_address_of_isEndElement_8() { return &___isEndElement_8; }
	inline void set_isEndElement_8(bool value)
	{
		___isEndElement_8 = value;
	}

	inline static int32_t get_offset_of_ignoreStartNode_9() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116, ___ignoreStartNode_9)); }
	inline bool get_ignoreStartNode_9() const { return ___ignoreStartNode_9; }
	inline bool* get_address_of_ignoreStartNode_9() { return &___ignoreStartNode_9; }
	inline void set_ignoreStartNode_9(bool value)
	{
		___ignoreStartNode_9 = value;
	}
};

struct XmlNodeReaderImpl_t142482116_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map34
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map34_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map35
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map35_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNodeReaderImpl::<>f__switch$map36
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map36_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map34_10() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116_StaticFields, ___U3CU3Ef__switchU24map34_10)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map34_10() const { return ___U3CU3Ef__switchU24map34_10; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map34_10() { return &___U3CU3Ef__switchU24map34_10; }
	inline void set_U3CU3Ef__switchU24map34_10(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map34_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map34_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map35_11() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116_StaticFields, ___U3CU3Ef__switchU24map35_11)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map35_11() const { return ___U3CU3Ef__switchU24map35_11; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map35_11() { return &___U3CU3Ef__switchU24map35_11; }
	inline void set_U3CU3Ef__switchU24map35_11(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map35_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map35_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map36_12() { return static_cast<int32_t>(offsetof(XmlNodeReaderImpl_t142482116_StaticFields, ___U3CU3Ef__switchU24map36_12)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map36_12() const { return ___U3CU3Ef__switchU24map36_12; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map36_12() { return &___U3CU3Ef__switchU24map36_12; }
	inline void set_U3CU3Ef__switchU24map36_12(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map36_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map36_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
