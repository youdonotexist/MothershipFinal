#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3919018054;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t678461618  : public Il2CppObject
{
public:

public:
};

struct SecurityManager_t678461618_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	Il2CppObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t2121638921 * ____hierarchy_1;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t3875263730 * ____declsecCache_2;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t1512127021 * ____level_3;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t3919018054 * ____execution_4;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t678461618_StaticFields, ____lockObject_0)); }
	inline Il2CppObject * get__lockObject_0() const { return ____lockObject_0; }
	inline Il2CppObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(Il2CppObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier(&____lockObject_0, value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t678461618_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t2121638921 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t2121638921 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t2121638921 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier(&____hierarchy_1, value);
	}

	inline static int32_t get_offset_of__declsecCache_2() { return static_cast<int32_t>(offsetof(SecurityManager_t678461618_StaticFields, ____declsecCache_2)); }
	inline Hashtable_t3875263730 * get__declsecCache_2() const { return ____declsecCache_2; }
	inline Hashtable_t3875263730 ** get_address_of__declsecCache_2() { return &____declsecCache_2; }
	inline void set__declsecCache_2(Hashtable_t3875263730 * value)
	{
		____declsecCache_2 = value;
		Il2CppCodeGenWriteBarrier(&____declsecCache_2, value);
	}

	inline static int32_t get_offset_of__level_3() { return static_cast<int32_t>(offsetof(SecurityManager_t678461618_StaticFields, ____level_3)); }
	inline PolicyLevel_t1512127021 * get__level_3() const { return ____level_3; }
	inline PolicyLevel_t1512127021 ** get_address_of__level_3() { return &____level_3; }
	inline void set__level_3(PolicyLevel_t1512127021 * value)
	{
		____level_3 = value;
		Il2CppCodeGenWriteBarrier(&____level_3, value);
	}

	inline static int32_t get_offset_of__execution_4() { return static_cast<int32_t>(offsetof(SecurityManager_t678461618_StaticFields, ____execution_4)); }
	inline SecurityPermission_t3919018054 * get__execution_4() const { return ____execution_4; }
	inline SecurityPermission_t3919018054 ** get_address_of__execution_4() { return &____execution_4; }
	inline void set__execution_4(SecurityPermission_t3919018054 * value)
	{
		____execution_4 = value;
		Il2CppCodeGenWriteBarrier(&____execution_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
