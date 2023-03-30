/**
 * @file 15.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-30
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
int main()
{
    int *ptr1; // c语言
    int *ptr2; // c++语言

    // 声明指针
    // long *l;
    /*
    把这块内存赋值为123
    问题是：内存需要申请，这里没有申请内存
    会造成非法访问，没有内存地址
    */
    //*l = 123;

    /*
    通过栈
    申请内存,值是123.
    将内存中的值赋值给
    */
    long l = 123;
    long *l_ptr = &l;

    /*
    通过堆
    通过 new int 申请内存地址
    需要手动释放内存，否则会造成内存泄露。ps:一直申请内存，不释放。
    */
    int *ptr3 = new int;
    *ptr3 = 123;
    double *ptr4 = new double;

    std::cout << "指针本身大小,size of ptr3: " << sizeof(ptr3) << std::endl;
    std::cout << "指针指向的值大小,size of *ptr3: " << sizeof(*ptr3) << std::endl;

    std::cout << "指针本身大小,size of ptr4: " << sizeof(ptr4) << std::endl;
    std::cout << "指针指向的值大小,size of *ptr4: " << sizeof(*ptr4) << std::endl;

    delete ptr3;
    delete ptr4;

    /*
    指针本身都是八个字节，指的是计算机内存地址，是定长的。
    街道、住户。街道中每个住户的门牌号是固定大小的，指向的住户的房子大小，有大有小。
    */

    // 栈（编译器申请内存）程序还没有运行到这里，内存已经申请下来了
    double array[3] = {1.0, 2.0, 3.0};

    // 堆（运行期申请内存）运行语句才会申请内存，相当于 懒加载，lazy模式
    double *array2 = new double[3];
    array2[0] = 2.0;
    array2[1] = 3.0;
    array2[2] = 4.0;

    std::cout << array2[0] << std::endl;
    std::cout << array2[1] << std::endl;
    std::cout << array2[2] << std::endl;

    array2 = array2 + 1; // 地址偏移

    std::cout << array2[0] << std::endl;
    std::cout << array2[1] << std::endl;
    std::cout << array2[2] << std::endl;

    array2 = array2 - 1; // 地址偏移

    std::cout << array2[0] << std::endl;
    std::cout << array2[1] << std::endl;
    std::cout << array2[2] << std::endl;

    delete[] array2; // 删除数组
    // delete array2 只删除第一个位置的元素

    return 0;
}