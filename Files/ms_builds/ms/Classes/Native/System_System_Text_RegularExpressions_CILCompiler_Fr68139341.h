#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_Emit_Label1734909569.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CILCompiler/Frame
struct  Frame_t68139341  : public Il2CppObject
{
public:
	// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler/Frame::label_pass
	Label_t1734909569  ___label_pass_0;
	// System.Reflection.Emit.Label System.Text.RegularExpressions.CILCompiler/Frame::label_fail
	Label_t1734909569  ___label_fail_1;

public:
	inline static int32_t get_offset_of_label_pass_0() { return static_cast<int32_t>(offsetof(Frame_t68139341, ___label_pass_0)); }
	inline Label_t1734909569  get_label_pass_0() const { return ___label_pass_0; }
	inline Label_t1734909569 * get_address_of_label_pass_0() { return &___label_pass_0; }
	inline void set_label_pass_0(Label_t1734909569  value)
	{
		___label_pass_0 = value;
	}

	inline static int32_t get_offset_of_label_fail_1() { return static_cast<int32_t>(offsetof(Frame_t68139341, ___label_fail_1)); }
	inline Label_t1734909569  get_label_fail_1() const { return ___label_fail_1; }
	inline Label_t1734909569 * get_address_of_label_fail_1() { return &___label_fail_1; }
	inline void set_label_fail_1(Label_t1734909569  value)
	{
		___label_fail_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
