

/*! 
 * @file WideEnumPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * 此文件由工具fastcdrgen生成。
 */


#ifndef _WIDEENUM_PUBSUBTYPES_H_
#define _WIDEENUM_PUBSUBTYPES_H_

#include <fastrtps/config.h>
#include <fastrtps/TopicDataType.h>

#include "WideEnum.h"

#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error Generated WideEnum is not compatible with current installed Fast-RTPS. Please, regenerate it with fastrtpsgen.
#endif


/*!
 * @brief This class represents the TopicDataType of the type MyEnumWideStruct defined by the user in the IDL file.
 * @ingroup WIDEENUM
 */
class MyEnumWideStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef MyEnumWideStruct type;

	MyEnumWideStructPubSubType();
	virtual ~MyEnumWideStructPubSubType();
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
 * @brief This class represents the TopicDataType of the type SimpleWideUnionStruct defined by the user in the IDL file.
 * @ingroup WIDEENUM
 */
class SimpleWideUnionStructPubSubType : public eprosima::fastrtps::TopicDataType {
public:
        typedef SimpleWideUnionStruct type;

	SimpleWideUnionStructPubSubType();
	virtual ~SimpleWideUnionStructPubSubType();
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

#endif // _WIDEENUM_PUBSUBTYPES_H_