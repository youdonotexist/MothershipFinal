#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.Schema.XsdIdentitySelector
struct XsdIdentitySelector_t2774051127;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3473808128;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t176365656;
// Mono.Xml.Schema.XsdKeyEntryCollection
struct XsdKeyEntryCollection_t1955646603;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t1986537513;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.Schema.XsdKeyTable
struct  XsdKeyTable_t1986537513  : public Il2CppObject
{
public:
	// System.Boolean Mono.Xml.Schema.XsdKeyTable::alwaysTrue
	bool ___alwaysTrue_0;
	// Mono.Xml.Schema.XsdIdentitySelector Mono.Xml.Schema.XsdKeyTable::selector
	XsdIdentitySelector_t2774051127 * ___selector_1;
	// System.Xml.Schema.XmlSchemaIdentityConstraint Mono.Xml.Schema.XsdKeyTable::source
	XmlSchemaIdentityConstraint_t3473808128 * ___source_2;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::qname
	XmlQualifiedName_t176365656 * ___qname_3;
	// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdKeyTable::refKeyName
	XmlQualifiedName_t176365656 * ___refKeyName_4;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::Entries
	XsdKeyEntryCollection_t1955646603 * ___Entries_5;
	// Mono.Xml.Schema.XsdKeyEntryCollection Mono.Xml.Schema.XsdKeyTable::FinishedEntries
	XsdKeyEntryCollection_t1955646603 * ___FinishedEntries_6;
	// System.Int32 Mono.Xml.Schema.XsdKeyTable::StartDepth
	int32_t ___StartDepth_7;
	// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdKeyTable::ReferencedKey
	XsdKeyTable_t1986537513 * ___ReferencedKey_8;

public:
	inline static int32_t get_offset_of_alwaysTrue_0() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___alwaysTrue_0)); }
	inline bool get_alwaysTrue_0() const { return ___alwaysTrue_0; }
	inline bool* get_address_of_alwaysTrue_0() { return &___alwaysTrue_0; }
	inline void set_alwaysTrue_0(bool value)
	{
		___alwaysTrue_0 = value;
	}

	inline static int32_t get_offset_of_selector_1() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___selector_1)); }
	inline XsdIdentitySelector_t2774051127 * get_selector_1() const { return ___selector_1; }
	inline XsdIdentitySelector_t2774051127 ** get_address_of_selector_1() { return &___selector_1; }
	inline void set_selector_1(XsdIdentitySelector_t2774051127 * value)
	{
		___selector_1 = value;
		Il2CppCodeGenWriteBarrier(&___selector_1, value);
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___source_2)); }
	inline XmlSchemaIdentityConstraint_t3473808128 * get_source_2() const { return ___source_2; }
	inline XmlSchemaIdentityConstraint_t3473808128 ** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(XmlSchemaIdentityConstraint_t3473808128 * value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_2, value);
	}

	inline static int32_t get_offset_of_qname_3() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___qname_3)); }
	inline XmlQualifiedName_t176365656 * get_qname_3() const { return ___qname_3; }
	inline XmlQualifiedName_t176365656 ** get_address_of_qname_3() { return &___qname_3; }
	inline void set_qname_3(XmlQualifiedName_t176365656 * value)
	{
		___qname_3 = value;
		Il2CppCodeGenWriteBarrier(&___qname_3, value);
	}

	inline static int32_t get_offset_of_refKeyName_4() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___refKeyName_4)); }
	inline XmlQualifiedName_t176365656 * get_refKeyName_4() const { return ___refKeyName_4; }
	inline XmlQualifiedName_t176365656 ** get_address_of_refKeyName_4() { return &___refKeyName_4; }
	inline void set_refKeyName_4(XmlQualifiedName_t176365656 * value)
	{
		___refKeyName_4 = value;
		Il2CppCodeGenWriteBarrier(&___refKeyName_4, value);
	}

	inline static int32_t get_offset_of_Entries_5() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___Entries_5)); }
	inline XsdKeyEntryCollection_t1955646603 * get_Entries_5() const { return ___Entries_5; }
	inline XsdKeyEntryCollection_t1955646603 ** get_address_of_Entries_5() { return &___Entries_5; }
	inline void set_Entries_5(XsdKeyEntryCollection_t1955646603 * value)
	{
		___Entries_5 = value;
		Il2CppCodeGenWriteBarrier(&___Entries_5, value);
	}

	inline static int32_t get_offset_of_FinishedEntries_6() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___FinishedEntries_6)); }
	inline XsdKeyEntryCollection_t1955646603 * get_FinishedEntries_6() const { return ___FinishedEntries_6; }
	inline XsdKeyEntryCollection_t1955646603 ** get_address_of_FinishedEntries_6() { return &___FinishedEntries_6; }
	inline void set_FinishedEntries_6(XsdKeyEntryCollection_t1955646603 * value)
	{
		___FinishedEntries_6 = value;
		Il2CppCodeGenWriteBarrier(&___FinishedEntries_6, value);
	}

	inline static int32_t get_offset_of_StartDepth_7() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___StartDepth_7)); }
	inline int32_t get_StartDepth_7() const { return ___StartDepth_7; }
	inline int32_t* get_address_of_StartDepth_7() { return &___StartDepth_7; }
	inline void set_StartDepth_7(int32_t value)
	{
		___StartDepth_7 = value;
	}

	inline static int32_t get_offset_of_ReferencedKey_8() { return static_cast<int32_t>(offsetof(XsdKeyTable_t1986537513, ___ReferencedKey_8)); }
	inline XsdKeyTable_t1986537513 * get_ReferencedKey_8() const { return ___ReferencedKey_8; }
	inline XsdKeyTable_t1986537513 ** get_address_of_ReferencedKey_8() { return &___ReferencedKey_8; }
	inline void set_ReferencedKey_8(XsdKeyTable_t1986537513 * value)
	{
		___ReferencedKey_8 = value;
		Il2CppCodeGenWriteBarrier(&___ReferencedKey_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
