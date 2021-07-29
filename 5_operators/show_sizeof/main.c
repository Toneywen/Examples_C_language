#include <stdio.h>

int main()
{
    int    C=0;     // 定义变量C并初始化
    long   A=21;    // 定义变量A并初始化
    
    printf("字符型变量占用的内存是=%d\n",sizeof(char));   // 输出：字符型变量占用的内存是=1
    printf("整型变量占用的内存是=%d\n",sizeof(int));   // 输出：整型变量占用的内存是=4
    
    printf("ii占用的内存是=%d\n",sizeof(C));   // 输出：ii占用的内存是=4
    printf("ii占用的内存是=%d\n",sizeof A);   // 输出：ii占用的内存是=4

    return 0;
}