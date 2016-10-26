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

// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCallback__ctor_m1986959762 (AsyncCallback_t1369114871 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C"  void AsyncCallback_Invoke_m1752195575 (AsyncCallback_t1369114871 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncCallback_BeginInvoke_m363146458 (AsyncCallback_t1369114871 * __this, Il2CppObject * ___ar0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncCallback_EndInvoke_m2904663202 (AsyncCallback_t1369114871 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
