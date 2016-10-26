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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1002978443;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1003119691;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Exception
struct Exception_t3991598821;
// System.Reflection.AssemblyName
struct AssemblyName_t2915647011;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m2002209681 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t1003119691* AssemblyBuilder_GetModulesInternal_m2718782039 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t3339007067* AssemblyBuilder_GetTypes_m3461115874 (AssemblyBuilder_t1002978443 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m332025933 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t3991598821 * AssemblyBuilder_not_supported_m186391929 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t2915647011 * AssemblyBuilder_UnprotectedGetName_m3388533202 (AssemblyBuilder_t1002978443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
