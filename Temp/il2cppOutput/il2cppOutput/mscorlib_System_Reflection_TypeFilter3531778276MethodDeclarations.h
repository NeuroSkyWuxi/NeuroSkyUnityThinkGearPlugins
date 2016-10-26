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

// System.Reflection.TypeFilter
struct TypeFilter_t3531778276;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void TypeFilter__ctor_m3304815558 (TypeFilter_t3531778276 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C"  bool TypeFilter_Invoke_m3691842469 (TypeFilter_t3531778276 * __this, Type_t * ___m0, Il2CppObject * ___filterCriteria1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * TypeFilter_BeginInvoke_m1184564418 (TypeFilter_t3531778276 * __this, Type_t * ___m0, Il2CppObject * ___filterCriteria1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool TypeFilter_EndInvoke_m3571376344 (TypeFilter_t3531778276 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
