#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t646701464;

#include "mscorlib_System_Array2840145358.h"
#include "System_Configuration_System_Configuration_Configura646701464.h"

#pragma once
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t1826368777  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ConfigurationProperty_t646701464 * m_Items[1];

public:
	inline ConfigurationProperty_t646701464 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ConfigurationProperty_t646701464 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ConfigurationProperty_t646701464 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
