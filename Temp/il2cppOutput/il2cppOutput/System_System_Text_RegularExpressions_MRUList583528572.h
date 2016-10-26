#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.MRUList/Node
struct Node_t1521789168;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList
struct  MRUList_t583528572  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t1521789168 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t1521789168 * ___tail_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(MRUList_t583528572, ___head_0)); }
	inline Node_t1521789168 * get_head_0() const { return ___head_0; }
	inline Node_t1521789168 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t1521789168 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier(&___head_0, value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(MRUList_t583528572, ___tail_1)); }
	inline Node_t1521789168 * get_tail_1() const { return ___tail_1; }
	inline Node_t1521789168 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t1521789168 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier(&___tail_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
