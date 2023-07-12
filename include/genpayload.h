#ifndef __GENPAYLOAD_H__
#define __GENPAYLOAD_H__

#include <stdint.h>
#include <string>


std::string gen_payload_cpp(uint32_t size);


std::string gen_size_with_byte(size_t bytes);


#endif