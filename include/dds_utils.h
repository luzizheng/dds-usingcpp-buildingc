#ifndef _DDS_UTILS_H_
#define _DDS_UTILS_H_

#include <string>
#include <fastrtps/types/TypesBase.h>
#include <string>

/// @brief 获取时间戳 单位毫秒 ms
/// @return 
double get_milliseconds_timestamp();

std::string get_current_timef();

void printDDSRetCode(eprosima::fastrtps::types::ReturnCode_t &__rc);

void reportDDSCode(eprosima::fastrtps::types::ReturnCode_t &_rc,std::string __message);

#endif