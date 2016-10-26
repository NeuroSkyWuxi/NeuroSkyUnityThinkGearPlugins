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

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t879908455;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2977405297;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t1338576510;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t2094828418;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GUILayoutGroup1338576510.h"
#include "mscorlib_System_Type2863145774.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_GUIContent2094828418.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C"  void GUILayoutUtility__cctor_m1548085895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C"  LayoutCache_t879908455 * GUILayoutUtility_SelectIDList_m801008209 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, bool ___isWindow1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C"  void GUILayoutUtility_Begin_m2012081982 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutUtility_BeginWindow_m4017651538 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C"  void GUILayoutUtility_EndGroup_m4231280832 (Il2CppObject * __this /* static, unused */, String_t* ___groupName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C"  void GUILayoutUtility_Layout_m1143185416 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C"  void GUILayoutUtility_LayoutFromEditorWindow_m3347777775 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutFreeGroup_m2250873692 (Il2CppObject * __this /* static, unused */, GUILayoutGroup_t1338576510 * ___toplevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C"  void GUILayoutUtility_LayoutSingleGroup_m1841651392 (Il2CppObject * __this /* static, unused */, GUILayoutGroup_t1338576510 * ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C"  GUILayoutGroup_t1338576510 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m3222957921 (Il2CppObject * __this /* static, unused */, Type_t * ___LayoutType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C"  GUILayoutGroup_t1338576510 * GUILayoutUtility_BeginLayoutGroup_m651119829 (Il2CppObject * __this /* static, unused */, GUIStyle_t2990928826 * ___style0, GUILayoutOptionU5BU5D_t2977405297* ___options1, Type_t * ___layoutType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C"  void GUILayoutUtility_EndLayoutGroup_m3031902584 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutArea(UnityEngine.GUIStyle,System.Type)
extern "C"  GUILayoutGroup_t1338576510 * GUILayoutUtility_BeginLayoutArea_m1820686124 (Il2CppObject * __this /* static, unused */, GUIStyle_t2990928826 * ___style0, Type_t * ___layoutType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t4241904616  GUILayoutUtility_GetRect_m1132310379 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t4241904616  GUILayoutUtility_DoGetRect_m2737509142 (Il2CppObject * __this /* static, unused */, GUIContent_t2094828418 * ___content0, GUIStyle_t2990928826 * ___style1, GUILayoutOptionU5BU5D_t2977405297* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t4241904616  GUILayoutUtility_GetRect_m1883029946 (Il2CppObject * __this /* static, unused */, float ___width0, float ___height1, GUIStyle_t2990928826 * ___style2, GUILayoutOptionU5BU5D_t2977405297* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Rect_t4241904616  GUILayoutUtility_DoGetRect_m2575129381 (Il2CppObject * __this /* static, unused */, float ___minWidth0, float ___maxWidth1, float ___minHeight2, float ___maxHeight3, GUIStyle_t2990928826 * ___style4, GUILayoutOptionU5BU5D_t2977405297* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C"  GUIStyle_t2990928826 * GUILayoutUtility_get_spaceStyle_m3628948340 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C"  Rect_t4241904616  GUILayoutUtility_Internal_GetWindowRect_m1168223211 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_GetWindowRect(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_GetWindowRect_m1468033111 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, Rect_t4241904616 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C"  void GUILayoutUtility_Internal_MoveWindow_m2191818611 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, Rect_t4241904616  ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C"  void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m115257690 (Il2CppObject * __this /* static, unused */, int32_t ___windowID0, Rect_t4241904616 * ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
