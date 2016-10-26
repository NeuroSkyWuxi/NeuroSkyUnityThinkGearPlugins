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

// Mono.Security.X509.X509Crl
struct X509Crl_t3222473765;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3703825542;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t503881240;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// System.Security.Cryptography.DSA
struct DSA_t2466800856;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"
#include "mscorlib_System_Security_Cryptography_DSA2466800856.h"
#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C"  void X509Crl__ctor_m1270803331 (X509Crl_t3222473765 * __this, ByteU5BU5D_t4260760469* ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C"  void X509Crl_Parse_m3104051218 (X509Crl_t3222473765 * __this, ByteU5BU5D_t4260760469* ___crl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C"  X509ExtensionCollection_t3703825542 * X509Crl_get_Extensions_m2379703492 (X509Crl_t3222473765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C"  ByteU5BU5D_t4260760469* X509Crl_get_Hash_m2225876287 (X509Crl_t3222473765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C"  String_t* X509Crl_get_IssuerName_m3020541034 (X509Crl_t3222473765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C"  DateTime_t4283661327  X509Crl_get_NextUpdate_m1145701656 (X509Crl_t3222473765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509Crl_Compare_m1588393905 (X509Crl_t3222473765 * __this, ByteU5BU5D_t4260760469* ___array10, ByteU5BU5D_t4260760469* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C"  X509CrlEntry_t503881240 * X509Crl_GetCrlEntry_m698190412 (X509Crl_t3222473765 * __this, X509Certificate_t1623369440 * ___x5090, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C"  X509CrlEntry_t503881240 * X509Crl_GetCrlEntry_m1555363125 (X509Crl_t3222473765 * __this, ByteU5BU5D_t4260760469* ___serialNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C"  String_t* X509Crl_GetHashName_m3316681040 (X509Crl_t3222473765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Crl_VerifySignature_m1549750422 (X509Crl_t3222473765 * __this, DSA_t2466800856 * ___dsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Crl_VerifySignature_m1550167496 (X509Crl_t3222473765 * __this, RSA_t2466814310 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Crl_VerifySignature_m4119089195 (X509Crl_t3222473765 * __this, AsymmetricAlgorithm_t1241690687 * ___aa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
