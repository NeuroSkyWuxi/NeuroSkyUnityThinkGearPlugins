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

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3352473782;
// System.Delegate
struct Delegate_t3310234105;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Delegate3310234105.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C"  void DelegateEntry__ctor_m2030858126 (DelegateEntry_t3352473782 * __this, Delegate_t3310234105 * ___del0, String_t* ___targetLabel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C"  Delegate_t3310234105 * DelegateEntry_DeserializeDelegate_m151701220 (DelegateEntry_t3352473782 * __this, SerializationInfo_t2185721892 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
