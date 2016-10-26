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

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t2979531601;
// System.Object
struct Il2CppObject;
// Mono.Math.BigInteger
struct BigInteger_t3334373498;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_Mono_Math_BigInteger3334373498.h"
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor3802548591.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C"  void PrimalityTest__ctor_m1169421875 (PrimalityTest_t2979531601 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C"  bool PrimalityTest_Invoke_m753416817 (PrimalityTest_t2979531601 * __this, BigInteger_t3334373498 * ___bi0, int32_t ___confidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PrimalityTest_BeginInvoke_m2556828168 (PrimalityTest_t2979531601 * __this, BigInteger_t3334373498 * ___bi0, int32_t ___confidence1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C"  bool PrimalityTest_EndInvoke_m1884117505 (PrimalityTest_t2979531601 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
