/**
 * @file 25.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-02
 *
 * @copyright Copyright (c) 2023
 *
 */

/*
C++构造函数

构造函数与普通函数的区别
1，构造函数没有返回值
2，构造函数名称和类名一致


1，编译器会生成默认构造函数
2，当自己写构造函数时，会自动替换编译器替我们生成的构造函数。
3，类创建对象时，会有初始化过程，调用构造函数
4，自定义构造函数的时候，编译器不会替我们生成构造函数
*/
#include <cmath>
#include <iostream>
class Person
{
    // Set Visible
public:
    // 删除默认构造函数。 Don't let the compiler generate a default constructor
    Person() = delete;
    // 定义了删除默认构造函数，不能定义默认构造函数，可以使用
    //  Person()
    //  {
    //      m_height = 0;
    //      m_weight = 0;
    //  }
    Person(double h, double w)
    {
        m_height = h;
        m_weight = w;
    }
    double getBMI()
    {
        double bmi = m_weight / pow(m_height, 2);
        return bmi;
    }
    // 需要手动调用初始化
    void init(double h, double w)
    {
        m_height = h;
        m_weight = w;
    }

private:
    void print()
    {
        std::cout << "i am print" << std::endl;
    }

private:
    double m_height; // Variables must be initialized
    double m_weight;
};
int main()
{
    Person person1(1.8, 80);

    // person1.height = 1.8;
    // person1.weight = 80;

    // 手动初始化变量
    // person1.init(1.8, 80);
    double p1 = person1.getBMI();

    return 0;
}