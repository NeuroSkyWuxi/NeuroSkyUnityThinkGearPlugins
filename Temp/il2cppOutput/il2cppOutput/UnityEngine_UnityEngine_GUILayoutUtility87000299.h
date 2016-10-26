#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t877171694;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t879908455;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t87000299  : public Il2CppObject
{
public:

public:
};

struct GUILayoutUtility_t87000299_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t877171694 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t877171694 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t879908455 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t4241904616  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t2990928826 * ___s_SpaceStyle_4;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t87000299_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t877171694 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t877171694 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t877171694 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_StoredLayouts_0, value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t87000299_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t877171694 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t877171694 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t877171694 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_StoredWindows_1, value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t87000299_StaticFields, ___current_2)); }
	inline LayoutCache_t879908455 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t879908455 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t879908455 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier(&___current_2, value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t87000299_StaticFields, ___kDummyRect_3)); }
	inline Rect_t4241904616  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t4241904616 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t4241904616  value)
	{
		___kDummyRect_3 = value;
	}

	inline static int32_t get_offset_of_s_SpaceStyle_4() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t87000299_StaticFields, ___s_SpaceStyle_4)); }
	inline GUIStyle_t2990928826 * get_s_SpaceStyle_4() const { return ___s_SpaceStyle_4; }
	inline GUIStyle_t2990928826 ** get_address_of_s_SpaceStyle_4() { return &___s_SpaceStyle_4; }
	inline void set_s_SpaceStyle_4(GUIStyle_t2990928826 * value)
	{
		___s_SpaceStyle_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_SpaceStyle_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
