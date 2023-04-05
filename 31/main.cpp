#include <iostream>
// 定义一套方方法模板
class IFather
{
public:
    virtual std::string getName() = 0;
};

class Father : public IFather
{
public:
    std::string getName() override
    {
        std::cout << "i am Father" << std::endl;
        return "Father";
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

// 传入不同的指针，打印不同人的名字
void printName(IFather *i)
{
    std::cout << i->getName() << std::endl;
}

int main()
{
    // 纯虚函数 创建对象的方式。子类需要override实现的接口
    IFather *f = new Son();
    std::string name = f->getName();

    IFather *f2 = new Son2();
    std::string name2 = f2->getName();

    IFather *father = new Father();
    std::string name3 = father->getName();
    return 0;
}
