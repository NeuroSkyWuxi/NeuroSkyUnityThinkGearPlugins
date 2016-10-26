#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_DateTimeOffset3884714306.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_TimeSpan413522987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3884714306 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t4283661327  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t413522987  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3884714306, ___dt_2)); }
	inline DateTime_t4283661327  get_dt_2() const { return ___dt_2; }
	inline DateTime_t4283661327 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t4283661327  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3884714306, ___utc_offset_3)); }
	inline TimeSpan_t413522987  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t413522987 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t413522987  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t3884714306_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3884714306  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3884714306  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3884714306_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t3884714306  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t3884714306 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t3884714306  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3884714306_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t3884714306  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t3884714306 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t3884714306  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
