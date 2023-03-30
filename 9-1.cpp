#include <limits>
#include <iostream>

int main()
{
    /*
    查看编译器种int，long位数是多少
    */
    std::cout << "int range: [" << std::numeric_limits<int>::min() << ", "
              << std::numeric_limits<int>::max() << "]" << std::endl;
    std::cout << "long range: [" << std::numeric_limits<long>::min() << ", "
              << std::numeric_limits<long>::max() << "]" << std::endl;
    return 0;
}