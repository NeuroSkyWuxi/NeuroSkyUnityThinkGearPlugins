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

// System.AppDomainInitializer
struct AppDomainInitializer_t691583313;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C"  void AppDomainInitializer__ctor_m1326333162 (AppDomainInitializer_t691583313 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C"  void AppDomainInitializer_Invoke_m1655649116 (AppDomainInitializer_t691583313 * __this, StringU5BU5D_t4054002952* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AppDomainInitializer_BeginInvoke_m1784264109 (AppDomainInitializer_t691583313 * __this, StringU5BU5D_t4054002952* ___args0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C"  void AppDomainInitializer_EndInvoke_m4178097146 (AppDomainInitializer_t691583313 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
