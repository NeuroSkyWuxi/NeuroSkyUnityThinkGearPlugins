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

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1905997204;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3097904804;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg3097904804.h"

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  void MACAlgorithm__ctor_m1891225170 (MACAlgorithm_t1905997204 * __this, SymmetricAlgorithm_t3097904804 * ___algorithm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C"  void MACAlgorithm_Initialize_m3361709802 (MACAlgorithm_t1905997204 * __this, ByteU5BU5D_t4260760469* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C"  void MACAlgorithm_Core_m3581743643 (MACAlgorithm_t1905997204 * __this, ByteU5BU5D_t4260760469* ___rgb0, int32_t ___ib1, int32_t ___cb2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C"  ByteU5BU5D_t4260760469* MACAlgorithm_Final_m1570388531 (MACAlgorithm_t1905997204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
