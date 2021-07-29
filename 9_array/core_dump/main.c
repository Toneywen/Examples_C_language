#include <stdio.h>

int main()
{
    int ii=0;
    int sum[6];    // 定义一维数组
    
    for (ii=0;ii<100;ii++)
    {
        printf("ii=%d\n",ii);
        sum[ii]=ii;
    }
    
    return 0;
}