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
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;

#include "mscorlib_System_Object837106420.h"
#include "ex2D_Runtime_exSpriteAnimClip_EventInfo_ParamType3957927239.h"
#include "UnityEngine_UnityEngine_SendMessageOptions2623293100.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exSpriteAnimClip/EventInfo
struct  EventInfo_t2035060296  : public Il2CppObject
{
public:
	// System.Single exSpriteAnimClip/EventInfo::time
	float ___time_0;
	// System.String exSpriteAnimClip/EventInfo::methodName
	String_t* ___methodName_1;
	// exSpriteAnimClip/EventInfo/ParamType exSpriteAnimClip/EventInfo::paramType
	int32_t ___paramType_2;
	// System.String exSpriteAnimClip/EventInfo::stringParam
	String_t* ___stringParam_3;
	// System.Single exSpriteAnimClip/EventInfo::floatParam
	float ___floatParam_4;
	// System.Int32 exSpriteAnimClip/EventInfo::intParam
	int32_t ___intParam_5;
	// System.Boolean exSpriteAnimClip/EventInfo::boolParam
	bool ___boolParam_6;
	// UnityEngine.Object exSpriteAnimClip/EventInfo::objectParam
	Object_t3878351788 * ___objectParam_7;
	// UnityEngine.SendMessageOptions exSpriteAnimClip/EventInfo::msgOptions
	int32_t ___msgOptions_8;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_methodName_1() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___methodName_1)); }
	inline String_t* get_methodName_1() const { return ___methodName_1; }
	inline String_t** get_address_of_methodName_1() { return &___methodName_1; }
	inline void set_methodName_1(String_t* value)
	{
		___methodName_1 = value;
		Il2CppCodeGenWriteBarrier(&___methodName_1, value);
	}

	inline static int32_t get_offset_of_paramType_2() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___paramType_2)); }
	inline int32_t get_paramType_2() const { return ___paramType_2; }
	inline int32_t* get_address_of_paramType_2() { return &___paramType_2; }
	inline void set_paramType_2(int32_t value)
	{
		___paramType_2 = value;
	}

	inline static int32_t get_offset_of_stringParam_3() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___stringParam_3)); }
	inline String_t* get_stringParam_3() const { return ___stringParam_3; }
	inline String_t** get_address_of_stringParam_3() { return &___stringParam_3; }
	inline void set_stringParam_3(String_t* value)
	{
		___stringParam_3 = value;
		Il2CppCodeGenWriteBarrier(&___stringParam_3, value);
	}

	inline static int32_t get_offset_of_floatParam_4() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___floatParam_4)); }
	inline float get_floatParam_4() const { return ___floatParam_4; }
	inline float* get_address_of_floatParam_4() { return &___floatParam_4; }
	inline void set_floatParam_4(float value)
	{
		___floatParam_4 = value;
	}

	inline static int32_t get_offset_of_intParam_5() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___intParam_5)); }
	inline int32_t get_intParam_5() const { return ___intParam_5; }
	inline int32_t* get_address_of_intParam_5() { return &___intParam_5; }
	inline void set_intParam_5(int32_t value)
	{
		___intParam_5 = value;
	}

	inline static int32_t get_offset_of_boolParam_6() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___boolParam_6)); }
	inline bool get_boolParam_6() const { return ___boolParam_6; }
	inline bool* get_address_of_boolParam_6() { return &___boolParam_6; }
	inline void set_boolParam_6(bool value)
	{
		___boolParam_6 = value;
	}

	inline static int32_t get_offset_of_objectParam_7() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___objectParam_7)); }
	inline Object_t3878351788 * get_objectParam_7() const { return ___objectParam_7; }
	inline Object_t3878351788 ** get_address_of_objectParam_7() { return &___objectParam_7; }
	inline void set_objectParam_7(Object_t3878351788 * value)
	{
		___objectParam_7 = value;
		Il2CppCodeGenWriteBarrier(&___objectParam_7, value);
	}

	inline static int32_t get_offset_of_msgOptions_8() { return static_cast<int32_t>(offsetof(EventInfo_t2035060296, ___msgOptions_8)); }
	inline int32_t get_msgOptions_8() const { return ___msgOptions_8; }
	inline int32_t* get_address_of_msgOptions_8() { return &___msgOptions_8; }
	inline void set_msgOptions_8(int32_t value)
	{
		___msgOptions_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
