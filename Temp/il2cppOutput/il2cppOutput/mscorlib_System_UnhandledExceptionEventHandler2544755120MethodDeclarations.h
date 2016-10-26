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

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2544755120;
// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3134093121;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3134093121.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnhandledExceptionEventHandler__ctor_m2560140041 (UnhandledExceptionEventHandler_t2544755120 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m689053609 (UnhandledExceptionEventHandler_t2544755120 * __this, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3134093121 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnhandledExceptionEventHandler_BeginInvoke_m4281537936 (UnhandledExceptionEventHandler_t2544755120 * __this, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3134093121 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnhandledExceptionEventHandler_EndInvoke_m2562785689 (UnhandledExceptionEventHandler_t2544755120 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
