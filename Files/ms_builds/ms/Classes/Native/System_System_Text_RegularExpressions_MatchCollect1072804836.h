#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t318449694;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection/Enumerator
struct  Enumerator_t1072804840  : public Il2CppObject
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection/Enumerator::index
	int32_t ___index_0;
	// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.MatchCollection/Enumerator::coll
	MatchCollection_t318449694 * ___coll_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Enumerator_t1072804840, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_coll_1() { return static_cast<int32_t>(offsetof(Enumerator_t1072804840, ___coll_1)); }
	inline MatchCollection_t318449694 * get_coll_1() const { return ___coll_1; }
	inline MatchCollection_t318449694 ** get_address_of_coll_1() { return &___coll_1; }
	inline void set_coll_1(MatchCollection_t318449694 * value)
	{
		___coll_1 = value;
		Il2CppCodeGenWriteBarrier(&___coll_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
