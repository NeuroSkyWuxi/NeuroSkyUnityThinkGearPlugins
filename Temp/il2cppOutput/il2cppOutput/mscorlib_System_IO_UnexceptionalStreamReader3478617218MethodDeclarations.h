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

// System.IO.UnexceptionalStreamReader
struct UnexceptionalStreamReader_t3478617218;
// System.IO.Stream
struct Stream_t1561764144;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void UnexceptionalStreamReader__ctor_m3602034817 (UnexceptionalStreamReader_t3478617218 * __this, Stream_t1561764144 * ___stream0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern "C"  void UnexceptionalStreamReader__cctor_m2274125524 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern "C"  int32_t UnexceptionalStreamReader_Peek_m3083327274 (UnexceptionalStreamReader_t3478617218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern "C"  int32_t UnexceptionalStreamReader_Read_m3140459685 (UnexceptionalStreamReader_t3478617218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UnexceptionalStreamReader_Read_m3425155094 (UnexceptionalStreamReader_t3478617218 * __this, CharU5BU5D_t3324145743* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C"  bool UnexceptionalStreamReader_CheckEOL_m2343953594 (UnexceptionalStreamReader_t3478617218 * __this, Il2CppChar ___current0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern "C"  String_t* UnexceptionalStreamReader_ReadLine_m680275730 (UnexceptionalStreamReader_t3478617218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern "C"  String_t* UnexceptionalStreamReader_ReadToEnd_m2553009636 (UnexceptionalStreamReader_t3478617218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
