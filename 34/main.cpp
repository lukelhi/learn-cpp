#include <iostream>

class Tool
{
public:
    Tool()
    {
        std::cout << "create Tool()" << std::endl;
    }
    Tool(std::string name) : m_name(name)
    {
        std::cout << "create Tool() with name:" << m_name << std::endl;
    }
    ~Tool()
    {
        std::cout << "delete Tool() with name:" << m_name << std::endl;
    }

private:
    std::string m_name;
};

int main()
{
    Tool *tool2;
    std::cout << "start" << std::endl;
    { // 占用域
        // 栈上（自动释放）
        // Tool tool = Tool("tool");
        // Tool tool("tool");

        Tool tool;

        // 行注释和代码保持一行距离，防止有小错误看不出来。

        // 调用默认构造函数
        // 下这些都是栈上创建的内存
        // int i = 0;
        // double d = 1.0;
        // 堆上，无法自动释放

        tool2 = new Tool("tool2");
    }

    std::cout << "endl" << std::endl;
    delete (tool2);
    std::cout << "endl" << std::endl;
    // 栈上访问内存比较快，是连续的内存。堆上需要通过指针进行间接寻址的过程
    // 栈上的内存有大小限制，在编译器就完成的。堆上的变量实在运行期的时候创建内存，好处：可以让exe比较小，栈上的连续内存有限，堆上的不连续内存，可以利用内存碎片找到大内存。
    // 编译器指的是build生成exe期间大小就已经确定了。运行期指的是打开二进制文件exe的时候。
    return 0;
}
