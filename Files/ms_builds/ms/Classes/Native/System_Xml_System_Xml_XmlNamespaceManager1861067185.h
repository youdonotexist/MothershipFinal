﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t861464118;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t3697665526;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3232213908;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t1861067185  : public Il2CppObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t861464118* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t3697665526* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t3232213908 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;

public:
	inline static int32_t get_offset_of_decls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___decls_0)); }
	inline NsDeclU5BU5D_t861464118* get_decls_0() const { return ___decls_0; }
	inline NsDeclU5BU5D_t861464118** get_address_of_decls_0() { return &___decls_0; }
	inline void set_decls_0(NsDeclU5BU5D_t861464118* value)
	{
		___decls_0 = value;
		Il2CppCodeGenWriteBarrier(&___decls_0, value);
	}

	inline static int32_t get_offset_of_declPos_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___declPos_1)); }
	inline int32_t get_declPos_1() const { return ___declPos_1; }
	inline int32_t* get_address_of_declPos_1() { return &___declPos_1; }
	inline void set_declPos_1(int32_t value)
	{
		___declPos_1 = value;
	}

	inline static int32_t get_offset_of_scopes_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___scopes_2)); }
	inline NsScopeU5BU5D_t3697665526* get_scopes_2() const { return ___scopes_2; }
	inline NsScopeU5BU5D_t3697665526** get_address_of_scopes_2() { return &___scopes_2; }
	inline void set_scopes_2(NsScopeU5BU5D_t3697665526* value)
	{
		___scopes_2 = value;
		Il2CppCodeGenWriteBarrier(&___scopes_2, value);
	}

	inline static int32_t get_offset_of_scopePos_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___scopePos_3)); }
	inline int32_t get_scopePos_3() const { return ___scopePos_3; }
	inline int32_t* get_address_of_scopePos_3() { return &___scopePos_3; }
	inline void set_scopePos_3(int32_t value)
	{
		___scopePos_3 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___defaultNamespace_4)); }
	inline String_t* get_defaultNamespace_4() const { return ___defaultNamespace_4; }
	inline String_t** get_address_of_defaultNamespace_4() { return &___defaultNamespace_4; }
	inline void set_defaultNamespace_4(String_t* value)
	{
		___defaultNamespace_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultNamespace_4, value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_nameTable_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___nameTable_6)); }
	inline XmlNameTable_t3232213908 * get_nameTable_6() const { return ___nameTable_6; }
	inline XmlNameTable_t3232213908 ** get_address_of_nameTable_6() { return &___nameTable_6; }
	inline void set_nameTable_6(XmlNameTable_t3232213908 * value)
	{
		___nameTable_6 = value;
		Il2CppCodeGenWriteBarrier(&___nameTable_6, value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185, ___internalAtomizedNames_7)); }
	inline bool get_internalAtomizedNames_7() const { return ___internalAtomizedNames_7; }
	inline bool* get_address_of_internalAtomizedNames_7() { return &___internalAtomizedNames_7; }
	inline void set_internalAtomizedNames_7(bool value)
	{
		___internalAtomizedNames_7 = value;
	}
};

struct XmlNamespaceManager_t1861067185_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map25
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map25_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map25_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t1861067185_StaticFields, ___U3CU3Ef__switchU24map25_8)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map25_8() const { return ___U3CU3Ef__switchU24map25_8; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map25_8() { return &___U3CU3Ef__switchU24map25_8; }
	inline void set_U3CU3Ef__switchU24map25_8(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map25_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map25_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
