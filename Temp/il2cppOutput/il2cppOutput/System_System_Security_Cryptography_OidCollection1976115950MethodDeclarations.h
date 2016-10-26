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

// System.Security.Cryptography.OidCollection
struct OidCollection_t1976115950;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Security.Cryptography.Oid
struct Oid_t2466812144;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "System_System_Security_Cryptography_Oid2466812144.h"

// System.Void System.Security.Cryptography.OidCollection::.ctor()
extern "C"  void OidCollection__ctor_m3592497479 (OidCollection_t1976115950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void OidCollection_System_Collections_ICollection_CopyTo_m3200351709 (OidCollection_t1976115950 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * OidCollection_System_Collections_IEnumerable_GetEnumerator_m494890284 (OidCollection_t1976115950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern "C"  int32_t OidCollection_get_Count_m924395419 (OidCollection_t1976115950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern "C"  Oid_t2466812144 * OidCollection_get_Item_m1851824850 (OidCollection_t1976115950 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern "C"  Il2CppObject * OidCollection_get_SyncRoot_m887599928 (OidCollection_t1976115950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern "C"  int32_t OidCollection_Add_m1834548415 (OidCollection_t1976115950 * __this, Oid_t2466812144 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
