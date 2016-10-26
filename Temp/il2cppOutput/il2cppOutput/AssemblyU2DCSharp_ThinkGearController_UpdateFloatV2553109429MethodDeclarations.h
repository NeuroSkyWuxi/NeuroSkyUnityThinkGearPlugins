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

// ThinkGearController/UpdateFloatValueDelegate
struct UpdateFloatValueDelegate_t2553109429;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void ThinkGearController/UpdateFloatValueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateFloatValueDelegate__ctor_m1328555484 (UpdateFloatValueDelegate_t2553109429 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThinkGearController/UpdateFloatValueDelegate::Invoke(System.Single)
extern "C"  void UpdateFloatValueDelegate_Invoke_m2469805109 (UpdateFloatValueDelegate_t2553109429 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ThinkGearController/UpdateFloatValueDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateFloatValueDelegate_BeginInvoke_m2536166600 (UpdateFloatValueDelegate_t2553109429 * __this, float ___value0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThinkGearController/UpdateFloatValueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateFloatValueDelegate_EndInvoke_m3780699628 (UpdateFloatValueDelegate_t2553109429 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
