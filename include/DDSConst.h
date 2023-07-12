#ifndef __DDSCONST__
#define __DDSCONST__

#include <stdint.h>

#define TOPIC_NAME_REQUEST "test_topic_request"
#define TOPIC_NAME_RESPONSE "test_topic_response"

// 内存共享段大小
#define SHM_SEG_SIZE 2 * 1024 * 1024

typedef enum DDS_NODE_SIDE
{
    SERVER,
    CLIENT
} NODE_SIDE;


typedef int16_t DDS_CODE;


#define REPORTDDSCODE(_rcode_,message)\
if (rcode == ReturnCode_t::RETCODE_OK)\
{\
    std::cout<< message << std::endl;\
}


#endif