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

// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t3757876489;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor()
extern "C"  void DSASignatureDeformatter__ctor_m611619298 (DSASignatureDeformatter_t3757876489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter__ctor_m1067293596 (DSASignatureDeformatter_t3757876489 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureDeformatter_SetHashAlgorithm_m30772481 (DSASignatureDeformatter_t3757876489 * __this, String_t* ___strName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureDeformatter_SetKey_m2248380921 (DSASignatureDeformatter_t3757876489 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSASignatureDeformatter_VerifySignature_m909896559 (DSASignatureDeformatter_t3757876489 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, ByteU5BU5D_t4260760469* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
