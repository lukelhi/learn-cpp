#include <iostream>
/**
 * @brief 拷贝构造函数
 *
 * @return int
 */

class Father
{
public:
    int weight = 80; // 栈上
};
class Father2
{
public:
    Father2() : weight(new int(80))
    {
    }
    // 拷贝构造函数，检测到有'='会自动调用
    // Father2(const Father2 &other) = delete;
    // 不自己定义拷贝构造函数，编译器也会生成。但是不会进行深拷贝（成员变量不会拷贝）
    Father2(const Father2 &other)
    {
        weight = new int(*other.weight);
    }
    ~Father2()
    {
        if (weight != nullptr)
        {
            std::cout << "weight is not null ,delete Father2" << std::endl;
            delete weight;
            weight = nullptr;
        }
    }
    int *weight = nullptr;
};
// 一般都加上const & ,减少拷贝构造函数调用。只加&，有改变值的风险。
void test_copy_ctor(const Father2 &f){

};
int main(int, char **)
{

    int a = 0;
    int b = a; // = 会做栈上内存的拷贝
    b = 2;

    // 内存在栈上
    Father f1;
    Father f2 = f1;
    f2.weight = 90;

    // 内存在堆上
    Father *f3 = new Father();
    Father *f4 = f3; // 完成栈上内存的拷贝，不会影响指针指向的值.拷贝指针，指针值不变
    // f4->weight = 90; //f3,f4指向是同一块内容

    f4 = new Father(); // f3,f4已经指向不同的内存了。
    f4->weight = 100;

    {
        Father2 f2_1;
        Father2 f2_2 = f2_1; // 第二次调用析构函数，delete 会报错。因为做的是指针的拷贝，第一次已经释放过指针了。会造成内存反复释放。
        // 怎么解决：类中指向指针变量 指向的内存也去做一次拷贝。
        // 需要自定义拷贝构造函数，不然两个对象不会分离，成员变量指向的内存还会使同一块。

        test_copy_ctor(f2_2);
    }

    std::cout << "Hello, world!\n";
}
