#include <iostream>
class IFather
{
public:
    virtual std::string getName() = 0;
};

class Father
{
public:
    // 有八个字节存储虚函数相关内容
    virtual std::string getName()
    {
        std::cout << "i am Father" << std::endl;
        return "Father";
    }
    virtual std::string getName2()
    {
        std::cout << "i am Father" << std::endl;
        return "Father";
    }
    double *d;
};
class Sonn : public Father
{
public:
    std::string getName() override
    {
        std::cout << "i am Son" << std::endl;
        return "Son";
    }
};

class Son : public IFather
{
public:
    std::string getName() override
    {
        std::cout << "i am Son" << std::endl;
        return "Son";
    }
};

class Son2 : public IFather
{
public:
    std::string getName()
    {
        std::cout << "i am Son2" << std::endl;
        return "Son2";
    }
};

class B
{
public:
    virtual void foo()
    {
        std::cout << "i am Foo" << std::endl;
    }
    virtual void bar()
    {
        std::cout << "i am B::bar" << std::endl;
    }
};

class D : public B
{
public:
    virtual void quz()
    {
        std::cout << "i am quz" << std::endl;
    }
    virtual void bar()
    {
        std::cout << "i am D::bar" << std::endl;
    }
};

void test(B *pb)
{
    pb->bar();
}

// 传入不同的指针，打印不同人的名字
void printName(IFather *i)
{
    std::cout << i->getName() << std::endl;
}

int main()
{
    // 类大小至少一个字节
    // 类对象的函数存在哪里?
    // 1，成员函数是不存在对象中的
    // 2，虚函数是存在对象中的（ 有八个字节存）
    // 3，多个虚函数，不会额外增加内存大小
    // 4，虚函数内存是可以被继承的
    int size = sizeof(Father);
    int sonn_size = sizeof(Sonn); // sonn继承了父类虚函数、变量

    B *b = new B();
    D *d = new D();
    test(b);
    return 0;
}
