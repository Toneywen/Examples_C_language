#include <stdio.h>
 
int main()
{
    int   ii=0;
    FILE *fp=0;     // 定义文件指针变量fp
    
    // 以只写的方式打开文件/tmp/test1.txt
    if ( (fp=fopen("./test1.txt","w")) == 0)
    {
        printf("fopen(./test1.txt) failed.\n"); return -1;
    }
    
    for (ii=0;ii<3;ii++) // 往文件中写入3行
    {
        fprintf(fp,"这是第%d个出场的超女。\n",ii+1);
    }
    
    // 关闭文件
    fclose(fp);
}