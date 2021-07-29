#include <stdio.h>
#include <string.h>
 
int main()
{
    int age=0;
    char xb=0;
    double weight=0;
    int height = 0;

    char name[21];
    memset(name,0,sizeof(name));

    char where[21];
    memset(where,0,sizeof(where));

    // printf("我的姓名是：%s，姓别：%c，年龄：%d岁，体重%.2f公斤。\n",name,xb,age,weight);
    printf("输入您喜欢的女（男）神的姓名、性别、年龄、身高（cm）、体重（kg）、和您最喜欢她的身体部位: ");
    scanf("%s %c %d %d %lf %s",name, &xb, &age, &height, &weight, where);
    printf("您喜欢%s、性别%c、%d岁、身高%d（cm）、体重%.2f（kg）、您最喜欢她的%s\n", name, xb, age, height, weight, where);

    return 0;
}