/**
 * @file 17.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-01
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
int main()
{

    // 不管匹配到没有，都会匹配三次，相比else if 会有性能损失
    int input = 1;
    if (0 == input)
    {
        std::cout << "i am 0";
    }
    if (1 == input)
    {
        std::cout << "i am 1";
    }
    if (2 == input)
    {
        std::cout << "i am 2";
    }

    // 会有性能
    // else if 先判断if条件，满足条件，再进入else语句
    if (0 == input)
    {
        std::cout << "i am 0";
    }
    else if (0 == input)
    {
        std::cout << "i am 0";
    }
    else if (0 == input)
    {
        std::cout << "i am 0";
    }
    else
    {
        std::cout << "i am 0";
    }
}