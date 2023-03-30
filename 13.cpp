/*
c++字符串
1，char数组 //c语言
2，string  //c++11语言

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 字符数组，如果不去手动补上最后一位的'\0',这种方式不能表示 字符串
    char dog[8] = {'d', 'o', 'g'};
    // 正确
    char dog2[8] = {'d', 'o', 'g', '\0'};
    // 正确，双引号，会理解为一个字符串
    char bird[11] = "bird";
    // 正确。通过赋值常量自动申请长度。
    char bird2[] = "bird";
    // 编译器会提示错误，，自动补充一个\0,一共两个字符，但是char类型只能有一个字符。
    // char size = "L";//两个字符,不能赋值给字符
    char size = 'L'; // 一个字符

    char name[15] = "c++boy";
    // 获取字符串长度，不包括结束符。
    int length = strlen(name);

    // 长度包括结束符
    int mem_size = sizeof(name);
    std::cout << dog << std ::endl;

    std::string var = {"hello world"};
    std::string var2 = {"hello"};
    std::string var3 = var + var2;

    int string_length = var2.size();
    // sizeof 计算栈里面的内存占用的
    // 对于string来说，栈上面只保存了string的基础信息，内容都是在堆上
    // 对于vector来说，栈上面保存了vector的基础信息，内容在堆上。
    int mem_length = sizeof(var2); // 值为24

    char charr1[20];
    char charr2[20] = "jaguar";

    std::string str1;
    std::string str2 = "panther";

    /*
    对字符串赋值
    */
    str1 = str2;
    // 字符数组不能直接赋值，需要用函数
    // charr1 = charr2;
    strcpy(charr1, charr2); // 考虑长度不能越界

    /*
    字符串追加
    */
    str1 = str1 + " paster";
    strcat(charr1, " juice");

    // 总结：一般如果没有要求，就是用string操作字符串，使用c++语法更便捷

    return 0;
}