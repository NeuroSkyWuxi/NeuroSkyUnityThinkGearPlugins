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

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1714947841;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t207804771;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1757673517;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_Cryptography_DSAManaged_KeyG207804771.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter3032565794.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C"  void DSAManaged__ctor_m1342239545 (DSAManaged_t1714947841 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C"  void DSAManaged_add_KeyGenerated_m1677002343 (DSAManaged_t1714947841 * __this, KeyGeneratedEventHandler_t207804771 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C"  void DSAManaged_remove_KeyGenerated_m3864760974 (DSAManaged_t1714947841 * __this, KeyGeneratedEventHandler_t207804771 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C"  void DSAManaged_Finalize_m3333954938 (DSAManaged_t1714947841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C"  void DSAManaged_Generate_m1196580113 (DSAManaged_t1714947841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C"  void DSAManaged_GenerateKeyPair_m414103146 (DSAManaged_t1714947841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C"  void DSAManaged_add_m3640666386 (DSAManaged_t1714947841 * __this, ByteU5BU5D_t4260760469* ___a0, ByteU5BU5D_t4260760469* ___b1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C"  void DSAManaged_GenerateParams_m2842017800 (DSAManaged_t1714947841 * __this, int32_t ___keyLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C"  RandomNumberGenerator_t1757673517 * DSAManaged_get_Random_m1436172465 (DSAManaged_t1714947841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C"  int32_t DSAManaged_get_KeySize_m3299647161 (DSAManaged_t1714947841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C"  bool DSAManaged_get_PublicOnly_m2380856856 (DSAManaged_t1714947841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* DSAManaged_NormalizeArray_m2316124043 (DSAManaged_t1714947841 * __this, ByteU5BU5D_t4260760469* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t3032565794  DSAManaged_ExportParameters_m4217036623 (DSAManaged_t1714947841 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSAManaged_ImportParameters_m3610982722 (DSAManaged_t1714947841 * __this, DSAParameters_t3032565794  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* DSAManaged_CreateSignature_m2835018685 (DSAManaged_t1714947841 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSAManaged_VerifySignature_m2521906789 (DSAManaged_t1714947841 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, ByteU5BU5D_t4260760469* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C"  void DSAManaged_Dispose_m3450076380 (DSAManaged_t1714947841 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
