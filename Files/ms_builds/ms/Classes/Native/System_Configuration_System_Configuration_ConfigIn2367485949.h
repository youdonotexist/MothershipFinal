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
// System.Type
struct Type_t;
// System.Configuration.ConfigInfo
struct ConfigInfo_t2367485949;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t4010632972;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigInfo
struct  ConfigInfo_t2367485949  : public Il2CppObject
{
public:
	// System.String System.Configuration.ConfigInfo::Name
	String_t* ___Name_0;
	// System.String System.Configuration.ConfigInfo::TypeName
	String_t* ___TypeName_1;
	// System.Type System.Configuration.ConfigInfo::Type
	Type_t * ___Type_2;
	// System.String System.Configuration.ConfigInfo::streamName
	String_t* ___streamName_3;
	// System.Configuration.ConfigInfo System.Configuration.ConfigInfo::Parent
	ConfigInfo_t2367485949 * ___Parent_4;
	// System.Configuration.Internal.IInternalConfigHost System.Configuration.ConfigInfo::ConfigHost
	Il2CppObject * ___ConfigHost_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ConfigInfo_t2367485949, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(ConfigInfo_t2367485949, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier(&___TypeName_1, value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ConfigInfo_t2367485949, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier(&___Type_2, value);
	}

	inline static int32_t get_offset_of_streamName_3() { return static_cast<int32_t>(offsetof(ConfigInfo_t2367485949, ___streamName_3)); }
	inline String_t* get_streamName_3() const { return ___streamName_3; }
	inline String_t** get_address_of_streamName_3() { return &___streamName_3; }
	inline void set_streamName_3(String_t* value)
	{
		___streamName_3 = value;
		Il2CppCodeGenWriteBarrier(&___streamName_3, value);
	}

	inline static int32_t get_offset_of_Parent_4() { return static_cast<int32_t>(offsetof(ConfigInfo_t2367485949, ___Parent_4)); }
	inline ConfigInfo_t2367485949 * get_Parent_4() const { return ___Parent_4; }
	inline ConfigInfo_t2367485949 ** get_address_of_Parent_4() { return &___Parent_4; }
	inline void set_Parent_4(ConfigInfo_t2367485949 * value)
	{
		___Parent_4 = value;
		Il2CppCodeGenWriteBarrier(&___Parent_4, value);
	}

	inline static int32_t get_offset_of_ConfigHost_5() { return static_cast<int32_t>(offsetof(ConfigInfo_t2367485949, ___ConfigHost_5)); }
	inline Il2CppObject * get_ConfigHost_5() const { return ___ConfigHost_5; }
	inline Il2CppObject ** get_address_of_ConfigHost_5() { return &___ConfigHost_5; }
	inline void set_ConfigHost_5(Il2CppObject * value)
	{
		___ConfigHost_5 = value;
		Il2CppCodeGenWriteBarrier(&___ConfigHost_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
