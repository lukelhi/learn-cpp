#include <iostream>
#include <string>

class Father
{
public:
    // 加const表示 函数是只读的不能对成员变量做修改。可以对函数实现逻辑进行约束
    // const 只能约束变量
    // m_age自己本身是指向内存的某块地址，不能被修改
    // 对地址本身修改不被允许,如：m_age = &x;
    std::string getName() const
    {
        int x = 10;
        // m_age = &x;
        (*m_age) = x;
        weight = 80;
        return m_name;
    }

    int *getAge()
    {
        return m_age;
    }

private:
    int *m_age;
    std::string m_name;
    mutable double weight; // 对特定条件想要修改的变量，加上mutable，可以对变量进行改变
};

// 表示传入的是不能被改变的呃father对象，并且 对象不会被拷贝。
void print(const Father &f)
{
    // 如果getName()方法去掉const关键字，会报错:passing 'const Father' as 'this' argument discards qualifiers [-fpermissive]
    // 编译器会认为getName()方法种会修改f的值
    std::cout << f.getName() << std::endl;
}

int main(int, char **)
{
    // 定义一个常量
    const int i = 0; // const告诉编译器这是一个常量
    int MAX_SCORE = 100;

    // 第一个const保证 指针指向地址的值 不能变，第二个指针保证 指针指向地址 不能变
    // const int const *i_ptr = new int(10);
    int *i_ptr = new int(10);
    (*i_ptr) = 11;      // 指针指向的地址的值
    i_ptr = &MAX_SCORE; // 指针指向的地址

    std::cout << "Hello, world!\n";
}
