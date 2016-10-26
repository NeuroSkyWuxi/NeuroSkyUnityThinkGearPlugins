#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t1888974603  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t3948406897 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t1888974603, ___intervals_0)); }
	inline ArrayList_t3948406897 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t3948406897 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t3948406897 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier(&___intervals_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
