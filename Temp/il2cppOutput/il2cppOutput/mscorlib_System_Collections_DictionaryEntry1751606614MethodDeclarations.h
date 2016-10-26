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

// System.Object
struct Il2CppObject;
// System.Collections.DictionaryEntry
struct DictionaryEntry_t1751606614;
struct DictionaryEntry_t1751606614_marshaled_pinvoke;
struct DictionaryEntry_t1751606614_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
extern "C"  void DictionaryEntry__ctor_m2600671860 (DictionaryEntry_t1751606614 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  Il2CppObject * DictionaryEntry_get_Key_m3516209325 (DictionaryEntry_t1751606614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  Il2CppObject * DictionaryEntry_get_Value_m4281303039 (DictionaryEntry_t1751606614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DictionaryEntry_t1751606614;
struct DictionaryEntry_t1751606614_marshaled_pinvoke;

extern "C" void DictionaryEntry_t1751606614_marshal_pinvoke(const DictionaryEntry_t1751606614& unmarshaled, DictionaryEntry_t1751606614_marshaled_pinvoke& marshaled);
extern "C" void DictionaryEntry_t1751606614_marshal_pinvoke_back(const DictionaryEntry_t1751606614_marshaled_pinvoke& marshaled, DictionaryEntry_t1751606614& unmarshaled);
extern "C" void DictionaryEntry_t1751606614_marshal_pinvoke_cleanup(DictionaryEntry_t1751606614_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DictionaryEntry_t1751606614;
struct DictionaryEntry_t1751606614_marshaled_com;

extern "C" void DictionaryEntry_t1751606614_marshal_com(const DictionaryEntry_t1751606614& unmarshaled, DictionaryEntry_t1751606614_marshaled_com& marshaled);
extern "C" void DictionaryEntry_t1751606614_marshal_com_back(const DictionaryEntry_t1751606614_marshaled_com& marshaled, DictionaryEntry_t1751606614& unmarshaled);
extern "C" void DictionaryEntry_t1751606614_marshal_com_cleanup(DictionaryEntry_t1751606614_marshaled_com& marshaled);
