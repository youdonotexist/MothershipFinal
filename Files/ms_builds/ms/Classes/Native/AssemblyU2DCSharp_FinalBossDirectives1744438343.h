#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BasicHeroDirectives
struct BasicHeroDirectives_t582679884;
// JuggernautHeroDirectives
struct JuggernautHeroDirectives_t3789385032;
// ScienceHeroDirectives
struct ScienceHeroDirectives_t169817346;

#include "AssemblyU2DCSharp_DirectivePack461000424.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinalBossDirectives
struct  FinalBossDirectives_t1744438343  : public DirectivePack_t461000424
{
public:
	// BasicHeroDirectives FinalBossDirectives::_basicAI
	BasicHeroDirectives_t582679884 * ____basicAI_6;
	// JuggernautHeroDirectives FinalBossDirectives::_juggernautAI
	JuggernautHeroDirectives_t3789385032 * ____juggernautAI_7;
	// ScienceHeroDirectives FinalBossDirectives::_scientistAI
	ScienceHeroDirectives_t169817346 * ____scientistAI_8;

public:
	inline static int32_t get_offset_of__basicAI_6() { return static_cast<int32_t>(offsetof(FinalBossDirectives_t1744438343, ____basicAI_6)); }
	inline BasicHeroDirectives_t582679884 * get__basicAI_6() const { return ____basicAI_6; }
	inline BasicHeroDirectives_t582679884 ** get_address_of__basicAI_6() { return &____basicAI_6; }
	inline void set__basicAI_6(BasicHeroDirectives_t582679884 * value)
	{
		____basicAI_6 = value;
		Il2CppCodeGenWriteBarrier(&____basicAI_6, value);
	}

	inline static int32_t get_offset_of__juggernautAI_7() { return static_cast<int32_t>(offsetof(FinalBossDirectives_t1744438343, ____juggernautAI_7)); }
	inline JuggernautHeroDirectives_t3789385032 * get__juggernautAI_7() const { return ____juggernautAI_7; }
	inline JuggernautHeroDirectives_t3789385032 ** get_address_of__juggernautAI_7() { return &____juggernautAI_7; }
	inline void set__juggernautAI_7(JuggernautHeroDirectives_t3789385032 * value)
	{
		____juggernautAI_7 = value;
		Il2CppCodeGenWriteBarrier(&____juggernautAI_7, value);
	}

	inline static int32_t get_offset_of__scientistAI_8() { return static_cast<int32_t>(offsetof(FinalBossDirectives_t1744438343, ____scientistAI_8)); }
	inline ScienceHeroDirectives_t169817346 * get__scientistAI_8() const { return ____scientistAI_8; }
	inline ScienceHeroDirectives_t169817346 ** get_address_of__scientistAI_8() { return &____scientistAI_8; }
	inline void set__scientistAI_8(ScienceHeroDirectives_t169817346 * value)
	{
		____scientistAI_8 = value;
		Il2CppCodeGenWriteBarrier(&____scientistAI_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
