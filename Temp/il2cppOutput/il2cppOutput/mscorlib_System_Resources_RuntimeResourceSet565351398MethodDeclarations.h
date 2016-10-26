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

// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t565351398;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t3670693477;
// System.IO.Stream
struct Stream_t1561764144;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_UnmanagedMemoryStream3670693477.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C"  void RuntimeResourceSet__ctor_m1041659876 (RuntimeResourceSet_t565351398 * __this, UnmanagedMemoryStream_t3670693477 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.IO.Stream)
extern "C"  void RuntimeResourceSet__ctor_m3373926439 (RuntimeResourceSet_t565351398 * __this, Stream_t1561764144 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.RuntimeResourceSet::.ctor(System.String)
extern "C"  void RuntimeResourceSet__ctor_m1737082738 (RuntimeResourceSet_t565351398 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String)
extern "C"  Il2CppObject * RuntimeResourceSet_GetObject_m167723114 (RuntimeResourceSet_t565351398 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::GetObject(System.String,System.Boolean)
extern "C"  Il2CppObject * RuntimeResourceSet_GetObject_m3242127827 (RuntimeResourceSet_t565351398 * __this, String_t* ___name0, bool ___ignoreCase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.RuntimeResourceSet::CloneDisposableObjectIfPossible(System.Object)
extern "C"  Il2CppObject * RuntimeResourceSet_CloneDisposableObjectIfPossible_m1308606215 (RuntimeResourceSet_t565351398 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
