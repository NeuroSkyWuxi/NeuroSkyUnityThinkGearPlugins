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

// System.Text.RegularExpressions.Syntax.Group
struct Group_t3733269553;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3183027782;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2056384438;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3681078449;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre3183027782.h"

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C"  void Group__ctor_m358391753 (Group_t3733269553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Group_AppendExpression_m2176615607 (Group_t3733269553 * __this, Expression_t3183027782 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Group_Compile_m767805470 (Group_t3733269553 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Group_GetWidth_m3807951077 (Group_t3733269553 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t3681078449 * Group_GetAnchorInfo_m1440957557 (Group_t3733269553 * __this, bool ___reverse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
