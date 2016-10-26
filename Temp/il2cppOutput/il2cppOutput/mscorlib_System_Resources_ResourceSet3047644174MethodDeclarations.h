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

// System.Resources.ResourceSet
struct ResourceSet_t3047644174;
// System.IO.Stream
struct Stream_t1561764144;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t3670693477;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream3670693477.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C"  void ResourceSet__ctor_m2155833766 (ResourceSet_t3047644174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C"  void ResourceSet__ctor_m1435739197 (ResourceSet_t3047644174 * __this, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C"  void ResourceSet__ctor_m1446669582 (ResourceSet_t3047644174 * __this, UnmanagedMemoryStream_t3670693477 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C"  void ResourceSet__ctor_m3385168668 (ResourceSet_t3047644174 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m2370128345 (ResourceSet_t3047644174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C"  void ResourceSet_Dispose_m1480295523 (ResourceSet_t3047644174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C"  void ResourceSet_Dispose_m3120910490 (ResourceSet_t3047644174 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C"  Il2CppObject * ResourceSet_GetEnumerator_m1116109982 (ResourceSet_t3047644174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C"  Il2CppObject * ResourceSet_GetObjectInternal_m2208724156 (ResourceSet_t3047644174 * __this, String_t* ___name0, bool ___ignoreCase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C"  Il2CppObject * ResourceSet_GetObject_m543692318 (ResourceSet_t3047644174 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C"  Il2CppObject * ResourceSet_GetObject_m100760991 (ResourceSet_t3047644174 * __this, String_t* ___name0, bool ___ignoreCase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C"  void ResourceSet_ReadResources_m2589571379 (ResourceSet_t3047644174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
