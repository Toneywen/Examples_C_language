#include <stdio.h>
#include <string.h>
 
struct st_girl
{
    char name[50];     // 姓名
    int  age;          // 年龄
};
 
void main()
{
    struct st_girl girl1,girl2;
    
    strcpy(girl1.name,"西施");  // 对girl1的成员赋值
    girl1.age=18;
    
    // 把girl1的内容复制到girl2中
    memcpy(&girl2,&girl1,sizeof(struct st_girl));
    
    printf("girl1.name=%s,girl1.age=%d\n",girl1.name,girl1.age);
    printf("girl2.name=%s,girl2.age=%d\n",girl2.name,girl2.age);
}