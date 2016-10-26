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

// System.IO.DirectoryInfo
struct DirectoryInfo_t89154617;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C"  void DirectoryInfo__ctor_m4029233824 (DirectoryInfo_t89154617 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C"  void DirectoryInfo__ctor_m2875622621 (DirectoryInfo_t89154617 * __this, String_t* ___path0, bool ___simpleOriginalPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DirectoryInfo__ctor_m944219619 (DirectoryInfo_t89154617 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C"  void DirectoryInfo_Initialize_m287338546 (DirectoryInfo_t89154617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C"  bool DirectoryInfo_get_Exists_m1761829637 (DirectoryInfo_t89154617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C"  DirectoryInfo_t89154617 * DirectoryInfo_get_Parent_m1129672180 (DirectoryInfo_t89154617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C"  void DirectoryInfo_Create_m153588510 (DirectoryInfo_t89154617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C"  String_t* DirectoryInfo_ToString_m2661500299 (DirectoryInfo_t89154617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
