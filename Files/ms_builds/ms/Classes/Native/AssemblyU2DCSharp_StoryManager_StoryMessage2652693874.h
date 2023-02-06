#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UILabel
struct UILabel_t291504320;
// System.String
struct String_t;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoryManager/StoryMessage
struct  StoryMessage_t2652693874 
{
public:
	// UILabel StoryManager/StoryMessage::label
	UILabel_t291504320 * ___label_0;
	// System.String StoryManager/StoryMessage::message
	String_t* ___message_1;
	// System.Boolean StoryManager/StoryMessage::repeat
	bool ___repeat_2;
	// System.String StoryManager/StoryMessage::bleepEffectName
	String_t* ___bleepEffectName_3;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(StoryMessage_t2652693874, ___label_0)); }
	inline UILabel_t291504320 * get_label_0() const { return ___label_0; }
	inline UILabel_t291504320 ** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(UILabel_t291504320 * value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier(&___label_0, value);
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(StoryMessage_t2652693874, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_repeat_2() { return static_cast<int32_t>(offsetof(StoryMessage_t2652693874, ___repeat_2)); }
	inline bool get_repeat_2() const { return ___repeat_2; }
	inline bool* get_address_of_repeat_2() { return &___repeat_2; }
	inline void set_repeat_2(bool value)
	{
		___repeat_2 = value;
	}

	inline static int32_t get_offset_of_bleepEffectName_3() { return static_cast<int32_t>(offsetof(StoryMessage_t2652693874, ___bleepEffectName_3)); }
	inline String_t* get_bleepEffectName_3() const { return ___bleepEffectName_3; }
	inline String_t** get_address_of_bleepEffectName_3() { return &___bleepEffectName_3; }
	inline void set_bleepEffectName_3(String_t* value)
	{
		___bleepEffectName_3 = value;
		Il2CppCodeGenWriteBarrier(&___bleepEffectName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
