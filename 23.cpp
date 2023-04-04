#include <cmath>
class Person
{
    // Set Visible
public:
    double getBMI() // 创建对象的时候直接可以拿到属性
    {
        double bmi = weight / pow(height, 2);
        return bmi;
    }
    // 变量作用域：花括号为界,Variable scope: bounded by curly braces
    // 花括号外部无法访问花括号内部
    // 花括号内部可以访问花括号外部
    double height;
    double weight;
};

double getBMI(Person person)
{
    double bmi = person.weight / pow(person.height, 2);
    return bmi;
}
int main()
{
    Person person1;
    person1.height = 1.8;
    person1.weight = 80;
    // double p1 = getBMI(person1);
    double p1 = person1.getBMI();

    Person person2;
    person2.height = 1.7;
    person2.weight = 75;
    double p2 = getBMI(person2);

    return 0;
}
