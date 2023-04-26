#include <iostream>
#include <functional>
/**
 * @brief lambda:以括号定义输入参数，->后面的是返回值。
 *
 * @return int
 */

int main(int, char **)
{

    int a = 0;
    std::string s = "s";
    //[] 捕获变量
    // 如果是[=],会把外面的变量拷贝一份到函数里面
    // 如果是[&],会直接引用地址，对变量进行修改，外面也会直接生效
    std::function<int(int)> fun4 = [&](int i) -> int
    {
        int b = a;
        a = a + 1;
        std::string s2 = s;
        std::cout << i << std::endl;
        return 0;
    };

    fun4(1);
}
