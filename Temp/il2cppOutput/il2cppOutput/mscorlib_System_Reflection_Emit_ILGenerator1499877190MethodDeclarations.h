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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1499877190;
// System.Reflection.Module
struct Module_t1394482686;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t143663454;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4136801618;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module1394482686.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Reflection_Emit_OpCode3389331186.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator1499877190.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m363767667 (ILGenerator_t1499877190 * __this, Module_t1394482686 * ___m0, Il2CppObject * ___token_gen1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m152040660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m1030891159 (ILGenerator_t1499877190 * __this, MemberInfo_t * ___mi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m3150005908 (ILGenerator_t1499877190 * __this, int32_t ___nbytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1452131359 (ILGenerator_t1499877190 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2322068804 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m1513421455 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m726728631 (ILGenerator_t1499877190 * __this, OpCode_t3389331186  ___opcode0, ConstructorInfo_t4136801618 * ___con1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m2969084380 (ILGenerator_t1499877190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m436459828 (Il2CppObject * __this /* static, unused */, ILGenerator_t1499877190 * ___ig0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
