#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;

#include "System_System_Collections_Specialized_NameObjectCo1023199937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2791941106  : public NameObjectCollectionBase_t1023199937
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t4054002952* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t4054002952* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2791941106, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t4054002952* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t4054002952** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t4054002952* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAllKeys_10, value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2791941106, ___cachedAll_11)); }
	inline StringU5BU5D_t4054002952* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t4054002952** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t4054002952* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAll_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
