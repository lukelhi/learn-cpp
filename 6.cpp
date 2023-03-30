// 预处理编译指令，头文件引入，cpp种头文件不需要.h结尾
#include <iostream>

// 引入命名空间;区分命名空间
/*
多行注释，花括号独占一行，函数名后面紧跟括号。
*/
using namespace std;

int main()
{
   int i = 0;

   // std 命名空间，函数区分大小写，cout种字母写错大小写识别不到。
   std::cout << "Hello word \n"
             << std::endl;
   // 换行：std::endl  "\n"
   std::cout << "end";
   return 0;
}