#include <stdio.h>

int main()
{
    int    ii=0;      // 定义变量ii并初始化
    
    ii=10;
    printf("ii++的值是：%d\n",ii++);  // 在使用后自增
    printf("ii的值是：%d\n",ii);
    
    ii=10;
    printf("++ii的值是：%d\n",++ii);  // 在使用前自增
    printf("ii的值是：%d\n",ii);
    
    return 0;
}