#include <iostream>
class Tool
{
public:
    Tool()
    {
        std::cout << "call Tool()" << std::endl;
    }
    Tool(std::string name)
    {
        std::cout << "call Tool() with name:" << name << std::endl;
    }
};

class Father
{
public:
    // 初始化列表 这种构造写法，直接在Father初始化时候构造函数执行Tool("kitty")，不需要执行Tool无参构造函数
    Father() : m_name("Tom2"), m_age(32), m_tool(Tool("kitty"))
    {
        // 传统构造方式，首先初始化成员变量的内存，private中的m_name,m_age,m_tool。再构造Tool("kitty")
        // m_name = "Tom";
        // m_age = 32;
        // m_tool = Tool("kitty");
    }
    std::string getName()
    {
        return m_name;
    }

private:
    std::string m_name;
    int m_age;
    Tool m_tool;
};

int main()
{
    Father f1;
    std::string name = f1.getName();
    return 0;
}
