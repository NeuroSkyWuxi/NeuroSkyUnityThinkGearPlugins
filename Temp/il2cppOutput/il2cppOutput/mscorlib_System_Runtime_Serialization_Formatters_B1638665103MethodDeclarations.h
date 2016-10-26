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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1638665103;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t2137423328;
// System.Object
struct Il2CppObject;
// System.IO.Stream
struct Stream_t1561764144;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t53887223;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3005881063.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_T1936244052.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHan53887223.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C"  void BinaryFormatter__ctor_m1913171908 (BinaryFormatter_t1638665103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void BinaryFormatter__ctor_m203421689 (BinaryFormatter_t1638665103 * __this, Il2CppObject * ___selector0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_DefaultSurrogateSelector_m2270608689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C"  void BinaryFormatter_set_AssemblyFormat_m2535395303 (BinaryFormatter_t1638665103 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C"  SerializationBinder_t2137423328 * BinaryFormatter_get_Binder_m2433428471 (BinaryFormatter_t1638665103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C"  StreamingContext_t2761351129  BinaryFormatter_get_Context_m888837013 (BinaryFormatter_t1638665103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C"  Il2CppObject * BinaryFormatter_get_SurrogateSelector_m862097470 (BinaryFormatter_t1638665103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C"  int32_t BinaryFormatter_get_FilterLevel_m123523474 (BinaryFormatter_t1638665103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C"  Il2CppObject * BinaryFormatter_Deserialize_m3942088227 (BinaryFormatter_t1638665103 * __this, Stream_t1561764144 * ___serializationStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern "C"  Il2CppObject * BinaryFormatter_NoCheckDeserialize_m2451994899 (BinaryFormatter_t1638665103 * __this, Stream_t1561764144 * ___serializationStream0, HeaderHandler_t53887223 * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C"  void BinaryFormatter_ReadBinaryHeader_m258242310 (BinaryFormatter_t1638665103 * __this, BinaryReader_t3990958868 * ___reader0, bool* ___hasHeaders1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
