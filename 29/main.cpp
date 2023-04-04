#include <iostream>
class Father
{
public:
    Father()
    {
        m_height = 0;
        m_weight = 0;
        std::cout << "create the father" << std::endl;
    }
    ~Father()
    {
        std::cout << "destory the Father" << std::endl;
    }
    std::string getLastName()
    {
        double h = m_height;
        double w = m_weight;
        std::cout << "i am ye" << std::endl;
        return "ye";
    }

public:
    double m_height;
    double m_weight;
};

class Son1 : public Father
{
public:
    std::string getFirstName()
    {
        std::cout << "i am Son1" << std::endl;
        return "Son1";
    }
    std::string getLastName()
    {
        std::cout << "i am li" << std::endl;
        return "li";
    }
};
class Son2 : public Father
{
public:
    std::string getFirstName()
    {
        std::cout << "i am Son2" << std::endl;
        return "Son2";
    }
};
int main()
{
    Son1 son;
    son.getLastName();
    son.getFirstName();
    Father father;
    father.getLastName();
    return 0;
}
