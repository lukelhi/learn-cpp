#include <cmath>
#include <iostream>
#include "header.h"

/*
构造方法，析构函数，其他方法
*/
PersonHeader::PersonHeader()
{
    m_height = 0;
    m_weight = 0;
    std::cout << "create the person" << std::endl;
}
PersonHeader::PersonHeader(double h, double w)
    : m_height(h), m_weight(w)
{
    std::cout << "create the person(double h, double w)" << std::endl;
}
PersonHeader::~PersonHeader()
{
    std::cout << "destory the person" << std::endl;
}
double PersonHeader::getBMI()
{
    double bmi = m_weight / pow(m_height, 2);
    return bmi;
}