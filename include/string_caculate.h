#ifndef _STR_CA_H_
#define _STR_CA_H_
#include <string>
#include <stddef.h>
#include <vector>

/// @brief 输入字符串表达式，计算结果
size_t evaluate_exp(std::string strExp);

/// @brief 根据空格分割字符串
std::vector<std::string> seperateStrWithSpace(std::string str);

int32_t strcmpIgnUpperCase(const char *__s1, const char *__s2);

#endif