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

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1462580491;
// System.Object
struct Il2CppObject;
// System.Delegate
struct Delegate_t3310234105;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern "C"  void AddEventAdapter__ctor_m2445699769 (AddEventAdapter_t1462580491 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern "C"  void AddEventAdapter_Invoke_m4107836009 (AddEventAdapter_t1462580491 * __this, Il2CppObject * ____this0, Delegate_t3310234105 * ___dele1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AddEventAdapter_BeginInvoke_m2800012162 (AddEventAdapter_t1462580491 * __this, Il2CppObject * ____this0, Delegate_t3310234105 * ___dele1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern "C"  void AddEventAdapter_EndInvoke_m3991281993 (AddEventAdapter_t1462580491 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
