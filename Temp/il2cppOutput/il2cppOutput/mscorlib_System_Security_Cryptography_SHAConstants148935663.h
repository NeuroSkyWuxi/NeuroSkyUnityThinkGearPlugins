#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t3230734560;
// System.UInt64[]
struct UInt64U5BU5D_t2173929509;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t148935663  : public Il2CppObject
{
public:

public:
};

struct SHAConstants_t148935663_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t3230734560* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t2173929509* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t148935663_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t3230734560* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t3230734560** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t3230734560* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier(&___K1_0, value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t148935663_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t2173929509* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t2173929509** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t2173929509* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier(&___K2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
