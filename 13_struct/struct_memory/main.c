#include <stdio.h>
 
struct st_girl
{
    char name[50];     // 姓名
    int  age;          // 年龄
    int  height;       // 身高，单位：厘米cm
    char sc[30];       // 身材，火辣；普通；飞机场。
    char yz[30];       // 颜值，漂亮；一般；歪瓜裂枣。
};
 
int main()
{
    struct st_girl queen;
    printf("sizeof(struct st_girl) %d\n",sizeof(struct st_girl));
    printf("sizeof(queen) %d\n",sizeof(queen));
}