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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2045888271;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t666883479;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2483180780;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3856534026;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t746493984;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21944668977.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3363211663.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3794638399_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3794638399(__this, method) ((  void (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2__ctor_m3794638399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m273898294_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m273898294(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m273898294_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2504582416_gshared (Dictionary_2_t2045888271 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m2504582416(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2045888271 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2504582416_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m597697773_gshared (Dictionary_2_t2045888271 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m597697773(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t2045888271 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m597697773_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m4162067200_gshared (Dictionary_2_t2045888271 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m4162067200(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2045888271 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m4162067200_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1551250025_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1551250025(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1551250025_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1049066318_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1049066318(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1049066318_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m781609539_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m781609539(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m781609539_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2215006604_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2215006604(__this, ___key0, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2215006604_gshared)(__this, ___key0, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2075478797_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2075478797(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2075478797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1433083365_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1433083365(__this, method) ((  bool (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1433083365_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3257059362_gshared (Dictionary_2_t2045888271 * __this, KeyValuePair_2_t1944668977  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3257059362(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2045888271 *, KeyValuePair_2_t1944668977 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3257059362_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2744049760_gshared (Dictionary_2_t2045888271 * __this, KeyValuePair_2_t1944668977  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2744049760(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2045888271 *, KeyValuePair_2_t1944668977 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2744049760_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2008986502_gshared (Dictionary_2_t2045888271 * __this, KeyValuePair_2U5BU5D_t2483180780* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2008986502(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2045888271 *, KeyValuePair_2U5BU5D_t2483180780*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2008986502_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2350489477_gshared (Dictionary_2_t2045888271 * __this, KeyValuePair_2_t1944668977  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2350489477(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2045888271 *, KeyValuePair_2_t1944668977 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2350489477_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3550803941_gshared (Dictionary_2_t2045888271 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3550803941(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3550803941_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4115711264_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4115711264(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4115711264_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52259357_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52259357(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52259357_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1395730616_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1395730616(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1395730616_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1232250407_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1232250407(__this, method) ((  int32_t (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_get_Count_m1232250407_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m2285357284_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2285357284(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2285357284_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2627891647_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2627891647(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m2627891647_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2966484407_gshared (Dictionary_2_t2045888271 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2966484407(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2045888271 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2966484407_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2119297760_gshared (Dictionary_2_t2045888271 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2119297760(__this, ___size0, method) ((  void (*) (Dictionary_2_t2045888271 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2119297760_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2536521436_gshared (Dictionary_2_t2045888271 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2536521436(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2536521436_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1944668977  Dictionary_2_make_pair_m2083407400_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2083407400(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1944668977  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2083407400_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3477594126_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m3477594126(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3477594126_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3401241971_gshared (Dictionary_2_t2045888271 * __this, KeyValuePair_2U5BU5D_t2483180780* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3401241971(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2045888271 *, KeyValuePair_2U5BU5D_t2483180780*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3401241971_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1727470041_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1727470041(__this, method) ((  void (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_Resize_m1727470041_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3537188182_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3537188182(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3537188182_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1200771690_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1200771690(__this, method) ((  void (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_Clear_m1200771690_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3006991056_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3006991056(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3006991056_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m712275664_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m712275664(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m712275664_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1544184413_gshared (Dictionary_2_t2045888271 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1544184413(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2045888271 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m1544184413_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1638301735_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1638301735(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1638301735_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2155719712_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2155719712(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2155719712_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2075628329_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2075628329(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2045888271 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m2075628329_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t746493984 * Dictionary_2_get_Values_m2070602102_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2070602102(__this, method) ((  ValueCollection_t746493984 * (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_get_Values_m2070602102_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3358952489_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3358952489(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3358952489_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1789908265_gshared (Dictionary_2_t2045888271 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1789908265(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t2045888271 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1789908265_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3073235459_gshared (Dictionary_2_t2045888271 * __this, KeyValuePair_2_t1944668977  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3073235459(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2045888271 *, KeyValuePair_2_t1944668977 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3073235459_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3363211663  Dictionary_2_GetEnumerator_m65675076_gshared (Dictionary_2_t2045888271 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m65675076(__this, method) ((  Enumerator_t3363211663  (*) (Dictionary_2_t2045888271 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65675076_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m3818730131_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3818730131(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3818730131_gshared)(__this /* static, unused */, ___key0, ___value1, method)
