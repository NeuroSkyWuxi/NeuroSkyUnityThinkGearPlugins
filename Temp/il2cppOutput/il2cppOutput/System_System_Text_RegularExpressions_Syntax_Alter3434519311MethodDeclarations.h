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

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t3434519311;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t2279826820;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3183027782;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2056384438;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre3183027782.h"

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern "C"  void Alternation__ctor_m1090419051 (Alternation_t3434519311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C"  ExpressionCollection_t2279826820 * Alternation_get_Alternatives_m1740410205 (Alternation_t3434519311 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Alternation_AddAlternative_m3695967311 (Alternation_t3434519311 * __this, Expression_t3183027782 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Alternation_Compile_m333754556 (Alternation_t3434519311 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Alternation_GetWidth_m1273465607 (Alternation_t3434519311 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
