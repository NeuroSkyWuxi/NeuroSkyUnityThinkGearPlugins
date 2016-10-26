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

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3219890992.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t1910642754  : public HandshakeMessage_t2623608376
{
public:
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t3219890992  ___rsaParams_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t4260760469* ___signedParams_10;

public:
	inline static int32_t get_offset_of_rsaParams_9() { return static_cast<int32_t>(offsetof(TlsServerKeyExchange_t1910642754, ___rsaParams_9)); }
	inline RSAParameters_t3219890992  get_rsaParams_9() const { return ___rsaParams_9; }
	inline RSAParameters_t3219890992 * get_address_of_rsaParams_9() { return &___rsaParams_9; }
	inline void set_rsaParams_9(RSAParameters_t3219890992  value)
	{
		___rsaParams_9 = value;
	}

	inline static int32_t get_offset_of_signedParams_10() { return static_cast<int32_t>(offsetof(TlsServerKeyExchange_t1910642754, ___signedParams_10)); }
	inline ByteU5BU5D_t4260760469* get_signedParams_10() const { return ___signedParams_10; }
	inline ByteU5BU5D_t4260760469** get_address_of_signedParams_10() { return &___signedParams_10; }
	inline void set_signedParams_10(ByteU5BU5D_t4260760469* value)
	{
		___signedParams_10 = value;
		Il2CppCodeGenWriteBarrier(&___signedParams_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
