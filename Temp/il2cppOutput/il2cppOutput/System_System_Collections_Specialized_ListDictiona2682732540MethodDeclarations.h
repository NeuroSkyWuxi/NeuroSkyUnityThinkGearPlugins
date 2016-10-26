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

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t2682732540;
// System.Collections.IComparer
struct IComparer_t4034294160;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2044266038;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Collections_Specialized_ListDictiona2044266038.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C"  void ListDictionary__ctor_m1342781113 (ListDictionary_t2682732540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C"  void ListDictionary__ctor_m1799491195 (ListDictionary_t2682732540 * __this, Il2CppObject * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m3647053798 (ListDictionary_t2682732540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C"  DictionaryNode_t2044266038 * ListDictionary_FindEntry_m2277169595 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C"  DictionaryNode_t2044266038 * ListDictionary_FindEntry_m831100599 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, DictionaryNode_t2044266038 ** ___prev1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C"  void ListDictionary_AddImpl_m2933606886 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, DictionaryNode_t2044266038 * ___prev2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C"  int32_t ListDictionary_get_Count_m3433674349 (ListDictionary_t2682732540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C"  Il2CppObject * ListDictionary_get_SyncRoot_m1493803004 (ListDictionary_t2682732540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void ListDictionary_CopyTo_m1026734678 (ListDictionary_t2682732540 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C"  Il2CppObject * ListDictionary_get_Item_m151625826 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C"  void ListDictionary_set_Item_m588649799 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C"  void ListDictionary_Add_m1089190058 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C"  void ListDictionary_Clear_m3043881700 (ListDictionary_t2682732540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C"  Il2CppObject * ListDictionary_GetEnumerator_m2156198277 (ListDictionary_t2682732540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C"  void ListDictionary_Remove_m4061265285 (ListDictionary_t2682732540 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
