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

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3394555856;
// System.Object
struct Il2CppObject;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t3197844769;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AssemblyLoadEventArgs3197844769.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AssemblyLoadEventHandler__ctor_m1325133929 (AssemblyLoadEventHandler_t3394555856 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C"  void AssemblyLoadEventHandler_Invoke_m2285851689 (AssemblyLoadEventHandler_t3394555856 * __this, Il2CppObject * ___sender0, AssemblyLoadEventArgs_t3197844769 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AssemblyLoadEventHandler_BeginInvoke_m812195344 (AssemblyLoadEventHandler_t3394555856 * __this, Il2CppObject * ___sender0, AssemblyLoadEventArgs_t3197844769 * ___args1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AssemblyLoadEventHandler_EndInvoke_m1285684985 (AssemblyLoadEventHandler_t3394555856 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
