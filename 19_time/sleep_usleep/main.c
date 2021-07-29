#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
    printf("开始睡眠2秒\n");
    sleep(2);
    printf("开始睡眠0.1秒\n");
    usleep(100000);

    return 0;
}