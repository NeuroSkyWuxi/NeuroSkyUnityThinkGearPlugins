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

// System.Security.Cryptography.DSASignatureFormatter
struct DSASignatureFormatter_t3693321770;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"

// System.Void System.Security.Cryptography.DSASignatureFormatter::.ctor()
extern "C"  void DSASignatureFormatter__ctor_m1468419489 (DSASignatureFormatter_t3693321770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSASignatureFormatter::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* DSASignatureFormatter_CreateSignature_m3786868856 (DSASignatureFormatter_t3693321770 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetHashAlgorithm(System.String)
extern "C"  void DSASignatureFormatter_SetHashAlgorithm_m976206784 (DSASignatureFormatter_t3693321770 * __this, String_t* ___strName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSASignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void DSASignatureFormatter_SetKey_m4110297114 (DSASignatureFormatter_t3693321770 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
