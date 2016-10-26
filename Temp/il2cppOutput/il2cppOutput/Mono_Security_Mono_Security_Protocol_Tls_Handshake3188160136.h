#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t2297606589;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct  TlsServerCertificateRequest_t3188160136  : public HandshakeMessage_t2623608376
{
public:
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::certificateTypes
	ClientCertificateTypeU5BU5D_t2297606589* ___certificateTypes_9;
	// System.String[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::distinguisedNames
	StringU5BU5D_t4054002952* ___distinguisedNames_10;

public:
	inline static int32_t get_offset_of_certificateTypes_9() { return static_cast<int32_t>(offsetof(TlsServerCertificateRequest_t3188160136, ___certificateTypes_9)); }
	inline ClientCertificateTypeU5BU5D_t2297606589* get_certificateTypes_9() const { return ___certificateTypes_9; }
	inline ClientCertificateTypeU5BU5D_t2297606589** get_address_of_certificateTypes_9() { return &___certificateTypes_9; }
	inline void set_certificateTypes_9(ClientCertificateTypeU5BU5D_t2297606589* value)
	{
		___certificateTypes_9 = value;
		Il2CppCodeGenWriteBarrier(&___certificateTypes_9, value);
	}

	inline static int32_t get_offset_of_distinguisedNames_10() { return static_cast<int32_t>(offsetof(TlsServerCertificateRequest_t3188160136, ___distinguisedNames_10)); }
	inline StringU5BU5D_t4054002952* get_distinguisedNames_10() const { return ___distinguisedNames_10; }
	inline StringU5BU5D_t4054002952** get_address_of_distinguisedNames_10() { return &___distinguisedNames_10; }
	inline void set_distinguisedNames_10(StringU5BU5D_t4054002952* value)
	{
		___distinguisedNames_10 = value;
		Il2CppCodeGenWriteBarrier(&___distinguisedNames_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
