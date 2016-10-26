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

// System.Reflection.MemberFilter
struct MemberFilter_t1019468612;
// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void MemberFilter__ctor_m1519003110 (MemberFilter_t1019468612 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C"  bool MemberFilter_Invoke_m1252503396 (MemberFilter_t1019468612 * __this, MemberInfo_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MemberFilter_BeginInvoke_m1668252761 (MemberFilter_t1019468612 * __this, MemberInfo_t * ___m0, Il2CppObject * ___filterCriteria1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool MemberFilter_EndInvoke_m3696206456 (MemberFilter_t1019468612 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
