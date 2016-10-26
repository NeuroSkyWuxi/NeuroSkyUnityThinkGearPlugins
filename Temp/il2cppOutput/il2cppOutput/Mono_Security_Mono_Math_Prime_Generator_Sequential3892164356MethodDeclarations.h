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

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t3892164357;
// Mono.Math.BigInteger
struct BigInteger_t3334373499;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "Mono_Security_Mono_Math_BigInteger3334373498.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m3197013479 (SequentialSearchPrimeGeneratorBase_t3892164357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t3334373499 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m3042338792 (SequentialSearchPrimeGeneratorBase_t3892164357 * __this, int32_t ___bits0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t3334373499 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m2709469184 (SequentialSearchPrimeGeneratorBase_t3892164357 * __this, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t3334373499 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m3023274702 (SequentialSearchPrimeGeneratorBase_t3892164357 * __this, int32_t ___bits0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m3870219587 (SequentialSearchPrimeGeneratorBase_t3892164357 * __this, BigInteger_t3334373499 * ___bi0, Il2CppObject * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
