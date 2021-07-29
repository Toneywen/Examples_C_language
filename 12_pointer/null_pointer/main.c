#include <stdio.h>
 
int main()
{
    int *pi=0;  // 定义一个指针
    
    printf("pi的值是 %p\n",pi);
    
    *pi=10;  // 试图对空指针进行赋值操作，必将引起程序的崩溃
    
    return 0;
}