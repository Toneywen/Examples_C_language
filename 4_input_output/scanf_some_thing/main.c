#include <stdio.h>
#include <string.h>
 
int main()
{
    int age=0;
    char xb=0;
    double weight=0;

    char name[21];
    memset(name,0,sizeof(name));

    printf("请输入您的姓名、姓别（x-男；y-女），年龄和体重，中间用空格分隔：");
    scanf("%s %c %d %lf",name,&xb,&age,&weight); // 只有name变量前没加&，其它的都加了。

    printf("您的姓名是：%s，姓别：%c，年龄：%d岁，体重%.2lf公斤。\n",name,xb,age,weight);

    return 0;
}