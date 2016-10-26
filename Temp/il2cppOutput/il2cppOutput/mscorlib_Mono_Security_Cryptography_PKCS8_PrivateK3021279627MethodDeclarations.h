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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t3021279627;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Security.Cryptography.DSA
struct DSA_t2466800856;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter3032565794.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C"  void PrivateKeyInfo__ctor_m4185878217 (PrivateKeyInfo_t3021279627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void PrivateKeyInfo__ctor_m2892013472 (PrivateKeyInfo_t3021279627 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C"  ByteU5BU5D_t4260760469* PrivateKeyInfo_get_PrivateKey_m941592214 (PrivateKeyInfo_t3021279627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C"  void PrivateKeyInfo_Decode_m2233548064 (PrivateKeyInfo_t3021279627 * __this, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* PrivateKeyInfo_RemoveLeadingZero_m599046126 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bigInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* PrivateKeyInfo_Normalize_m3904382092 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___bigInt0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C"  RSA_t2466814310 * PrivateKeyInfo_DecodeRSA_m1382613138 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___keypair0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C"  DSA_t2466800856 * PrivateKeyInfo_DecodeDSA_m1419148139 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___privateKey0, DSAParameters_t3032565794  ___dsaParameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
