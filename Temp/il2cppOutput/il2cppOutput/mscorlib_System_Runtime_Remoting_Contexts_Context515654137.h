#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2257382795;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3791941180;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t781636285;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_UIntPtr3365854250.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t515654137  : public Il2CppObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	UIntPtr_t  ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	Il2CppObject * ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	Il2CppObject * ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t1108656482* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t3948406897 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t3791941180 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t781636285 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t515654137, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t515654137, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t515654137, ___static_data_2)); }
	inline UIntPtr_t  get_static_data_2() const { return ___static_data_2; }
	inline UIntPtr_t * get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(UIntPtr_t  value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t515654137, ___server_context_sink_chain_4)); }
	inline Il2CppObject * get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline Il2CppObject ** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(Il2CppObject * value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier(&___server_context_sink_chain_4, value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t515654137, ___client_context_sink_chain_5)); }
	inline Il2CppObject * get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline Il2CppObject ** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(Il2CppObject * value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier(&___client_context_sink_chain_5, value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t515654137, ___datastore_6)); }
	inline ObjectU5BU5D_t1108656482* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t1108656482** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t1108656482* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier(&___datastore_6, value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t515654137, ___context_properties_7)); }
	inline ArrayList_t3948406897 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t3948406897 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t3948406897 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier(&___context_properties_7, value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t515654137, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t515654137, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t3791941180 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t3791941180 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t3791941180 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier(&___context_dynamic_properties_12, value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t515654137, ___callback_object_13)); }
	inline ContextCallbackObject_t781636285 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t781636285 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t781636285 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier(&___callback_object_13, value);
	}
};

struct Context_t515654137_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	Il2CppObject * ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t1407064410 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t3791941180 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t515654137_StaticFields, ___default_server_context_sink_3)); }
	inline Il2CppObject * get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline Il2CppObject ** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(Il2CppObject * value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier(&___default_server_context_sink_3, value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t515654137_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t515654137_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t1407064410 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t1407064410 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t1407064410 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier(&___namedSlots_10, value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t515654137_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t3791941180 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t3791941180 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t3791941180 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier(&___global_dynamic_properties_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
