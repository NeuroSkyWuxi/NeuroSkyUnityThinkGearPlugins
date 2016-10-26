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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1182884468;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2861953768;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Security.Cryptography.Oid
struct Oid_t2466812144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.DSA
struct DSA_t2466800856;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void PublicKey__ctor_m1299060097 (PublicKey_t1182884468 * __this, X509Certificate_t1623369440 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C"  AsnEncodedData_t2861953768 * PublicKey_get_EncodedKeyValue_m334858790 (PublicKey_t1182884468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C"  AsnEncodedData_t2861953768 * PublicKey_get_EncodedParameters_m3678410494 (PublicKey_t1182884468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C"  AsymmetricAlgorithm_t1241690687 * PublicKey_get_Key_m2294273754 (PublicKey_t1182884468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C"  Oid_t2466812144 * PublicKey_get_Oid_m100819764 (PublicKey_t1182884468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PublicKey_GetUnsignedBigInteger_m2731897515 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___integer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C"  DSA_t2466800856 * PublicKey_DecodeDSA_m2700844317 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rawPublicKey0, ByteU5BU5D_t4260760469* ___rawParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C"  RSA_t2466814310 * PublicKey_DecodeRSA_m3835708506 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rawPublicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
