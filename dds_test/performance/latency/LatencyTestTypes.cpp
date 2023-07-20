/**
 * @file LatencyTestTypes.cpp
 *
 */

#include "LatencyTestTypes.hpp"

#include <cstring>
#include <cstddef>

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;

const size_t LatencyType::overhead = offsetof(LatencyType, data) +
        SerializedPayload_t::representation_header_size;
const std::string LatencyDataType::type_name_ = "LatencyType";

bool LatencyDataType::compare_data(
        const LatencyType& lt1,
        const LatencyType& lt2) const
{
    if (lt1.seqnum != lt2.seqnum)
    {
        return false;
    }

    // 在比较中忽略弹跳时间

    return 0 == memcmp(lt1.data, lt2.data, buffer_size_);
}

void LatencyDataType::copy_data(
        const LatencyType& src,
        LatencyType& dst) const
{

    dst.seqnum = src.seqnum;
    dst.bounce = src.bounce;
    memcpy(dst.data, src.data, buffer_size_);
}

bool LatencyDataType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    static uint8_t encapsulation[4] = { 0x0, 0x1, 0x0, 0x0 };
    LatencyType* lt = (LatencyType*)data;

    auto ser_data = payload->data;
    memcpy(ser_data, encapsulation, SerializedPayload_t::representation_header_size);
    ser_data += SerializedPayload_t::representation_header_size;
    memcpy(ser_data, &lt->seqnum, sizeof(lt->seqnum));
    ser_data += sizeof(lt->seqnum);
    memcpy(ser_data, &lt->bounce, sizeof(lt->bounce));
    ser_data += sizeof(lt->bounce);
    memcpy(ser_data, lt->data, buffer_size_);
    payload->length = m_typeSize;
    return true;
}

bool LatencyDataType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    // 有效负载成员字节序与本地计算机匹配
    LatencyType* lt = (LatencyType*)data;
    auto ser_data = payload->data + SerializedPayload_t::representation_header_size;
    lt->seqnum = *reinterpret_cast<uint32_t*>(ser_data);
    ser_data += sizeof(lt->seqnum);
    lt->bounce = *reinterpret_cast<uint32_t*>(ser_data);
    ser_data += sizeof(lt->bounce);
    std::copy(ser_data, ser_data + buffer_size_, lt->data);
    return true;
}

std::function<uint32_t()> LatencyDataType::getSerializedSizeProvider(
        void*)
{
    uint32_t size = m_typeSize;
    return [size]() -> uint32_t
           {
               return size;
           };
}

void* LatencyDataType::createData()
{
    return (void*)new uint8_t[m_typeSize];
}

void LatencyDataType::deleteData(
        void* data)
{
    delete[] (uint8_t*)(data);
}

bool TestCommandDataType::serialize(
        void* data,
        SerializedPayload_t* payload)
{
    TestCommandType* t = (TestCommandType*)data;
    memcpy(payload->data, &t->m_command, sizeof(t->m_command));
    payload->length = 4;
    return true;
}

bool TestCommandDataType::deserialize(
        SerializedPayload_t* payload,
        void* data)
{
    TestCommandType* t = (TestCommandType*)data;
    //	cout << "PAYLOAD LENGTH: "<<payload->length << endl;
    //	cout << "PAYLOAD FIRST BYTE: "<< (int)payload->data[0] << endl;
    memcpy(&t->m_command, payload->data, sizeof(payload->length));
    //	cout << "COMMAND: "<<t->m_command<< endl;
    return true;
}

std::function<uint32_t()> TestCommandDataType::getSerializedSizeProvider(
        void*)
{
    return []() -> uint32_t
           {
               uint32_t size = 0;

               size = (uint32_t)sizeof(uint32_t);

               return size;
           };
}

void* TestCommandDataType::createData()
{

    return (void*)new TestCommandType();
}

void TestCommandDataType::deleteData(
        void* data)
{

    delete((TestCommandType*)data);
}
