#include <stdio.h>

int main()
{
    int ii=1;      // 用于for循环的计数器
    int sum=0;     // 记录1到100的累积值
    
    for (ii=1;ii<=100;ii++)
    {
        sum=sum+ii;
    }
    
    printf("1到100的累积值为%d。\n",sum);
}