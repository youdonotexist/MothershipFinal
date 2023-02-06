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
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<Tasharen.DataNode>
struct List_1_t2232811577;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t121960543;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_t3081036617;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tasharen.DataNode
struct  DataNode_t1435852608  : public Il2CppObject
{
public:
	// System.String Tasharen.DataNode::name
	String_t* ___name_0;
	// System.Object Tasharen.DataNode::value
	Il2CppObject * ___value_1;
	// System.Collections.Generic.List`1<Tasharen.DataNode> Tasharen.DataNode::children
	List_1_t2232811577 * ___children_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataNode_t1435852608, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DataNode_t1435852608, ___value_1)); }
	inline Il2CppObject * get_value_1() const { return ___value_1; }
	inline Il2CppObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}

	inline static int32_t get_offset_of_children_2() { return static_cast<int32_t>(offsetof(DataNode_t1435852608, ___children_2)); }
	inline List_1_t2232811577 * get_children_2() const { return ___children_2; }
	inline List_1_t2232811577 ** get_address_of_children_2() { return &___children_2; }
	inline void set_children_2(List_1_t2232811577 * value)
	{
		___children_2 = value;
		Il2CppCodeGenWriteBarrier(&___children_2, value);
	}
};

struct DataNode_t1435852608_StaticFields
{
public:
	// System.Object[] Tasharen.DataNode::mInvokeParams
	ObjectU5BU5D_t11523773* ___mInvokeParams_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> Tasharen.DataNode::mNameToType
	Dictionary_2_t121960543 * ___mNameToType_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Tasharen.DataNode::mTypeToName
	Dictionary_2_t3081036617 * ___mTypeToName_5;

public:
	inline static int32_t get_offset_of_mInvokeParams_3() { return static_cast<int32_t>(offsetof(DataNode_t1435852608_StaticFields, ___mInvokeParams_3)); }
	inline ObjectU5BU5D_t11523773* get_mInvokeParams_3() const { return ___mInvokeParams_3; }
	inline ObjectU5BU5D_t11523773** get_address_of_mInvokeParams_3() { return &___mInvokeParams_3; }
	inline void set_mInvokeParams_3(ObjectU5BU5D_t11523773* value)
	{
		___mInvokeParams_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInvokeParams_3, value);
	}

	inline static int32_t get_offset_of_mNameToType_4() { return static_cast<int32_t>(offsetof(DataNode_t1435852608_StaticFields, ___mNameToType_4)); }
	inline Dictionary_2_t121960543 * get_mNameToType_4() const { return ___mNameToType_4; }
	inline Dictionary_2_t121960543 ** get_address_of_mNameToType_4() { return &___mNameToType_4; }
	inline void set_mNameToType_4(Dictionary_2_t121960543 * value)
	{
		___mNameToType_4 = value;
		Il2CppCodeGenWriteBarrier(&___mNameToType_4, value);
	}

	inline static int32_t get_offset_of_mTypeToName_5() { return static_cast<int32_t>(offsetof(DataNode_t1435852608_StaticFields, ___mTypeToName_5)); }
	inline Dictionary_2_t3081036617 * get_mTypeToName_5() const { return ___mTypeToName_5; }
	inline Dictionary_2_t3081036617 ** get_address_of_mTypeToName_5() { return &___mTypeToName_5; }
	inline void set_mTypeToName_5(Dictionary_2_t3081036617 * value)
	{
		___mTypeToName_5 = value;
		Il2CppCodeGenWriteBarrier(&___mTypeToName_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
