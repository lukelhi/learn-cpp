/**
 * @file 26.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-02
 *
 * @copyright Copyright (c) 2023
 *
 */
/*
cpp中析构函数

*/
#include <cmath>
#include <iostream>
class Person
{
public:
    Person()
    {
        m_height = 0;
        m_weight = 0;
        // 指针不释放会造成 内存泄露
        m_ptr = new double;
        std::cout << "create the person" << std::endl;
    }
    // 析构函数，作用：回收对象的资源
    ~Person()
    {
        delete m_ptr;
        std::cout << "destory the person" << std::endl;
    }
    double getBMI()
    {
        double bmi = m_weight / pow(m_height, 2);
        return bmi;
    }

private:
    void print()
    {
        std::cout << "i am print" << std::endl;
    }

private:
    double m_height; // Variables must be initialized
    double m_weight;
    double *m_ptr;
};
int main()
{
    /*
    创建一个对象：
    1，对象内存的申请
    2，对象内存上的值的初始化
    */
    {
        // 内存分配在栈，出了花括号，会调用析构函数
        Person person1;
    }

    Person *person2;
    {
        // 堆，出了花括号不会调用析构函数
        person2 = new Person();
    }
    delete person2;

    return 0;
}