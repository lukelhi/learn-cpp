/**
 * @brief
 *
 * @return int
 */
/*
continue:跳过当此循环，关键字之后的语句不执行。
break: 跳出循环
return:跳出函数
*/
#include <iostream>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // break;

        // 是偶数跳过本次执行
        if (i % 2 == 0)
        {
            continue;
        }
        std::cout << "lops,i:" << i << std::endl;
        // continue;放在最后没作用
    }
    std::cout << "lops,end" << std::endl;
}