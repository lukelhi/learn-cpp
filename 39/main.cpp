#include <iostream>
#include <string>

class Father
{
public:
    Father() : m_age(new int(10))
    {
    }
    std::string getName() const
    {
        weight = 200;
        return m_name;
    }
    // 返回值的 指针后面加const 返回的指针可以修改
    const int *const getAge()
    {
        return m_age;
    }

private:
    int *m_age;
    std::string m_name;
    mutable double weight;
};

// 如果没有const关键字，有引用。在函数里面可以对f的值进行修改，会影响函数外面的值。
// const + & 常用
void print(const Father &f)
{
    std::cout << &f << std::endl;
}

int main(int, char **)
{
    // 查看print函数传入指针变化
    Father f;
    std::cout << &f << std::endl;
    print(f);

    const int *ptr_age = f.getAge();
    // (*ptr_age) = 11;
    ptr_age = new int(12); // 返回const指针也可以修改
}
