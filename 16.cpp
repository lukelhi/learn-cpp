#include <iostream>
#include <cstring>
int main()
{
    // 在栈上内存
    double wages[3] = {100.0, 200.0, 300.0};

    // 获取数组首地址
    double *ptr1 = wages;
    double *ptr2 = &wages[0];

    std::cout << "ptr1 = " << ptr1 << ", *ptr1 = " << *ptr1 << std::endl;
    std::cout << "ptr2 = " << ptr2 << ", *ptr2 = " << *ptr2 << std::endl;

    // 地址向后偏移
    ptr1 = ptr1 + 1;

    std::cout << "ptr1 = " << ptr1 << ", *ptr1 = " << *ptr1 << std::endl;

    // 数组名是常量，没办法去修改指向，指针可以直接修改地址
    // wages = wages + 1;

    // 数组名 指针 的区别？（当都用来表示数组首地址的时候）
    int size_array = sizeof(wages); // 整个数组的长度
    int size_point = sizeof(ptr1);  // 一个指针的大小 8字节

    std::cout << wages[0] << " " << wages[1] << " " << wages[2] << " " << std::endl;
    std::cout << ptr1[0] << " " << ptr1[1] << " " << ptr1[2] << " " << std::endl;

    // 字符数组
    //  const 它的值不能被改变，在整个作用域中都保持固定
    // 如果不使用const，指针就可以修改字符串字面量的值，这可能会导致程序运行时的错误。
    char str1[10] = "string1";
    const char *str2 = "string2";

    // 指向的是同一块内存，对ptr_str1修改，str1中的内容也会变化
    char *ptr_str1 = str1;

    // 强制类型转换,转为地址值：(void*) str1
    std::cout << str1 << " at " << (void *)str1 << std::endl;
    std::cout << ptr_str1 << " at " << (void *)ptr_str1 << std::endl;
    std::cout << "-- -- -- -- -- -- -- -- -- -- -" << std::endl;

    // \0，要预留一位。
    // 新申请一块内存地址
    char *ptr_str1_copy = new char[strlen(str1) + 1];
    strcpy(ptr_str1_copy, str1);
    std::cout << str1 << " at " << (void *)str1 << std::endl;
    std::cout << ptr_str1_copy << " at " << (void *)ptr_str1_copy << std::endl;

    /*
    上面两种方式：
    第一种：节省内存开销，但是对指针的修改会影响原址真的内容，会影响原来变量的内容
    第二种：新申请一块内存地址，一个变量操作，不会影响另一个变量

    */
    return 0;
}