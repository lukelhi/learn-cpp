#include <array>
#include <vector>
int main()
{
    double d_array[2] = {1.0, 2.0};
    double d_array2[2] = {2.0, 3.0};

    /*
    array所有的值都放在栈上，vector自己信息存在栈上，元素信息存放在堆上面，效率较低。
    */

    // array，面向对对象
    // 内存是分为 栈(自动申请和释放) 和 堆(手动申请和释放)
    // 模板
    std::array<int, 3> first = {1, 2};
    std::array<int, 3> second;
    second = first; // 赋值操作

    int size = sizeof(second);

    // vector
    // 不用指定大小
    std::vector<int> vector_first{1, 2, 3};
    vector_first.emplace_back(4); // 建议使用
    vector_first.push_back(5);

    // 事先指定元素大小，意义不大
    // vector 元素存放在堆上
    std::vector<int> vector_second(10);
    // sizeof计算的是栈上面的值，
    // 因为vector的元素是存在堆上的，所以元素的增加是不会影响sizeof的值
    int size_vector = sizeof(vector_second); // 值为24
    int s = vector_second[1000];
    return 0;
}