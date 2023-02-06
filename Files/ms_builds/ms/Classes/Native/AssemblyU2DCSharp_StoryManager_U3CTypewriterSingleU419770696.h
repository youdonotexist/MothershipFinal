#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// MSTypewriterEffect
struct MSTypewriterEffect_t4139102692;
// Synthesizer
struct Synthesizer_t3031702888;
// System.Object
struct Il2CppObject;
// StoryManager
struct StoryManager_t2533029144;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_StoryManager_StoryMessage2652693874.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StoryManager/<TypewriterSingle>c__Iterator48
struct  U3CTypewriterSingleU3Ec__Iterator48_t419770696  : public Il2CppObject
{
public:
	// System.Single StoryManager/<TypewriterSingle>c__Iterator48::<elapsed>__0
	float ___U3CelapsedU3E__0_0;
	// System.Single StoryManager/<TypewriterSingle>c__Iterator48::<duration>__1
	float ___U3CdurationU3E__1_1;
	// StoryManager/StoryMessage StoryManager/<TypewriterSingle>c__Iterator48::messageStruct
	StoryMessage_t2652693874  ___messageStruct_2;
	// System.Int32[] StoryManager/<TypewriterSingle>c__Iterator48::<pauses>__2
	Int32U5BU5D_t1809983122* ___U3CpausesU3E__2_3;
	// MSTypewriterEffect StoryManager/<TypewriterSingle>c__Iterator48::<typewriter>__3
	MSTypewriterEffect_t4139102692 * ___U3CtypewriterU3E__3_4;
	// Synthesizer StoryManager/<TypewriterSingle>c__Iterator48::<synth>__4
	Synthesizer_t3031702888 * ___U3CsynthU3E__4_5;
	// System.Int32 StoryManager/<TypewriterSingle>c__Iterator48::$PC
	int32_t ___U24PC_6;
	// System.Object StoryManager/<TypewriterSingle>c__Iterator48::$current
	Il2CppObject * ___U24current_7;
	// StoryManager/StoryMessage StoryManager/<TypewriterSingle>c__Iterator48::<$>messageStruct
	StoryMessage_t2652693874  ___U3CU24U3EmessageStruct_8;
	// StoryManager StoryManager/<TypewriterSingle>c__Iterator48::<>f__this
	StoryManager_t2533029144 * ___U3CU3Ef__this_9;

public:
	inline static int32_t get_offset_of_U3CelapsedU3E__0_0() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CelapsedU3E__0_0)); }
	inline float get_U3CelapsedU3E__0_0() const { return ___U3CelapsedU3E__0_0; }
	inline float* get_address_of_U3CelapsedU3E__0_0() { return &___U3CelapsedU3E__0_0; }
	inline void set_U3CelapsedU3E__0_0(float value)
	{
		___U3CelapsedU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CdurationU3E__1_1() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CdurationU3E__1_1)); }
	inline float get_U3CdurationU3E__1_1() const { return ___U3CdurationU3E__1_1; }
	inline float* get_address_of_U3CdurationU3E__1_1() { return &___U3CdurationU3E__1_1; }
	inline void set_U3CdurationU3E__1_1(float value)
	{
		___U3CdurationU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_messageStruct_2() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___messageStruct_2)); }
	inline StoryMessage_t2652693874  get_messageStruct_2() const { return ___messageStruct_2; }
	inline StoryMessage_t2652693874 * get_address_of_messageStruct_2() { return &___messageStruct_2; }
	inline void set_messageStruct_2(StoryMessage_t2652693874  value)
	{
		___messageStruct_2 = value;
	}

	inline static int32_t get_offset_of_U3CpausesU3E__2_3() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CpausesU3E__2_3)); }
	inline Int32U5BU5D_t1809983122* get_U3CpausesU3E__2_3() const { return ___U3CpausesU3E__2_3; }
	inline Int32U5BU5D_t1809983122** get_address_of_U3CpausesU3E__2_3() { return &___U3CpausesU3E__2_3; }
	inline void set_U3CpausesU3E__2_3(Int32U5BU5D_t1809983122* value)
	{
		___U3CpausesU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpausesU3E__2_3, value);
	}

	inline static int32_t get_offset_of_U3CtypewriterU3E__3_4() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CtypewriterU3E__3_4)); }
	inline MSTypewriterEffect_t4139102692 * get_U3CtypewriterU3E__3_4() const { return ___U3CtypewriterU3E__3_4; }
	inline MSTypewriterEffect_t4139102692 ** get_address_of_U3CtypewriterU3E__3_4() { return &___U3CtypewriterU3E__3_4; }
	inline void set_U3CtypewriterU3E__3_4(MSTypewriterEffect_t4139102692 * value)
	{
		___U3CtypewriterU3E__3_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtypewriterU3E__3_4, value);
	}

	inline static int32_t get_offset_of_U3CsynthU3E__4_5() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CsynthU3E__4_5)); }
	inline Synthesizer_t3031702888 * get_U3CsynthU3E__4_5() const { return ___U3CsynthU3E__4_5; }
	inline Synthesizer_t3031702888 ** get_address_of_U3CsynthU3E__4_5() { return &___U3CsynthU3E__4_5; }
	inline void set_U3CsynthU3E__4_5(Synthesizer_t3031702888 * value)
	{
		___U3CsynthU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CsynthU3E__4_5, value);
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EmessageStruct_8() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CU24U3EmessageStruct_8)); }
	inline StoryMessage_t2652693874  get_U3CU24U3EmessageStruct_8() const { return ___U3CU24U3EmessageStruct_8; }
	inline StoryMessage_t2652693874 * get_address_of_U3CU24U3EmessageStruct_8() { return &___U3CU24U3EmessageStruct_8; }
	inline void set_U3CU24U3EmessageStruct_8(StoryMessage_t2652693874  value)
	{
		___U3CU24U3EmessageStruct_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_9() { return static_cast<int32_t>(offsetof(U3CTypewriterSingleU3Ec__Iterator48_t419770696, ___U3CU3Ef__this_9)); }
	inline StoryManager_t2533029144 * get_U3CU3Ef__this_9() const { return ___U3CU3Ef__this_9; }
	inline StoryManager_t2533029144 ** get_address_of_U3CU3Ef__this_9() { return &___U3CU3Ef__this_9; }
	inline void set_U3CU3Ef__this_9(StoryManager_t2533029144 * value)
	{
		___U3CU3Ef__this_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
