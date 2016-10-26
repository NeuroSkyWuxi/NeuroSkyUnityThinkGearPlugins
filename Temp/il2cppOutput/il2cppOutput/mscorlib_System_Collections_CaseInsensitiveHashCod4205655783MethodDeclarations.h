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

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t4205655783;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Globalization.TextInfo
struct TextInfo_t2732890749;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_Globalization_TextInfo2732890749.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C"  void CaseInsensitiveHashCodeProvider__ctor_m1687836093 (CaseInsensitiveHashCodeProvider_t4205655783 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C"  void CaseInsensitiveHashCodeProvider__ctor_m2475550317 (CaseInsensitiveHashCodeProvider_t4205655783 * __this, CultureInfo_t1065375142 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C"  void CaseInsensitiveHashCodeProvider__cctor_m301215120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C"  bool CaseInsensitiveHashCodeProvider_AreEqual_m2045397501 (Il2CppObject * __this /* static, unused */, CultureInfo_t1065375142 * ___a0, CultureInfo_t1065375142 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C"  bool CaseInsensitiveHashCodeProvider_AreEqual_m3653217300 (Il2CppObject * __this /* static, unused */, TextInfo_t2732890749 * ___info0, CultureInfo_t1065375142 * ___culture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C"  CaseInsensitiveHashCodeProvider_t4205655783 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m1403540293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C"  int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m517823364 (CaseInsensitiveHashCodeProvider_t4205655783 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
