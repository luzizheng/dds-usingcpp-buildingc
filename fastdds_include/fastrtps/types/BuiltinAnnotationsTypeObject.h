/*!
 * @file BuiltinAnnotationsTypeObject.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _BUILTIN_ANNOTATIONS_TYPE_OBJECT_H_
#define _BUILTIN_ANNOTATIONS_TYPE_OBJECT_H_


#include <fastrtps/types/TypeObject.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <map>

using namespace eprosima::fastrtps::types;

void register_builtin_annotations_types(TypeObjectFactory* factory);

const TypeIdentifier* GetidIdentifier(bool complete = false);
const TypeObject* GetidObject(bool complete = false);
const TypeObject* GetMinimalidObject();
const TypeObject* GetCompleteidObject();

const TypeIdentifier* GetautoidIdentifier(bool complete = false);
const TypeObject* GetautoidObject(bool complete = false);
const TypeObject* GetMinimalautoidObject();
const TypeObject* GetCompleteautoidObject();

namespace autoid
{
    const TypeIdentifier* GetAutoidKindIdentifier(bool complete = false);
    const TypeObject* GetAutoidKindObject(bool complete = false);
    const TypeObject* GetMinimalAutoidKindObject();
    const TypeObject* GetCompleteAutoidKindObject();
}

const TypeIdentifier* GetoptionalIdentifier(bool complete = false);
const TypeObject* GetoptionalObject(bool complete = false);
const TypeObject* GetMinimaloptionalObject();
const TypeObject* GetCompleteoptionalObject();

const TypeIdentifier* GetpositionIdentifier(bool complete = false);
const TypeObject* GetpositionObject(bool complete = false);
const TypeObject* GetMinimalpositionObject();
const TypeObject* GetCompletepositionObject();

const TypeIdentifier* GetvalueIdentifier(bool complete = false);
const TypeObject* GetvalueObject(bool complete = false);
const TypeObject* GetMinimalvalueObject();
const TypeObject* GetCompletevalueObject();

const TypeIdentifier* GetextensibilityIdentifier(bool complete = false);
const TypeObject* GetextensibilityObject(bool complete = false);
const TypeObject* GetMinimalextensibilityObject();
const TypeObject* GetCompleteextensibilityObject();

namespace extensibility
{
    const TypeIdentifier* GetExtensibilityKindIdentifier(bool complete = false);
    const TypeObject* GetExtensibilityKindObject(bool complete = false);
    const TypeObject* GetMinimalExtensibilityKindObject();
    const TypeObject* GetCompleteExtensibilityKindObject();
}

const TypeIdentifier* GetfinalIdentifier(bool complete = false);
const TypeObject* GetfinalObject(bool complete = false);
const TypeObject* GetMinimalfinalObject();
const TypeObject* GetCompletefinalObject();

const TypeIdentifier* GetappendableIdentifier(bool complete = false);
const TypeObject* GetappendableObject(bool complete = false);
const TypeObject* GetMinimalappendableObject();
const TypeObject* GetCompleteappendableObject();

const TypeIdentifier* GetmutableIdentifier(bool complete = false);
const TypeObject* GetmutableObject(bool complete = false);
const TypeObject* GetMinimalmutableObject();
const TypeObject* GetCompletemutableObject();

const TypeIdentifier* GetkeyIdentifier(bool complete = false);
const TypeObject* GetkeyObject(bool complete = false);
const TypeObject* GetMinimalkeyObject();
const TypeObject* GetCompletekeyObject();

const TypeIdentifier* Getmust_understandIdentifier(bool complete = false);
const TypeObject* Getmust_understandObject(bool complete = false);
const TypeObject* GetMinimalmust_understandObject();
const TypeObject* GetCompletemust_understandObject();

const TypeIdentifier* Getdefault_literalIdentifier(bool complete = false);
const TypeObject* Getdefault_literalObject(bool complete = false);
const TypeObject* GetMinimaldefault_literalObject();
const TypeObject* GetCompletedefault_literalObject();

const TypeIdentifier* GetdefaultIdentifier(bool complete = false);
const TypeObject* GetdefaultObject(bool complete = false);
const TypeObject* GetMinimaldefaultObject();
const TypeObject* GetCompletedefaultObject();

const TypeIdentifier* GetrangeIdentifier(bool complete = false);
const TypeObject* GetrangeObject(bool complete = false);
const TypeObject* GetMinimalrangeObject();
const TypeObject* GetCompleterangeObject();

const TypeIdentifier* GetminIdentifier(bool complete = false);
const TypeObject* GetminObject(bool complete = false);
const TypeObject* GetMinimalminObject();
const TypeObject* GetCompleteminObject();

const TypeIdentifier* GetmaxIdentifier(bool complete = false);
const TypeObject* GetmaxObject(bool complete = false);
const TypeObject* GetMinimalmaxObject();
const TypeObject* GetCompletemaxObject();

const TypeIdentifier* GetunitIdentifier(bool complete = false);
const TypeObject* GetunitObject(bool complete = false);
const TypeObject* GetMinimalunitObject();
const TypeObject* GetCompleteunitObject();

const TypeIdentifier* Getbit_boundIdentifier(bool complete = false);
const TypeObject* Getbit_boundObject(bool complete = false);
const TypeObject* GetMinimalbit_boundObject();
const TypeObject* GetCompletebit_boundObject();

const TypeIdentifier* GetexternalIdentifier(bool complete = false);
const TypeObject* GetexternalObject(bool complete = false);
const TypeObject* GetMinimalexternalObject();
const TypeObject* GetCompleteexternalObject();

const TypeIdentifier* GetnestedIdentifier(bool complete = false);
const TypeObject* GetnestedObject(bool complete = false);
const TypeObject* GetMinimalnestedObject();
const TypeObject* GetCompletenestedObject();

const TypeIdentifier* GetverbatimIdentifier(bool complete = false);
const TypeObject* GetverbatimObject(bool complete = false);
const TypeObject* GetMinimalverbatimObject();
const TypeObject* GetCompleteverbatimObject();

namespace verbatim
{
    const TypeIdentifier* GetPlacementKindIdentifier(bool complete = false);
    const TypeObject* GetPlacementKindObject(bool complete = false);
    const TypeObject* GetMinimalPlacementKindObject();
    const TypeObject* GetCompletePlacementKindObject();
}

const TypeIdentifier* GetserviceIdentifier(bool complete = false);
const TypeObject* GetserviceObject(bool complete = false);
const TypeObject* GetMinimalserviceObject();
const TypeObject* GetCompleteserviceObject();

const TypeIdentifier* GetonewayIdentifier(bool complete = false);
const TypeObject* GetonewayObject(bool complete = false);
const TypeObject* GetMinimalonewayObject();
const TypeObject* GetCompleteonewayObject();

const TypeIdentifier* GetamiIdentifier(bool complete = false);
const TypeObject* GetamiObject(bool complete = false);
const TypeObject* GetMinimalamiObject();
const TypeObject* GetCompleteamiObject();

const TypeIdentifier* Getnon_serializedIdentifier(bool complete = false);
const TypeObject* Getnon_serializedObject(bool complete = false);
const TypeObject* GetMinimalnon_serializedObject();
const TypeObject* GetCompletenon_serializedObject();

#endif // _BUILTIN_ANNOTATIONS_TYPE_OBJECT_H_