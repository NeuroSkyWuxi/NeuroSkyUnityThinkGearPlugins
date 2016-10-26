#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.WWW
struct WWW_t3134621005;
// System.Text.Encoding
struct Encoding_t2012439129;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// UnityEngine.YieldInstruction
struct YieldInstruction_t2048002629;
// UnityEngineInternal.GenericStack
struct GenericStack_t931085639;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t1657757719;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UnityEngine_WWW3134621005.h"
#include "UnityEngine_UnityEngine_WWW3134621005MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_Text_Encoding2012439129MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "UnityEngine_UnityEngine_WWWForm461342257MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge827649927.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge827649927MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2862609660.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_IO_MemoryStream418716369MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1375417109MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWWTranscoder609724394MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1333978725MethodDeclarations.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1375417109.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1333978725.h"
#include "UnityEngine_UnityEngine_WWWTranscoder609724394.h"
#include "UnityEngine_UnityEngine_YieldInstruction2048002629.h"
#include "UnityEngine_UnityEngine_YieldInstruction2048002629MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_GenericStack931085639.h"
#include "UnityEngine_UnityEngineInternal_GenericStack931085639MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack1761758306MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal4096243933.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal4096243933MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1657757719.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleA1657757719MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules2889237774.h"
#include "mscorlib_System_Enum2862688501MethodDeclarations.h"
#include "mscorlib_System_Enum2862688501.h"
#include "mscorlib_System_Attribute2523058482MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules2889237774MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2446678367 (WWW_t3134621005 * __this, const MethodInfo* method)
{
	{
		WWW_DestroyWWW_m300967382(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m1793349504 (WWW_t3134621005 * __this, const MethodInfo* method)
{
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		WWW_DestroyWWW_m300967382(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3027285644(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m300967382 (WWW_t3134621005 * __this, bool ___cancel0, const MethodInfo* method)
{
	typedef void (*WWW_DestroyWWW_m300967382_ftn) (WWW_t3134621005 *, bool);
	static WWW_DestroyWWW_m300967382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WWW_DestroyWWW_m300967382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, ___cancel0);
}
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern Il2CppClass* Encoding_t2012439129_il2cpp_TypeInfo_var;
extern const uint32_t WWW_get_DefaultEncoding_m2507364293_MetadataUsageId;
extern "C"  Encoding_t2012439129 * WWW_get_DefaultEncoding_m2507364293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWW_get_DefaultEncoding_m2507364293_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
		Encoding_t2012439129 * L_0 = Encoding_get_ASCII_m1425378925(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern Il2CppClass* Dictionary_2_t827649927_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t2012439129_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m640701813_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m439360998_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral949037134;
extern Il2CppCodeGenString* _stringLiteral2489289636;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral2809397470;
extern const uint32_t WWWForm_get_headers_m370408569_MetadataUsageId;
extern "C"  Dictionary_2_t827649927 * WWWForm_get_headers_m370408569 (WWWForm_t461342257 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_headers_m370408569_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t827649927 * V_0 = NULL;
	{
		Dictionary_2_t827649927 * L_0 = (Dictionary_2_t827649927 *)il2cpp_codegen_object_new(Dictionary_2_t827649927_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m640701813(L_0, /*hidden argument*/Dictionary_2__ctor_m640701813_MethodInfo_var);
		V_0 = L_0;
		bool L_1 = __this->get_containsFiles_5();
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t827649927 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
		Encoding_t2012439129 * L_3 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_4 = __this->get_boundary_4();
		ByteU5BU5D_t4260760469* L_5 = __this->get_boundary_4();
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral2489289636, L_6, _stringLiteral34, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_m439360998(L_2, _stringLiteral949037134, L_7, /*hidden argument*/Dictionary_2_set_Item_m439360998_MethodInfo_var);
		goto IL_0059;
	}

IL_0049:
	{
		Dictionary_2_t827649927 * L_8 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m439360998(L_8, _stringLiteral949037134, _stringLiteral2809397470, /*hidden argument*/Dictionary_2_set_Item_m439360998_MethodInfo_var);
	}

IL_0059:
	{
		Dictionary_2_t827649927 * L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern Il2CppClass* MemoryStream_t418716369_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t2012439129_il2cpp_TypeInfo_var;
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern Il2CppClass* StringU5BU5D_t4054002952_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m1424439513_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m816542880_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m4222766741_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1440;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral1491620852;
extern Il2CppCodeGenString* _stringLiteral3174832991;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral4209993937;
extern Il2CppCodeGenString* _stringLiteral1954;
extern Il2CppCodeGenString* _stringLiteral63117;
extern Il2CppCodeGenString* _stringLiteral2014;
extern Il2CppCodeGenString* _stringLiteral38;
extern Il2CppCodeGenString* _stringLiteral61;
extern const uint32_t WWWForm_get_data_m2893811951_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWForm_get_data_m2893811951 (WWWForm_t461342257 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_data_m2893811951_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	ByteU5BU5D_t4260760469* V_1 = NULL;
	ByteU5BU5D_t4260760469* V_2 = NULL;
	ByteU5BU5D_t4260760469* V_3 = NULL;
	ByteU5BU5D_t4260760469* V_4 = NULL;
	ByteU5BU5D_t4260760469* V_5 = NULL;
	MemoryStream_t418716369 * V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_t4260760469* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	ByteU5BU5D_t4260760469* V_11 = NULL;
	String_t* V_12 = NULL;
	ByteU5BU5D_t4260760469* V_13 = NULL;
	ByteU5BU5D_t4260760469* V_14 = NULL;
	ByteU5BU5D_t4260760469* V_15 = NULL;
	ByteU5BU5D_t4260760469* V_16 = NULL;
	MemoryStream_t418716369 * V_17 = NULL;
	int32_t V_18 = 0;
	ByteU5BU5D_t4260760469* V_19 = NULL;
	ByteU5BU5D_t4260760469* V_20 = NULL;
	ByteU5BU5D_t4260760469* V_21 = NULL;
	ByteU5BU5D_t4260760469* V_22 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_containsFiles_5();
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		Encoding_t2012439129 * L_1 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteral1440);
		V_0 = L_2;
		Encoding_t2012439129 * L_3 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t4260760469* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral413);
		V_1 = L_4;
		Encoding_t2012439129 * L_5 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t4260760469* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, _stringLiteral1491620852);
		V_2 = L_6;
		Encoding_t2012439129 * L_7 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t4260760469* L_8 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteral3174832991);
		V_3 = L_8;
		Encoding_t2012439129 * L_9 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t4260760469* L_10 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, _stringLiteral34);
		V_4 = L_10;
		Encoding_t2012439129 * L_11 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t4260760469* L_12 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, _stringLiteral4209993937);
		V_5 = L_12;
		MemoryStream_t418716369 * L_13 = (MemoryStream_t418716369 *)il2cpp_codegen_object_new(MemoryStream_t418716369_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1061194329(L_13, ((int32_t)1024), /*hidden argument*/NULL);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			MemoryStream_t418716369 * L_14 = V_6;
			ByteU5BU5D_t4260760469* L_15 = V_1;
			ByteU5BU5D_t4260760469* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length)))));
			MemoryStream_t418716369 * L_17 = V_6;
			ByteU5BU5D_t4260760469* L_18 = V_0;
			ByteU5BU5D_t4260760469* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length)))));
			MemoryStream_t418716369 * L_20 = V_6;
			ByteU5BU5D_t4260760469* L_21 = __this->get_boundary_4();
			ByteU5BU5D_t4260760469* L_22 = __this->get_boundary_4();
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_22)->max_length)))));
			MemoryStream_t418716369 * L_23 = V_6;
			ByteU5BU5D_t4260760469* L_24 = V_1;
			ByteU5BU5D_t4260760469* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_25)->max_length)))));
			MemoryStream_t418716369 * L_26 = V_6;
			ByteU5BU5D_t4260760469* L_27 = V_2;
			ByteU5BU5D_t4260760469* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_28)->max_length)))));
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_29 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t1375417109 * L_30 = __this->get_types_3();
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = List_1_get_Item_m1424439513(L_30, L_31, /*hidden argument*/List_1_get_Item_m1424439513_MethodInfo_var);
			NullCheck(L_29);
			ByteU5BU5D_t4260760469* L_33 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t418716369 * L_34 = V_6;
			ByteU5BU5D_t4260760469* L_35 = V_8;
			ByteU5BU5D_t4260760469* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_36)->max_length)))));
			MemoryStream_t418716369 * L_37 = V_6;
			ByteU5BU5D_t4260760469* L_38 = V_1;
			ByteU5BU5D_t4260760469* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_39)->max_length)))));
			MemoryStream_t418716369 * L_40 = V_6;
			ByteU5BU5D_t4260760469* L_41 = V_3;
			ByteU5BU5D_t4260760469* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_42)->max_length)))));
			Encoding_t2012439129 * L_43 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t1375417109 * L_45 = __this->get_fieldNames_1();
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = List_1_get_Item_m1424439513(L_45, L_46, /*hidden argument*/List_1_get_Item_m1424439513_MethodInfo_var);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t2012439129 * L_49 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m1805125217(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m1476794331(L_51, _stringLiteral1954, /*hidden argument*/NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			StringU5BU5D_t4054002952* L_53 = ((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)5));
			NullCheck(L_53);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 0);
			ArrayElementTypeCheck (L_53, _stringLiteral1954);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1954);
			StringU5BU5D_t4054002952* L_54 = L_53;
			String_t* L_55 = V_9;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 1);
			ArrayElementTypeCheck (L_54, L_55);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_55);
			StringU5BU5D_t4054002952* L_56 = L_54;
			NullCheck(L_56);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 2);
			ArrayElementTypeCheck (L_56, _stringLiteral63117);
			(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral63117);
			StringU5BU5D_t4054002952* L_57 = L_56;
			String_t* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_59 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			String_t* L_60 = WWWTranscoder_QPEncode_m1021207296(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
			NullCheck(L_57);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_57, 3);
			ArrayElementTypeCheck (L_57, L_60);
			(L_57)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_60);
			StringU5BU5D_t4054002952* L_61 = L_57;
			NullCheck(L_61);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 4);
			ArrayElementTypeCheck (L_61, _stringLiteral2014);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2014);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_62 = String_Concat_m21867311(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_63 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_64 = V_10;
			NullCheck(L_63);
			ByteU5BU5D_t4260760469* L_65 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_63, L_64);
			V_11 = L_65;
			MemoryStream_t418716369 * L_66 = V_6;
			ByteU5BU5D_t4260760469* L_67 = V_11;
			ByteU5BU5D_t4260760469* L_68 = V_11;
			NullCheck(L_68);
			NullCheck(L_66);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_66, L_67, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_68)->max_length)))));
			MemoryStream_t418716369 * L_69 = V_6;
			ByteU5BU5D_t4260760469* L_70 = V_4;
			ByteU5BU5D_t4260760469* L_71 = V_4;
			NullCheck(L_71);
			NullCheck(L_69);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_69, L_70, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_71)->max_length)))));
			List_1_t1375417109 * L_72 = __this->get_fileNames_2();
			int32_t L_73 = V_7;
			NullCheck(L_72);
			String_t* L_74 = List_1_get_Item_m1424439513(L_72, L_73, /*hidden argument*/List_1_get_Item_m1424439513_MethodInfo_var);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			List_1_t1375417109 * L_75 = __this->get_fileNames_2();
			int32_t L_76 = V_7;
			NullCheck(L_75);
			String_t* L_77 = List_1_get_Item_m1424439513(L_75, L_76, /*hidden argument*/List_1_get_Item_m1424439513_MethodInfo_var);
			V_12 = L_77;
			String_t* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_79 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			bool L_80 = WWWTranscoder_SevenBitClean_m1805125217(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			String_t* L_81 = V_12;
			NullCheck(L_81);
			int32_t L_82 = String_IndexOf_m1476794331(L_81, _stringLiteral1954, /*hidden argument*/NULL);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			StringU5BU5D_t4054002952* L_83 = ((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)5));
			NullCheck(L_83);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 0);
			ArrayElementTypeCheck (L_83, _stringLiteral1954);
			(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1954);
			StringU5BU5D_t4054002952* L_84 = L_83;
			String_t* L_85 = V_9;
			NullCheck(L_84);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 1);
			ArrayElementTypeCheck (L_84, L_85);
			(L_84)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_85);
			StringU5BU5D_t4054002952* L_86 = L_84;
			NullCheck(L_86);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 2);
			ArrayElementTypeCheck (L_86, _stringLiteral63117);
			(L_86)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral63117);
			StringU5BU5D_t4054002952* L_87 = L_86;
			String_t* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_89 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			String_t* L_90 = WWWTranscoder_QPEncode_m1021207296(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
			NullCheck(L_87);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_87, 3);
			ArrayElementTypeCheck (L_87, L_90);
			(L_87)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_90);
			StringU5BU5D_t4054002952* L_91 = L_87;
			NullCheck(L_91);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 4);
			ArrayElementTypeCheck (L_91, _stringLiteral2014);
			(L_91)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2014);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_92 = String_Concat_m21867311(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_93 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_94 = V_12;
			NullCheck(L_93);
			ByteU5BU5D_t4260760469* L_95 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_93, L_94);
			V_13 = L_95;
			MemoryStream_t418716369 * L_96 = V_6;
			ByteU5BU5D_t4260760469* L_97 = V_5;
			ByteU5BU5D_t4260760469* L_98 = V_5;
			NullCheck(L_98);
			NullCheck(L_96);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_96, L_97, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_98)->max_length)))));
			MemoryStream_t418716369 * L_99 = V_6;
			ByteU5BU5D_t4260760469* L_100 = V_13;
			ByteU5BU5D_t4260760469* L_101 = V_13;
			NullCheck(L_101);
			NullCheck(L_99);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_99, L_100, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_101)->max_length)))));
			MemoryStream_t418716369 * L_102 = V_6;
			ByteU5BU5D_t4260760469* L_103 = V_4;
			ByteU5BU5D_t4260760469* L_104 = V_4;
			NullCheck(L_104);
			NullCheck(L_102);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_102, L_103, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_104)->max_length)))));
		}

IL_025c:
		{
			MemoryStream_t418716369 * L_105 = V_6;
			ByteU5BU5D_t4260760469* L_106 = V_1;
			ByteU5BU5D_t4260760469* L_107 = V_1;
			NullCheck(L_107);
			NullCheck(L_105);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_105, L_106, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_107)->max_length)))));
			MemoryStream_t418716369 * L_108 = V_6;
			ByteU5BU5D_t4260760469* L_109 = V_1;
			ByteU5BU5D_t4260760469* L_110 = V_1;
			NullCheck(L_110);
			NullCheck(L_108);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_108, L_109, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_110)->max_length)))));
			List_1_t1333978725 * L_111 = __this->get_formData_0();
			int32_t L_112 = V_7;
			NullCheck(L_111);
			ByteU5BU5D_t4260760469* L_113 = List_1_get_Item_m816542880(L_111, L_112, /*hidden argument*/List_1_get_Item_m816542880_MethodInfo_var);
			V_14 = L_113;
			MemoryStream_t418716369 * L_114 = V_6;
			ByteU5BU5D_t4260760469* L_115 = V_14;
			ByteU5BU5D_t4260760469* L_116 = V_14;
			NullCheck(L_116);
			NullCheck(L_114);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_114, L_115, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_116)->max_length)))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			List_1_t1333978725 * L_119 = __this->get_formData_0();
			NullCheck(L_119);
			int32_t L_120 = List_1_get_Count_m4222766741(L_119, /*hidden argument*/List_1_get_Count_m4222766741_MethodInfo_var);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			MemoryStream_t418716369 * L_121 = V_6;
			ByteU5BU5D_t4260760469* L_122 = V_1;
			ByteU5BU5D_t4260760469* L_123 = V_1;
			NullCheck(L_123);
			NullCheck(L_121);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_123)->max_length)))));
			MemoryStream_t418716369 * L_124 = V_6;
			ByteU5BU5D_t4260760469* L_125 = V_0;
			ByteU5BU5D_t4260760469* L_126 = V_0;
			NullCheck(L_126);
			NullCheck(L_124);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_126)->max_length)))));
			MemoryStream_t418716369 * L_127 = V_6;
			ByteU5BU5D_t4260760469* L_128 = __this->get_boundary_4();
			ByteU5BU5D_t4260760469* L_129 = __this->get_boundary_4();
			NullCheck(L_129);
			NullCheck(L_127);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_129)->max_length)))));
			MemoryStream_t418716369 * L_130 = V_6;
			ByteU5BU5D_t4260760469* L_131 = V_0;
			ByteU5BU5D_t4260760469* L_132 = V_0;
			NullCheck(L_132);
			NullCheck(L_130);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_132)->max_length)))));
			MemoryStream_t418716369 * L_133 = V_6;
			ByteU5BU5D_t4260760469* L_134 = V_1;
			ByteU5BU5D_t4260760469* L_135 = V_1;
			NullCheck(L_135);
			NullCheck(L_133);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_133, L_134, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_135)->max_length)))));
			MemoryStream_t418716369 * L_136 = V_6;
			NullCheck(L_136);
			ByteU5BU5D_t4260760469* L_137 = VirtFuncInvoker0< ByteU5BU5D_t4260760469* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t418716369 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			MemoryStream_t418716369 * L_139 = V_6;
			NullCheck(L_139);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0311:
	{
		Encoding_t2012439129 * L_140 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_140);
		ByteU5BU5D_t4260760469* L_141 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_140, _stringLiteral38);
		V_15 = L_141;
		Encoding_t2012439129 * L_142 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t4260760469* L_143 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, _stringLiteral61);
		V_16 = L_143;
		MemoryStream_t418716369 * L_144 = (MemoryStream_t418716369 *)il2cpp_codegen_object_new(MemoryStream_t418716369_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1061194329(L_144, ((int32_t)1024), /*hidden argument*/NULL);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Encoding_t2012439129_il2cpp_TypeInfo_var);
			Encoding_t2012439129 * L_145 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t1375417109 * L_146 = __this->get_fieldNames_1();
			int32_t L_147 = V_18;
			NullCheck(L_146);
			String_t* L_148 = List_1_get_Item_m1424439513(L_146, L_147, /*hidden argument*/List_1_get_Item_m1424439513_MethodInfo_var);
			NullCheck(L_145);
			ByteU5BU5D_t4260760469* L_149 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_150 = WWWTranscoder_URLEncode_m4039667511(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
			V_19 = L_150;
			List_1_t1333978725 * L_151 = __this->get_formData_0();
			int32_t L_152 = V_18;
			NullCheck(L_151);
			ByteU5BU5D_t4260760469* L_153 = List_1_get_Item_m816542880(L_151, L_152, /*hidden argument*/List_1_get_Item_m816542880_MethodInfo_var);
			V_20 = L_153;
			ByteU5BU5D_t4260760469* L_154 = V_20;
			ByteU5BU5D_t4260760469* L_155 = WWWTranscoder_URLEncode_m4039667511(NULL /*static, unused*/, L_154, /*hidden argument*/NULL);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			MemoryStream_t418716369 * L_157 = V_17;
			ByteU5BU5D_t4260760469* L_158 = V_15;
			ByteU5BU5D_t4260760469* L_159 = V_15;
			NullCheck(L_159);
			NullCheck(L_157);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_157, L_158, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_159)->max_length)))));
		}

IL_0393:
		{
			MemoryStream_t418716369 * L_160 = V_17;
			ByteU5BU5D_t4260760469* L_161 = V_19;
			ByteU5BU5D_t4260760469* L_162 = V_19;
			NullCheck(L_162);
			NullCheck(L_160);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_160, L_161, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_162)->max_length)))));
			MemoryStream_t418716369 * L_163 = V_17;
			ByteU5BU5D_t4260760469* L_164 = V_16;
			ByteU5BU5D_t4260760469* L_165 = V_16;
			NullCheck(L_165);
			NullCheck(L_163);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_163, L_164, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_165)->max_length)))));
			MemoryStream_t418716369 * L_166 = V_17;
			ByteU5BU5D_t4260760469* L_167 = V_21;
			ByteU5BU5D_t4260760469* L_168 = V_21;
			NullCheck(L_168);
			NullCheck(L_166);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_166, L_167, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_168)->max_length)))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			List_1_t1333978725 * L_171 = __this->get_formData_0();
			NullCheck(L_171);
			int32_t L_172 = List_1_get_Count_m4222766741(L_171, /*hidden argument*/List_1_get_Count_m4222766741_MethodInfo_var);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			MemoryStream_t418716369 * L_173 = V_17;
			NullCheck(L_173);
			ByteU5BU5D_t4260760469* L_174 = VirtFuncInvoker0< ByteU5BU5D_t4260760469* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t418716369 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			MemoryStream_t418716369 * L_176 = V_17;
			NullCheck(L_176);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_03f7:
	{
		ByteU5BU5D_t4260760469* L_177 = V_22;
		return L_177;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3633740456;
extern Il2CppCodeGenString* _stringLiteral285443752;
extern Il2CppCodeGenString* _stringLiteral2318011663;
extern Il2CppCodeGenString* _stringLiteral4217153853;
extern const uint32_t WWWTranscoder__cctor_m1486747496_MetadataUsageId;
extern "C"  void WWWTranscoder__cctor_m1486747496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder__cctor_m1486747496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t2012439129 * L_0 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_1 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral3633740456);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_ucHexChars_0(L_1);
		Encoding_t2012439129 * L_2 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t4260760469* L_3 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral285443752);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_lcHexChars_1(L_3);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_urlEscapeChar_2(((int32_t)37));
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_urlSpace_3(((int32_t)43));
		Encoding_t2012439129 * L_4 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t4260760469* L_5 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral2318011663);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_urlForbidden_4(L_5);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_qpEscapeChar_5(((int32_t)61));
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_qpSpace_6(((int32_t)95));
		Encoding_t2012439129 * L_6 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4260760469* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral4217153853);
		((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->set_qpForbidden_7(L_7);
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern Il2CppClass* ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_Byte2Hex_m2414999496_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_Byte2Hex_m2414999496 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, ByteU5BU5D_t4260760469* ___hexChars1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Byte2Hex_m2414999496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		V_0 = ((ByteU5BU5D_t4260760469*)SZArrayNew(ByteU5BU5D_t4260760469_il2cpp_TypeInfo_var, (uint32_t)2));
		ByteU5BU5D_t4260760469* L_0 = V_0;
		ByteU5BU5D_t4260760469* L_1 = ___hexChars1;
		uint8_t L_2 = ___b0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, ((int32_t)((int32_t)L_2>>(int32_t)4)));
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ByteU5BU5D_t4260760469* L_5 = V_0;
		ByteU5BU5D_t4260760469* L_6 = ___hexChars1;
		uint8_t L_7 = ___b0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7&(int32_t)((int32_t)15))));
		int32_t L_8 = ((int32_t)((int32_t)L_7&(int32_t)((int32_t)15)));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_9);
		ByteU5BU5D_t4260760469* L_10 = V_0;
		return L_10;
	}
}
// System.String UnityEngine.WWWTranscoder::URLEncode(System.String,System.Text.Encoding)
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_URLEncode_m3301913818_MetadataUsageId;
extern "C"  String_t* WWWTranscoder_URLEncode_m3301913818 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t2012439129 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLEncode_m3301913818_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		Encoding_t2012439129 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlEscapeChar_2();
		uint8_t L_4 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlSpace_3();
		ByteU5BU5D_t4260760469* L_5 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlForbidden_4();
		ByteU5BU5D_t4260760469* L_6 = WWWTranscoder_Encode_m2677436946(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t2012439129 * L_7 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_8 = V_0;
		ByteU5BU5D_t4260760469* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_URLEncode_m4039667511_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_URLEncode_m4039667511 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___toEncode0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLEncode_m4039667511_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t4260760469* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlEscapeChar_2();
		uint8_t L_2 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlSpace_3();
		ByteU5BU5D_t4260760469* L_3 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_urlForbidden_4();
		ByteU5BU5D_t4260760469* L_4 = WWWTranscoder_Encode_m2677436946(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_QPEncode_m1021207296_MetadataUsageId;
extern "C"  String_t* WWWTranscoder_QPEncode_m1021207296 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t2012439129 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_QPEncode_m1021207296_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t4260760469* V_0 = NULL;
	{
		Encoding_t2012439129 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_qpEscapeChar_5();
		uint8_t L_4 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_qpSpace_6();
		ByteU5BU5D_t4260760469* L_5 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_qpForbidden_7();
		ByteU5BU5D_t4260760469* L_6 = WWWTranscoder_Encode_m2677436946(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t2012439129 * L_7 = WWW_get_DefaultEncoding_m2507364293(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4260760469* L_8 = V_0;
		ByteU5BU5D_t4260760469* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))));
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern Il2CppClass* MemoryStream_t418716369_il2cpp_TypeInfo_var;
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_Encode_m2677436946_MetadataUsageId;
extern "C"  ByteU5BU5D_t4260760469* WWWTranscoder_Encode_m2677436946 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, uint8_t ___escapeChar1, uint8_t ___space2, ByteU5BU5D_t4260760469* ___forbidden3, bool ___uppercase4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Encode_m2677436946_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MemoryStream_t418716369 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4260760469* V_2 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t418716369 * G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	MemoryStream_t418716369 * G_B8_1 = NULL;
	ByteU5BU5D_t4260760469* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	MemoryStream_t418716369 * G_B10_2 = NULL;
	{
		ByteU5BU5D_t4260760469* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t418716369 * L_1 = (MemoryStream_t418716369 *)il2cpp_codegen_object_new(MemoryStream_t418716369_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1061194329(L_1, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))*(int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			ByteU5BU5D_t4260760469* L_2 = ___input0;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
			int32_t L_4 = L_3;
			uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			MemoryStream_t418716369 * L_6 = V_0;
			uint8_t L_7 = ___space2;
			NullCheck(L_6);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_6, L_7);
			goto IL_0085;
		}

IL_0028:
		{
			ByteU5BU5D_t4260760469* L_8 = ___input0;
			int32_t L_9 = V_1;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
			int32_t L_10 = L_9;
			uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			if ((((int32_t)L_11) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			ByteU5BU5D_t4260760469* L_12 = ___input0;
			int32_t L_13 = V_1;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			if ((((int32_t)L_15) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			ByteU5BU5D_t4260760469* L_16 = ___forbidden3;
			ByteU5BU5D_t4260760469* L_17 = ___input0;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			bool L_21 = WWWTranscoder_ByteArrayContains_m3244919989(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			MemoryStream_t418716369 * L_22 = V_0;
			uint8_t L_23 = ___escapeChar1;
			NullCheck(L_22);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_22, L_23);
			MemoryStream_t418716369 * L_24 = V_0;
			ByteU5BU5D_t4260760469* L_25 = ___input0;
			int32_t L_26 = V_1;
			NullCheck(L_25);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
			int32_t L_27 = L_26;
			uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			bool L_29 = ___uppercase4;
			G_B8_0 = ((int32_t)(L_28));
			G_B8_1 = L_24;
			if (!L_29)
			{
				G_B9_0 = ((int32_t)(L_28));
				G_B9_1 = L_24;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_30 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_ucHexChars_0();
			G_B10_0 = L_30;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_31 = ((WWWTranscoder_t609724394_StaticFields*)WWWTranscoder_t609724394_il2cpp_TypeInfo_var->static_fields)->get_lcHexChars_1();
			G_B10_0 = L_31;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4260760469* L_32 = WWWTranscoder_Byte2Hex_m2414999496(NULL /*static, unused*/, G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t4260760469*, int32_t, int32_t >::Invoke(18 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_32, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			MemoryStream_t418716369 * L_33 = V_0;
			ByteU5BU5D_t4260760469* L_34 = ___input0;
			int32_t L_35 = V_1;
			NullCheck(L_34);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
			int32_t L_36 = L_35;
			uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
			NullCheck(L_33);
			VirtActionInvoker1< uint8_t >::Invoke(19 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_33, L_37);
		}

IL_0085:
		{
			int32_t L_38 = V_1;
			V_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_39 = V_1;
			ByteU5BU5D_t4260760469* L_40 = ___input0;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_40)->max_length)))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			MemoryStream_t418716369 * L_41 = V_0;
			NullCheck(L_41);
			ByteU5BU5D_t4260760469* L_42 = VirtFuncInvoker0< ByteU5BU5D_t4260760469* >::Invoke(25 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_41);
			V_2 = L_42;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t418716369 * L_43 = V_0;
			if (!L_43)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			MemoryStream_t418716369 * L_44 = V_0;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_44);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_00b0:
	{
		ByteU5BU5D_t4260760469* L_45 = V_2;
		return L_45;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m3244919989 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___array0, uint8_t ___b1, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t4260760469* L_0 = ___array0;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))));
		V_1 = 0;
		goto IL_001a;
	}

IL_000b:
	{
		ByteU5BU5D_t4260760469* L_1 = ___array0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___b1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern Il2CppClass* WWWTranscoder_t609724394_il2cpp_TypeInfo_var;
extern const uint32_t WWWTranscoder_SevenBitClean_m1805125217_MetadataUsageId;
extern "C"  bool WWWTranscoder_SevenBitClean_m1805125217 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Encoding_t2012439129 * ___e1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_SevenBitClean_m1805125217_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Encoding_t2012439129 * L_0 = ___e1;
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_t4260760469* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4260760469*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t609724394_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m945043319(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C"  bool WWWTranscoder_SevenBitClean_m945043319 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		ByteU5BU5D_t4260760469* L_0 = ___input0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t4260760469* L_4 = ___input0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return (bool)0;
	}

IL_001d:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		ByteU5BU5D_t4260760469* L_10 = ___input0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m539393484 (YieldInstruction_t2048002629 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_pinvoke(const YieldInstruction_t2048002629& unmarshaled, YieldInstruction_t2048002629_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t2048002629_marshal_pinvoke_back(const YieldInstruction_t2048002629_marshaled_pinvoke& marshaled, YieldInstruction_t2048002629& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_pinvoke_cleanup(YieldInstruction_t2048002629_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_com(const YieldInstruction_t2048002629& unmarshaled, YieldInstruction_t2048002629_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t2048002629_marshal_com_back(const YieldInstruction_t2048002629_marshaled_com& marshaled, YieldInstruction_t2048002629& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t2048002629_marshal_com_cleanup(YieldInstruction_t2048002629_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m2328546233 (GenericStack_t931085639 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1821673314(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern Il2CppClass* MathfInternal_t4096243933_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t4096243933_StaticFields*)MathfInternal_t4096243933_il2cpp_TypeInfo_var->static_fields)->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_pinvoke(const MathfInternal_t4096243933& unmarshaled, MathfInternal_t4096243933_marshaled_pinvoke& marshaled)
{
}
extern "C" void MathfInternal_t4096243933_marshal_pinvoke_back(const MathfInternal_t4096243933_marshaled_pinvoke& marshaled, MathfInternal_t4096243933& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_pinvoke_cleanup(MathfInternal_t4096243933_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_com(const MathfInternal_t4096243933& unmarshaled, MathfInternal_t4096243933_marshaled_com& marshaled)
{
}
extern "C" void MathfInternal_t4096243933_marshal_com_back(const MathfInternal_t4096243933_marshaled_com& marshaled, MathfInternal_t4096243933& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.MathfInternal
extern "C" void MathfInternal_t4096243933_marshal_com_cleanup(MathfInternal_t4096243933_marshaled_com& marshaled)
{
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern Il2CppClass* TypeInferenceRules_t2889237774_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t1657757719 * __this, int32_t ___rule0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(TypeInferenceRules_t2889237774_il2cpp_TypeInfo_var, &L_1);
		NullCheck((Enum_t2862688501 *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2862688501 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t1657757719 * __this, String_t* ___rule0, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t1657757719 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__rule_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
