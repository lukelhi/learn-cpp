#include <iostream>

// 传入不是int类型的指针的时候，会做一次拷贝，函数里面的值的内存和传入的值的内存不是同一块内存
//  void add(int value)
//  {
//      value++;
//  }

// 接收一个指针类型
//  void add(int *value)
//  {
//      //只会对地址进行偏移
//      value++;
//  }

void add(int *value)
{
    (*value)++;
}

// 引用类型，接受一个地址值，不会做内容拷贝
void add2(int &value)
{
    value++;
}

int main()
{
    int a1 = 1;
    int *b2 = &a1; // 如add()函数。
    int &b1 = a1;  // 如add2()函数。应用类型。b1仅仅相当于a1的别名，指向的内容一样。这里赋值不发生内存拷贝

    int x = 1;
    // add(x);
    add(&x); // 传入地址

    add2(x);

    int a = 1;
    int b = 2;
    int &ref = a;

    // 和int &ref = a;是一样的
    // int *ref = &a;

    // ref相当于a的别名，相当于：a = b;
    ref = b;

    std::cout << "a address: " << &a << std::endl;
    std::cout << "ref address: " << &ref << std::endl;

    // int& ref2; //声明“引用变量”时，一定要进行初始化
    int c0 = 1;
    /*
     加上const，第一次声明要赋值，后面也不能进行修改。
     c1是c0的别名
    */
    int &c1 = c0;
    // 上述代码是下述代码的伪装（编译器中其实就是下面的代码），c1与 *c2相同
    int *const c2 = &c0;

    return 0;
}