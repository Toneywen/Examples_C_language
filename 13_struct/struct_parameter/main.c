#include <stdio.h>
#include <string.h>
 
struct st_girl
{
    char name[50];     // 姓名
    int  age;          // 年龄
};
 
// 对结构体赋值的函数: 传递地址
void setvalue(struct st_girl *pst);

// 对结构体赋值的函数: 传递变量
struct st_girl setvalue2(struct st_girl pst);


int main()
{
    struct st_girl queen;  // 定义结构体变量
    struct st_girl rt_value, queen2; 
    
    // 初始化结构体变量
    memset(&queen,0,sizeof(struct st_girl));
    memset(&queen2,0,sizeof(struct st_girl));
    
    // 传递的是地址，所以主函数里面的变量的值也会发生变化
    setvalue(&queen);  // 调用函数，传结构体的地址
    rt_value = setvalue2(queen2);

    printf("姓名：%s，年龄：%d\n",queen.name,queen.age);
    printf("姓名：%s，年龄：%d\n",rt_value.name,rt_value.age);
}
 
void setvalue(struct st_girl *pst)
{
    // 对结构体每个成员赋值
    strcpy(pst->name,"武则天");
    pst->age=28;
}

struct st_girl setvalue2(struct st_girl pst)
{
    // 对结构体每个成员赋值
    strcpy(pst.name,"武则天");
    pst.age=28;
    return pst;
}