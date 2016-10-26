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
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t192740775;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_UnicodeCategory1892815653.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"

// System.Void System.Char::.cctor()
extern "C"  void Char__cctor_m3887439662 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Char::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * Char_System_IConvertible_ToType_m2466414707 (Il2CppChar* __this, Type_t * ___targetType0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Char_System_IConvertible_ToBoolean_m661905383 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Char::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Char_System_IConvertible_ToByte_m4241151069 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar Char_System_IConvertible_ToChar_m3360898809 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Char::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t4283661327  Char_System_IConvertible_ToDateTime_m1177409155 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Char::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1954350631  Char_System_IConvertible_ToDecimal_m2181775431 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Char::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Char_System_IConvertible_ToDouble_m3015824495 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Char::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Char_System_IConvertible_ToInt16_m2665056295 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Char_System_IConvertible_ToInt32_m2693779815 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Char::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Char_System_IConvertible_ToInt64_m371189831 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Char::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Char_System_IConvertible_ToSByte_m2258752519 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Char::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Char_System_IConvertible_ToSingle_m3333306013 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Char::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Char_System_IConvertible_ToUInt16_m1335424267 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Char::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Char_System_IConvertible_ToUInt32_m207646975 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Char::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Char_System_IConvertible_ToUInt64_m2803495165 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::GetDataTablePointers(System.Byte*&,System.Byte*&,System.Double*&,System.UInt16*&,System.UInt16*&,System.UInt16*&,System.UInt16*&)
extern "C"  void Char_GetDataTablePointers_m2324968695 (Il2CppObject * __this /* static, unused */, uint8_t** ___category_data0, uint8_t** ___numeric_data1, double** ___numeric_data_values2, uint16_t** ___to_lower_data_low3, uint16_t** ___to_lower_data_high4, uint16_t** ___to_upper_data_low5, uint16_t** ___to_upper_data_high6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Object)
extern "C"  int32_t Char_CompareTo_m3049402459 (Il2CppChar* __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Object)
extern "C"  bool Char_Equals_m158269074 (Il2CppChar* __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Char)
extern "C"  int32_t Char_CompareTo_m2003432292 (Il2CppChar* __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Char)
extern "C"  bool Char_Equals_m2979193691 (Il2CppChar* __this, Il2CppChar ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::GetHashCode()
extern "C"  int32_t Char_GetHashCode_m3546188522 (Il2CppChar* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
extern "C"  int32_t Char_GetUnicodeCategory_m494586991 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m1743537211 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetter(System.Char)
extern "C"  bool Char_IsLetter_m1699036490 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
extern "C"  bool Char_IsLetterOrDigit_m2290383044 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLower(System.Char)
extern "C"  bool Char_IsLower_m1584081639 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsSurrogate(System.Char)
extern "C"  bool Char_IsSurrogate_m3822546544 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m2745315955 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
extern "C"  bool Char_IsWhiteSpace_m2601279167 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::CheckParameter(System.String,System.Int32)
extern "C"  void Char_CheckParameter_m3313481947 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::Parse(System.String)
extern "C"  Il2CppChar Char_Parse_m2418192084 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
extern "C"  Il2CppChar Char_ToLower_m3095077372 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLowerInvariant(System.Char)
extern "C"  Il2CppChar Char_ToLowerInvariant_m2407684316 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
extern "C"  Il2CppChar Char_ToLower_m849361594 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, CultureInfo_t1065375142 * ___culture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpper(System.Char)
extern "C"  Il2CppChar Char_ToUpper_m3343442427 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpperInvariant(System.Char)
extern "C"  Il2CppChar Char_ToUpperInvariant_m4158859197 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m2089191214 (Il2CppChar* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString(System.IFormatProvider)
extern "C"  String_t* Char_ToString_m2826712476 (Il2CppChar* __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
