#include "dds_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <iostream>


double get_milliseconds_timestamp()
{
    auto now = std::chrono::time_point_cast<std::chrono::milliseconds>(
        std::chrono::system_clock::now());
    return now.time_since_epoch().count();
}


std::string get_current_timef()
{
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);

    // format
    char time_str[20];
    std::strftime(time_str,sizeof(time_str),"%T",std::localtime(&now_time));
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
    std::ostringstream oss;
    oss << time_str << '.' << std::setfill('0') << std::setw(3) << ms.count();
    return oss.str();
}

using namespace eprosima::fastrtps::types;
void printDDSRetCode(ReturnCode_t &__rc)
{
    if (__rc == ReturnCode_t::ReturnCodeValue::RETCODE_OK)
    {
        std::cerr << "RETCODE_OK" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_ERROR)
    {
        std::cerr << "RETCODE_ERROR 错误" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_UNSUPPORTED)
    {
        std::cerr << "RETCODE_UNSUPPORTED 不支持" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_BAD_PARAMETER)
    {
        std::cerr << "RETCODE_BAD_PARAMETER 参数错误" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_PRECONDITION_NOT_MET)
    {
        std::cerr << "RETCODE_PRECONDITION_NOT_MET 前置条件不满足" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_OUT_OF_RESOURCES)
    {
        std::cerr << "RETCODE_OUT_OF_RESOU__rcES 资源不足" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_NOT_ENABLED)
    {
        std::cerr << "RETCODE_NOT_ENABLED 未启用" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_IMMUTABLE_POLICY)
    {
        std::cerr << "RETCODE_IMMUTABLE_POLICY 不可变策略" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_INCONSISTENT_POLICY)
    {
        std::cerr << "RETCODE_INCONSISTENT_POLICY 不一致的策略" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_ALREADY_DELETED)
    {
        std::cerr << "RETCODE_ALREADY_DELETED 已删除" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_TIMEOUT)
    {
        std::cerr << "RETCODE_TIMEOUT 超时" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_NO_DATA)
    {
        std::cerr << "RETCODE_NO_DATA 没有数据" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_ILLEGAL_OPERATION)
    {
        std::cerr << "RETCODE_ILLEGAL_OPERATION 非法操作" << std::endl;
    }else if(__rc == ReturnCode_t::ReturnCodeValue::RETCODE_NOT_ALLOWED_BY_SECURITY)
    {
        std::cerr << "RETCODE_NOT_ALLOWED_BY_SECURITY 安全不允许" << std::endl;
    }
}


void reportDDSCode(eprosima::fastrtps::types::ReturnCode_t &_rc,std::string __message)
{
    if (_rc == ReturnCode_t::ReturnCodeValue::RETCODE_OK)
    {
        std::cout << __message << std::endl;
    }else{
        printDDSRetCode(_rc);
    }
}