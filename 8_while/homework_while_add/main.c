#include <stdio.h>

int main()
{
    int value=1;   // 记录用户输入数据的次数
    int sum = 0;
    while (value<=100)  // 如果sum的值小于5000，进入循环
    {
        sum += value;  // 用户输入数据的次数自增1
        value += 1;             // 记录用户输入数据的和
    }
    
    printf("所有的数值的和为：%d。\n",sum);
}