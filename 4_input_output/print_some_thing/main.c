#include <stdio.h>
#include <string.h>
 
int main()
{
    int age=18;
    char xb='y';
    double weight=45.5;

    char name[21];
    memset(name,0,sizeof(name));
    strcpy(name,"西施");

    printf("我的姓名是：%s，姓别：%c，年龄：%d岁，体重%.2f公斤。\n",name,xb,age,weight);

    return 0;
}