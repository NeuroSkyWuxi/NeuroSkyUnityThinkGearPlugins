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

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2889700849;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_EventArgs2540831021.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyGeneratedEventHandler__ctor_m1163909473 (KeyGeneratedEventHandler_t2889700849 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C"  void KeyGeneratedEventHandler_Invoke_m3806097557 (KeyGeneratedEventHandler_t2889700849 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyGeneratedEventHandler_BeginInvoke_m222007324 (KeyGeneratedEventHandler_t2889700849 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void KeyGeneratedEventHandler_EndInvoke_m1234248689 (KeyGeneratedEventHandler_t2889700849 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
