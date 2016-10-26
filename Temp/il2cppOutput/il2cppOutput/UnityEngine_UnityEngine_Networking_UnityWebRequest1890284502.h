#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t2161232213;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t1890284502  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	IntPtr_t ___m_Ptr_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_Ptr_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t1890284502, ___m_Ptr_6)); }
	inline IntPtr_t get_m_Ptr_6() const { return ___m_Ptr_6; }
	inline IntPtr_t* get_address_of_m_Ptr_6() { return &___m_Ptr_6; }
	inline void set_m_Ptr_6(IntPtr_t value)
	{
		___m_Ptr_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UnityWebRequest_t1890284502, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(UnityWebRequest_t1890284502, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10 = value;
	}
};

struct UnityWebRequest_t1890284502_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.Networking.UnityWebRequest::domainRegex
	Regex_t2161232213 * ___domainRegex_7;
	// System.String[] UnityEngine.Networking.UnityWebRequest::forbiddenHeaderKeys
	StringU5BU5D_t4054002952* ___forbiddenHeaderKeys_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Networking.UnityWebRequest::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_11;

public:
	inline static int32_t get_offset_of_domainRegex_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t1890284502_StaticFields, ___domainRegex_7)); }
	inline Regex_t2161232213 * get_domainRegex_7() const { return ___domainRegex_7; }
	inline Regex_t2161232213 ** get_address_of_domainRegex_7() { return &___domainRegex_7; }
	inline void set_domainRegex_7(Regex_t2161232213 * value)
	{
		___domainRegex_7 = value;
		Il2CppCodeGenWriteBarrier(&___domainRegex_7, value);
	}

	inline static int32_t get_offset_of_forbiddenHeaderKeys_8() { return static_cast<int32_t>(offsetof(UnityWebRequest_t1890284502_StaticFields, ___forbiddenHeaderKeys_8)); }
	inline StringU5BU5D_t4054002952* get_forbiddenHeaderKeys_8() const { return ___forbiddenHeaderKeys_8; }
	inline StringU5BU5D_t4054002952** get_address_of_forbiddenHeaderKeys_8() { return &___forbiddenHeaderKeys_8; }
	inline void set_forbiddenHeaderKeys_8(StringU5BU5D_t4054002952* value)
	{
		___forbiddenHeaderKeys_8 = value;
		Il2CppCodeGenWriteBarrier(&___forbiddenHeaderKeys_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_t1890284502_StaticFields, ___U3CU3Ef__switchU24map1_11)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_11() const { return ___U3CU3Ef__switchU24map1_11; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_11() { return &___U3CU3Ef__switchU24map1_11; }
	inline void set_U3CU3Ef__switchU24map1_11(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t1890284502_marshaled_pinvoke
{
	intptr_t ___m_Ptr_6;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10;
};
// Native definition for marshalling of: UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t1890284502_marshaled_com
{
	intptr_t ___m_Ptr_6;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_9;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_10;
};
