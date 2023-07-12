#include "dds_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <chrono>
#include <iomanip>
#include <sstream>

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