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

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t1684096907  : public Il2CppObject
{
public:

public:
};

struct TrackingServices_t1684096907_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t3948406897 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t1684096907_StaticFields, ____handlers_0)); }
	inline ArrayList_t3948406897 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t3948406897 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t3948406897 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier(&____handlers_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
