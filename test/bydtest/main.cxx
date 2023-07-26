#include <iostream>
#include "bydtest.h"
#include <string.h>

int main(int argc, char **argv)
{
    int tmp;
    if (strcmp(argv[1], "test001") == 0)
    {
        tmp = test001();
    }

    if (tmp == 0)
    {
        printf("\n测试完成。测试通过。\n");
    }
    else
    {
        printf("\n测试完成。测试不通过。\n");
    }
    return tmp;
}
