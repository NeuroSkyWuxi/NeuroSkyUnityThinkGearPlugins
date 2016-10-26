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

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t4235433105;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C"  void X509CertificateCollection__ctor_m2517521230 (X509CertificateCollection_t4135795358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509CertificateCollection__ctor_m1273937252 (X509CertificateCollection_t4135795358 * __this, X509CertificateCollection_t4135795358 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m4286050429 (X509CertificateCollection_t4135795358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C"  X509Certificate_t1623369440 * X509CertificateCollection_get_Item_m1107000690 (X509CertificateCollection_t4135795358 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C"  int32_t X509CertificateCollection_Add_m1585739833 (X509CertificateCollection_t4135795358 * __this, X509Certificate_t1623369440 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509CertificateCollection_AddRange_m2353463272 (X509CertificateCollection_t4135795358 * __this, X509CertificateCollection_t4135795358 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C"  bool X509CertificateCollection_Contains_m1747801975 (X509CertificateCollection_t4135795358 * __this, X509Certificate_t1623369440 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C"  X509CertificateEnumerator_t4235433105 * X509CertificateCollection_GetEnumerator_m2226643995 (X509CertificateCollection_t4135795358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C"  int32_t X509CertificateCollection_GetHashCode_m2363682709 (X509CertificateCollection_t4135795358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C"  int32_t X509CertificateCollection_IndexOf_m2746488929 (X509CertificateCollection_t4135795358 * __this, X509Certificate_t1623369440 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C"  void X509CertificateCollection_Remove_m2746334158 (X509CertificateCollection_t4135795358 * __this, X509Certificate_t1623369440 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509CertificateCollection_Compare_m1507319785 (X509CertificateCollection_t4135795358 * __this, ByteU5BU5D_t4260760469* ___array10, ByteU5BU5D_t4260760469* ___array21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
