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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t617688751;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientCertificate__ctor_m1023162040 (TlsClientCertificate_t617688751 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C"  X509Certificate_t3076817455 * TlsClientCertificate_get_ClientCertificate_m681521287 (TlsClientCertificate_t617688751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C"  void TlsClientCertificate_Update_m3395913260 (TlsClientCertificate_t617688751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern "C"  void TlsClientCertificate_GetClientCertificate_m468855481 (TlsClientCertificate_t617688751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern "C"  void TlsClientCertificate_SendCertificates_m1671707015 (TlsClientCertificate_t617688751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C"  void TlsClientCertificate_ProcessAsSsl3_m2390374503 (TlsClientCertificate_t617688751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C"  void TlsClientCertificate_ProcessAsTls1_m2412745622 (TlsClientCertificate_t617688751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  X509Certificate_t3076817455 * TlsClientCertificate_FindParentCertificate_m4055579138 (TlsClientCertificate_t617688751 * __this, X509Certificate_t3076817455 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
