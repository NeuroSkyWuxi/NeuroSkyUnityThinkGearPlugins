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

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t3340193230;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IComparer
struct IComparer_t4034294160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void ReadOnlyArrayListWrapper__ctor_m471776423 (ReadOnlyArrayListWrapper_t3340193230 * __this, ArrayList_t3948406897 * ___innerArrayList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
extern "C"  String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m1411886211 (ReadOnlyArrayListWrapper_t3340193230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
extern "C"  bool ReadOnlyArrayListWrapper_get_IsReadOnly_m2940664529 (ReadOnlyArrayListWrapper_t3340193230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
extern "C"  Il2CppObject * ReadOnlyArrayListWrapper_get_Item_m1660065334 (ReadOnlyArrayListWrapper_t3340193230 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void ReadOnlyArrayListWrapper_set_Item_m1186907789 (ReadOnlyArrayListWrapper_t3340193230 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
extern "C"  void ReadOnlyArrayListWrapper_Sort_m749027708 (ReadOnlyArrayListWrapper_t3340193230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void ReadOnlyArrayListWrapper_Sort_m480650942 (ReadOnlyArrayListWrapper_t3340193230 * __this, Il2CppObject * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
