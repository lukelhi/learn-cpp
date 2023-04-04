// 系统头文件在系统库中查找，自定义头文件
#include <iostream>
#include "header.h"
/*
为什么用头文件：为了头文件和函数能跨文件被调用
为什么没有函数体：我们需要一个地方存储所有的声明，而不是定义。声明没有函数体。
*/
int main()
{
    PersonHeader ph;
    double bmi = ph.getBMI();
    std::cout << "bmi:" << bmi << std::endl;
    return 0;
}
