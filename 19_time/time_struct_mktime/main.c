#include <stdio.h>
#include <time.h>
#include <string.h>
 
int main(int argc,char *argv[])
{
    // 2019-12-25 15:05:03整数表示是1577257503
    struct tm sttm; 
    memset(&sttm,0,sizeof(sttm));

    sttm.tm_year=2019-1900; // 注意，要减1900
    sttm.tm_mon=12-1;        // 注意，要减1
    sttm.tm_mday=25;
    sttm.tm_hour=15;
    sttm.tm_min=5;
    sttm.tm_sec=3;
    sttm.tm_isdst = 0;
    printf("2019-12-25 15:05:03 is %lu\n",mktime(&sttm));
}