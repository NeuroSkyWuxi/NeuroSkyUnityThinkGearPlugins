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

// System.Object
struct Il2CppObject;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t53887223;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1638665103;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t932376889;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3504091841.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHan53887223.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1638665103.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m3773075223 (Il2CppObject * __this /* static, unused */, uint8_t ___elem0, BinaryReader_t3990958868 * ___reader1, bool ___hasHeaders2, HeaderHandler_t53887223 * ___headerHandler3, BinaryFormatter_t1638665103 * ___formatter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m1841037205 (Il2CppObject * __this /* static, unused */, uint8_t ___elem0, BinaryReader_t3990958868 * ___reader1, bool ___hasHeaders2, HeaderHandler_t53887223 * ___headerHandler3, Il2CppObject * ___methodCallMessage4, BinaryFormatter_t1638665103 * ___formatter5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
