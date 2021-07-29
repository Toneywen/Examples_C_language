#include <stdio.h>
 
int main()
{
    FILE *fp=0;     // 定义文件指针变量fp
    
    // 以只读的方式打开文件/root/book.c
    if ( (fp=fopen("./main.c","r")) == 0 )
    {
        printf("打开文件main.c失败。\n"); 
        return -1;
    }
    
    /* 上代码等同于以下代码
    fp=fopen("/root/book.c","r");
    if (fp==0)
    {
        printf("打开文件/root/book.c失败。\n"); return -1;
    }
    */
    
    // 不信用这个代码来测试
    /*
    printf("fp=%p\n",(fp=fopen("/root/book.c","r")));
    printf("fp=%p\n",fp);
    */
    
    // 关闭文件
    fclose(fp);
}