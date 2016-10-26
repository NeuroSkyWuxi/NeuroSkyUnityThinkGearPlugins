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

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Component
struct Component_t3501516275;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t663911650;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_SendMessageOptions3856946179.h"

// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C"  Component_t3501516275 * GameObject_GetComponent_m1004814461 (GameObject_t3674682005 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void GameObject_GetComponentFastPath_m2905716663 (GameObject_t3674682005 * __this, Type_t * ___type0, IntPtr_t ___oneFurtherThanResultValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
extern "C"  Component_t3501516275 * GameObject_GetComponentInChildren_m1490154500 (GameObject_t3674682005 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C"  Component_t3501516275 * GameObject_GetComponentInParent_m434474382 (GameObject_t3674682005 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
extern "C"  ComponentU5BU5D_t663911650* GameObject_GetComponents_m1126578334 (GameObject_t3674682005 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInChildren(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t663911650* GameObject_GetComponentsInChildren_m305836803 (GameObject_t3674682005 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInParent(System.Type,System.Boolean)
extern "C"  ComponentU5BU5D_t663911650* GameObject_GetComponentsInParent_m521317102 (GameObject_t3674682005 * __this, Type_t * ___type0, bool ___includeInactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C"  Il2CppArray * GameObject_GetComponentsInternal_m181453881 (GameObject_t3674682005 * __this, Type_t * ___type0, bool ___useSearchTypeAsArrayReturnType1, bool ___recursive2, bool ___includeInactive3, bool ___reverse4, Il2CppObject * ___resultList5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m211612200 (GameObject_t3674682005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
extern "C"  void GameObject_set_tag_m859036203 (GameObject_t3674682005 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C"  void GameObject_SendMessage_m423373689 (GameObject_t3674682005 * __this, String_t* ___methodName0, Il2CppObject * ___value1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t3674682005 * GameObject_Find_m332785498 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
