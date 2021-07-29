#include <stdio.h>

int main()
{
    int    C=0;     // 定义变量C并初始化
    int    A=21;    // 定义变量A并初始化
    
    C=A;
    printf("运算符  = 演示，C的值 = %d\n",C);
    
    C+=A;  // C=C+A;
    printf("运算符 += 演示，C的值 = %d\n",C);
    
    C-=A;  // C=C-A;
    printf("运算符 -= 演示，C的值 = %d\n",C);
    
    C*=A;  // C=C*A;
    printf("运算符 *= 演示，C的值 = %d\n",C);
    
    C/=A;  // C=C/A;
    printf("运算符 /= 演示，C的值 = %d\n",C);
    
    C=200;
    C%=A;  // C=C%A;
    printf("运算符 %%= 演示，C的值 = %d\n",C);
    
    return 0;
}