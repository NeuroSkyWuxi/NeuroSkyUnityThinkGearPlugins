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

// UnityEngine.GUIContent
struct GUIContent_t2094828418;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2526458961;
struct GUIContent_t2094828418_marshaled_pinvoke;
struct GUIContent_t2094828418_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GUIContent2094828418.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"

// System.Void UnityEngine.GUIContent::.ctor()
extern "C"  void GUIContent__ctor_m923375087 (GUIContent_t2094828418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C"  void GUIContent__ctor_m174155123 (GUIContent_t2094828418 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C"  void GUIContent__ctor_m3148225754 (GUIContent_t2094828418 * __this, GUIContent_t2094828418 * ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C"  void GUIContent__cctor_m2372727710 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C"  GUIContent_t2094828418 * GUIContent_Temp_m2857440895 (Il2CppObject * __this /* static, unused */, String_t* ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C"  GUIContent_t2094828418 * GUIContent_Temp_m3826417963 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C"  void GUIContent_ClearStaticCache_m2388858588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GUIContent_t2094828418;
struct GUIContent_t2094828418_marshaled_pinvoke;

extern "C" void GUIContent_t2094828418_marshal_pinvoke(const GUIContent_t2094828418& unmarshaled, GUIContent_t2094828418_marshaled_pinvoke& marshaled);
extern "C" void GUIContent_t2094828418_marshal_pinvoke_back(const GUIContent_t2094828418_marshaled_pinvoke& marshaled, GUIContent_t2094828418& unmarshaled);
extern "C" void GUIContent_t2094828418_marshal_pinvoke_cleanup(GUIContent_t2094828418_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GUIContent_t2094828418;
struct GUIContent_t2094828418_marshaled_com;

extern "C" void GUIContent_t2094828418_marshal_com(const GUIContent_t2094828418& unmarshaled, GUIContent_t2094828418_marshaled_com& marshaled);
extern "C" void GUIContent_t2094828418_marshal_com_back(const GUIContent_t2094828418_marshaled_com& marshaled, GUIContent_t2094828418& unmarshaled);
extern "C" void GUIContent_t2094828418_marshal_com_cleanup(GUIContent_t2094828418_marshaled_com& marshaled);
