#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t3818891356;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RxInterpreterFactory
struct  RxInterpreterFactory_t2248354865  : public Il2CppObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::mapping
	Il2CppObject * ___mapping_0;
	// System.Byte[] System.Text.RegularExpressions.RxInterpreterFactory::program
	ByteU5BU5D_t58506160* ___program_1;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreterFactory::eval_del
	EvalDelegate_t3818891356 * ___eval_del_2;
	// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::namesMapping
	StringU5BU5D_t2956870243* ___namesMapping_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::gap
	int32_t ___gap_4;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(RxInterpreterFactory_t2248354865, ___mapping_0)); }
	inline Il2CppObject * get_mapping_0() const { return ___mapping_0; }
	inline Il2CppObject ** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(Il2CppObject * value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_0, value);
	}

	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(RxInterpreterFactory_t2248354865, ___program_1)); }
	inline ByteU5BU5D_t58506160* get_program_1() const { return ___program_1; }
	inline ByteU5BU5D_t58506160** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(ByteU5BU5D_t58506160* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier(&___program_1, value);
	}

	inline static int32_t get_offset_of_eval_del_2() { return static_cast<int32_t>(offsetof(RxInterpreterFactory_t2248354865, ___eval_del_2)); }
	inline EvalDelegate_t3818891356 * get_eval_del_2() const { return ___eval_del_2; }
	inline EvalDelegate_t3818891356 ** get_address_of_eval_del_2() { return &___eval_del_2; }
	inline void set_eval_del_2(EvalDelegate_t3818891356 * value)
	{
		___eval_del_2 = value;
		Il2CppCodeGenWriteBarrier(&___eval_del_2, value);
	}

	inline static int32_t get_offset_of_namesMapping_3() { return static_cast<int32_t>(offsetof(RxInterpreterFactory_t2248354865, ___namesMapping_3)); }
	inline StringU5BU5D_t2956870243* get_namesMapping_3() const { return ___namesMapping_3; }
	inline StringU5BU5D_t2956870243** get_address_of_namesMapping_3() { return &___namesMapping_3; }
	inline void set_namesMapping_3(StringU5BU5D_t2956870243* value)
	{
		___namesMapping_3 = value;
		Il2CppCodeGenWriteBarrier(&___namesMapping_3, value);
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(RxInterpreterFactory_t2248354865, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
