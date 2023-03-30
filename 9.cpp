/*
c++变量
变量有不同类型，为了保存不同数据类型
*/
#include <climits>
#include <cmath>
int main()
{
    // short,int, long, long long 整数类型

    int i = 10;

    // 指定为long可以加L，也可不加。Java强制加L
    long i2 = 2147483647 + 1;

    int int_max = INT_MAX;     //
    int int_size = pow(2, 31); // 为什么大小是：2147483647,int最大只能接受这么大
    long size = 1 << 31;

    unsigned int uint_max = UINT_MAX;
    long uint_size = pow(2, 32); // ??

    int int_mem = sizeof(int); // int 是4个字节，一个字节代表8位二进制

    // 2^32
    // 其中一位是正负号，所以最大长度是31位。int length = 2 ^ 31;
    int tem = 1;
    int tem2 = -1;
}
