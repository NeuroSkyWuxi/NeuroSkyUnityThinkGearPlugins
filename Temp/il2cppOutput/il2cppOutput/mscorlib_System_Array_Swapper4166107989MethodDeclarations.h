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

// System.Array/Swapper
struct Swapper_t4166107989;
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

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
extern "C"  void Swapper__ctor_m1046757893 (Swapper_t4166107989 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
extern "C"  void Swapper_Invoke_m3507571047 (Swapper_t4166107989 * __this, int32_t ___i0, int32_t ___j1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Swapper_BeginInvoke_m3139859620 (Swapper_t4166107989 * __this, int32_t ___i0, int32_t ___j1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
extern "C"  void Swapper_EndInvoke_m843808405 (Swapper_t4166107989 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
