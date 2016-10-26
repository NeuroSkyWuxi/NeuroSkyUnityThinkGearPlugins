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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3301293422;
struct CustomAttributeTypedArgument_t3301293422_marshaled_pinvoke;
struct CustomAttributeTypedArgument_t3301293422_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArg3301293422.h"
#include "mscorlib_System_Object4170816371.h"

// System.String System.Reflection.CustomAttributeTypedArgument::ToString()
extern "C"  String_t* CustomAttributeTypedArgument_ToString_m2065140801 (CustomAttributeTypedArgument_t3301293422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeTypedArgument::Equals(System.Object)
extern "C"  bool CustomAttributeTypedArgument_Equals_m464286849 (CustomAttributeTypedArgument_t3301293422 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeTypedArgument::GetHashCode()
extern "C"  int32_t CustomAttributeTypedArgument_GetHashCode_m1079175269 (CustomAttributeTypedArgument_t3301293422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct CustomAttributeTypedArgument_t3301293422;
struct CustomAttributeTypedArgument_t3301293422_marshaled_pinvoke;

extern "C" void CustomAttributeTypedArgument_t3301293422_marshal_pinvoke(const CustomAttributeTypedArgument_t3301293422& unmarshaled, CustomAttributeTypedArgument_t3301293422_marshaled_pinvoke& marshaled);
extern "C" void CustomAttributeTypedArgument_t3301293422_marshal_pinvoke_back(const CustomAttributeTypedArgument_t3301293422_marshaled_pinvoke& marshaled, CustomAttributeTypedArgument_t3301293422& unmarshaled);
extern "C" void CustomAttributeTypedArgument_t3301293422_marshal_pinvoke_cleanup(CustomAttributeTypedArgument_t3301293422_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct CustomAttributeTypedArgument_t3301293422;
struct CustomAttributeTypedArgument_t3301293422_marshaled_com;

extern "C" void CustomAttributeTypedArgument_t3301293422_marshal_com(const CustomAttributeTypedArgument_t3301293422& unmarshaled, CustomAttributeTypedArgument_t3301293422_marshaled_com& marshaled);
extern "C" void CustomAttributeTypedArgument_t3301293422_marshal_com_back(const CustomAttributeTypedArgument_t3301293422_marshaled_com& marshaled, CustomAttributeTypedArgument_t3301293422& unmarshaled);
extern "C" void CustomAttributeTypedArgument_t3301293422_marshal_com_cleanup(CustomAttributeTypedArgument_t3301293422_marshaled_com& marshaled);
