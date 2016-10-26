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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1111884825;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t676713451;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t160474609;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1127032377;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1692475439;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1801824625;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t3222473765;
// Mono.Security.X509.X509Extension
struct X509Extension_t4211806920;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t503881240;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificate160474609.h"
#include "System_System_Security_Cryptography_X509Certificat2303373610.h"
#include "System_System_Security_Cryptography_X509Certificat1692475439.h"
#include "System_System_Security_Cryptography_X509Certificat1801824625.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "Mono_Security_Mono_Security_X509_X509Crl3222473765.h"
#include "Mono_Security_Mono_Security_X509_X509Extension4211806919.h"
#include "Mono_Security_Mono_Security_X509_X509Crl_X509CrlEnt503881240.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m440780008 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C"  void X509Chain__ctor_m2887631967 (X509Chain_t1111884825 * __this, bool ___useMachineContext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C"  void X509Chain__cctor_m297182149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C"  X509ChainPolicy_t676713451 * X509Chain_get_ChainPolicy_m3141824143 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_Build_m417178512 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m2382180245 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C"  X509Store_t1127032377 * X509Chain_get_Roots_m4101675455 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C"  X509Store_t1127032377 * X509Chain_get_CertificateAuthorities_m1238271486 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C"  X509Certificate2Collection_t1692475439 * X509Chain_get_CertificateCollection_m1393875737 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  int32_t X509Chain_BuildChainFrom_m2777021523 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  X509Certificate2_t160474609 * X509Chain_SelectBestFromCollection_m3232085257 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___child0, X509Certificate2Collection_t1692475439 * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Certificate2_t160474609 * X509Chain_FindParent_m2812194464 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsChainComplete_m3441936754 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsSelfIssued_m397924845 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_ValidateChain_m976559422 (X509Chain_t1111884825 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C"  void X509Chain_Process_m940730694 (X509Chain_t1111884825 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C"  void X509Chain_PrepareForNextCertificate_m2507052121 (X509Chain_t1111884825 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C"  void X509Chain_WrapUp_m3398853601 (X509Chain_t1111884825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C"  void X509Chain_ProcessCertificateExtensions_m1491797822 (X509Chain_t1111884825 * __this, X509ChainElement_t1801824625 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Chain_IsSignedWith_m1198520936 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___signed0, AsymmetricAlgorithm_t1241690687 * ___pubkey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetSubjectKeyIdentifier_m2141872961 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m3460155146 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m3802915794 (X509Chain_t1111884825 * __this, X509Crl_t3222473765 * ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m1262096688 (X509Chain_t1111884825 * __this, X509Extension_t4211806920 * ___ext0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_CheckRevocationOnChain_m1059846149 (X509Chain_t1111884825 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m2952361444 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, int32_t ___ca1, bool ___online2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m1219092751 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___certificate0, X509Certificate2_t160474609 * ___ca_cert1, bool ___online2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Crl_t3222473765 * X509Chain_FindCrl_m1761802781 (X509Chain_t1111884825 * __this, X509Certificate2_t160474609 * ___caCertificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C"  bool X509Chain_ProcessCrlExtensions_m3347968374 (X509Chain_t1111884825 * __this, X509Crl_t3222473765 * ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C"  bool X509Chain_ProcessCrlEntryExtensions_m4212088422 (X509Chain_t1111884825 * __this, X509CrlEntry_t503881240 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
