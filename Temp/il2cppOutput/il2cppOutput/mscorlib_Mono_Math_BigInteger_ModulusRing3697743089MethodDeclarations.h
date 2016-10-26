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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3697743089;
// Mono.Math.BigInteger
struct BigInteger_t3334373498;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger3334373498.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C"  void ModulusRing__ctor_m2714405032 (ModulusRing_t3697743089 * __this, BigInteger_t3334373498 * ___modulus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C"  void ModulusRing_BarrettReduction_m2942755287 (ModulusRing_t3697743089 * __this, BigInteger_t3334373498 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373498 * ModulusRing_Multiply_m2973563789 (ModulusRing_t3697743089 * __this, BigInteger_t3334373498 * ___a0, BigInteger_t3334373498 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373498 * ModulusRing_Difference_m1446083540 (ModulusRing_t3697743089 * __this, BigInteger_t3334373498 * ___a0, BigInteger_t3334373498 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373498 * ModulusRing_Pow_m3873329921 (ModulusRing_t3697743089 * __this, BigInteger_t3334373498 * ___a0, BigInteger_t3334373498 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C"  BigInteger_t3334373498 * ModulusRing_Pow_m2579315160 (ModulusRing_t3697743089 * __this, uint32_t ___b0, BigInteger_t3334373498 * ___exp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
