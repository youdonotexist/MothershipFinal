#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t3292830944;

#include "System_Xml_System_Xml_XmlNodeList3966370975.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeListChildren
struct  XmlNodeListChildren_t91357118  : public XmlNodeList_t3966370975
{
public:
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren::parent
	Il2CppObject * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XmlNodeListChildren_t91357118, ___parent_0)); }
	inline Il2CppObject * get_parent_0() const { return ___parent_0; }
	inline Il2CppObject ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Il2CppObject * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier(&___parent_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
