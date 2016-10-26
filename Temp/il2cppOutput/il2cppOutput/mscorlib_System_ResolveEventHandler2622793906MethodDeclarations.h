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

// System.ResolveEventHandler
struct ResolveEventHandler_t2622793906;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.ResolveEventArgs
struct ResolveEventArgs_t2349522815;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_ResolveEventArgs2349522815.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ResolveEventHandler__ctor_m2424315661 (ResolveEventHandler_t2622793906 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Assembly_t1418687608 * ResolveEventHandler_Invoke_m4207713166 (ResolveEventHandler_t2622793906 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t2349522815 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResolveEventHandler_BeginInvoke_m1625165996 (ResolveEventHandler_t2622793906 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t2349522815 * ___args1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Assembly_t1418687608 * ResolveEventHandler_EndInvoke_m3051650750 (ResolveEventHandler_t2622793906 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
