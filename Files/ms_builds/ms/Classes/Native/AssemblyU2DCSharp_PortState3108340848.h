#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PortState/MinionTypeDetails[]
struct MinionTypeDetailsU5BU5D_t72434631;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_PortState_PortType793040763.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PortState
struct  PortState_t3108340848  : public Il2CppObject
{
public:
	// System.Int32 PortState::portIndex
	int32_t ___portIndex_0;
	// System.Boolean PortState::needUpdate
	bool ___needUpdate_1;
	// PortState/MinionTypeDetails[] PortState::details
	MinionTypeDetailsU5BU5D_t72434631* ___details_2;
	// PortState/PortType PortState::portType
	int32_t ___portType_3;
	// System.Int32 PortState::selectedType
	int32_t ___selectedType_4;
	// System.Single PortState::scrapCount
	float ___scrapCount_5;

public:
	inline static int32_t get_offset_of_portIndex_0() { return static_cast<int32_t>(offsetof(PortState_t3108340848, ___portIndex_0)); }
	inline int32_t get_portIndex_0() const { return ___portIndex_0; }
	inline int32_t* get_address_of_portIndex_0() { return &___portIndex_0; }
	inline void set_portIndex_0(int32_t value)
	{
		___portIndex_0 = value;
	}

	inline static int32_t get_offset_of_needUpdate_1() { return static_cast<int32_t>(offsetof(PortState_t3108340848, ___needUpdate_1)); }
	inline bool get_needUpdate_1() const { return ___needUpdate_1; }
	inline bool* get_address_of_needUpdate_1() { return &___needUpdate_1; }
	inline void set_needUpdate_1(bool value)
	{
		___needUpdate_1 = value;
	}

	inline static int32_t get_offset_of_details_2() { return static_cast<int32_t>(offsetof(PortState_t3108340848, ___details_2)); }
	inline MinionTypeDetailsU5BU5D_t72434631* get_details_2() const { return ___details_2; }
	inline MinionTypeDetailsU5BU5D_t72434631** get_address_of_details_2() { return &___details_2; }
	inline void set_details_2(MinionTypeDetailsU5BU5D_t72434631* value)
	{
		___details_2 = value;
		Il2CppCodeGenWriteBarrier(&___details_2, value);
	}

	inline static int32_t get_offset_of_portType_3() { return static_cast<int32_t>(offsetof(PortState_t3108340848, ___portType_3)); }
	inline int32_t get_portType_3() const { return ___portType_3; }
	inline int32_t* get_address_of_portType_3() { return &___portType_3; }
	inline void set_portType_3(int32_t value)
	{
		___portType_3 = value;
	}

	inline static int32_t get_offset_of_selectedType_4() { return static_cast<int32_t>(offsetof(PortState_t3108340848, ___selectedType_4)); }
	inline int32_t get_selectedType_4() const { return ___selectedType_4; }
	inline int32_t* get_address_of_selectedType_4() { return &___selectedType_4; }
	inline void set_selectedType_4(int32_t value)
	{
		___selectedType_4 = value;
	}

	inline static int32_t get_offset_of_scrapCount_5() { return static_cast<int32_t>(offsetof(PortState_t3108340848, ___scrapCount_5)); }
	inline float get_scrapCount_5() const { return ___scrapCount_5; }
	inline float* get_address_of_scrapCount_5() { return &___scrapCount_5; }
	inline void set_scrapCount_5(float value)
	{
		___scrapCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
