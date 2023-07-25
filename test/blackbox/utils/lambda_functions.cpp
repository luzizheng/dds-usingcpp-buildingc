

#include "../common/BlackboxTests.hpp"

#include <functional>
#include <iostream>

const std::function<void(const HelloWorld&)>  default_helloworld_print = [](const HelloWorld& hello)
        {
            std::cout << hello.index() << " ";
        };

const std::function<void(const FixedSized&)>  default_fixed_sized_print = [](const FixedSized& hello)
        {
            std::cout << hello.index() << " ";
        };

const std::function<void(const KeyedHelloWorld&)>  default_keyedhelloworld_print = [](const KeyedHelloWorld& hello)
        {
            std::cout << hello.message() << " " << hello.key();
        };

const std::function<void(const StringTest&)> default_string_print = [](const StringTest& str)
        {
            std::cout << str.message()[str.message().size() - 2]
                      << str.message()[str.message().size() - 1] << " ";
        };

const std::function<void(const Data64kb&)> default_data64kb_print = [](const Data64kb& data)
        {
            std::cout << (uint16_t)data.data()[0] << " ";
        };

const std::function<void(const Data1mb&)> default_data300kb_print = [](const Data1mb& data)
        {
            std::cout << (uint16_t)data.data()[0] << " ";
        };

const std::function<void(const KeyedData1mb&)> default_keyeddata300kb_print = [](const KeyedData1mb& data)
        {
            std::cout << data.key() << " " << (uint16_t)data.data()[0] << " ";
        };
