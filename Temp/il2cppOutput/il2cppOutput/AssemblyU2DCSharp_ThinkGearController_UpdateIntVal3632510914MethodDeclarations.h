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

// ThinkGearController/UpdateIntValueDelegate
struct UpdateIntValueDelegate_t3632510914;
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

// System.Void ThinkGearController/UpdateIntValueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateIntValueDelegate__ctor_m806017385 (UpdateIntValueDelegate_t3632510914 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThinkGearController/UpdateIntValueDelegate::Invoke(System.Int32)
extern "C"  void UpdateIntValueDelegate_Invoke_m329531348 (UpdateIntValueDelegate_t3632510914 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ThinkGearController/UpdateIntValueDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateIntValueDelegate_BeginInvoke_m3632565837 (UpdateIntValueDelegate_t3632510914 * __this, int32_t ___value0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThinkGearController/UpdateIntValueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateIntValueDelegate_EndInvoke_m3549259769 (UpdateIntValueDelegate_t3632510914 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
