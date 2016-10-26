#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "mscorlib_System_Collections_Hashtable1407064410.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t860554494  : public Hashtable_t1407064410
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::host
	Hashtable_t1407064410 * ___host_13;

public:
	inline static int32_t get_offset_of_host_13() { return static_cast<int32_t>(offsetof(SyncHashtable_t860554494, ___host_13)); }
	inline Hashtable_t1407064410 * get_host_13() const { return ___host_13; }
	inline Hashtable_t1407064410 ** get_address_of_host_13() { return &___host_13; }
	inline void set_host_13(Hashtable_t1407064410 * value)
	{
		___host_13 = value;
		Il2CppCodeGenWriteBarrier(&___host_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
