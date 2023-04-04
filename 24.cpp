/**
 * @file 24.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-02
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <cmath>

/*
结构体和类的区别：
1，可见性 class 默认 private，struct 默认 public
2，struct更适合内部是pojo，纯数据类型
3，继承只会用class，不会用到struct
4，struct 兼容 c语言，c语言中没有class。goland只有struct


*/

struct Point
{
    int x;
    int y;
    int n;
    int m;
    double a;
    double b;
    double add()
    {
        return 0.0;
    }
};
class Person
{
    // Set Visible
public:
    double getBMI()
    {
        double bmi = weight / pow(height, 2);
        return bmi;
    }
    double height;
    double weight;
};
int main()
{
    return 0;
}