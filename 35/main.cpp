#include <iostream>

class Father
{
public:
    // 禁掉隐式转化：在构造函数关键字前加上 explicit

    Father() : m_age(29), m_name("y")
    {
    }
    Father(std::string name) : m_name(name), m_age(30){};
    Father(int age) : m_name("y"), m_age(age){};

private:
    int m_age;
    std::string m_name;
};

void function(Father father)
{
    Father f_copy = father;
}
int main(int, char **)
{
    Father f1 = Father();

    Father f4;
    Father f5(30);
    Father f6("tom2");
    Father f7(1.0); // double 走的是int的构造函数

    // 写法一样，编译器内部会自动转为两种的第一种的写法。

    Father f2 = Father(29);
    Father f8 = 29;

    Father f3 = Father("tom1");
    Father f9 = std::string("tom1");

    // 用法
    function(20);

    std::cout << "Hello, world!\n";

    /*
    隐式转换：将变量的值赋值给对象。没有将转换过程表现出来。会去对象的构造函数中找对应的类型。
    */
}
