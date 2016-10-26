#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t4004312584;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientCertificateVerify__ctor_m3006072319 (TlsClientCertificateVerify_t4004312584 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C"  void TlsClientCertificateVerify_Update_m1777063429 (TlsClientCertificateVerify_t4004312584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C"  void TlsClientCertificateVerify_ProcessAsSsl3_m1668289134 (TlsClientCertificateVerify_t4004312584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C"  void TlsClientCertificateVerify_ProcessAsTls1_m1690660253 (TlsClientCertificateVerify_t4004312584 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C"  RSA_t2466814310 * TlsClientCertificateVerify_getClientCertRSA_m3586152660 (TlsClientCertificateVerify_t4004312584 * __this, RSA_t2466814310 * ___privKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* TlsClientCertificateVerify_getUnsignedBigInteger_m1216540004 (TlsClientCertificateVerify_t4004312584 * __this, ByteU5BU5D_t4260760469* ___integer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
