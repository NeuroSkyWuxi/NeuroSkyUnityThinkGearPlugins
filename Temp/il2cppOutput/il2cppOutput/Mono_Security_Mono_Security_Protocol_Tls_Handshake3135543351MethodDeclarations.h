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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t3135543351;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerCertificate__ctor_m1168678195 (TlsServerCertificate_t3135543351 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C"  void TlsServerCertificate_Update_m193766836 (TlsServerCertificate_t3135543351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C"  void TlsServerCertificate_ProcessAsSsl3_m3288731615 (TlsServerCertificate_t3135543351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C"  void TlsServerCertificate_ProcessAsTls1_m3311102734 (TlsServerCertificate_t3135543351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsServerCertificate_checkCertificateUsage_m810534703 (TlsServerCertificate_t3135543351 * __this, X509Certificate_t1623369440 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerCertificate_validateCertificates_m3450033811 (TlsServerCertificate_t3135543351 * __this, X509CertificateCollection_t4135795358 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsServerCertificate_checkServerIdentity_m2567428742 (TlsServerCertificate_t3135543351 * __this, X509Certificate_t1623369440 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C"  bool TlsServerCertificate_checkDomainName_m205565698 (TlsServerCertificate_t3135543351 * __this, String_t* ___subjectName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C"  bool TlsServerCertificate_Match_m265784176 (Il2CppObject * __this /* static, unused */, String_t* ___hostname0, String_t* ___pattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
