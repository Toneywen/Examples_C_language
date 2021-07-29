#include <stdio.h>
#include <time.h>
 
int main(int argc,char *argv[])
{
    time_t tm, tmp;
    
    // 使用返回值
    tm = time(0);
    
    // 使用指针
    time(&tmp);


    printf("返回值：%lu, 指针%lu\n", tm, tmp);

    return 0;
}