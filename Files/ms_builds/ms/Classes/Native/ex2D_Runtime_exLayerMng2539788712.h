#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<exLayer>
struct List_1_t3749212503;

#include "ex2D_Runtime_exLayer2952253534.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// exLayerMng
struct  exLayerMng_t2539788712  : public exLayer_t2952253534
{
public:
	// System.Collections.Generic.List`1<exLayer> exLayerMng::dirtyLayers
	List_1_t3749212503 * ___dirtyLayers_10;
	// System.Boolean exLayerMng::updateAll
	bool ___updateAll_11;

public:
	inline static int32_t get_offset_of_dirtyLayers_10() { return static_cast<int32_t>(offsetof(exLayerMng_t2539788712, ___dirtyLayers_10)); }
	inline List_1_t3749212503 * get_dirtyLayers_10() const { return ___dirtyLayers_10; }
	inline List_1_t3749212503 ** get_address_of_dirtyLayers_10() { return &___dirtyLayers_10; }
	inline void set_dirtyLayers_10(List_1_t3749212503 * value)
	{
		___dirtyLayers_10 = value;
		Il2CppCodeGenWriteBarrier(&___dirtyLayers_10, value);
	}

	inline static int32_t get_offset_of_updateAll_11() { return static_cast<int32_t>(offsetof(exLayerMng_t2539788712, ___updateAll_11)); }
	inline bool get_updateAll_11() const { return ___updateAll_11; }
	inline bool* get_address_of_updateAll_11() { return &___updateAll_11; }
	inline void set_updateAll_11(bool value)
	{
		___updateAll_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
