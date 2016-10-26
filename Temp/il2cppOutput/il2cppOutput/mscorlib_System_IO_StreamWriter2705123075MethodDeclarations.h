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

// System.IO.StreamWriter
struct StreamWriter_t2705123075;
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
#include "mscorlib_System_String7231557.h"

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void StreamWriter__ctor_m195691908 (StreamWriter_t2705123075 * __this, Stream_t1561764144 * ___stream0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter__ctor_m1929719251 (StreamWriter_t2705123075 * __this, Stream_t1561764144 * ___stream0, Encoding_t2012439129 * ___encoding1, int32_t ___bufferSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C"  void StreamWriter__cctor_m1403486551 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C"  void StreamWriter_Initialize_m9216430 (StreamWriter_t2705123075 * __this, Encoding_t2012439129 * ___encoding0, int32_t ___bufferSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C"  void StreamWriter_set_AutoFlush_m4100472995 (StreamWriter_t2705123075 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C"  void StreamWriter_Dispose_m1732965386 (StreamWriter_t2705123075 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C"  void StreamWriter_Flush_m4024097848 (StreamWriter_t2705123075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C"  void StreamWriter_FlushBytes_m2694185397 (StreamWriter_t2705123075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C"  void StreamWriter_Decode_m2860657820 (StreamWriter_t2705123075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_Write_m4266049192 (StreamWriter_t2705123075 * __this, CharU5BU5D_t3324145743* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C"  void StreamWriter_LowLevelWrite_m551013976 (StreamWriter_t2705123075 * __this, CharU5BU5D_t3324145743* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C"  void StreamWriter_LowLevelWrite_m3969440575 (StreamWriter_t2705123075 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C"  void StreamWriter_Write_m1399991978 (StreamWriter_t2705123075 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C"  void StreamWriter_Write_m1067578184 (StreamWriter_t2705123075 * __this, CharU5BU5D_t3324145743* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C"  void StreamWriter_Write_m2741735311 (StreamWriter_t2705123075 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C"  void StreamWriter_Close_m1356042796 (StreamWriter_t2705123075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C"  void StreamWriter_Finalize_m3966309260 (StreamWriter_t2705123075 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
