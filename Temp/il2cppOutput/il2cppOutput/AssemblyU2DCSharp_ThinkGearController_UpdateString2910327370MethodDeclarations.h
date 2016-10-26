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

// ThinkGearController/UpdateStringValueDelegate
struct UpdateStringValueDelegate_t2910327370;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void ThinkGearController/UpdateStringValueDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdateStringValueDelegate__ctor_m1858864417 (UpdateStringValueDelegate_t2910327370 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThinkGearController/UpdateStringValueDelegate::Invoke(System.String)
extern "C"  void UpdateStringValueDelegate_Invoke_m4249259559 (UpdateStringValueDelegate_t2910327370 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ThinkGearController/UpdateStringValueDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UpdateStringValueDelegate_BeginInvoke_m3086430516 (UpdateStringValueDelegate_t2910327370 * __this, String_t* ___value0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThinkGearController/UpdateStringValueDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void UpdateStringValueDelegate_EndInvoke_m2036936625 (UpdateStringValueDelegate_t2910327370 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
