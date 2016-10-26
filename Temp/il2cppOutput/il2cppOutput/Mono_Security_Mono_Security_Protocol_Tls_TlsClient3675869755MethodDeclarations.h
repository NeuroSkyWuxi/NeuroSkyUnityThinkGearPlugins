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

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t3675869755;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C"  void TlsClientSettings__ctor_m929581301 (TlsClientSettings_t3675869755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C"  String_t* TlsClientSettings_get_TargetHost_m4152838452 (TlsClientSettings_t3675869755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C"  void TlsClientSettings_set_TargetHost_m2074298781 (TlsClientSettings_t3675869755 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C"  X509CertificateCollection_t3220522733 * TlsClientSettings_get_Certificates_m3576351313 (TlsClientSettings_t3675869755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void TlsClientSettings_set_Certificates_m2196533972 (TlsClientSettings_t3675869755 * __this, X509CertificateCollection_t3220522733 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C"  X509Certificate_t3076817455 * TlsClientSettings_get_ClientCertificate_m1621563643 (TlsClientSettings_t3675869755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void TlsClientSettings_set_ClientCertificate_m1801603000 (TlsClientSettings_t3675869755 * __this, X509Certificate_t3076817455 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C"  void TlsClientSettings_UpdateCertificateRSA_m715783041 (TlsClientSettings_t3675869755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
