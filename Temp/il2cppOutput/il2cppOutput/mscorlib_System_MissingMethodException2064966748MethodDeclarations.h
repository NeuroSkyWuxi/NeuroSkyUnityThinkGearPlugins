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

// System.MissingMethodException
struct MissingMethodException_t2064966748;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.MissingMethodException::.ctor()
extern "C"  void MissingMethodException__ctor_m3114227021 (MissingMethodException_t2064966748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
extern "C"  void MissingMethodException__ctor_m2328497877 (MissingMethodException_t2064966748 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMethodException__ctor_m2372430094 (MissingMethodException_t2064966748 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern "C"  void MissingMethodException__ctor_m3038912081 (MissingMethodException_t2064966748 * __this, String_t* ___className0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
extern "C"  String_t* MissingMethodException_get_Message_m3701364460 (MissingMethodException_t2064966748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
