#include <stdio.h>
 
double pi=3.141592; // 全局变量声明
 
void func1(); // 声明一个自定义函数
 
int main()
{
    printf("位置一 pi=%f\n",pi);
    func1();
    printf("位置二 pi=%f\n",pi);
}
 
void func1()
{
    double pi=3.141593; // 局部变量的声明
    printf("位置三 pi=%f\n",pi);
}