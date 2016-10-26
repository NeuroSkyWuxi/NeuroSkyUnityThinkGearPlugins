#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t373726640  : public Il2CppObject
{
public:

public:
};

struct KeyBuilder_t373726640_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t1757673517 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t373726640_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t1757673517 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t1757673517 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t1757673517 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier(&___rng_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
