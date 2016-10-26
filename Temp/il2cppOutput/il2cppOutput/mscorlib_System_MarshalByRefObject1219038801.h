#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2542955999;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1219038801  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2542955999 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1219038801, ____identity_0)); }
	inline ServerIdentity_t2542955999 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2542955999 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2542955999 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier(&____identity_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
