#include <iostream>
class Father
{
public:
    virtual std::string getName()
    {
        return "father";
    }
};

class Son : public Father
{
public:
    std::string getName() override
    {
        std::cout << "i am Son" << std::endl;
        return "Son";
    }
};

class Son2 : public Father
{
public:
    std::string getName()
    {
        std::cout << "i am Son2" << std::endl;
        return "Son2";
    }
};
int main()
{
    // 栈上创建内存
    //  Father father;
    //  std::string name = father.getName();

    // 对上创建内存
    Father *father = new Father();
    std::string name = father->getName();

    Son *s = new Son();
    std::string name2 = s->getName();

    // s指针对应的内存只有成员变量的相关信息，没有函数相关信息。
    // f2对应的getName函数调用的Father类中的函数
    // 想要调Son类的方法，在Father类函数前面加上virtual
    Father *f2 = s;
    std::string name3 = f2->getName();

    // virtual
    //  有virtual关键字  函数会动态的去寻找函数，会有一定的开销
    //  无virtual 函数是静态的绑死，在编译器确定绑定关系。

    // 可以带来一个多态的效果，可以随着的输入变化变化

    // override
    // 覆写父类的方法，如果发现没有相关方法，可以在提前在编译期发现程序错误

    return 0;
}
