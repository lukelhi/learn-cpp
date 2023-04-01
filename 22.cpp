#include <iostream>
int main()
{
    int c0 = 1;
    /*
     加上const，第一次声明要赋值，后面也不能进行修改。
     c1是c0的别名
    */
    int &c1 = c0;
    // 上述代码是下述代码的伪装（编译器中其实就是下面的代码），c1与 *c2相同
    int *const c2 = &c0;

    int a1 = 1;
    int &a2 = a1;
    std::cout << "a1 = " << a1 << ", a2 = " << a2 << std::endl;
    std::cout << "a1 address = " << &a1 << ", a2 address = " << &a2 << std::endl;

    int b = 2;
    a2 = b; // 地址不通，只赋值
    // a1 = b;
    std::cout << "a1 = " << a1 << ", b = " << b << std::endl;
    std::cout << "a1 address = " << &a1 << ", b address = " << &b << std::endl;

    int a = 1;
    int *ptr_a = &a;  // ptr_a指向a的内存地址
    int &b2 = *ptr_a; // 将ptr_a地址对应的值,赋值给地址引用b
    // int *const b2 = ptr_a;
    // ptr_a已经已经赋值给b2，不会影响b2

    int c = 2;
    ptr_a = &c; // 对于ptr_a修改不会影响其他

    // b2引用指向a，还是c？
    // 是a

    return 0;
}