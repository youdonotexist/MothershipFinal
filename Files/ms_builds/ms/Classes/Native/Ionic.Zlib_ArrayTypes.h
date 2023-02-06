#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Ionic.Zlib.WorkItem
struct WorkItem_t2657194833;
// Ionic.Zlib.DeflateManager/Config
struct Config_t2024042338;

#include "mscorlib_System_Array2840145358.h"
#include "Ionic_Zlib_Ionic_Zlib_WorkItem2657194833.h"
#include "Ionic_Zlib_Ionic_Zlib_DeflateManager_Config2024042338.h"

#pragma once
// Ionic.Zlib.WorkItem[]
struct WorkItemU5BU5D_t4123805772  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) WorkItem_t2657194833 * m_Items[1];

public:
	inline WorkItem_t2657194833 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WorkItem_t2657194833 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WorkItem_t2657194833 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_t3235597527  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Config_t2024042338 * m_Items[1];

public:
	inline Config_t2024042338 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Config_t2024042338 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Config_t2024042338 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
