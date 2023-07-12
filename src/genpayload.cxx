
#include "genpayload.h"





std::string gen_payload_cpp(uint32_t size)
{
    std::string str = "";
    for(int i = 0; i < size; i++) {
        str += char('a' + i % 26); // 将字符循环取模
    }
    return str;
}


std::string gen_size_with_byte(size_t bytes)
{
    double value = (double)bytes;
    if (value < 1024)
    {
        return std::to_string(value) + " bytes";
    }else if (value < (1024 * 1024)){
        return std::to_string(value/1024) + " kb";
    }else{
        return std::to_string(value/(1024*1024)) + " mb";
    }
}