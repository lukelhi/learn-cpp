
#include <iostream>

// 写在外面所有函数都可以用
using namespace std;

/*
命名规范：驼峰命名
*/
int return0()
{
    return 10;
}
void returnNull()
{
    std::cout << "i am a";
}
int add(int a, int b, int c)
{
    std::cout << a + b + c << std::endl;
    return a + b + c;
}
int main()
{
    int i = return0();
    int sum = add(1, 2, 3);

    std::cout << sum;
    return 0;
}