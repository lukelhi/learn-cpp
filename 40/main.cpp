#include <iostream>
#include <string>
#include <functional>

/**
 * @brief 函数变量
 *
 */
void print()
{
    std::cout << "i am print" << std::endl;
}
int print_int(int i)
{
    std::cout << i << std::endl;
    return i;
}

int print_int2(int i)
{
    std::cout << i + 1 << std::endl;
    return i;
}
/**
 * @brief 参数是函数变量
 *
 * @param func
 */
void test_function(std::function<int(int)> func)
{
    func(11);
}
int main(int, char **)
{
    print();

    // 创建一个函数的变量，引入std::function<返回值(入参)>
    std::function<void()> fun1 = print;
    fun1();

    std::function<int(int)> fun2 = print_int;
    fun2(10);
    std::function<int(int)> fun3 = print_int2;

    test_function(fun2);
    test_function(fun3);
}
