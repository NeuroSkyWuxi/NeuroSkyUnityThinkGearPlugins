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

// System.IO.FileSystemInfo
struct FileSystemInfo_t2605906633;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C"  void FileSystemInfo__ctor_m2002032720 (FileSystemInfo_t2605906633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo__ctor_m3151315345 (FileSystemInfo_t2605906633 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo_GetObjectData_m4060637166 (FileSystemInfo_t2605906633 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C"  String_t* FileSystemInfo_get_FullName_m2636706970 (FileSystemInfo_t2605906633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C"  void FileSystemInfo_Refresh_m2264948736 (FileSystemInfo_t2605906633 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C"  void FileSystemInfo_InternalRefresh_m567607052 (FileSystemInfo_t2605906633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C"  void FileSystemInfo_CheckPath_m1470264807 (FileSystemInfo_t2605906633 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
