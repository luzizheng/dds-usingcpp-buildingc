

/*! 
 * @file TypesPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * 此文件由工具fastcdrgen生成。
 */


#ifndef _TYPES_PUBSUBTYPES_H_
#define _TYPES_PUBSUBTYPES_H_

#include <fastrtps/config.h>
#include <fastrtps/TopicDataType.h>

#include "Types.h"

#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error Generated Types is not compatible with current installed Fast-RTPS. Please, regenerate it with fastrtpsgen.
#endif



/*!
 * @brief This class represents the TopicDataType of the type MyEnumStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MyEnumStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MyEnumStruct type;

	MyEnumStructPubSubType();
	virtual ~MyEnumStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MyBadEnumStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MyBadEnumStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MyBadEnumStruct type;

	MyBadEnumStructPubSubType();
	virtual ~MyBadEnumStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
typedef MyEnum MyAliasEnum;
/*!
 * @brief This class represents the TopicDataType of the type MyAliasEnumStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MyAliasEnumStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MyAliasEnumStruct type;

	MyAliasEnumStructPubSubType();
	virtual ~MyAliasEnumStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type BasicStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class BasicStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef BasicStruct type;

	BasicStructPubSubType();
	virtual ~BasicStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type BasicNamesStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class BasicNamesStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef BasicNamesStruct type;

	BasicNamesStructPubSubType();
	virtual ~BasicNamesStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type BasicBadStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class BasicBadStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef BasicBadStruct type;

	BasicBadStructPubSubType();
	virtual ~BasicBadStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type BasicWideStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class BasicWideStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef BasicWideStruct type;

	BasicWideStructPubSubType();
	virtual ~BasicWideStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type BadBasicWideStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class BadBasicWideStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef BadBasicWideStruct type;

	BadBasicWideStructPubSubType();
	virtual ~BadBasicWideStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type StringStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class StringStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef StringStruct type;

	StringStructPubSubType();
	virtual ~StringStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type LargeStringStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class LargeStringStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef LargeStringStruct type;

	LargeStringStructPubSubType();
	virtual ~LargeStringStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type WStringStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class WStringStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef WStringStruct type;

	WStringStructPubSubType();
	virtual ~WStringStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type LargeWStringStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class LargeWStringStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef LargeWStringStruct type;

	LargeWStringStructPubSubType();
	virtual ~LargeWStringStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type ArrayStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class ArrayStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef ArrayStruct type;

	ArrayStructPubSubType();
	virtual ~ArrayStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type ArrayStructEqual defined by the user in the IDL file.
 * @ingroup TYPES
 */
class ArrayStructEqualPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef ArrayStructEqual type;

	ArrayStructEqualPubSubType();
	virtual ~ArrayStructEqualPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type ArrayBadStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class ArrayBadStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef ArrayBadStruct type;

	ArrayBadStructPubSubType();
	virtual ~ArrayBadStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type ArrayDimensionsStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class ArrayDimensionsStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef ArrayDimensionsStruct type;

	ArrayDimensionsStructPubSubType();
	virtual ~ArrayDimensionsStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type ArraySizeStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class ArraySizeStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef ArraySizeStruct type;

	ArraySizeStructPubSubType();
	virtual ~ArraySizeStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SequenceStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SequenceStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SequenceStruct type;

	SequenceStructPubSubType();
	virtual ~SequenceStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SequenceStructEqual defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SequenceStructEqualPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SequenceStructEqual type;

	SequenceStructEqualPubSubType();
	virtual ~SequenceStructEqualPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SequenceBadStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SequenceBadStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SequenceBadStruct type;

	SequenceBadStructPubSubType();
	virtual ~SequenceBadStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SequenceBoundsStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SequenceBoundsStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SequenceBoundsStruct type;

	SequenceBoundsStructPubSubType();
	virtual ~SequenceBoundsStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SequenceSequenceStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SequenceSequenceStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SequenceSequenceStruct type;

	SequenceSequenceStructPubSubType();
	virtual ~SequenceSequenceStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SequenceSequenceBoundsStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SequenceSequenceBoundsStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SequenceSequenceBoundsStruct type;

	SequenceSequenceBoundsStructPubSubType();
	virtual ~SequenceSequenceBoundsStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapStruct type;

	MapStructPubSubType();
	virtual ~MapStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapStructEqual defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapStructEqualPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapStructEqual type;

	MapStructEqualPubSubType();
	virtual ~MapStructEqualPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapBadKeyStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapBadKeyStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapBadKeyStruct type;

	MapBadKeyStructPubSubType();
	virtual ~MapBadKeyStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapBadElemStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapBadElemStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapBadElemStruct type;

	MapBadElemStructPubSubType();
	virtual ~MapBadElemStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapBoundsStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapBoundsStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapBoundsStruct type;

	MapBoundsStructPubSubType();
	virtual ~MapBoundsStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapMapStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapMapStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapMapStruct type;

	MapMapStructPubSubType();
	virtual ~MapMapStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type MapMapBoundsStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class MapMapBoundsStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MapMapBoundsStruct type;

	MapMapBoundsStructPubSubType();
	virtual ~MapMapBoundsStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};





/*!
 * @brief This class represents the TopicDataType of the type SimpleUnionStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SimpleUnionStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimpleUnionStruct type;

	SimpleUnionStructPubSubType();
	virtual ~SimpleUnionStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SimpleUnionStructEqual defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SimpleUnionStructEqualPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimpleUnionStructEqual type;

	SimpleUnionStructEqualPubSubType();
	virtual ~SimpleUnionStructEqualPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SimpleUnionNamesStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SimpleUnionNamesStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimpleUnionNamesStruct type;

	SimpleUnionNamesStructPubSubType();
	virtual ~SimpleUnionNamesStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SimpleTypeUnionStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SimpleTypeUnionStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimpleTypeUnionStruct type;

	SimpleTypeUnionStructPubSubType();
	virtual ~SimpleTypeUnionStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SimpleBadUnionStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SimpleBadUnionStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimpleBadUnionStruct type;

	SimpleBadUnionStructPubSubType();
	virtual ~SimpleBadUnionStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};
/*!
 * @brief This class represents the TopicDataType of the type SimplBadDiscUnionStruct defined by the user in the IDL file.
 * @ingroup TYPES
 */
class SimplBadDiscUnionStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimplBadDiscUnionStruct type;

	SimplBadDiscUnionStructPubSubType();
	virtual ~SimplBadDiscUnionStructPubSubType();
	virtual bool serialize(void *data, eprosima::fastrtps::rtps::SerializedPayload_t *payload) override;
	virtual bool deserialize(eprosima::fastrtps::rtps::SerializedPayload_t *payload, void *data) override;
    virtual std::function<uint32_t()> getSerializedSizeProvider(void* data) override;
	virtual bool getKey(void *data, eprosima::fastrtps::rtps::InstanceHandle_t *ihandle,
		bool force_md5 = false) override;
	virtual void* createData() override;
	virtual void deleteData(void * data) override;
	MD5 m_md5;
	unsigned char* m_keyBuffer;
};

#endif // _TYPES_PUBSUBTYPES_H_