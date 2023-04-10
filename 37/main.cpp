#include <iostream>

class Father
{
public:
    Father()
    {
    }
    Father(std::string name, int age) //: age(age), name(name)
    {
        // this是指针不能用.访问成员
        this->name = name;
        this->age = age;
    }

    std::string getName()
    {
        // this是一个指针，它的类型是Father* 它的值是对象本身
        Father *my_point = this;
        // 编译过程会自动加上 this->,不然不知道去找那个对象的name
        std::string tmp_name = name; // this->name
        return name;
    }

private:
    int age;
    std::string name;
};

int main(int, char **)
{
    Father f1 = Father("tom1", 29);
    f1.getName();

    Father *f2 = new Father("tom1", 29);
    f2->getName(); // 会将f2对应指针传入函数中。

    std::cout << "Hello, world!\n";

    // Father.getName();
    // Father->getName();
    // 因为会自动将对象的指针传入函数中，但是没有创建对象。
    // 怎么保证能访问到特定对象的变量？

    /*
    this 内存相关特性：
    类中只存储成员变量，函数是存在另外一块内存地址的。
    函数是公用的，那函数里想要有自己的东西，比如想拿到name，age，一定要区分是谁调用它的，比如getName函数，虽然没有输入参数，但是会有一个this指针。
    拿到this指针之后，会在成员变量前面加上this->前缀
    */
}
