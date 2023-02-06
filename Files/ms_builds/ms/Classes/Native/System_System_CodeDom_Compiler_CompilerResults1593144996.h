#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.CodeDom.Compiler.CompilerErrorCollection
struct CompilerErrorCollection_t815520884;
// System.Collections.Specialized.StringCollection
struct StringCollection_t604413498;
// System.String
struct String_t;
// System.CodeDom.Compiler.TempFileCollection
struct TempFileCollection_t3384596155;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CodeDom.Compiler.CompilerResults
struct  CompilerResults_t1593144996  : public Il2CppObject
{
public:
	// System.Reflection.Assembly System.CodeDom.Compiler.CompilerResults::compiledAssembly
	Assembly_t1882292308 * ___compiledAssembly_0;
	// System.CodeDom.Compiler.CompilerErrorCollection System.CodeDom.Compiler.CompilerResults::errors
	CompilerErrorCollection_t815520884 * ___errors_1;
	// System.Int32 System.CodeDom.Compiler.CompilerResults::nativeCompilerReturnValue
	int32_t ___nativeCompilerReturnValue_2;
	// System.Collections.Specialized.StringCollection System.CodeDom.Compiler.CompilerResults::output
	StringCollection_t604413498 * ___output_3;
	// System.String System.CodeDom.Compiler.CompilerResults::pathToAssembly
	String_t* ___pathToAssembly_4;
	// System.CodeDom.Compiler.TempFileCollection System.CodeDom.Compiler.CompilerResults::tempFiles
	TempFileCollection_t3384596155 * ___tempFiles_5;

public:
	inline static int32_t get_offset_of_compiledAssembly_0() { return static_cast<int32_t>(offsetof(CompilerResults_t1593144996, ___compiledAssembly_0)); }
	inline Assembly_t1882292308 * get_compiledAssembly_0() const { return ___compiledAssembly_0; }
	inline Assembly_t1882292308 ** get_address_of_compiledAssembly_0() { return &___compiledAssembly_0; }
	inline void set_compiledAssembly_0(Assembly_t1882292308 * value)
	{
		___compiledAssembly_0 = value;
		Il2CppCodeGenWriteBarrier(&___compiledAssembly_0, value);
	}

	inline static int32_t get_offset_of_errors_1() { return static_cast<int32_t>(offsetof(CompilerResults_t1593144996, ___errors_1)); }
	inline CompilerErrorCollection_t815520884 * get_errors_1() const { return ___errors_1; }
	inline CompilerErrorCollection_t815520884 ** get_address_of_errors_1() { return &___errors_1; }
	inline void set_errors_1(CompilerErrorCollection_t815520884 * value)
	{
		___errors_1 = value;
		Il2CppCodeGenWriteBarrier(&___errors_1, value);
	}

	inline static int32_t get_offset_of_nativeCompilerReturnValue_2() { return static_cast<int32_t>(offsetof(CompilerResults_t1593144996, ___nativeCompilerReturnValue_2)); }
	inline int32_t get_nativeCompilerReturnValue_2() const { return ___nativeCompilerReturnValue_2; }
	inline int32_t* get_address_of_nativeCompilerReturnValue_2() { return &___nativeCompilerReturnValue_2; }
	inline void set_nativeCompilerReturnValue_2(int32_t value)
	{
		___nativeCompilerReturnValue_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(CompilerResults_t1593144996, ___output_3)); }
	inline StringCollection_t604413498 * get_output_3() const { return ___output_3; }
	inline StringCollection_t604413498 ** get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(StringCollection_t604413498 * value)
	{
		___output_3 = value;
		Il2CppCodeGenWriteBarrier(&___output_3, value);
	}

	inline static int32_t get_offset_of_pathToAssembly_4() { return static_cast<int32_t>(offsetof(CompilerResults_t1593144996, ___pathToAssembly_4)); }
	inline String_t* get_pathToAssembly_4() const { return ___pathToAssembly_4; }
	inline String_t** get_address_of_pathToAssembly_4() { return &___pathToAssembly_4; }
	inline void set_pathToAssembly_4(String_t* value)
	{
		___pathToAssembly_4 = value;
		Il2CppCodeGenWriteBarrier(&___pathToAssembly_4, value);
	}

	inline static int32_t get_offset_of_tempFiles_5() { return static_cast<int32_t>(offsetof(CompilerResults_t1593144996, ___tempFiles_5)); }
	inline TempFileCollection_t3384596155 * get_tempFiles_5() const { return ___tempFiles_5; }
	inline TempFileCollection_t3384596155 ** get_address_of_tempFiles_5() { return &___tempFiles_5; }
	inline void set_tempFiles_5(TempFileCollection_t3384596155 * value)
	{
		___tempFiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___tempFiles_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
