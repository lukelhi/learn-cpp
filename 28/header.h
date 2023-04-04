// c++11支持 去除重复头文件
#pragma once
class PersonHeader
{
private:
    double m_height;
    double m_weight;

public:
    PersonHeader();
    PersonHeader(double h, double w);
    ~PersonHeader();
    double getBMI();
};
