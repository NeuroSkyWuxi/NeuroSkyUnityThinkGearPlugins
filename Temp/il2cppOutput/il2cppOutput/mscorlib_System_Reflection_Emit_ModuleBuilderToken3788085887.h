#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t595214213;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t3788085887  : public Il2CppObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t595214213 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t3788085887, ___mb_0)); }
	inline ModuleBuilder_t595214213 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t595214213 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t595214213 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier(&___mb_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
