#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Configuration.ElementMap
struct ElementMap_t2112219565;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1125014;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1006530897;
// System.Configuration.ElementInformation
struct ElementInformation_t381744509;
// System.Configuration.Configuration
struct Configuration_t2274547107;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t2592573804;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3905177107  : public Il2CppObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2112219565 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t1125014 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t1006530897 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t381744509 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2274547107 * ____configuration_7;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t2592573804 * ___lockAllAttributesExcept_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t2592573804 * ___lockAllElementsExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t2592573804 * ___lockAttributes_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t2592573804 * ___lockElements_11;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_12;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier(&___rawXml_0, value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___map_2)); }
	inline ElementMap_t2112219565 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2112219565 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2112219565 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier(&___map_2, value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t1125014 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t1125014 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t1125014 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyProps_3, value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t1006530897 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t1006530897 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t1006530897 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultCollection_4, value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___elementInfo_6)); }
	inline ElementInformation_t381744509 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t381744509 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t381744509 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier(&___elementInfo_6, value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ____configuration_7)); }
	inline Configuration_t2274547107 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t2274547107 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t2274547107 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier(&____configuration_7, value);
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___lockAllAttributesExcept_8)); }
	inline ConfigurationLockCollection_t2592573804 * get_lockAllAttributesExcept_8() const { return ___lockAllAttributesExcept_8; }
	inline ConfigurationLockCollection_t2592573804 ** get_address_of_lockAllAttributesExcept_8() { return &___lockAllAttributesExcept_8; }
	inline void set_lockAllAttributesExcept_8(ConfigurationLockCollection_t2592573804 * value)
	{
		___lockAllAttributesExcept_8 = value;
		Il2CppCodeGenWriteBarrier(&___lockAllAttributesExcept_8, value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___lockAllElementsExcept_9)); }
	inline ConfigurationLockCollection_t2592573804 * get_lockAllElementsExcept_9() const { return ___lockAllElementsExcept_9; }
	inline ConfigurationLockCollection_t2592573804 ** get_address_of_lockAllElementsExcept_9() { return &___lockAllElementsExcept_9; }
	inline void set_lockAllElementsExcept_9(ConfigurationLockCollection_t2592573804 * value)
	{
		___lockAllElementsExcept_9 = value;
		Il2CppCodeGenWriteBarrier(&___lockAllElementsExcept_9, value);
	}

	inline static int32_t get_offset_of_lockAttributes_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___lockAttributes_10)); }
	inline ConfigurationLockCollection_t2592573804 * get_lockAttributes_10() const { return ___lockAttributes_10; }
	inline ConfigurationLockCollection_t2592573804 ** get_address_of_lockAttributes_10() { return &___lockAttributes_10; }
	inline void set_lockAttributes_10(ConfigurationLockCollection_t2592573804 * value)
	{
		___lockAttributes_10 = value;
		Il2CppCodeGenWriteBarrier(&___lockAttributes_10, value);
	}

	inline static int32_t get_offset_of_lockElements_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___lockElements_11)); }
	inline ConfigurationLockCollection_t2592573804 * get_lockElements_11() const { return ___lockElements_11; }
	inline ConfigurationLockCollection_t2592573804 ** get_address_of_lockElements_11() { return &___lockElements_11; }
	inline void set_lockElements_11(ConfigurationLockCollection_t2592573804 * value)
	{
		___lockElements_11 = value;
		Il2CppCodeGenWriteBarrier(&___lockElements_11, value);
	}

	inline static int32_t get_offset_of_lockItem_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3905177107, ___lockItem_12)); }
	inline bool get_lockItem_12() const { return ___lockItem_12; }
	inline bool* get_address_of_lockItem_12() { return &___lockItem_12; }
	inline void set_lockItem_12(bool value)
	{
		___lockItem_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
