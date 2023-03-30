#include <iostream>
int main()
{
    // char
    // float double
    // bool

    // char c = 'A';
    char c = 65;

    // ascii表
    // 数字 -> 字符  解码
    // 字符 -> 数字  编码
    std::cout << c << std::endl;

    float f = 1.0;
    double d = 2.1;
    int f_size = sizeof(float);  // 四个字节
    int d_size = sizeof(double); // 八个字节

    // bool 只占用一位，但是占用一个字节
    bool b = 2; // 除了0都是true
    bool b2 = false;

    // 变量命名：
    // 字母数字下划线组成（不以数字开头）
    // 如果设计到两个单词，单词之间用下划线分隔

    // 变量一定要做初始化,否则可能会出现莫名其妙的值。
    int i = 0;

    return 0;
}