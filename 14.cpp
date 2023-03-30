/**
 * @file 14.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-30
 *
 * @copyright Copyright (c) 2023
 *
 * c++指针
 *
 * 存储数据
 * 1，数据存储存储在哪里
 * 2，存储的值是多少
 * 3，存储的类型是什么
 *
 */
#include <iostream>

int main()
{
    //& 表示变量的地址，存储在哪里
    int i = 10;

    std::cout << &i << std::endl;
    std::cout << i << std::endl;

    //&i 是int*类型。保存下来地址
    int *i_address = &i;

    // 地址也是有类型的,int*，double*
    double d = 10;
    double *d_address = &d;

    //* 取内存上面对应的值
    int content = *i_address;

    // content_address 合i_address不是同一块内存，只是值进行拷贝
    int *content_address = &content;

    // i_address 地址上面的值+1，因为i存放在i_address地址，所以i也+1，操作的是地址
    *i_address = *i_address + 1;
    int i2 = *i_address;

    content = content + 1; // content来源是36行的值10，还没有进行42行+1操作

    return 0;
}
