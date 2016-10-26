#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.WeakReference
struct WeakReference_t2199479497;

#include "mscorlib_System_Runtime_Remoting_Identity3943038460.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t2516200039  : public Identity_t3943038460
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t2199479497 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t2516200039, ____proxyReference_7)); }
	inline WeakReference_t2199479497 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t2199479497 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t2199479497 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier(&____proxyReference_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
