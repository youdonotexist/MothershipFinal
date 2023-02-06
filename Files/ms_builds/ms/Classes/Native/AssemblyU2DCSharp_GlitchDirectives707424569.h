#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IKTest[]
struct IKTestU5BU5D_t723451229;

#include "AssemblyU2DCSharp_DirectivePack461000424.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlitchDirectives
struct  GlitchDirectives_t707424569  : public DirectivePack_t461000424
{
public:
	// System.Boolean GlitchDirectives::deploying
	bool ___deploying_6;
	// IKTest[] GlitchDirectives::_ikArms
	IKTestU5BU5D_t723451229* ____ikArms_7;

public:
	inline static int32_t get_offset_of_deploying_6() { return static_cast<int32_t>(offsetof(GlitchDirectives_t707424569, ___deploying_6)); }
	inline bool get_deploying_6() const { return ___deploying_6; }
	inline bool* get_address_of_deploying_6() { return &___deploying_6; }
	inline void set_deploying_6(bool value)
	{
		___deploying_6 = value;
	}

	inline static int32_t get_offset_of__ikArms_7() { return static_cast<int32_t>(offsetof(GlitchDirectives_t707424569, ____ikArms_7)); }
	inline IKTestU5BU5D_t723451229* get__ikArms_7() const { return ____ikArms_7; }
	inline IKTestU5BU5D_t723451229** get_address_of__ikArms_7() { return &____ikArms_7; }
	inline void set__ikArms_7(IKTestU5BU5D_t723451229* value)
	{
		____ikArms_7 = value;
		Il2CppCodeGenWriteBarrier(&____ikArms_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
