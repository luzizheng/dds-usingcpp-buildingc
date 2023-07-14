#ifndef __DDSNODECONST__
#define __DDSNODECONST__

#include <stdint.h>
#include "dds_c_define.h"

#define TOPIC_NAME_REQUEST "test_topic_request"
#define TOPIC_NAME_RESPONSE "test_topic_response"

// 内存共享段大小
#define SHM_SEG_SIZE 2 * 1024 * 1024

typedef enum DDS_NODE_KIND
{
    DEFAULT,
    SERVER,
    CLIENT
} NODE_KIND;


typedef int16_t DDS_CODE;






#endif