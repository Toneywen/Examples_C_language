#include <stdio.h>
#include <string.h>
 
int main()
{
    FILE *fp=0;        // 定义文件指针变量fp
    char strbuf[301];  // 存放从文件中读取到的一行的内容
    
    // 以只读的方式打开文件/tmp/test1.txt
    if ( (fp=fopen("./test1.txt","r")) == 0)
    {
        printf("fopen(./test1.txt) failed.\n"); return -1;
    }
    
    // 逐行读取文件的内容，输出到屏幕
    while (1)
    {
        memset(strbuf,0,sizeof(strbuf));
        if (fgets(strbuf,301,fp)==0) 
            break;
        printf("%s",strbuf);
    }
    
    // 关闭文件
    fclose(fp);
}