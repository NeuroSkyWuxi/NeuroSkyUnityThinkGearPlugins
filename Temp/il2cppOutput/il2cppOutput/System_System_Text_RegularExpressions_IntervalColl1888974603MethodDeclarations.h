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

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t1888974603;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t1292950321;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval2482260685.h"
#include "System_System_Text_RegularExpressions_IntervalColl1292950321.h"
#include "System_System_Text_RegularExpressions_IntervalColl1888974603.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern "C"  void IntervalCollection__ctor_m1317729402 (IntervalCollection_t1888974603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern "C"  Interval_t2482260685  IntervalCollection_get_Item_m658194390 (IntervalCollection_t1888974603 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern "C"  void IntervalCollection_Add_m622937095 (IntervalCollection_t1888974603 * __this, Interval_t2482260685  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern "C"  void IntervalCollection_Normalize_m2061698533 (IntervalCollection_t1888974603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C"  IntervalCollection_t1888974603 * IntervalCollection_GetMetaCollection_m1423119555 (IntervalCollection_t1888974603 * __this, CostDelegate_t1292950321 * ___cost_del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C"  void IntervalCollection_Optimize_m2537418330 (IntervalCollection_t1888974603 * __this, int32_t ___begin0, int32_t ___end1, IntervalCollection_t1888974603 * ___meta2, CostDelegate_t1292950321 * ___cost_del3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C"  int32_t IntervalCollection_get_Count_m3146453934 (IntervalCollection_t1888974603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern "C"  Il2CppObject * IntervalCollection_get_SyncRoot_m165185947 (IntervalCollection_t1888974603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern "C"  void IntervalCollection_CopyTo_m1005574359 (IntervalCollection_t1888974603 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern "C"  Il2CppObject * IntervalCollection_GetEnumerator_m4242145148 (IntervalCollection_t1888974603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
