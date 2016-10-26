#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.OperatingSystem
struct OperatingSystem_t1654038694;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t4152990825  : public Il2CppObject
{
public:

public:
};

struct Environment_t4152990825_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t1654038694 * ___os_0;

public:
	inline static int32_t get_offset_of_os_0() { return static_cast<int32_t>(offsetof(Environment_t4152990825_StaticFields, ___os_0)); }
	inline OperatingSystem_t1654038694 * get_os_0() const { return ___os_0; }
	inline OperatingSystem_t1654038694 ** get_address_of_os_0() { return &___os_0; }
	inline void set_os_0(OperatingSystem_t1654038694 * value)
	{
		___os_0 = value;
		Il2CppCodeGenWriteBarrier(&___os_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
