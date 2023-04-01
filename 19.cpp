/**
 * @file 19.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-01
 *
 * @copyright Copyright (c) 2023
 *
 */
/*
循环：for while

*/
#include <iostream>
#include <vector>

int main()
{

    bool condition = true;
    for (;;)
    {
        std::cout << "loops" << std::endl;
    }

    std::vector<int> ints{1, 2, 3};
    for (int i = 0; i < ints.size(); i++)
    {
        std::cout << ints[i] << std::endl;
    }

    int i = 0;

    // 先执行判断，再执行里面的逻辑语句
    while (false)
    {
        std::cout << "loops" << std::endl;
        i++;
    }
    // 限制性逻辑语句，再执行判断
    do
    {
        std::cout << "loops" << std::endl;
        i++;
    } while (false);
    return 0;
}