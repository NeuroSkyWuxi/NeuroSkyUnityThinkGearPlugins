#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Security_Cryptography_HashAlgorithm532578791.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t1039941647  : public HashAlgorithm_t532578791
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t4260760469* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t1039941647, ___KeyValue_4)); }
	inline ByteU5BU5D_t4260760469* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t4260760469** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t4260760469* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___KeyValue_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
