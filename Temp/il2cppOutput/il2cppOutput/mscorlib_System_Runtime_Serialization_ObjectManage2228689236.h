#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t2228689236  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t402472668 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t402472668 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t3948406897 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t3948406897 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t1407064410 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	Il2CppObject * ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t2761351129  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____objectRecordChain_0)); }
	inline ObjectRecord_t402472668 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t402472668 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t402472668 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier(&____objectRecordChain_0, value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____lastObjectRecord_1)); }
	inline ObjectRecord_t402472668 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t402472668 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t402472668 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier(&____lastObjectRecord_1, value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____deserializedRecords_2)); }
	inline ArrayList_t3948406897 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t3948406897 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t3948406897 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier(&____deserializedRecords_2, value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t3948406897 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t3948406897 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t3948406897 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier(&____onDeserializedCallbackRecords_3, value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____objectRecords_4)); }
	inline Hashtable_t1407064410 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t1407064410 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t1407064410 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier(&____objectRecords_4, value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____selector_6)); }
	inline Il2CppObject * get__selector_6() const { return ____selector_6; }
	inline Il2CppObject ** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(Il2CppObject * value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier(&____selector_6, value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____context_7)); }
	inline StreamingContext_t2761351129  get__context_7() const { return ____context_7; }
	inline StreamingContext_t2761351129 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t2761351129  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t2228689236, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
