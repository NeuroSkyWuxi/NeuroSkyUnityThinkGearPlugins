#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Delegate
struct Delegate_t3310234105;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t2093474893  : public Il2CppObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t3310234105 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t2093474893, ____delegate_0)); }
	inline Delegate_t3310234105 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t3310234105 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t3310234105 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&____delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
