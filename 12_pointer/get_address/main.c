#include <stdio.h>
 
int main()
{
    int    ii=10;
    char   cc='A';
    double dd=100.56;
    
    printf("变量ii的地址是：%p\n",&ii);
    printf("变量cc的地址是：%p\n",&cc);
    printf("变量dd的地址是：%p\n",&dd);
    
    return 0;
}